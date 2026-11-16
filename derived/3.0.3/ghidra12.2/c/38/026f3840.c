
void FUN_026f3840(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xd4) == 1 && *(int *)(param_1 + 0xd0) == param_2) {
    lVar1 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == param_2)) {
    lVar1 = 1;
  }
  else {
    if (((((*(int *)(param_1 + 0xe4) != 1) || (*(int *)(param_1 + 0xe0) != param_2)) &&
         ((*(int *)(param_1 + 0xec) != 1 || (*(int *)(param_1 + 0xe8) != param_2)))) &&
        ((*(int *)(param_1 + 0xf4) != 1 || (*(int *)(param_1 + 0xf0) != param_2)))) &&
       ((((*(int *)(param_1 + 0xfc) != 1 || (*(int *)(param_1 + 0xf8) != param_2)) &&
         ((*(int *)(param_1 + 0x104) != 1 || (*(int *)(param_1 + 0x100) != param_2)))) &&
        ((*(int *)(param_1 + 0x10c) != 1 || (*(int *)(param_1 + 0x108) != param_2)))))) {
      return;
    }
    if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == param_2)) {
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
        return;
      }
      if (*(int *)(param_1 + 0x108) != param_2) {
        return;
      }
      lVar1 = 7;
    }
  }
  ((int *)(param_1 + 0xd0))[lVar1 * 2 + 1] = 0;
  FUN_026f3190();
  return;
}

