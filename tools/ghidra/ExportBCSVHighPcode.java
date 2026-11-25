// @category ACNH
// HASH-007L: exact Ghidra function bodies and targeted High P-code, read-only.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

public class ExportBCSVHighPcode extends GhidraScript {
    private static String q(String s) {
        if(s==null)return "null";
        StringBuilder b=new StringBuilder("\"");
        for(char c:s.toCharArray()){
            if(c=='"'||c=='\\')b.append('\\').append(c);
            else if(c<32)b.append(String.format("\\u%04x",(int)c));
            else b.append(c);
        }
        return b.append('"').toString();
    }
    private static String addr(Address a){return a==null?"null":q(a.toString());}
    private static String node(Varnode n){
        if(n==null)return "null";
        String def="null";
        if(n instanceof VarnodeAST){
            PcodeOp d=((VarnodeAST)n).getDef();
            if(d!=null)def=q(d.getSeqnum().getTarget().toString()+":"+d.getSeqnum().getTime());
        }
        return "{\"space\":"+q(n.getAddress().getAddressSpace().getName())+
            ",\"offset\":"+q(Long.toUnsignedString(n.getOffset(),16))+
            ",\"size\":"+n.getSize()+",\"constant\":"+n.isConstant()+
            ",\"register\":"+n.isRegister()+",\"unique\":"+n.isUnique()+",\"def\":"+def+"}";
    }
    private static String ranges(Function f){
        StringJoiner j=new StringJoiner(",","[","]");
        AddressRangeIterator it=f.getBody().getAddressRanges();
        while(it.hasNext()){
            AddressRange x=it.next();
            j.add("["+addr(x.getMinAddress())+","+addr(x.getMaxAddress())+"]");
        }
        return j.toString();
    }
    private static BufferedWriter writer(Path p)throws IOException{
        return Files.newBufferedWriter(p,StandardCharsets.UTF_8);
    }
    private static void line(BufferedWriter w,String s)throws IOException{w.write(s);w.newLine();}
    public void run()throws Exception{
        String[] a=getScriptArgs();
        if(a.length!=4 && a.length!=5)throw new IllegalArgumentException("output seeds.tsv max_functions timeout_seconds [start_index]");
        Path out=Paths.get(a[0]);Files.createDirectories(out);
        int limit=Integer.parseInt(a[2]),timeout=Integer.parseInt(a[3]);
        int start=a.length==5?Integer.parseInt(a[4]):0;
        if(start<0||limit<=0||timeout<=0)throw new IllegalArgumentException("invalid batch");
        FunctionManager fm=currentProgram.getFunctionManager();
        AddressSpace space=currentProgram.getAddressFactory().getDefaultAddressSpace();
        long base=currentProgram.getImageBase().getOffset();
        if(base!=0x100000L)throw new IllegalStateException("unexpected Ghidra image base "+Long.toHexString(base));
        int count=0;
        try(BufferedWriter w=writer(out.resolve("function_bodies.ndjson"))){
            FunctionIterator it=fm.getFunctions(true);
            while(it.hasNext()){
                monitor.checkCancelled();Function f=it.next();
                line(w,"{\"entry\":"+addr(f.getEntryPoint())+",\"name\":"+q(f.getName())+
                    ",\"ranges\":"+ranges(f)+",\"byte_count\":"+f.getBody().getNumAddresses()+
                    ",\"thunk\":"+f.isThunk()+",\"external\":"+f.isExternal()+"}");
                count++;
            }
        }
        LinkedHashMap<Address,Function> selected=new LinkedHashMap<>();
        int seeds=0,resolved=0,unresolved=0;
        try(BufferedWriter w=writer(out.resolve("seed_owners.ndjson"))){
            for(String s:Files.readAllLines(Paths.get(a[1]),StandardCharsets.UTF_8)){
                if(s.isBlank())continue;
                monitor.checkCancelled();String[] t=s.split("\t",2);
                Address site=space.getAddress(Long.parseUnsignedLong(t[0],16)+base);
                Function f=fm.getFunctionContaining(site);
                seeds++;if(f==null)unresolved++;else{
                    resolved++;selected.putIfAbsent(f.getEntryPoint(),f);
                }
                line(w,"{\"site\":"+addr(site)+",\"source\":"+q(t.length>1?t[1]:"")+
                    ",\"entry\":"+(f==null?"null":addr(f.getEntryPoint()))+"}");
            }
        }
        DecompInterface dc=new DecompInterface();dc.toggleCCode(false);dc.toggleSyntaxTree(true);
        dc.setSimplificationStyle("decompile");
        if(!dc.openProgram(currentProgram))throw new IllegalStateException("cannot open decompiler");
        int attempted=0,ok=0,failed=0,selectedIndex=0;
        try(BufferedWriter w=writer(out.resolve("high_pcode.ndjson"))){
            for(Function f:selected.values()){
                if(selectedIndex++<start)continue;
                if(attempted>=limit)break;monitor.checkCancelled();attempted++;
                String entry=addr(f.getEntryPoint());
                try{
                    DecompileResults dr=dc.decompileFunction(f,timeout,monitor);
                    HighFunction hf=dr==null?null:dr.getHighFunction();
                    if(dr==null||!dr.decompileCompleted()||hf==null){
                        failed++;line(w,"{\"entry\":"+entry+",\"status\":\"failed\",\"error\":"+q(dr==null?"no result":dr.getErrorMessage())+"}");continue;
                    }
                    StringJoiner ops=new StringJoiner(",","[","]");
                    Iterator<PcodeOpAST> it=hf.getPcodeOps();
                    while(it.hasNext()){
                        PcodeOpAST op=it.next();
                        StringJoiner inputs=new StringJoiner(",","[","]");
                        for(int n=0;n<op.getNumInputs();n++)inputs.add(node(op.getInput(n)));
                        ops.add("{\"id\":"+q(op.getSeqnum().getTarget().toString()+":"+op.getSeqnum().getTime())+
                            ",\"site\":"+addr(op.getSeqnum().getTarget())+",\"mnemonic\":"+q(op.getMnemonic())+
                            ",\"output\":"+node(op.getOutput())+",\"inputs\":"+inputs+"}");
                    }
                    StringJoiner blocks=new StringJoiner(",","[","]");
                    for(PcodeBlockBasic b:hf.getBasicBlocks()){
                        StringJoiner succ=new StringJoiner(",","[","]");
                        for(int n=0;n<b.getOutSize();n++)succ.add(Integer.toString(b.getOut(n).getIndex()));
                        blocks.add("{\"index\":"+b.getIndex()+",\"start\":"+addr(b.getStart())+",\"stop\":"+addr(b.getStop())+",\"successors\":"+succ+"}");
                    }
                    line(w,"{\"entry\":"+entry+",\"status\":\"ok\",\"blocks\":"+blocks+",\"ops\":"+ops+"}");ok++;
                }catch(Exception ex){failed++;line(w,"{\"entry\":"+entry+",\"status\":\"failed\",\"error\":"+q(ex.toString())+"}");}
                if(attempted%25==0){w.flush();println("High P-code "+attempted+" / "+Math.min(limit,Math.max(0,selected.size()-start)));}
            }
        }finally{dc.dispose();}
        Files.writeString(out.resolve("summary.json"),"{\"function_count\":"+count+",\"seeds\":"+seeds+",\"resolved_seeds\":"+resolved+",\"unresolved_seeds\":"+unresolved+",\"selected_functions\":"+selected.size()+",\"start_index\":"+start+",\"attempted\":"+attempted+",\"ok\":"+ok+",\"failed\":"+failed+",\"image_base\":\"100000\"}\n",StandardCharsets.UTF_8);
    }
}
