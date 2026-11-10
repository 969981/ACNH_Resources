
void FUN_00147520(long param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (*(int *)(param_1 + 0x60) != iVar1) {
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0x11) {
      *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) = *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) + -1;
    }
    if ((0x5fdfbU >> (param_2 & 0x3f) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00147568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_04836228 + (param_2 & 0xffffffff) * 8))();
      return;
    }
  }
  return;
}

