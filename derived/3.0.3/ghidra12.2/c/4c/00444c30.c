
void FUN_00444c30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,uint param_7)

{
  undefined8 uVar1;
  
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = param_5;
  *(undefined4 *)(param_1 + 5) = param_6;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  if ((param_7 & 1) == 0) {
    param_1[3] = param_1;
    return;
  }
  uVar1 = FUN_0043c4e0(DAT_04c6f438);
  param_1[3] = uVar1;
  FUN_0043c4a0(DAT_04c6f438,param_1);
  return;
}

