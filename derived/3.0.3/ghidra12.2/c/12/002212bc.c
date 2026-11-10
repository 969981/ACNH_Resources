
undefined4 FUN_002212bc(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - 1;
  if (uVar1 < 8) {
    return *(undefined4 *)(&DAT_04058720 + (long)(int)uVar1 * 4);
  }
  return 0;
}

