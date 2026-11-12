
int FUN_006f2c10(long *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_1 == param_2) {
    return 0;
  }
  iVar10 = (int)param_1[2];
  iVar6 = (int)param_2[2];
  if (iVar10 == 0) {
    if (iVar6 != 0) {
      return -1;
    }
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    iVar9 = 0;
    iVar12 = *(int *)((long)param_1 + 0xc);
    iVar7 = 0;
    iVar11 = 0;
    do {
      if (iVar6 == iVar11) {
        return 1;
      }
      iVar3 = *(int *)((long)param_2 + 0xc) + iVar11;
      iVar4 = 0;
      if ((int)param_1[1] <= iVar12) {
        iVar4 = (int)param_1[1];
      }
      iVar5 = 0;
      if ((int)param_2[1] <= iVar3) {
        iVar5 = (int)param_2[1];
      }
      puVar1 = (uint *)(*param_1 + (long)(iVar12 - iVar4) * 8);
      puVar2 = (uint *)(*param_2 + (long)(iVar3 - iVar5) * 8);
      if ((byte)puVar1[1] < (byte)puVar2[1]) {
        return -1;
      }
      if ((byte)puVar2[1] < (byte)puVar1[1]) {
        return 1;
      }
      if (*puVar1 < *puVar2) {
        return -1;
      }
      if (*puVar2 < *puVar1) {
        return 1;
      }
      if (iVar7 == 0) {
        iVar7 = -(uint)(*(byte *)((long)puVar1 + 5) < *(byte *)((long)puVar2 + 5));
        if (*(byte *)((long)puVar2 + 5) < *(byte *)((long)puVar1 + 5)) {
          iVar7 = 1;
        }
        if (iVar9 == 0) {
          iVar9 = -(uint)(*(byte *)((long)puVar1 + 6) < *(byte *)((long)puVar2 + 6));
          if (*(byte *)((long)puVar2 + 6) < *(byte *)((long)puVar1 + 6)) {
            iVar9 = 1;
          }
          if ((iVar8 == 0) &&
             (iVar8 = -(uint)(*(byte *)((long)puVar1 + 7) < *(byte *)((long)puVar2 + 7)),
             *(byte *)((long)puVar2 + 7) < *(byte *)((long)puVar1 + 7))) {
            iVar8 = 1;
          }
        }
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
      iVar12 = iVar12 + 1;
    } while (iVar10 != 0);
    if (iVar6 != iVar11) {
      return -1;
    }
    if (iVar7 != 0) {
      return iVar7;
    }
    if (iVar9 != 0) {
      return iVar9;
    }
  }
  return iVar8;
}

