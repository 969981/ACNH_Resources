
long FUN_003339f0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == -1) {
    return 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0x60);
  if (0 < (int)*(uint *)(param_1 + 0x60)) {
    lVar1 = *(long *)(param_1 + 0x70);
    do {
      if (*(long *)(lVar1 + 0x18) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x98;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  lVar1 = 0;
  if ((*(long *)(param_1 + 0x490) == 0) || (lVar1 = FUN_003339f0(), lVar1 != 0)) {
    return lVar1;
  }
  FUN_0032c5d0("Appointed primitive was not found in the Resident Resource.\n");
  return 0;
}

