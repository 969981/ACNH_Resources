
void FUN_002b3bec(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bce148;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00227258(param_1 + 2);
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 7) = 0xfd;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_002b3a18(param_1 + 0xb);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x100;
  return;
}

