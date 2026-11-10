
void FUN_00252d8c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_002915e4();
  puVar1 = PTR_DAT_04bcd8b0;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 9);
  return;
}

