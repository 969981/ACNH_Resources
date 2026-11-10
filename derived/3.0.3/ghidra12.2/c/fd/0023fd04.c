
void FUN_0023fd04(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcd2f0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0xc),0,0xb);
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)&PTR_LAB_04841ae8;
  *(undefined4 *)(param_1 + 1) = 3;
  return;
}

