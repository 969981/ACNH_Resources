
void FUN_026f69f8(long param_1,int param_2,long *param_3,size_t *param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(int *)(param_1 + 0x94) != 1;
  bVar2 = *(int *)(param_1 + 0x90) != param_2;
  if (bVar1 || bVar2) {
    iVar5 = *(int *)(param_1 + 0x98);
    iVar6 = *(int *)(param_1 + 0x9c);
    if ((iVar6 == 1) && (iVar5 == param_2)) {
      lVar3 = 1;
      goto LAB_026f6af0;
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
      lVar3 = 2;
      goto LAB_026f6af0;
    }
    if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
      lVar3 = 3;
      goto LAB_026f6af0;
    }
    if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
      lVar3 = 4;
      goto LAB_026f6af0;
    }
    if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
      lVar3 = 5;
      goto LAB_026f6af0;
    }
    if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
      lVar3 = 6;
      goto LAB_026f6af0;
    }
    lVar3 = 0;
    if ((*(int *)(param_1 + 0xcc) == 1) && (*(int *)(param_1 + 200) == param_2)) {
      lVar3 = 7;
      goto LAB_026f6af0;
    }
  }
  else {
    lVar3 = 0;
LAB_026f6af0:
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + lVar3 * 8 + 0x60);
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = *(long *)(lVar4 + 0x10);
      }
    }
    if (!bVar1 && !bVar2) {
      lVar4 = 0;
      goto LAB_026f6bf4;
    }
    iVar5 = *(int *)(param_1 + 0x98);
    iVar6 = *(int *)(param_1 + 0x9c);
  }
  if ((iVar6 == 1) && (iVar5 == param_2)) {
    lVar4 = 1;
  }
  else if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0xa0) == param_2)) {
    lVar4 = 2;
  }
  else if ((*(int *)(param_1 + 0xac) == 1) && (*(int *)(param_1 + 0xa8) == param_2)) {
    lVar4 = 3;
  }
  else if ((*(int *)(param_1 + 0xb4) == 1) && (*(int *)(param_1 + 0xb0) == param_2)) {
    lVar4 = 4;
  }
  else if ((*(int *)(param_1 + 0xbc) == 1) && (*(int *)(param_1 + 0xb8) == param_2)) {
    lVar4 = 5;
  }
  else if ((*(int *)(param_1 + 0xc4) == 1) && (*(int *)(param_1 + 0xc0) == param_2)) {
    lVar4 = 6;
  }
  else {
    if (*(int *)(param_1 + 0xcc) != 1) {
      return;
    }
    if (*(int *)(param_1 + 200) != param_2) {
      return;
    }
    lVar4 = 7;
  }
LAB_026f6bf4:
  if ((((*(long *)(param_1 + 0x10) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + lVar4 * 8 + 0x60), lVar4 == 0)) ||
      (lVar3 == 0)) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) {
    return;
  }
  memcpy((void *)(lVar4 + *param_3),(void *)(lVar3 + *param_3),*param_4);
  return;
}

