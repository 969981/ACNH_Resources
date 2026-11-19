
undefined8 FUN_03a154c0(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x118);
  if (lVar3 == 0) {
    return 0;
  }
  bVar2 = false;
  if (*(char *)(*(long *)(lVar3 + 8) + 0x4f0) != '\0') {
    if (*(int *)(lVar3 + 0x15e0) == 0) {
      bVar2 = false;
    }
    else {
      iVar5 = 0;
      do {
        lVar1 = (long)iVar5;
        iVar5 = iVar5 + 1;
        bVar2 = *(long *)(*(long *)(lVar3 + 0x15e8) + lVar1 * 0x68 + 0x30) == param_1;
      } while (!bVar2 && *(int *)(lVar3 + 0x15e0) != iVar5);
    }
  }
  if ((((param_2 & 1) == 0) || (*(char *)(param_1 + 0x140) == '\0')) ||
     (*(char *)(param_1 + 0x58) == '\0')) {
    if (!bVar2) {
      return 1;
    }
    if (*(int *)(lVar3 + 0x15e0) != 0) {
      iVar5 = 0;
      do {
        plVar4 = (long *)(*(long *)(lVar3 + 0x15e8) + (long)iVar5 * 0x68 + 0x30);
        if (*plVar4 == param_1) {
          *plVar4 = 0;
          return 1;
        }
        iVar5 = iVar5 + 1;
      } while (*(int *)(lVar3 + 0x15e0) != iVar5);
    }
  }
  else {
    if (bVar2) {
      return 1;
    }
    if (*(int *)(lVar3 + 0x15e0) != 0) {
      iVar5 = 0;
      do {
        plVar4 = (long *)(*(long *)(lVar3 + 0x15e8) + (long)iVar5 * 0x68 + 0x30);
        if (*plVar4 == 0) {
          *plVar4 = param_1;
          return 1;
        }
        iVar5 = iVar5 + 1;
      } while (*(int *)(lVar3 + 0x15e0) != iVar5);
      return 0;
    }
  }
  return 0;
}

