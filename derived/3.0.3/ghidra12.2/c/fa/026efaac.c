
long FUN_026efaac(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_026ef5fc();
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0xd4) == 1) && (*(int *)(param_1 + 0xd0) == iVar1)) {
      lVar2 = 0;
    }
    else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == iVar1)) {
      lVar2 = 1;
    }
    else {
      if ((((*(int *)(param_1 + 0xe4) != 1) || (*(int *)(param_1 + 0xe0) != iVar1)) &&
          ((*(int *)(param_1 + 0xec) != 1 || (*(int *)(param_1 + 0xe8) != iVar1)))) &&
         ((((*(int *)(param_1 + 0xf4) != 1 || (*(int *)(param_1 + 0xf0) != iVar1)) &&
           ((*(int *)(param_1 + 0xfc) != 1 || (*(int *)(param_1 + 0xf8) != iVar1)))) &&
          ((*(int *)(param_1 + 0x104) != 1 || (*(int *)(param_1 + 0x100) != iVar1)))))) {
        if (*(int *)(param_1 + 0x10c) != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x108) != iVar1) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == iVar1)) {
        lVar2 = 2;
      }
      else if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == iVar1)) {
        lVar2 = 3;
      }
      else if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == iVar1)) {
        lVar2 = 4;
      }
      else if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == iVar1)) {
        lVar2 = 5;
      }
      else if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == iVar1)) {
        lVar2 = 6;
      }
      else {
        if (*(int *)(param_1 + 0x10c) != 1) {
          return 0;
        }
        if (*(int *)(param_1 + 0x108) != iVar1) {
          return 0;
        }
        lVar2 = 7;
      }
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (*(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8 + 0xa0) != 0)) {
      lVar3 = *(long *)(param_1 + 0x70) + lVar2 * 0x300;
      if (*(uint *)(param_1 + 0x68) <= (uint)lVar2) {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return 0;
}

