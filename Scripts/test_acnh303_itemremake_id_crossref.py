"""Require consistent shared item identifiers without renaming existing images."""
import unittest
from acnh303_itemremake_id_crossref import NAME,ID
class OriginalItemIDContract(unittest.TestCase):
    def test_shared_bcsv_field_exact(self):
        self.assertEqual(ID,"hash_54706054")
        self.assertNotEqual(NAME,ID)
if __name__=="__main__":unittest.main()
