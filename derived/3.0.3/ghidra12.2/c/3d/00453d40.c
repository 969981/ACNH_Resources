
void FUN_00453d40(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  *param_1 = 0x30800f;
  param_1[1] = 0;
  param_1[2] = 8;
  param_1[3] = param_2;
  param_1[7] = (ulong)(param_3 & 0xffff | (param_4 & 0xfff) << 0x10);
  param_1[8] = param_7 & 0xffffffff;
  param_1[0xb] = 2;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[10] = 0;
  param_1[6] = param_1 + 10;
  param_1[0xc] = param_2;
  param_1[0xd] = &DAT_040b9210;
  param_1[0xe] = &DAT_04c12cc8;
  param_1[0xf] = "tAllocator";
  return;
}

