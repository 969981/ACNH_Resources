
long FUN_026f3708(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xd4) == 1 && *(int *)(param_1 + 0xd0) == param_2) {
    lVar1 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == param_2)) {
    lVar1 = 1;
  }
  else if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == param_2)) {
    lVar1 = 2;
  }
  else if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == param_2)) {
    lVar1 = 3;
  }
  else if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == param_2)) {
    lVar1 = 4;
  }
  else if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == param_2)) {
    lVar1 = 5;
  }
  else if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == param_2)) {
    lVar1 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x108) != param_2) {
      return 0;
    }
    lVar1 = 7;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (*(long *)(*(long *)(param_1 + 0x10) + lVar1 * 8 + 0xa0) == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x70) + lVar1 * 0x300;
  if (*(uint *)(param_1 + 0x68) <= (uint)lVar1) {
    lVar2 = 0;
  }
  return lVar2;
}

