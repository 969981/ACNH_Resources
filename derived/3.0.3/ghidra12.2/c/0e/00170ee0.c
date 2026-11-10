
bool FUN_00170ee0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) != 0) {
    return false;
  }
  lVar2 = FUN_0017279c();
  if (lVar2 == *(long *)(param_1 + 0x910) + *(long *)(param_1 + 0x908)) {
    bVar1 = (*(byte *)(param_1 + 0x9ab) & 0xc) == 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

