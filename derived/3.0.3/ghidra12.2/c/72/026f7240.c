
void FUN_026f7240(long param_1,long *param_2,size_t *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 2) {
    lVar4 = 0;
LAB_026f72f8:
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + lVar4 * 8 + 0xa0), plVar2 == (long *)0x0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*plVar2 + 0x18))();
      iVar1 = *(int *)(param_1 + 0xd4);
    }
    if (iVar1 == 2) {
      lVar3 = 0;
      goto LAB_026f73cc;
    }
  }
  else {
    if (*(int *)(param_1 + 0xdc) == 2) {
      lVar4 = 1;
      goto LAB_026f72f8;
    }
    if (*(int *)(param_1 + 0xe4) == 2) {
      lVar4 = 2;
      goto LAB_026f72f8;
    }
    if (*(int *)(param_1 + 0xec) == 2) {
      lVar4 = 3;
      goto LAB_026f72f8;
    }
    if (*(int *)(param_1 + 0xf4) == 2) {
      lVar4 = 4;
      goto LAB_026f72f8;
    }
    if (*(int *)(param_1 + 0xfc) == 2) {
      lVar4 = 5;
      goto LAB_026f72f8;
    }
    if (*(int *)(param_1 + 0x104) == 2) {
      lVar4 = 6;
      goto LAB_026f72f8;
    }
    if (*(int *)(param_1 + 0x10c) == 2) {
      lVar4 = 7;
      goto LAB_026f72f8;
    }
    lVar4 = 0;
  }
  if (*(int *)(param_1 + 0xdc) == 2) {
    lVar3 = 1;
  }
  else if (*(int *)(param_1 + 0xe4) == 2) {
    lVar3 = 2;
  }
  else if (*(int *)(param_1 + 0xec) == 2) {
    lVar3 = 3;
  }
  else if (*(int *)(param_1 + 0xf4) == 2) {
    lVar3 = 4;
  }
  else if (*(int *)(param_1 + 0xfc) == 2) {
    lVar3 = 5;
  }
  else if (*(int *)(param_1 + 0x104) == 2) {
    lVar3 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 2) {
      return;
    }
    lVar3 = 7;
  }
LAB_026f73cc:
  if ((((*(long *)(param_1 + 0x10) == 0) ||
       (plVar2 = *(long **)(*(long *)(param_1 + 0x10) + lVar3 * 8 + 0xa0), plVar2 == (long *)0x0))
      || (lVar3 = (**(code **)(*plVar2 + 0x28))(), lVar4 == 0)) || (lVar3 == 0)) {
    return;
  }
  memcpy((void *)(lVar3 + *param_2),(void *)(lVar4 + *param_2),*param_3);
  return;
}

