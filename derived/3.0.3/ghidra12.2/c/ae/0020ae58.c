
void FUN_0020ae58(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  puVar2 = PTR_DAT_04bccc38;
  puVar1 = PTR_DAT_04bc0ec8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[7] = (long)(param_1 + 5);
  param_1[8] = 0x10;
  param_1[0xc] = (long)(param_1 + 10);
  param_1[0xd] = 0x10;
  FUN_0018b070(param_1 + 9,&DAT_0407ebb1,0xffffffffffffffff);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

