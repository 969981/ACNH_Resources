
void FUN_0049e050(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_LAB_04866bf0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[5],1,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

