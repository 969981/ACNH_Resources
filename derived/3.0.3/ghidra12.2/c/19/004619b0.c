
void FUN_004619b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 8,8);
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  *(undefined8 *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 8) = param_2;
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
  return;
}

