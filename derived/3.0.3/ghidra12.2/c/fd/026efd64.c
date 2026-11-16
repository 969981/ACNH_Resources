
long FUN_026efd64(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x94) == 2) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x9c) == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xa4);
    if (uVar1 != 2) {
      if (*(int *)(param_1 + 0xac) == 2) {
        uVar1 = 3;
      }
      else if (*(int *)(param_1 + 0xb4) == 2) {
        uVar1 = 4;
      }
      else if (*(int *)(param_1 + 0xbc) == 2) {
        uVar1 = 5;
      }
      else if (*(int *)(param_1 + 0xc4) == 2) {
        uVar1 = 6;
      }
      else {
        if (*(int *)(param_1 + 0xcc) != 2) {
          return 0;
        }
        uVar1 = 7;
      }
    }
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (*(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8 + 0x60) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x60) + (ulong)uVar1 * 0x300;
  if (*(uint *)(param_1 + 0x58) <= uVar1) {
    lVar2 = 0;
  }
  return lVar2;
}

