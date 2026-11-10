
void FUN_00218450(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcced0;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  thunk_FUN_002aa8b4();
  return;
}

