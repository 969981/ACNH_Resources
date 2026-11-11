
bool FUN_0053aee0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x170) < 1) {
    iVar2 = 0;
    iVar1 = *(int *)(param_1 + 0x180);
  }
  else {
    lVar3 = 0;
    iVar2 = 0;
    pcVar4 = *(char **)(*(long *)(param_1 + 0x18) + 0x198);
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x168) + lVar3 * 8);
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x9f) != '\0')) && (*pcVar4 != '\0')) {
        iVar2 = iVar2 + 1;
      }
      lVar3 = lVar3 + 1;
      pcVar4 = pcVar4 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x170));
    iVar1 = *(int *)(param_1 + 0x180);
  }
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x178) + lVar3 * 8);
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x9f) != '\0')) && (*(char *)(lVar5 + 0x9d) != '\0'))
      {
        iVar2 = iVar2 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  if ((*(char *)(param_1 + 0x268) != '\0') &&
     ((((*(long *)(param_1 + 0x1a0) != 0 && (*(int *)(*(long *)(param_1 + 0x1a0) + 0x20) != 0)) ||
       ((*(long *)(param_1 + 0x1a8) != 0 && (*(int *)(*(long *)(param_1 + 0x1a8) + 0x20) != 0)))) &&
      ((*(int *)(*(long *)(param_1 + 0x18) + 0x158) != 0 && (*(long *)(param_1 + 0x198) != 0)))))) {
    iVar2 = iVar2 + 1;
  }
  return 1 < iVar2;
}

