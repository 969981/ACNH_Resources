
long FUN_034c5158(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  
  cVar3 = *(char *)((long)param_1 + 0xff9);
  plVar12 = (long *)((long)param_1 + 0xffc);
  if (cVar3 == '\0') {
    if ((0x17 < *(int *)((long)param_1 + 0x1004)) ||
       (iVar8 = *(int *)((long)param_1 + 0x1004) % 6, iVar8 < 4)) goto LAB_034c51b8;
    lVar9 = *plVar12;
    uVar11 = *(ulong *)((long)param_1 + 0x1004);
    iVar10 = (int)((ulong)lVar9 >> 0x20);
    if (iVar8 != 5) goto LAB_034c51dc;
LAB_034c5224:
    iVar6 = (int)lVar9;
    iVar8 = (int)(uVar11 + 1);
    uVar11 = uVar11 & 0xffffffff00000000 | uVar11 + 1 & 0xffffffff;
    if (*param_1 == 0) {
      bVar4 = true;
LAB_034c530c:
      iVar8 = (int)uVar11;
      if (iVar8 < 0x18) goto LAB_034c531c;
LAB_034c5344:
      iVar6 = iVar6 + 1;
      goto joined_r0x034c534c;
    }
    if ((0x17 < iVar8) || (iVar8 % 6 < 4)) goto LAB_034c5270;
    if (iVar8 % 6 != 5) goto LAB_034c52b0;
    bVar4 = false;
LAB_034c531c:
    if (iVar8 % 6 < 4) goto LAB_034c5344;
    if (iVar8 % 6 != 5) goto LAB_034c53a4;
    if (bVar4) {
      return 0;
    }
LAB_034c53b4:
    iVar8 = (int)uVar11 + 1;
    if ((0x17 < iVar8) || (iVar8 = iVar8 % 6, iVar8 < 4)) goto LAB_034c53e8;
    if (iVar8 == 5) {
      return 0;
    }
  }
  else {
    if ((int)param_1[0x201] < 3) {
LAB_034c51b8:
      uVar11 = *(ulong *)((long)param_1 + 0x1004);
      iVar10 = (int)((ulong)*plVar12 >> 0x20);
      lVar9 = *plVar12 + 1;
joined_r0x034c51c4:
      if (cVar3 == '\0') goto LAB_034c5224;
    }
    else {
      lVar9 = *plVar12;
      uVar11 = *(ulong *)((long)param_1 + 0x1004);
      iVar10 = (int)((ulong)lVar9 >> 0x20);
      if ((int)param_1[0x201] == 3) {
LAB_034c51dc:
        iVar10 = iVar10 + 1;
        goto joined_r0x034c51c4;
      }
    }
    iVar6 = (int)lVar9;
    uVar1 = (uVar11 & 0xffffffff00000000) + 0x100000000;
    uVar11 = uVar1 | uVar11 & 0xffffffff;
    if (*param_1 == 0) {
      bVar5 = true;
LAB_034c52ec:
      bVar4 = bVar5;
      iVar8 = (int)(uVar11 >> 0x20);
      if (iVar8 < 3) goto LAB_034c5344;
      if (iVar8 != 3) {
        if (bVar4) {
          return 0;
        }
        goto LAB_034c5354;
      }
LAB_034c53a4:
      iVar10 = iVar10 + 1;
joined_r0x034c534c:
      if (cVar3 == '\0') {
        if (bVar4) {
          return 0;
        }
        goto LAB_034c53b4;
      }
      if (bVar4) {
        return 0;
      }
    }
    else {
      iVar8 = (int)(uVar1 >> 0x20);
      if (iVar8 < 3) {
LAB_034c5270:
        uVar2 = *(uint *)(param_1 + 1);
        if (uVar2 != 0) {
          iVar8 = 0;
          if (uVar2 != 0) {
            iVar8 = iVar6 / (int)uVar2;
          }
          uVar7 = iVar6 - iVar8 * uVar2;
          if (uVar7 < uVar2) {
            plVar12 = param_1 + 2;
LAB_034c52cc:
            lVar9 = *(long *)(*plVar12 + (long)(int)uVar7 * 8);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
        }
LAB_034c52e0:
        bVar4 = false;
        bVar5 = false;
        if (cVar3 == '\0') goto LAB_034c530c;
        goto LAB_034c52ec;
      }
      if (iVar8 == 3) {
LAB_034c52b0:
        uVar2 = *(uint *)(param_1 + 0x1f7);
        if (uVar2 != 0) {
          iVar8 = 0;
          if (uVar2 != 0) {
            iVar8 = iVar10 / (int)uVar2;
          }
          uVar7 = iVar10 - iVar8 * uVar2;
          if (uVar7 < uVar2) {
            plVar12 = param_1 + 0x1f8;
            goto LAB_034c52cc;
          }
        }
        goto LAB_034c52e0;
      }
    }
LAB_034c5354:
    iVar8 = (int)(uVar11 + 0x100000000 >> 0x20);
    if (iVar8 < 3) {
LAB_034c53e8:
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 == 0) {
        return 0;
      }
      iVar8 = 0;
      if (uVar2 != 0) {
        iVar8 = iVar6 / (int)uVar2;
      }
      uVar7 = iVar6 - iVar8 * uVar2;
      if (uVar2 <= uVar7) {
        return 0;
      }
      param_1 = param_1 + 2;
      goto LAB_034c5404;
    }
    if (iVar8 != 3) {
      return 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x1f7);
  if (uVar2 != 0) {
    iVar8 = 0;
    if (uVar2 != 0) {
      iVar8 = iVar10 / (int)uVar2;
    }
    uVar7 = iVar10 - iVar8 * uVar2;
    if (uVar7 < uVar2) {
      param_1 = param_1 + 0x1f8;
LAB_034c5404:
      return *(long *)(*param_1 + (long)(int)uVar7 * 8);
    }
  }
  return 0;
}

