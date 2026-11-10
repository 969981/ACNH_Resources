
void FUN_0022e6f4(long *param_1)

{
  undefined *puVar1;
  
  FUN_0022bda8();
  puVar1 = PTR_DAT_04bcd098 + 0x50;
  *param_1 = (long)(PTR_DAT_04bcd098 + 0x10);
  param_1[3] = (long)puVar1;
  FUN_0021f4e0(param_1 + 4);
  FUN_0021f4e0(param_1 + 8);
  FUN_0021f4e0(param_1 + 0xc);
  FUN_0021f4e0(param_1 + 0x10);
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  return;
}

