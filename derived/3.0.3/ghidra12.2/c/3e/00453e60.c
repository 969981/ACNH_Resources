
void FUN_00453e60(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,ulong param_8)

{
  uint uVar1;
  
  *param_1 = 0x30800f;
  param_1[1] = 0;
  uVar1 = 8;
  if (param_3 != 0) {
    uVar1 = 0x28;
  }
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[2] = (long)(int)(uVar1 | param_3 << 8);
  param_1[3] = param_2;
  param_1[7] = (ulong)(param_4 & 0xffff | (param_5 & 0xfff) << 0x10);
  param_1[8] = param_8 & 0xffffffff;
  param_1[0xb] = 1;
  param_1[0xc] = param_2;
  param_1[10] = 0;
  param_1[0xd] = &DAT_040b9210;
  param_1[6] = param_1 + 10;
  return;
}

