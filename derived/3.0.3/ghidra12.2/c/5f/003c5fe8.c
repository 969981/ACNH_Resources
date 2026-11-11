
void FUN_003c5fe8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0390;
  *param_1 = (long)(PTR_DAT_04bd0390 + 0x10);
  param_1[0x18] = (long)(puVar1 + 0x88);
  param_1[0x1b] = (long)(puVar1 + 0xb0);
  FUN_003c61c8();
  *param_1 = (long)(PTR_DAT_04bd02a8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 1));
  return;
}

