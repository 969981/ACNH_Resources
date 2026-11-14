
int FUN_01d3ac40(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  iVar3 = *(int *)((long)param_2 + 0xc);
  uVar8 = (ulong)(int)param_2[1];
  if ((int)param_2[1] < iVar3) {
    lVar9 = *param_2;
    while (*(byte *)(lVar9 + uVar8) < 0x21 &&
           (1L << ((ulong)*(byte *)(lVar9 + uVar8) & 0x3f) & 0x100002600U) != 0) {
      uVar8 = uVar8 + 1;
      if (iVar3 == (int)uVar8) {
        return -1;
      }
    }
    uVar7 = (uint)uVar8;
    if ((int)uVar7 < 0) {
      return -1;
    }
    if (iVar3 <= (int)uVar7) {
      return -1;
    }
    bVar5 = *(char *)(lVar9 + (uVar8 & 0xffffffff)) == '\"';
    uVar1 = uVar7;
    if (bVar5) {
      uVar1 = uVar7 + 1;
    }
    if (!bVar5) {
      return -1;
    }
    if (iVar3 <= (int)uVar1) {
      return -1;
    }
    lVar11 = 0;
    lVar2 = (uVar8 & 0xffffffff) + 1;
    while (*(char *)(lVar2 + lVar9 + lVar11) != '\"') {
      lVar11 = lVar11 + 1;
      if ((long)iVar3 <= lVar2 + lVar11) {
        return -1;
      }
    }
    iVar10 = (int)lVar11;
    uVar8 = FUN_038e8350(*param_1,param_1[1],lVar9 + (ulong)uVar1,(long)iVar10,param_1 + 2);
    if ((uVar8 & 1) != 0) {
      if ((int)(uVar7 + iVar10 + 2) < iVar3) {
        lVar11 = 0;
        iVar6 = iVar3 + -1;
        do {
          bVar4 = *(byte *)(lVar9 + (int)(uVar7 + iVar10 + 2) + lVar11);
          if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
            if (-1 < (int)(uVar7 + iVar10 + (int)lVar11 + 2)) {
              iVar3 = uVar7 + iVar10 + (int)lVar11 + 2;
            }
            return iVar3;
          }
          iVar6 = iVar6 + -1;
          lVar11 = lVar11 + 1;
        } while (uVar7 + 1 + iVar10 != iVar6);
      }
      return iVar3;
    }
  }
  return -1;
}

