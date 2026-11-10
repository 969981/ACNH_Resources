
void FUN_001e17ec(long *param_1,uint param_2,ushort param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *param_1 = (long)(PTR_DAT_04bcbf00 + 0x10);
  memset(param_1 + 1,0,0x10);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 9) = 2;
  uVar2 = nn::socket::InetHtonl(param_2);
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  uVar1 = nn::socket::InetHtons(param_3);
  *(undefined2 *)((long)param_1 + 10) = uVar1;
  return;
}

