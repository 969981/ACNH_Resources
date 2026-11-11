
void FUN_00558eb0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_048d5de0;
  FUN_00558f20(param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[9],2,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  FUN_00522f30(param_1);
  return;
}

