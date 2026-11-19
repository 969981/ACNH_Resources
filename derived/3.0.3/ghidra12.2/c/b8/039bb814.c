
void FUN_039bb814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b6a858;
  param_1[1] = 0;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 8))();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_038e1a84(param_1 + 0x16);
  return;
}

