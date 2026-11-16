
void FUN_026f6d4c(long param_1,int param_2,long *param_3,size_t *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0xd0);
  iVar4 = *(int *)(param_1 + 0xd4);
  if (iVar4 == 1 && iVar2 == param_2) {
    lVar5 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == param_2)) {
    lVar5 = 1;
  }
  else if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == param_2)) {
    lVar5 = 2;
  }
  else if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == param_2)) {
    lVar5 = 3;
  }
  else if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == param_2)) {
    lVar5 = 4;
  }
  else if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == param_2)) {
    lVar5 = 5;
  }
  else if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == param_2)) {
    lVar5 = 6;
  }
  else {
    lVar5 = 0;
    if ((*(int *)(param_1 + 0x10c) != 1) || (*(int *)(param_1 + 0x108) != param_2))
    goto LAB_026f6dd4;
    lVar5 = 7;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar5 * 8 + 0xa0), plVar1 == (long *)0x0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*plVar1 + 0x18))();
    iVar2 = *(int *)(param_1 + 0xd0);
    iVar4 = *(int *)(param_1 + 0xd4);
  }
LAB_026f6dd4:
  if ((iVar4 == 1) && (iVar2 == param_2)) {
    lVar3 = 0;
  }
  else if ((*(int *)(param_1 + 0xdc) == 1) && (*(int *)(param_1 + 0xd8) == param_2)) {
    lVar3 = 1;
  }
  else if ((*(int *)(param_1 + 0xe4) == 1) && (*(int *)(param_1 + 0xe0) == param_2)) {
    lVar3 = 2;
  }
  else if ((*(int *)(param_1 + 0xec) == 1) && (*(int *)(param_1 + 0xe8) == param_2)) {
    lVar3 = 3;
  }
  else if ((*(int *)(param_1 + 0xf4) == 1) && (*(int *)(param_1 + 0xf0) == param_2)) {
    lVar3 = 4;
  }
  else if ((*(int *)(param_1 + 0xfc) == 1) && (*(int *)(param_1 + 0xf8) == param_2)) {
    lVar3 = 5;
  }
  else if ((*(int *)(param_1 + 0x104) == 1) && (*(int *)(param_1 + 0x100) == param_2)) {
    lVar3 = 6;
  }
  else {
    if (*(int *)(param_1 + 0x10c) != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x108) != param_2) {
      return;
    }
    lVar3 = 7;
  }
  if ((((*(long *)(param_1 + 0x10) == 0) ||
       (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar3 * 8 + 0xa0), plVar1 == (long *)0x0))
      || (lVar3 = (**(code **)(*plVar1 + 0x28))(), lVar5 == 0)) || (lVar3 == 0)) {
    return;
  }
  memcpy((void *)(lVar3 + *param_3),(void *)(lVar5 + *param_3),*param_4);
  return;
}

