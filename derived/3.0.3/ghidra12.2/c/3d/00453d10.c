
void FUN_00453d10(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  *param_1 = 0x30000f;
  param_1[1] = 0;
  param_1[2] = 8;
  param_1[3] = param_2;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = (ulong)(param_3 & 0xffff | (param_4 & 0xfff) << 0x10);
  param_1[7] = param_7 & 0xffffffff;
  return;
}

