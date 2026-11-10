
bool FUN_001e188c(long param_1,undefined8 param_2,ulong param_3)

{
  char acStack_34 [20];
  
  if (0xf < param_3) {
    nn::socket::InetNtop(2,(void *)(param_1 + 0xc),acStack_34,0x14);
    FUN_0018c0b8(acStack_34,param_2,param_3);
  }
  return 0xf < param_3;
}

