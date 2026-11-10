
void FUN_002a0d24(long *param_1)

{
  undefined *puVar1;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcdeb8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 0xd);
  return;
}

