
void FUN_0022cd1c(long *param_1)

{
  undefined *puVar1;
  
  FUN_00293178();
  param_1[2] = 0;
  puVar1 = PTR_DAT_04bcd080;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 3,0,0x18);
  memset(param_1 + 6,0,0x180);
  return;
}

