
void FUN_00421a9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_0018ac30(lVar1 + 0x30);
  *(undefined **)(lVar1 + 8) = PTR_DAT_04bc0ec8 + 0x10;
  FUN_0018b1a0();
  FUN_00185ac4(lVar1);
  return;
}

