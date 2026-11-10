
void FUN_001d5fc0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0xffffffff;
  param_1[4] = 0;
  puVar1 = PTR_DAT_04bcc758;
  param_1[2] = 0;
  param_1[3] = (long)(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

