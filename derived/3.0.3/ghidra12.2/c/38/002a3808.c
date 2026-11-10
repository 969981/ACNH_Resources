
void FUN_002a3808(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bce040;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0x1400000000;
  return;
}

