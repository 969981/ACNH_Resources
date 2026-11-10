// @category ACNH
// @menupath Tools.ACNH.Export Decompilation
// Export all Ghidra-discovered functions (by a resumable index range) and complete
// symbol/reference catalogs. This is Ghidra decompiler C, NOT original source.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;

import java.io.BufferedWriter;
import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Locale;

public class ExportACNH303 extends GhidraScript {
    private static String q(String value) {
        if (value == null) return "null";
        StringBuilder sb = new StringBuilder(value.length() + 16);
        sb.append('"');
        for (int i = 0; i < value.length(); i++) {
            char c = value.charAt(i);
            if (c == '"' || c == '\\') sb.append('\\').append(c);
            else if (c == '\n') sb.append("\\n");
            else if (c == '\r') sb.append("\\r");
            else if (c == '\t') sb.append("\\t");
            else if (c < 0x20) sb.append(String.format("\\u%04x", (int)c));
            else sb.append(c);
        }
        return sb.append('"').toString();
    }

    private BufferedWriter writer(Path path) throws IOException {
        Files.createDirectories(path.getParent());
        return Files.newBufferedWriter(path, StandardCharsets.UTF_8);
    }

    private void exportSymbols(Path root) throws Exception {
        long n = 0;
        try (BufferedWriter out = writer(root.resolve("symbols.ndjson"))) {
            SymbolIterator symbols = currentProgram.getSymbolTable().getAllSymbols(true);
            while (symbols.hasNext()) {
                monitor.checkCancelled();
                Symbol s = symbols.next();
                String line = "{"
                    + "\"address\":" + q(s.getAddress().toString())
                    + ",\"name\":" + q(s.getName())
                    + ",\"symbol_type\":" + q(s.getSymbolType().toString())
                    + ",\"source_type\":" + q(s.getSource().toString())
                    + "}";
                out.write(line);
                out.newLine();
                n++;
            }
        }
        println("Exported " + n + " symbols");
    }

    private void exportXrefs(Path root) throws Exception {
        long n = 0;
        ReferenceManager rm = currentProgram.getReferenceManager();
        try (BufferedWriter out = writer(root.resolve("xrefs.ndjson"))) {
            AddressIterator source = rm.getReferenceSourceIterator(currentProgram.getMinAddress(), true);
            while (source.hasNext()) {
                monitor.checkCancelled();
                Address addr = source.next();
                for (Reference ref : rm.getReferencesFrom(addr)) {
                    String line = "{"
                        + "\"source\":" + q(ref.getFromAddress().toString())
                        + ",\"target\":" + q(ref.getToAddress().toString())
                        + ",\"ref_type\":" + q(ref.getReferenceType().getName())
                        + ",\"operand_index\":" + ref.getOperandIndex()
                        + "}";
                    out.write(line);
                    out.newLine();
                    n++;
                }
            }
        }
        println("Exported " + n + " references");
    }

    private static String cPath(String address) {
        String safe = address.replaceAll("[^A-Za-z0-9_-]", "_")
            .toLowerCase(Locale.ROOT);
        String bucket = safe.length() >= 4
            ? safe.substring(safe.length() - 4, safe.length() - 2)
            : "00";
        return "c/" + bucket + "/" + safe + ".c";
    }

    private static String safeError(String s) {
        return s == null ? "Decompilation did not return C" : s;
    }

