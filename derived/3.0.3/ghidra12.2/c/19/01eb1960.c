
void FUN_01eb1960(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (((*(int *)(lVar1 + 0x360) == 0x21 && *(int *)(lVar1 + 0x4b8) != 0) &&
      (*(int *)(lVar1 + 0x378) == 0x23)) && ((*(byte *)(param_1 + 0x12778) & 1) != 0)) {
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    return;
  }
  return;
}

