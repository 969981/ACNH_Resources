
void FUN_00688cb0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_048f2470;
  param_1[1] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}

