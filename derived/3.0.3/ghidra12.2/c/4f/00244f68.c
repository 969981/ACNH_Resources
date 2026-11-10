
void FUN_00244f68(long *param_1)

{
  undefined *puVar1;
  
  FUN_002522b4();
  FUN_0022bda8(param_1 + 2);
  puVar1 = PTR_DAT_04bcd538;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = (long)(puVar1 + 0x58);
  memset(param_1 + 6,0,0x5d8);
  return;
}

