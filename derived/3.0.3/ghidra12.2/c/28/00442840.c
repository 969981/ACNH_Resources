
void FUN_00442840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = 0;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if ((param_6 & 1) != 0) {
    param_1[4] = DAT_04c6f288;
    DAT_04c6f288 = param_1;
  }
  return;
}

