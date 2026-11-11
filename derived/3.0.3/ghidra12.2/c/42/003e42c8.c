
void FUN_003e42c8(undefined8 *param_1,long param_2)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(uint *)((long)param_1 + 0x14) = (uint)*(byte *)(param_2 + 9);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 4);
  bVar1 = *(byte *)(param_2 + 8);
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(uint *)((long)param_1 + 0x1c) = (uint)bVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}

