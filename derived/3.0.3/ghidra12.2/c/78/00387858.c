
void FUN_00387858(ushort *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = *param_1 & 0xe000 | 0x90;
  return;
}

