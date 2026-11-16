
long FUN_026ef768(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = FUN_026ef5fc();
  if (iVar1 != -1) {
    if ((*(int *)(param_1 + 0x94) == 1) && (*(int *)(param_1 + 0x90) == iVar1)) {
      lVar2 = 0;
    }
    else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == iVar1)) {
      lVar2 = 1;
    }
    else if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == iVar1)) {
      lVar2 = 2;
    }
    else if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == iVar1)) {
      lVar2 = 3;
    }
    else if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == iVar1)) {
      lVar2 = 4;
    }
    else if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == iVar1)) {
      lVar2 = 5;
    }
    else if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == iVar1)) {
      lVar2 = 6;
    }
    else {
      if (*(int *)(param_1 + 0xcc) != 1) {
        return 0;
      }
      if (*(int *)(param_1 + 200) != iVar1) {
        return 0;
      }
      lVar2 = 7;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (*(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8 + 0x60) != 0)) {
      lVar3 = *(long *)(param_1 + 0x60) + lVar2 * 0x300;
      if (*(uint *)(param_1 + 0x58) <= (uint)lVar2) {
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  return 0;
}

