import unittest
from ItemEntityCodec import ItemEntity
from ItemEntityFactory import ItemEntityFactory,Context,gene_byte,recipe_valid
class FactoryTests(unittest.TestCase):
    def test_context_required(self):
        e=ItemEntity(79,0,0,0x12345678)
        p=ItemEntityFactory.plan(e,0)
        self.assertEqual(p.preview(),e);self.assertTrue(p.unresolved)
    def test_masks(self):
        e=ItemEntity(79,0x20,0x80,0xa5a51234)
        p=ItemEntityFactory.plan(e,0,Context(main_record_valid=True,stack_gate=True,action_gate=True))
        self.assertEqual(p.preview().free_param,0xa5a61200)
        self.assertEqual(p.preview().additional_param,0x80)
    def test_recipe_gate(self):
        e=ItemEntity(0x16a2,0,0,0x12340000)
        b=bytearray(256);b[1]=128
        self.assertTrue(recipe_valid(bytes(b),15))
        p=ItemEntityFactory.plan(e,0xb1,Context(main_record_valid=True,stack_gate=False,action_gate=False,recipe_bitmap=bytes(b)))
        self.assertEqual(p.preview().free_param,0x1234000f)
        self.assertEqual(ItemEntityFactory.plan(e,0xb1,Context(main_record_valid=True,recipe_bitmap=bytes(256))).preview(),e)
    def test_container(self):
        e=ItemEntity(0x0a13,0,0,0xdeadbeef)
        p=ItemEntityFactory.plan(e,0x71,Context(main_record_valid=True,embedded_gate=True,stack_gate=False,action_gate=False))
        self.assertEqual(p.references,(0x128,));self.assertEqual(p.preview().free_param,0xdead0128)
    def test_wrapped(self):
        e=ItemEntity(79,0,1,0xaabbccdd)
        self.assertEqual(ItemEntityFactory.plan(e,0).preview(),e)
    def test_genes(self):
        self.assertEqual(gene_byte((0,1,2,0),(0,1,3)),0x34)
        with self.assertRaises(ValueError):gene_byte((0,1,3,0),(0,1,3))
    def test_picture_and_reserved(self):
        e=ItemEntity(2,0x20,0xfc,0xaabbccdd)
        p=ItemEntityFactory.plan(e,0xa4,Context(main_record_valid=True,picture_flag_gate=True,stack_gate=False,action_gate=False))
        self.assertEqual(p.preview().system_param,0x28);self.assertEqual(p.preview().additional_param,0x80)
        self.assertEqual(ItemEntityFactory.plan(ItemEntity(0xfffd),None).status,"native_f248_early_return_only")
if __name__=="__main__":unittest.main()
