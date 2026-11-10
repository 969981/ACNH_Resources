
void FUN_0037ec98(undefined8 *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_1 = *(undefined8 *)(*(long *)(param_2 + 0xb8) + 0x80);
  param_1[1] = param_2 + 0x50;
  param_1[2] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(byte *)((long)param_1 + 0x1c) = *(byte *)(param_2 + 0x18e) & 1;
  *(byte *)((long)param_1 + 0x1d) = *(byte *)(param_2 + 0x18e) >> 1 & 1;
  bVar1 = *(byte *)(param_2 + 0x18e);
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  param_1[4] = param_3;
  *(byte *)((long)param_1 + 0x1e) = bVar1 >> 2 & 1;
  return;
}

