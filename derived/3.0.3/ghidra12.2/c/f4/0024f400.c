
void FUN_0024f400(long *param_1)

{
  undefined *puVar1;
  
  FUN_00293178();
  puVar1 = PTR_DAT_04bcd658;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 4) = 0x20;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[2] = (long)&DAT_048432e0;
  param_1[3] = (long)param_1 + 0x2c;
  return;
}

