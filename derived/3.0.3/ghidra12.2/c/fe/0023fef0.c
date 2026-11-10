
void FUN_0023fef0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcd2f0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0xc),0,0xb);
  puVar1 = PTR_DAT_04bcd300;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_002b3fa8(param_1 + 4);
  *(undefined4 *)(param_1 + 1) = 4;
  return;
}

