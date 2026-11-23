"""Failure logs must survive temporary L3 staging and fail closed on mismatch."""
import hashlib
from pathlib import Path
import tempfile
import unittest

from mirror_unpack import retain_media_failure_logs


class ConverterLogRetention(unittest.TestCase):
    def test_verified_failure_logs_are_preserved_outside_stage(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            stage = root / "acnh303_media_tmp"
            src = stage / "FRES.converted"
            logs = src / "_tool_logs"
            logs.mkdir(parents=True)
            data = b"wmdlt exited without producing GLB\n"
            logfile = logs / "leaf_00000.stderr.log"
            logfile.write_bytes(data)
            sha = hashlib.sha256(data).hexdigest()
            manifest = {"members": [{
                "source_member": "Model/Cedar.zs",
                "error": "external converter error",
                "tool_stderr_log": {
                    "path": logfile.relative_to(root).as_posix(),
                    "size_bytes": len(data),
                    "sha256": sha,
                },
            }]}
            output = root / "UnPack"
            retained = retain_media_failure_logs(
                root, src, output, Path("Model/Cedar.zs"), manifest)
            self.assertEqual(len(retained), 1)
            persisted = Path(retained[0]["path"])
            self.assertEqual(persisted.read_bytes(), data)
            self.assertTrue(persisted.is_relative_to(output / "_meta"))
            self.assertEqual(retained[0]["sha256"], sha)
            self.assertFalse(retained[0]["reused"])

    def test_rejects_mismatched_or_outside_log_reference(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            logs = root / "stage" / "FRES.converted" / "_tool_logs"
            logs.mkdir(parents=True)
            logfile = logs / "leaf_00000.stdout.log"
            logfile.write_bytes(b"original")
            outside = root / "outside.log"
            outside.write_bytes(b"outside")
            for name, digest in (
                (logfile, hashlib.sha256(b"incorrect").hexdigest()),
                (outside, hashlib.sha256(b"outside").hexdigest()),
            ):
                manifest = {"members": [{
                    "source_member": "Model/Cedar.zs", "error": "failed",
                    "tool_stdout_log": {
                        "path": name.relative_to(root).as_posix(),
                        "size_bytes": name.stat().st_size,
                        "sha256": digest,
                    },
                }]}
                with self.assertRaisesRegex(RuntimeError, "untrusted/mismatched"):
                    retain_media_failure_logs(root, logs.parent,
                                              root / "UnPack", Path("Model/Cedar.zs"),
                                              manifest)


if __name__ == "__main__":
    unittest.main()
