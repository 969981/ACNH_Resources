
void FUN_004866e0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_04865de0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[1],8,*(uint *)((long)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}

