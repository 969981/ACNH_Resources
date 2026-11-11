
void FUN_003d3110(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0548;
  *param_1 = (long)(PTR_DAT_04bd0548 + 0x10);
  param_1[0x18] = (long)(puVar1 + 0x80);
  param_1[0x1b] = (long)(puVar1 + 0xa8);
  FUN_003d3270();
  *param_1 = (long)(PTR_DAT_04bd02a8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 1));
  return;
}

