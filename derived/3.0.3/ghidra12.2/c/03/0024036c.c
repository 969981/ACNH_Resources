
void FUN_0024036c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcd2f0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0xc),0,0xb);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *param_1 = (long)&PTR_LAB_04841b90;
  *(undefined4 *)(param_1 + 1) = 6;
  return;
}

