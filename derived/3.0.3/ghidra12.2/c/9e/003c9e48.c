
void FUN_003c9e48(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  *param_1 = *param_2;
  param_1[1] = *param_3;
  param_1[5] = *param_4;
  param_1[6] = param_4[2];
  param_1[7] = param_4[3];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_4 + 1);
  param_1[2] = *param_5;
  param_1[3] = param_5[1];
  param_1[4] = param_5[2];
  param_1[9] = param_5[3];
  return;
}

