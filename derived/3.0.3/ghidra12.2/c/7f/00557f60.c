
void FUN_00557f60(undefined8 *param_1)

{
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x47fffffff;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  *param_1 = &PTR_LAB_048d4e08;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_0043be70(param_1 + 3,"Copy All Vertices");
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  return;
}

