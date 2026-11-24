// @category ACNH
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.*;
import java.nio.charset.StandardCharsets;
public class R102ImportEntries extends GhidraScript {
 public void run() throws Exception {
  if (!currentProgram.getLanguageID().toString().equals("AARCH64:LE:64:v8A") || currentProgram.getImageBase().getOffset()!=0x100000L) throw new IllegalStateException("Expected AArch64 image base 0x100000");
  File f=askFile("Select R102 ghidra_function_entries.csv","Import");
  if(!askYesNo("Import verified entries","Create missing analysis functions only after matching original 16 bytes?")) return;
  int created=0,skipped=0,existing=0;
  try(BufferedReader r=new BufferedReader(new InputStreamReader(new FileInputStream(f),StandardCharsets.UTF_8))){
   if(!"rva,label,first16_hex".equals(r.readLine())) throw new IOException("Invalid header");
   String l;while((l=r.readLine())!=null){monitor.checkCancelled();String[] v=l.split(",",-1);if(v.length!=3||!v[1].matches("[A-Za-z0-9_]+")||!v[2].matches("[0-9a-f]{32}")) throw new IOException("Invalid entry");
    Address a=toAddr(Long.decode(v[0])+0x100000L);byte[] bytes=new byte[16];
    if(!currentProgram.getMemory().contains(a)||!currentProgram.getMemory().contains(a.add(15))||currentProgram.getMemory().getBytes(a,bytes)!=16){skipped++;continue;}
    boolean ok=true;for(int i=0;i<16;i++)if((bytes[i]&255)!=Integer.parseInt(v[2].substring(i*2,i*2+2),16))ok=false;
    if(!ok){skipped++;continue;}
    Function prior=getFunctionContaining(a);if(prior!=null){if(prior.getEntryPoint().equals(a))existing++;else skipped++;continue;}
    if(getInstructionAt(a)==null&&!disassemble(a)){skipped++;continue;}
    Function fn=createFunction(a,v[1]);if(fn==null)skipped++;else created++;
   }
  }
  println("R102 created="+created+" existing="+existing+" skipped="+skipped);
 }
}
