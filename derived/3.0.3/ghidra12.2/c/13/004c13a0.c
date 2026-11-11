
void FUN_004c13a0(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x58,4);
    uVar1 = *(uint *)(param_1 + 0x60);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x58) + (long)(int)uVar1 * 4) = param_2;
  *(uint *)(param_1 + 0x60) = uVar1 + 1;
  return;
}

