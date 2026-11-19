
void FUN_03b35578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b75b10;
  if (param_1[0x20] != 0) {
    FUN_00397a38();
    param_1[0x20] = 0;
  }
  param_1[0x4d] = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x58);
  param_1[0x31] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x3c);
  FUN_003834dc(param_1);
  return;
}

