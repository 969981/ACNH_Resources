
void FUN_001a1648(long *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8;
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bcc090 + 0x10;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (long)puVar1;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018b070(param_1 + 2,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  puVar1 = PTR_DAT_04bcc250;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

