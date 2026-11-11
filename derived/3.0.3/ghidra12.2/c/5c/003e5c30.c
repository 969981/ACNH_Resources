
long FUN_003e5c30(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  do {
    lVar1 = lVar2;
    if (lVar1 == param_1) {
      return 0;
    }
    lVar2 = *(long *)(lVar1 + 8);
  } while ((param_2 < *(ulong *)(lVar1 + 0x10)) || (*(ulong *)(lVar1 + 0x18) <= param_2));
  lVar2 = FUN_003e5c30(lVar1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}

