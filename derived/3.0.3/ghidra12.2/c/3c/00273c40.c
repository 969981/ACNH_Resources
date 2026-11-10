
void FUN_00273c40(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_002609c8();
    (**(code **)(**(long **)(param_1 + 0x98) + 0x10))(*(long **)(param_1 + 0x98),0);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_00266d18();
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),0);
  }
  if (*(long *)(param_1 + 0xa8) == 0) {
    return;
  }
  FUN_00278538();
                    /* WARNING: Could not recover jumptable at 0x00273ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(*(long **)(param_1 + 0xa8),0);
  return;
}

