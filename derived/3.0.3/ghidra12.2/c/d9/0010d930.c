
undefined8 FUN_0010d930(undefined8 *param_1,undefined8 *param_2,short param_3)

{
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)((long)param_2 + (long)param_3 * 4 + 0x30);
  *(undefined2 *)((long)param_1 + 0x32) = *(undefined2 *)((long)param_2 + (long)param_3 * 4 + 0x32);
  return 1;
}

