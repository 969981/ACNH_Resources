
void FUN_003f0494(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bd25f0 + 0x10);
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    FUN_00187e4c();
  }
  if (param_1[0xd] == 0) {
    return;
  }
  param_1[0xe] = param_1[0xd];
  FUN_00187e4c();
  return;
}

