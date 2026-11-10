
void FUN_001d5ed4(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  puVar1 = PTR_DAT_04bcc750;
  *param_1 = (long)(PTR_DAT_04bcc748 + 0x10);
  param_1[2] = (long)(puVar1 + 0x10);
  return;
}

