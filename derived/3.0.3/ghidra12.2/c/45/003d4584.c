
void FUN_003d4584(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bd0290 + 0x78;
  *param_1 = (long)(PTR_DAT_04bd0290 + 0x10);
  param_1[0x18] = (long)puVar1;
  FUN_003d4670();
  *param_1 = (long)(PTR_DAT_04bd02a8 + 0x10);
  nn::os::FinalizeEvent((EventType *)(param_1 + 1));
  return;
}

