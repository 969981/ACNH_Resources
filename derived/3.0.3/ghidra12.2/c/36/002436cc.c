
void FUN_002436cc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_002a38c0();
  *(undefined4 *)(param_1 + 5) = 0x28;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[4] = (long)param_1 + 0x34;
  puVar2 = PTR_DAT_04bcd4b0;
  puVar1 = PTR_DAT_04bcd2d8;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = (long)(puVar2 + 0x50);
  param_1[3] = (long)(puVar1 + 0x10);
  return;
}

