
undefined8 FUN_03c4c960(long param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  long *plVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  
  if (*(char *)(param_1 + 0x208) != '\0') {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x1e8);
  if (iVar10 != 0) {
    if (iVar10 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      iVar10 = iVar10 + -1;
      do {
        iVar1 = iVar10 + uVar9;
        if (iVar1 < 0 != SCARRY4(iVar10,uVar9)) {
          iVar1 = iVar1 + 1;
        }
        uVar11 = iVar1 >> 1;
        lVar12 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar11 * 8);
        plVar6 = (long *)(lVar12 + 8);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pbVar7 = *(byte **)(lVar12 + 0x10);
        (**(code **)(*param_2 + 0x18))(param_2);
        if (pbVar7 == (byte *)param_2[1]) goto LAB_03c4cad4;
        pbVar7 = (byte *)param_2[1];
        pbVar4 = *(byte **)(lVar12 + 0x10);
        lVar12 = 0x7ffff;
        while( true ) {
          bVar3 = *pbVar4;
          if (bVar3 != *pbVar7) break;
          if ((bVar3 == 0) ||
             (bVar2 = lVar12 == 0, pbVar7 = pbVar7 + 1, pbVar4 = pbVar4 + 1, lVar12 = lVar12 + -1,
             bVar2)) goto LAB_03c4cad4;
        }
        if (bVar3 < *pbVar7) {
          uVar9 = uVar11 + 1;
        }
        else {
          iVar10 = uVar11 - 1;
        }
      } while ((int)uVar9 < iVar10);
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar9 * 8);
    plVar6 = (long *)(lVar12 + 8);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcVar8 = *(char **)(lVar12 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    if (pcVar8 != (char *)param_2[1]) {
      pcVar8 = (char *)param_2[1];
      pcVar5 = *(char **)(lVar12 + 0x10);
      lVar12 = 0x7ffff;
      do {
        if (*pcVar5 != *pcVar8) {
          return 0;
        }
      } while ((*pcVar5 != '\0') &&
              (bVar2 = lVar12 != 0, pcVar8 = pcVar8 + 1, pcVar5 = pcVar5 + 1, lVar12 = lVar12 + -1,
              bVar2));
    }
    uVar11 = uVar9;
LAB_03c4cad4:
    if (-1 < (int)uVar11) {
      return **(undefined8 **)(*(long *)(param_1 + 0x1f0) + (ulong)uVar11 * 8);
    }
  }
  return 0;
}

