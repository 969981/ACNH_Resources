
void FUN_0023ff44(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcd2f0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0xc),0,0xb);
  puVar1 = PTR_DAT_04bcd300;
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_002b4018(param_1 + 4,param_3);
  *(undefined4 *)(param_1 + 1) = 4;
  return;
}

