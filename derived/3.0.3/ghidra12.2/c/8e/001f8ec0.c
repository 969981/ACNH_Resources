
void FUN_001f8ec0(long *param_1)

{
  undefined *puVar1;
  
  FUN_0019ce38(param_1,0);
  puVar1 = PTR_DAT_04bcc978;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0018aa4c(param_1 + 8);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}

