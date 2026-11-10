
void FUN_00218414(long *param_1)

{
  undefined *puVar1;
  
  FUN_002a6e84();
  puVar1 = PTR_DAT_04bcced0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

