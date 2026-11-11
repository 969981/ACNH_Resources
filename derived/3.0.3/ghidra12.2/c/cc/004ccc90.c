
void FUN_004ccc90(undefined8 *param_1)

{
  FUN_0043f070(param_1 + 0x32);
  FUN_0043f070(param_1 + 0x2f);
  FUN_0043f070(param_1 + 0x2c);
  FUN_00454810(param_1 + 0x21);
  *param_1 = &PTR_LAB_04868a88;
  FUN_0043d280(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[0x1d],0x10,*(uint *)((long)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  FUN_00454810(param_1 + 0x12);
  FUN_004ad4e0(param_1);
  return;
}

