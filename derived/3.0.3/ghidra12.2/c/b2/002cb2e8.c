
void FUN_002cb2e8(long *param_1,undefined8 param_2)

{
  byte bVar1;
  
  *param_1 = (long)(PTR_DAT_04bce278 + 0x10);
  FUN_002b4018(param_1 + 1);
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_002b4460(param_2);
  bVar1 = FUN_0021fea0();
  *(byte *)((long)param_1 + 0x89) = bVar1 & 1;
  return;
}

