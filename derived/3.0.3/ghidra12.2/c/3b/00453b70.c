
void FUN_00453b70(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 << 0x10 | 0x200000;
  if ((param_4 & 0x30) != 0) {
    uVar1 = param_4 << 0x10;
  }
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  *(ulong *)(param_1 + 0x100) = (ulong)(uVar1 | param_3 & 0xffff);
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x70000;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}

