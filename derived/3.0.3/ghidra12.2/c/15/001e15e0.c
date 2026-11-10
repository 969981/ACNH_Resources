
void FUN_001e15e0(long *param_1,undefined8 param_2,ushort param_3)

{
  undefined2 uVar1;
  
  *param_1 = (long)(PTR_DAT_04bcbf00 + 0x10);
  memset(param_1 + 1,0,0x10);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 9) = 2;
  FUN_001e1640(param_1,param_2);
  uVar1 = nn::socket::InetHtons(param_3);
  *(undefined2 *)((long)param_1 + 10) = uVar1;
  return;
}

