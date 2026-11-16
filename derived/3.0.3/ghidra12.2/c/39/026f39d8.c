
undefined4 FUN_026f39d8(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd4) == 1 && *(int *)(param_1 + 0xd0) == param_2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == param_2)) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == param_2)) {
    return 2;
  }
  if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == param_2)) {
    return 3;
  }
  if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == param_2)) {
    return 4;
  }
  if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == param_2)) {
    return 5;
  }
  if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == param_2)) {
    return 6;
  }
  uVar1 = 7;
  if (*(int *)(param_1 + 0x108) != param_2 || *(int *)(param_1 + 0x10c) != 1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

