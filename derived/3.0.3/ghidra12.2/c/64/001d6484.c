
void FUN_001d6484(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bcc760 + 0x10);
  lVar1 = FUN_00185a6c(0x28);
  if (lVar1 != 0) {
    FUN_001d1cdc(lVar1);
  }
  param_1[1] = lVar1;
  lVar1 = FUN_00185a6c(0xa20);
  if (lVar1 != 0) {
    FUN_001d4bd0(lVar1);
  }
  param_1[2] = lVar1;
  return;
}

