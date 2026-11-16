
void FUN_026f0ec8(long param_1)

{
  long lVar1;
  
  if (((((*(int *)(param_1 + 0xd4) == 2) || (*(int *)(param_1 + 0xdc) == 2)) ||
       (*(int *)(param_1 + 0xe4) == 2)) ||
      ((*(int *)(param_1 + 0xec) == 2 || (*(int *)(param_1 + 0xf4) == 2)))) ||
     ((*(int *)(param_1 + 0xfc) == 2 ||
      ((*(int *)(param_1 + 0x104) == 2 || (*(int *)(param_1 + 0x10c) == 2)))))) {
    return;
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xdc) == 0) {
    lVar1 = 1;
  }
  else if (*(int *)(param_1 + 0xe4) == 0) {
    lVar1 = 2;
  }
  else if (*(int *)(param_1 + 0xec) == 0) {
    lVar1 = 3;
  }
  else if (*(int *)(param_1 + 0xf4) == 0) {
    lVar1 = 4;
  }
  else if (*(int *)(param_1 + 0xfc) == 0) {
    lVar1 = 5;
  }
  else if (*(int *)(param_1 + 0x104) == 0) {
    lVar1 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 0) {
      return;
    }
    lVar1 = 7;
  }
  *(undefined4 *)(param_1 + lVar1 * 8 + 0xd4) = 2;
  FUN_026f3190();
  return;
}

