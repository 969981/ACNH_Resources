
undefined8 FUN_03f2e0c0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(byte *)(param_1 + 8) & 10) != 2) ||
     ((*(long *)(param_1 + 0x28) != 0 && (*(int *)(param_1 + 0x20) == 1)))) {
    return 0;
  }
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    DataMemoryBarrier(2,3);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x108);
      if (iVar1 != 6) {
        if (iVar1 == 1) {
          return 1;
        }
        if (iVar1 != 0) {
          return 0;
        }
      }
      if (*(int *)(lVar2 + 0x10) == 7) {
        return 0;
      }
    }
  }
  return 1;
}

