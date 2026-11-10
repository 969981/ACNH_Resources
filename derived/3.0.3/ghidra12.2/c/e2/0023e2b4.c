
void FUN_0023e2b4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcd2e0;
  param_1[0xb] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00226900(param_1 + 0xc);
  FUN_00242804(param_1 + 0x163);
  *(undefined2 *)(param_1 + 0x1b0) = 0;
  FUN_00220ebc(param_1 + 0x1b1);
  param_1[0x1b7] = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  param_1[0x1b9] = 0;
  *(undefined2 *)(param_1 + 0x1dc) = 1;
  memset(param_1 + 0x1ba,0,0x10);
  return;
}

