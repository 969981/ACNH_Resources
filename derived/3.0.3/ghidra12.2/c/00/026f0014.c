
void FUN_026f0014(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  
  if ((((((*(int *)(param_1 + 0x94) != 1 || *(uint *)(param_1 + 0x90) != param_2) &&
         ((*(int *)(param_1 + 0x9c) != 1 || (*(uint *)(param_1 + 0x98) != param_2)))) &&
        ((*(int *)(param_1 + 0xa4) != 1 || (*(uint *)(param_1 + 0xa0) != param_2)))) &&
       ((((*(int *)(param_1 + 0xac) != 1 || (*(uint *)(param_1 + 0xa8) != param_2)) &&
         ((*(int *)(param_1 + 0xb4) != 1 || (*(uint *)(param_1 + 0xb0) != param_2)))) &&
        ((*(int *)(param_1 + 0xbc) != 1 || (*(uint *)(param_1 + 0xb8) != param_2)))))) &&
      ((*(int *)(param_1 + 0xc4) != 1 || (*(uint *)(param_1 + 0xc0) != param_2)))) &&
     ((*(int *)(param_1 + 0xcc) != 1 || (*(uint *)(param_1 + 200) != param_2)))) {
    if (*(int *)(param_1 + 0x94) == 0) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0x9c) == 0) {
      lVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xa4) == 0) {
      lVar2 = 2;
    }
    else if (*(int *)(param_1 + 0xac) == 0) {
      lVar2 = 3;
    }
    else if (*(int *)(param_1 + 0xb4) == 0) {
      lVar2 = 4;
    }
    else if (*(int *)(param_1 + 0xbc) == 0) {
      lVar2 = 5;
    }
    else if (*(int *)(param_1 + 0xc4) == 0) {
      lVar2 = 6;
    }
    else {
      if (*(int *)(param_1 + 0xcc) != 0) {
        return;
      }
      lVar2 = 7;
    }
    if (param_2 < 8) {
      puVar1 = (uint *)(param_1 + 0x90) + lVar2 * 2;
      *puVar1 = param_2;
      puVar1[1] = 1;
      return;
    }
  }
  return;
}

