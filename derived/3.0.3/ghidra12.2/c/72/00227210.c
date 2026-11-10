
void FUN_00227210(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    FUN_0021f5a0(param_2,uVar1 >> 0x10 | uVar1 << 0x10);
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_1 + 2) >> 8 | *(ushort *)(param_1 + 2) << 8;
  }
  return;
}

