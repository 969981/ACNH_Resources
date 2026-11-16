
undefined8 FUN_026efca4(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x94) == 2) {
    lVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x9c) == 2) {
    lVar1 = 1;
  }
  else if (*(int *)(param_1 + 0xa4) == 2) {
    lVar1 = 2;
  }
  else if (*(int *)(param_1 + 0xac) == 2) {
    lVar1 = 3;
  }
  else if (*(int *)(param_1 + 0xb4) == 2) {
    lVar1 = 4;
  }
  else if (*(int *)(param_1 + 0xbc) == 2) {
    lVar1 = 5;
  }
  else if (*(int *)(param_1 + 0xc4) == 2) {
    lVar1 = 6;
  }
  else {
    if (*(int *)(param_1 + 0xcc) != 2) {
      return 0;
    }
    lVar1 = 7;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + lVar1 * 8 + 0x60), lVar1 == 0)) {
    return 0;
  }
  return *(undefined8 *)(lVar1 + 0x10);
}

