
void FUN_00514550(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  FUN_004435a0(param_2);
  uVar1 = *(uint *)(param_1 + 0x70);
  if (uVar1 == (*(uint *)(param_1 + 0x74) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x68,8);
    uVar1 = *(uint *)(param_1 + 0x70);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)uVar1 * 8) = param_2;
  *(uint *)(param_1 + 0x70) = uVar1 + 1;
  return;
}

