
void FUN_00267bd4(long *param_1)

{
  undefined *puVar1;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcda78;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 5000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

