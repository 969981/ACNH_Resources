
long FUN_026f9328(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x94) == 1 && *(int *)(param_1 + 0x90) == param_2) {
    lVar1 = 0;
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == param_2)) {
    lVar1 = 1;
  }
  else if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
    lVar1 = 2;
  }
  else if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
    lVar1 = 3;
  }
  else if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
    lVar1 = 4;
  }
  else if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
    lVar1 = 5;
  }
  else if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
    lVar1 = 6;
  }
  else {
    if (*(int *)(param_1 + 0xcc) != 1) {
      return 0;
    }
    if (*(int *)(param_1 + 200) != param_2) {
      return 0;
    }
    lVar1 = 7;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (*(long *)(*(long *)(param_1 + 0x10) + lVar1 * 8 + 0x60) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x60) + lVar1 * 0x300;
  if (*(uint *)(param_1 + 0x58) <= (uint)lVar1) {
    lVar2 = 0;
  }
  return lVar2;
}

