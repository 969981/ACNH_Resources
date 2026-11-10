
void FUN_001ba150(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcc580;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00186460(param_1 + 5,0x20000000,1);
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[4] = -1;
  param_1[2] = 0;
  param_1[3] = -1;
  return;
}

