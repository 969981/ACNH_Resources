import unittest
from SpecialEntityCodec import *
class SpecialTests(unittest.TestCase):
    def test_container(self):
        w=0xffabcdef
        self.assertEqual(embedded_word(w,79,0),0xffab004f)
        self.assertEqual(embedded_word(w,79,1,7,13)&0x3fffff,79|(7<<16)|(5<<19))
        self.assertEqual(embedded_word(w,79,2,1)&0xfff80000,w&0xfff80000)
        self.assertEqual(embedded_word(w,79,3,1,3)&0x70000,w&0x70000)
    def test_bottle(self):
        e=bottle_entity(0x3100,0x20,0x83,15,34,2,[2]*35,[7]*35)
        self.assertEqual(e.to_bytes().hex(),"003120830f000222")
        self.assertEqual(bottle_view(e),dict(recipe_index=15,group_index=2,category_index=34,additional_raw=0x83))
        with self.assertRaises(ValueError):bottle_entity(0x16a1,0,0,15,35,0,[2]*35,[7]*35)
    def test_quantity(self):
        self.assertEqual(money_amount(100,5,50,True),600)
        self.assertEqual(native_quantity(0x1201,50,True),2)
        self.assertEqual(native_quantity(0xff,50,True),0)
        self.assertEqual(native_quantity(50,50,True),1)
        self.assertEqual(native_quantity(5,50,False),1)
    def test_plant(self):
        rows={1:(0,2,0),2:(1,3,0),3:(2,0,0),4:(3,0,1),5:(4,0,0),6:(0,6,0)}
        self.assertEqual(plant_identity(4,rows),(3,(4,1,2,3),"terminal_grow2"))
        self.assertEqual(plant_identity(5,rows)[0],0xfffe)
        self.assertEqual(plant_identity(6,rows)[2],"cycle")
    def test_factory_explicit(self):
        from ItemEntityFactory import ItemEntityFactory
        b=bytearray(256);b[1]=128
        e=ItemEntityFactory.construct_bottle_explicit(0x16a1,system=0,additional=7,recipe=15,category=0,group=2,limits=[2]*35,masks=[7]*35,recipe_bitmap=bytes(b))
        self.assertEqual(e.to_bytes().hex(),"a11600070f000200")
        with self.assertRaises(ValueError):
            ItemEntityFactory.construct_bottle_explicit(0x16a1,system=0,additional=7,recipe=15,category=0,group=2,limits=[2]*35,masks=[7]*35,recipe_bitmap=bytes(256))
        c=ItemEntityFactory.construct_container_explicit(2579,system=0,additional=0,original_word=0,child_id=296,transfer_type=0,child_valid=True)
        self.assertEqual(c.low,296)
        self.assertEqual(ItemEntityFactory.money_value(ItemEntity(2105),price=100,max_count=-1,stack_gate=False,kind_index=0x86),100)
if __name__=="__main__":unittest.main()