    @Override
    public void run() throws Exception {
        if (currentProgram == null) throw new IllegalStateException("No Ghidra program");
        String[] args = getScriptArgs();
        if (args.length != 4) {
            throw new IllegalArgumentException(
                "Usage: ExportACNH303.java OUTPUT_DIR START_INDEX MAX_FUNCTIONS TIMEOUT_SECONDS");
        }
        Path root = Paths.get(args[0]).toAbsolutePath().normalize();
        int start = Integer.parseInt(args[1]);
        int limit = Integer.parseInt(args[2]);
        int timeout = Integer.parseInt(args[3]);
        if (start < 0 || limit <= 0 || timeout <= 0) {
            throw new IllegalArgumentException("Invalid export batch index, size or timeout");
        }
        Files.createDirectories(root);
        int total = 0;
        FunctionIterator countIt = currentProgram.getFunctionManager().getFunctions(true);
        while (countIt.hasNext()) {
            countIt.next();
            total++;
        }
        if (start > total) throw new IllegalArgumentException("Batch starts past last function");
        println("ACNH Ghidra functions total=" + total + " start=" + start + " limit=" + limit);
        DecompInterface decompiler = new DecompInterface();
        decompiler.setSimplificationStyle("decompile");
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("Decompiler failed to open currentProgram");
        }

        int index = 0, processed = 0, success = 0, failure = 0;
        try (BufferedWriter out = writer(root.resolve("functions.ndjson"))) {
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && processed < limit) {
                monitor.checkCancelled();
                Function fn = functions.next();
                int thisIndex = index++;
                if (thisIndex < start) continue;
                String address = fn.getEntryPoint().toString();
                String status = "failed";
                String error = null;
                String cfile = null;
                try {
                    DecompileResults result = decompiler.decompileFunction(fn, timeout, monitor);
                    if (result != null && result.decompileCompleted()
                        && result.getDecompiledFunction() != null
                        && result.getDecompiledFunction().getC() != null) {
                        String decompiled = result.getDecompiledFunction().getC();
                        String rel = cPath(address);
                        Path output = root.resolve(rel);
                        Files.createDirectories(output.getParent());
                        Files.writeString(output, decompiled, StandardCharsets.UTF_8);
                        cfile = rel;
                        status = "ok";
                        success++;
                    } else {
                        error = safeError(result == null ? null : result.getErrorMessage());
                        failure++;
                    }
                } catch (Exception ex) {
                    error = ex.toString();
                    failure++;
                }
                String record = "{"
                    + "\"index\":" + thisIndex
                    + ",\"address\":" + q(address)
                    + ",\"name\":" + q(fn.getName())
                    + ",\"namespace\":" + q(fn.getParentNamespace().getName(true))
                    + ",\"signature\":" + q(fn.getSignature().toString())
                    + ",\"byte_count\":" + fn.getBody().getNumAddresses()
                    + ",\"is_thunk\":" + fn.isThunk()
                    + ",\"is_external\":" + fn.isExternal()
                    + ",\"decompile_status\":" + q(status)
                    + ",\"c_path\":" + q(cfile)
                    + ",\"error\":" + q(error)
                    + "}";
                out.write(record);
                out.newLine();
                processed++;
                if (processed % 250 == 0) {
                    out.flush();
                    println("Decompiled " + processed + "/" + Math.min(limit, total - start)
                        + ", next index=" + (start + processed));
                }
            }
        } finally {
            decompiler.dispose();
        }

        // Catalogs are exported only in the first batch; they are not approximations.
        if (start == 0) {
            exportSymbols(root);
            exportXrefs(root);
        }
        Path summary = root.resolve("export-summary.json");
        String json = "{"
            + "\"ghidra_version\":\"12.2\""
            + ",\"program\":" + q(currentProgram.getName())
            + ",\"language\":" + q(currentProgram.getLanguageID().getIdAsString())
            + ",\"image_base\":" + q(currentProgram.getImageBase().toString())
            + ",\"total_functions\":" + total
            + ",\"start_index\":" + start
            + ",\"processed\":" + processed
            + ",\"next_index\":" + (start + processed)
            + ",\"decompiled_ok\":" + success
            + ",\"decompiled_failed\":" + failure
            + ",\"complete\":" + ((start + processed) == total)
            + "}\n";
        Files.writeString(summary, json, StandardCharsets.UTF_8);
        println("Saved export-summary.json: " + processed + " functions, "
            + success + " succeeded, " + failure + " failed");
    }
}
