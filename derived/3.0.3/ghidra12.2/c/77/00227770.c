
void FUN_00227770(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_002210fc();
  puVar2 = PTR_DAT_04bcd018;
  puVar1 = PTR_DAT_04bcd010;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[5] = (long)(puVar2 + 0x10);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return;
}

