
bool FUN_03087ee4(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(int *)(param_1 + 0x23fc) != 0) {
    return false;
  }
  iVar2 = FUN_033fc390(param_1 + 0x1f8);
  if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "LegacyMyDesignDLEnable";
    iVar2 = FUN_0274bce0(param_1 + 0x1f8,&local_30);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}

