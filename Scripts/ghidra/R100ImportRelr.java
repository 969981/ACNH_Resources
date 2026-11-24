// Import source-authenticated RELR reference CSV; does not patch memory or create functions.
// @category ACNH
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.nio.charset.StandardCharsets;
public class R100ImportRelr extends GhidraScript {
    public void run() throws Exception {
        if (!currentProgram.getLanguageID().toString().equals("AARCH64:LE:64:v8A") ||
            currentProgram.getImageBase().getOffset()!=0x100000L)
            throw new IllegalStateException("Expected R100 AArch64 image base 0x100000");
        File csv=askFile("Select ghidra_relr_references.csv", "Import");
        if (!askYesNo("Read-only reference annotations", "Import DATA references only? Existing bytes and functions will not be changed.")) return;
        long added=0,existing=0,skipped=0;
        ReferenceManager rm=currentProgram.getReferenceManager();
        try(BufferedReader in=new BufferedReader(new InputStreamReader(new FileInputStream(csv),StandardCharsets.UTF_8))) {
            if(!"slot_rva,target_rva,raw_u64".equals(in.readLine())) throw new IOException("CSV schema mismatch");
            String line;
            while((line=in.readLine())!=null) {
                monitor.checkCancelled();
                String[] v=line.split(",",-1);
                if(v.length!=3) throw new IOException("Invalid CSV record");
                long slot=Long.decode(v[0]),target=Long.decode(v[1]),raw=Long.parseUnsignedLong(v[2].substring(2),16);
                Address from=toAddr(slot+0x100000L),to=toAddr(target+0x100000L);
                if(!currentProgram.getMemory().contains(from)||!currentProgram.getMemory().contains(from.add(7))||!currentProgram.getMemory().contains(to)){skipped++;continue;}
                long actual=currentProgram.getMemory().getLong(from);
                if(actual!=raw && actual!=target+0x100000L){skipped++;continue;}
                boolean present=false;
                for(Reference r:rm.getReferencesFrom(from)) if(r.getToAddress().equals(to)){present=true;break;}
                if(present){existing++;continue;}
                rm.addMemoryReference(from,to,RefType.DATA,SourceType.ANALYSIS,0);added++;
            }
        }
        println("R100 references: added="+added+" existing="+existing+" skipped="+skipped);
    }
}
