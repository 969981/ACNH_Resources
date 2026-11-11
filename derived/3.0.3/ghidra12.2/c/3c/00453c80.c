
void FUN_00453c80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  *param_1 = 0x30800f;
  param_1[1] = 0;
  param_1[2] = 6;
  param_1[3] = param_2;
  param_1[4] = &DAT_04c6fb98;
  param_1[5] = param_3;
  param_1[0xb] = 1;
  param_1[0xc] = param_2;
  param_1[7] = 0x80008;
  param_1[8] = param_4 & 0xffffffff;
  param_1[10] = 0;
  param_1[6] = param_1 + 10;
  param_1[0xd] = &DAT_040b9210;
  return;
}

