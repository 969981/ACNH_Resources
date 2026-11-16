
void FUN_026f6fec(long param_1,long *param_2,size_t *param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x94) == 2) {
    lVar1 = 0;
LAB_026f7088:
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + lVar1 * 8 + 0x60);
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = *(long *)(lVar2 + 0x10);
      }
    }
    if (*(int *)(param_1 + 0x94) == 2) {
      lVar2 = 0;
      goto LAB_026f7148;
    }
    if (*(int *)(param_1 + 0x9c) == 2) {
      lVar2 = 1;
      goto LAB_026f7148;
    }
  }
  else {
    if (*(int *)(param_1 + 0x9c) == 2) {
      lVar1 = 1;
      goto LAB_026f7088;
    }
    if (*(int *)(param_1 + 0xa4) == 2) {
      lVar1 = 2;
      goto LAB_026f7088;
    }
    if (*(int *)(param_1 + 0xac) == 2) {
      lVar1 = 3;
      goto LAB_026f7088;
    }
    if (*(int *)(param_1 + 0xb4) == 2) {
      lVar1 = 4;
      goto LAB_026f7088;
    }
    if (*(int *)(param_1 + 0xbc) == 2) {
      lVar1 = 5;
      goto LAB_026f7088;
    }
    if (*(int *)(param_1 + 0xc4) == 2) {
      lVar1 = 6;
      goto LAB_026f7088;
    }
    if (*(int *)(param_1 + 0xcc) == 2) {
      lVar1 = 7;
      goto LAB_026f7088;
    }
    lVar1 = 0;
  }
  if (*(int *)(param_1 + 0xa4) == 2) {
    lVar2 = 2;
  }
  else if (*(int *)(param_1 + 0xac) == 2) {
    lVar2 = 3;
  }
  else if (*(int *)(param_1 + 0xb4) == 2) {
    lVar2 = 4;
  }
  else if (*(int *)(param_1 + 0xbc) == 2) {
    lVar2 = 5;
  }
  else if (*(int *)(param_1 + 0xc4) == 2) {
    lVar2 = 6;
  }
  else {
    if (*(int *)(param_1 + 0xcc) != 2) {
      return;
    }
    lVar2 = 7;
  }
LAB_026f7148:
  if ((((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8 + 0x60), lVar2 == 0)) ||
      (lVar1 == 0)) || (lVar2 = *(long *)(lVar2 + 0x18), lVar2 == 0)) {
    return;
  }
  memcpy((void *)(lVar2 + *param_2),(void *)(lVar1 + *param_2),*param_3);
  return;
}

