
void FUN_00439980(long param_1,long param_2,ulong param_3)

{
  if (param_2 == 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x10) < param_3) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
                    /* WARNING: Could not recover jumptable at 0x004399ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    return;
  }
  if (*(long *)(param_1 + 0x18) == (param_3 + 0xf & 0xfffffffffffffff0) + param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    FUN_00439670();
    return;
  }
  FUN_004397f0();
  return;
}

