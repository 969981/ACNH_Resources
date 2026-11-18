
void FUN_032bbf80(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x70);
  if ((param_2 < *(uint *)(plVar3 + 2)) && (*plVar3 != 0)) {
    iVar2 = *(int *)((long)plVar3 + 0xc) + param_2;
    iVar6 = 0;
    if ((int)plVar3[1] <= iVar2) {
      iVar6 = (int)plVar3[1];
    }
    iVar2 = *(int *)(*plVar3 + (long)(iVar2 - iVar6) * 4);
  }
  else {
    iVar2 = -1;
  }
  lVar7 = *(long *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar7 = *(long *)(param_1 + 0x80);
  }
  *(int *)(lVar7 + 0x30) = iVar2;
  if (*(char *)(param_1 + 0x88) == '\0') {
    plVar3 = *(long **)(param_1 + 0x78);
    if ((int)plVar3[2] != 0) {
      iVar6 = 0;
      do {
        iVar1 = 0;
        if ((int)plVar3[1] <= iVar6 + *(int *)((long)plVar3 + 0xc)) {
          iVar1 = (int)plVar3[1];
        }
        iVar1 = iVar6 + (*(int *)((long)plVar3 + 0xc) - iVar1);
        iVar6 = iVar6 + 1;
        *(undefined1 *)(*plVar3 + (long)iVar1 * 0x38) = 0;
      } while (iVar6 != (int)plVar3[2]);
      plVar3 = *(long **)(param_1 + 0x78);
    }
    lVar7 = *plVar3;
    iVar2 = *(int *)((long)plVar3 + 0xc) + iVar2;
    iVar6 = 0;
    if ((int)plVar3[1] <= iVar2) {
      iVar6 = (int)plVar3[1];
    }
    lVar4 = (long)(iVar2 - iVar6) * 0x38;
    bVar5 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x80) == 0) {
      return;
    }
    *(int *)(*(long *)(param_1 + 0x80) + 0x30) = iVar2;
    plVar3 = *(long **)(param_1 + 0x80);
    lVar7 = *plVar3;
    iVar2 = *(int *)((long)plVar3 + 0xc) + iVar2;
    iVar6 = 0;
    if ((int)plVar3[1] <= iVar2) {
      iVar6 = (int)plVar3[1];
    }
    lVar4 = (long)(iVar2 - iVar6) * 0x38;
    bVar5 = *(byte *)(lVar7 + lVar4) ^ 1;
  }
  *(byte *)(lVar7 + lVar4) = bVar5;
  return;
}

