
void FUN_003c87fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  param_1[4] = param_5 + 0x10;
  param_1[5] = param_5 + 0x20;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[6] = param_5 + 0x30;
  param_1[7] = param_6;
  return;
}

