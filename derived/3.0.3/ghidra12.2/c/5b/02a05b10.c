
long FUN_02a05b10(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (((*(char *)(param_1 + 8) != '\0') &&
      (uVar3 = param_3 - *(int *)(param_1 + 0x10), -1 < (int)uVar3)) &&
     (iVar7 = *(int *)(param_1 + 0x60), (int)uVar3 < iVar7)) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (uVar3 < *(uint *)(param_1 + 0x68)) {
      iVar1 = *(int *)(param_1 + 100) + uVar3;
      iVar2 = 0;
      if (iVar7 <= iVar1) {
        iVar2 = iVar7;
      }
      plVar5 = plVar5 + (iVar1 - iVar2);
    }
    lVar6 = *plVar5;
    plVar5 = (long *)(lVar6 + -8);
    do {
      lVar6 = *(long *)(lVar6 + 8);
      if ((long *)(lVar6 + -8) == plVar5) {
        return 0;
      }
      lVar4 = *(long *)(lVar6 + -8);
      iVar7 = (int)*(short *)(lVar4 + 8);
      if (iVar7 == param_2) {
        return lVar4;
      }
    } while (iVar7 <= param_2);
  }
  return 0;
}

