import unittest
from ItemEntityCodec import ItemEntity,ItemPolicy
class CodecTests(unittest.TestCase):
    def test_roundtrip(self):
        b=bytes.fromhex("4F002000C1A53412");e=ItemEntity.from_bytes(b)
        self.assertEqual(e.to_bytes(),b);self.assertEqual(e.legacy(),dict(itemId="004F",flag1="20",flag0="00",count="1234A5C1"))
        self.assertEqual(ItemEntity.from_legacy(**e.legacy()),e)
    def test_fence(self):
        p=ItemPolicy(100,"Fence",6,8,0,0,0,50,16)
        e=ItemEntity(100,0x20,0,0xE0000009)
        n=e.with_variant(p,body=3).with_quantity(p,50)
        self.assertEqual(n.free_param,0xE0030031)
    def test_tool(self):
        p=ItemPolicy(101,"Tool",4,8,0,uses_high=True)
        e=ItemEntity(101,0,0,0x1234E000)
        self.assertEqual(e.with_variant(p,body=7).with_use_raw(p,17).free_param,0x0011E007)
    def test_fabric(self):
        p=ItemPolicy(79,"Ftr",4,8,7,220,100)
        e=ItemEntity(79,0,0,0xFFFFE007)
        n=e.with_variant(p,mode=1,index=219)
        self.assertEqual(n.high,e.high);self.assertEqual(n.variant(p)["reserved"],0xE000)
        with self.assertRaises(ValueError):e.with_variant(p,mode=2,index=99)
        with self.assertRaises(ValueError):e.with_variant(p,mode=3,index=0)
        self.assertEqual(e.with_variant(p,mode=2,index=99,allow_design_context=True).variant(p)["index_raw"],99)
    def test_guard(self):
        p=ItemPolicy(79,"Ftr",4,8,7,stack_max=50,quantity_width=16)
        with self.assertRaises(ValueError):ItemEntity(79).with_quantity(p,3)
        with self.assertRaises(ValueError):ItemEntity(79,0,1).with_variant(p,body=2)
        with self.assertRaises(ValueError):ItemEntity(79).with_variant(p,body=8)
        with self.assertRaises(ValueError):ItemEntity(80).with_variant(p,body=2)
    def test_special(self):
        e=ItemEntity.from_bytes(bytes.fromhex("FDFF00004F000102"))
        self.assertEqual(e.extension_view(),dict(root_id=79,x=1,y=2))
        self.assertEqual(ItemEntity(0xfffe).entity_type,"empty")
        self.assertTrue(ItemEntity(0x16a1,0,3).wrapping_view()["exception"])
        with self.assertRaises(ValueError):ItemEntity.from_bytes(b"123")
if __name__=="__main__":unittest.main()
