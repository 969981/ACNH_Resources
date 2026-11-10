
void FUN_00186e40(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  char acStack_28 [24];
  
  uVar1 = (uint)*param_2;
  snprintf(acStack_28,0x18,"%04d-%02d-%02d %02d:%02d:%02d",(uint)(*param_2 >> 0x1a) & 0x3fff,
           uVar1 >> 0x16 & 0xf,uVar1 >> 0x11 & 0x1f,uVar1 >> 0xc & 0x1f,uVar1 >> 6 & 0x3f,
           uVar1 & 0x3f);
  FUN_00186ea0(param_1,acStack_28);
  return;
}

