
void FUN_027ebb14(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *param_1 = 0;
  param_1[1] = 0x900000000;
  *(undefined4 *)(param_1 + 2) = 0x3f000000;
  param_1[4] = 0x3f00000000000009;
  *(undefined1 *)(param_1 + 8) = 2;
  *(undefined8 *)((long)param_1 + 100) = 0x300000004;
  return;
}

