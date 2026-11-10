
void FUN_001eb5f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (*(long *)(lVar1 + 8) != 0) {
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 8);
    FUN_00187e4c();
  }
  FUN_00185ac4(lVar1);
  return;
}

