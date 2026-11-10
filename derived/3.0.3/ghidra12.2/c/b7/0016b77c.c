
bool FUN_0016b77c(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x20) != *(long *)(lVar1 + 0x18);
}

