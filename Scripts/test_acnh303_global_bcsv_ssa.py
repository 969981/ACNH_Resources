import unittest
from acnh303_global_bcsv_ssa import SSA,analyze_function,SLIDE,call_target
def n(v,size=8,space="const",d=None):
    return {"space":space,"offset":f"{v:x}","size":size,"constant":space=="const","def":d}
def op(i,m,ins,out=None):
    return {"id":i,"site":"101000","mnemonic":m,"inputs":ins,"output":out}
def u(i,size=8):return n(0,size,"unique",i)
class TestSSA(unittest.TestCase):
    def test_ptradd_and_phi(self):
        ops=[op("a","PTRADD",[n(0x1000),n(14),n(4)],u("a")),op("b","MULTIEQUAL",[u("a"),n(0x1038)],u("b")),op("c","MULTIEQUAL",[u("a"),n(0x103c)],u("c"))]
        s=SSA(ops,{})
        self.assertEqual(s.constant(u("b")),0x1038);self.assertIsNone(s.constant(u("c")))
    def test_signed_and_relocation(self):
        ops=[op("a","INT_SEXT",[n(0xff,1)],u("a")),op("b","LOAD",[n(0),n(0x1000)],u("b"))]
        s=SSA(ops,{0x1000:0x2000});self.assertEqual(s.constant(u("a")),2**64-1);self.assertEqual(s.constant(u("b")),0x2000)
        self.assertIsNone(s.constant(n(0x2000,8,"ram")))
    def test_direct_call_address_is_not_ram_value(self):
        s=SSA([],{});target=n(0x1000,8,"ram")
        self.assertIsNone(s.constant(target));self.assertEqual(call_target(s,target),0x1000)
    def test_cycle(self):
        s=SSA([op("a","COPY",[u("b")],u("a")),op("b","COPY",[u("a")],u("b"))],{})
        self.assertIsNone(s.constant(u("a")))
    def test_cache_to_field_and_branch(self):
        addr=0x526b93c;m={"table":"WherearenRoll","cache_va":0x526b904,"slot":14}
        ops=[op("a","LOAD",[n(0),n(addr+SLIDE)],u("a",4)),op("b","INT_ZEXT",[u("a",4)],u("b")),op("c","INT_ADD",[n(1,8,"register"),u("b")],u("c")),op("d","LOAD",[n(0),u("c")],u("d",1)),op("e","INT_EQUAL",[u("d",1),n(1,1)],u("e",1)),op("f","CBRANCH",[n(0),u("e",1)])]
        d,c,l,uses,o,_=analyze_function({"entry":"101000","ops":ops},{addr:[m]},{},{},set(),{})
        self.assertEqual(len(d),1);self.assertEqual(len(l),1);self.assertEqual(l[0]["load_width"],1);self.assertTrue(any(x["mnemonic"]=="CBRANCH" for x in uses))
    def test_call_scope(self):
        addr=0x526b93c;m={"table":"WherearenRoll","cache_va":0x526b904,"slot":14};t=0x1c38ff0
        ops=[op("a","CALL",[n(t+SLIDE,8,"ram"),n(0,8,"register"),n(14,4),n(0x8f30aa9f,4)],u("a")),op("b","LOAD",[n(0),u("a")],u("b",1))]
        _,c,l,_,_,_=analyze_function({"entry":"101000","ops":ops},{addr:[m]},{},{t:[("WherearenRoll",m["cache_va"])]},{("WherearenRoll","8F30AA9F")},{})
        self.assertEqual(c[0]["hash"],"8F30AA9F");self.assertEqual(len(l),1)
if __name__=="__main__":unittest.main()
