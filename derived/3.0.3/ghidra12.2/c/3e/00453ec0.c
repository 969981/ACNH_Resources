
void FUN_00453ec0(undefined8 *param_1,undefined8 param_2,int param_3,uint param_4,uint param_5,
                 undefined8 param_6,undefined8 param_7,ulong param_8)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_3 != 0) {
    uVar1 = 0x28;
  }
  *param_1 = 0x30000f;
  param_1[1] = 0;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[2] = (long)(int)(uVar1 | param_3 << 8);
  param_1[3] = param_2;
  param_1[6] = (ulong)(param_4 & 0xffff | (param_5 & 0xfff) << 0x10);
  param_1[7] = param_8 & 0xffffffff;
  return;
}

