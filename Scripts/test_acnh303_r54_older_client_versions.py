"""R54 provenance guard for pinned historical PokerCore metadata."""
import unittest
from acnh303_r54_older_client_versions import REVISIONS
class HistoryTests(unittest.TestCase):
    def test_two_distinct_historical_client_snapshots(self):
        self.assertNotEqual(REVISIONS["client_3_0_0"]["commit"],REVISIONS["client_3_0_2"]["commit"])
        self.assertEqual(len(REVISIONS["client_3_0_0"]["commit"]),40)
        self.assertEqual(len(REVISIONS["client_3_0_2"]["commit"]),40)
if __name__=="__main__":unittest.main()
