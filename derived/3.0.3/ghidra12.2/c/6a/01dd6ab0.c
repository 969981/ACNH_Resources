
void FUN_01dd6ab0(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  
  if ((int)DAT_053814a8 < DAT_053814ac) {
    *(undefined **)(DAT_053814b0 + (long)(int)DAT_053814a8 * 8) = PTR_DAT_04bc1240;
    DAT_053814a8 = DAT_053814a8 + 1;
  }
  if ((int)DAT_053814a8 < DAT_053814ac) {
    *(undefined8 **)(DAT_053814b0 + (long)(int)DAT_053814a8 * 8) = &DAT_0536d2a8;
    DAT_053814a8 = DAT_053814a8 + 1;
  }
  FUN_0255f070(&DAT_053814a8);
  FUN_0255f270(&DAT_053814a8);
  FUN_0255f470(&DAT_053814a8);
  if ((int)DAT_053814a8 < DAT_053814ac) {
    iVar6 = 0;
    lVar7 = *(long *)PTR_DAT_04bb4760;
    uVar3 = DAT_053814a8;
    iVar8 = DAT_053814ac;
    do {
      if ((int)uVar3 < iVar8) {
        *(long *)(DAT_053814b0 + (long)(int)uVar3 * 8) = lVar7 + 0x8f8 + (long)iVar6 * 0x28;
        uVar3 = DAT_053814a8 + 1;
        iVar8 = DAT_053814ac;
        DAT_053814a8 = uVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x6d);
  }
  else {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x6d);
  }
  FUN_01e2f188(*(long *)PTR_DAT_04bb3968 + 0xda0,&DAT_053814a8);
  uVar5 = (ulong)DAT_053814a8;
  uVar3 = *(uint *)(DAT_052c21a0 + 0x18);
  iVar6 = DAT_053814ac;
  if (uVar3 == 0 || DAT_053814ac <= (int)DAT_053814a8) {
    uVar4 = DAT_053814a8;
    if ((int)DAT_053814a8 < DAT_053814ac) goto LAB_01dd6f4c;
LAB_01dd6be0:
    uVar3 = (uint)uVar5;
    if ((int)uVar3 < iVar6) goto LAB_01dd6f6c;
LAB_01dd6be8:
    uVar3 = (uint)uVar5;
    if ((int)uVar3 < iVar6) {
LAB_01dd6bf0:
      *(long *)(DAT_053814b0 + (long)(int)uVar3 * 8) = DAT_052c21a0 + 0xa0;
      uVar5 = (ulong)(DAT_053814a8 + 1);
      iVar6 = DAT_053814ac;
      DAT_053814a8 = DAT_053814a8 + 1;
    }
  }
  else {
    lVar7 = *(long *)(DAT_052c21a0 + 0x20);
    uVar10 = 0;
    do {
      if ((int)uVar5 < iVar6) {
        *(long *)(DAT_053814b0 + (long)(int)uVar5 * 8) =
             lVar7 + ((long)((ulong)uVar10 << 0x20) >> 0x1b);
        DAT_053814a8 = DAT_053814a8 + 1;
        uVar5 = (ulong)DAT_053814a8;
        iVar6 = DAT_053814ac;
      }
      uVar4 = (uint)uVar5;
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    if (iVar6 <= (int)uVar4) goto LAB_01dd6be0;
LAB_01dd6f4c:
    *(long *)(DAT_053814b0 + (long)(int)uVar4 * 8) = DAT_052c21a0 + 0x70;
    uVar3 = DAT_053814a8 + 1;
    uVar5 = (ulong)uVar3;
    iVar6 = DAT_053814ac;
    DAT_053814a8 = uVar3;
    if (DAT_053814ac <= (int)uVar3) goto LAB_01dd6be8;
LAB_01dd6f6c:
    *(long *)(DAT_053814b0 + (long)(int)uVar3 * 8) = DAT_052c21a0 + 0x88;
    uVar3 = DAT_053814a8 + 1;
    uVar5 = (ulong)uVar3;
    iVar6 = DAT_053814ac;
    DAT_053814a8 = uVar3;
    if ((int)uVar3 < DAT_053814ac) goto LAB_01dd6bf0;
  }
  iVar8 = *(int *)(DAT_051b1b88 + 0x18);
  if ((iVar8 != 0) && ((int)uVar5 < iVar6)) {
    lVar7 = *(long *)(DAT_051b1b88 + 0x20);
    iVar9 = 0;
    do {
      if ((int)uVar5 < iVar6) {
        *(long *)(DAT_053814b0 + (long)(int)uVar5 * 8) = lVar7 + (long)iVar9 * 0x28;
        DAT_053814a8 = DAT_053814a8 + 1;
        uVar5 = (ulong)DAT_053814a8;
        iVar6 = DAT_053814ac;
      }
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  iVar8 = *(int *)(DAT_051b0f08 + 0x18);
  bVar1 = false;
  bVar2 = false;
  if (iVar8 != 0) {
    bVar2 = SBORROW4((int)uVar5,iVar6);
    bVar1 = (int)uVar5 - iVar6 < 0;
  }
  if (bVar1 != bVar2) {
    lVar7 = *(long *)(DAT_051b0f08 + 0x20);
    iVar9 = 0;
    do {
      if ((int)uVar5 < iVar6) {
        *(long *)(DAT_053814b0 + (long)(int)uVar5 * 8) = lVar7 + (long)iVar9 * 0x18;
        DAT_053814a8 = DAT_053814a8 + 1;
        uVar5 = (ulong)DAT_053814a8;
        iVar6 = DAT_053814ac;
      }
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  if ((int)uVar5 < iVar6) {
    *(undefined8 *)(DAT_053814b0 + (long)(int)uVar5 * 8) = 0;
    uVar5 = (long)(int)DAT_053814a8 + 1;
    DAT_053814a8 = (uint)uVar5;
    if ((int)DAT_053814a8 < DAT_053814ac) {
      *(undefined8 *)(DAT_053814b0 + uVar5 * 8) = 0;
      DAT_053814a8 = DAT_053814a8 + 1;
      uVar5 = (ulong)DAT_053814a8;
      if (DAT_053814ac <= (int)DAT_053814a8) goto LAB_01dd6cc0;
LAB_01dd6fb0:
      *(undefined8 *)(DAT_053814b0 + (long)(int)uVar5 * 8) = 0;
      uVar3 = DAT_053814a8 + 1;
      uVar5 = (ulong)uVar3;
      iVar6 = DAT_053814ac;
      DAT_053814a8 = uVar3;
      if (DAT_053814ac <= (int)uVar3) goto LAB_01dd6cdc;
    }
    else {
      if ((int)DAT_053814a8 < DAT_053814ac) goto LAB_01dd6fb0;
LAB_01dd6cc0:
      uVar3 = (uint)uVar5;
      iVar6 = DAT_053814ac;
      if (DAT_053814ac <= (int)uVar3) goto LAB_01dd6cdc;
    }
    *(undefined8 *)(DAT_053814b0 + (long)(int)uVar3 * 8) = 0;
    uVar5 = (ulong)(DAT_053814a8 + 1);
    iVar6 = DAT_053814ac;
    DAT_053814a8 = DAT_053814a8 + 1;
  }
LAB_01dd6cdc:
  uVar3 = *(uint *)(DAT_055d9470 + 0x18);
  bVar1 = false;
  bVar2 = false;
  if (uVar3 != 0) {
    bVar2 = SBORROW4((int)uVar5,iVar6);
    bVar1 = (int)uVar5 - iVar6 < 0;
  }
  if (bVar1 != bVar2) {
    lVar7 = *(long *)(DAT_055d9470 + 0x20);
    uVar10 = 0;
    do {
      if ((int)uVar5 < iVar6) {
        *(long *)(DAT_053814b0 + (long)(int)uVar5 * 8) =
             lVar7 + ((long)((ulong)uVar10 << 0x20) >> 0x1b);
        DAT_053814a8 = DAT_053814a8 + 1;
        uVar5 = (ulong)DAT_053814a8;
        iVar6 = DAT_053814ac;
      }
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
  }
  iVar8 = *(int *)(DAT_055cf3d0 + 0x18);
  bVar1 = false;
  bVar2 = false;
  if (iVar8 != 0) {
    bVar2 = SBORROW4((int)uVar5,iVar6);
    bVar1 = (int)uVar5 - iVar6 < 0;
  }
  if (bVar1 != bVar2) {
    lVar7 = *(long *)(DAT_055cf3d0 + 0x20);
    iVar9 = 0;
    do {
      if ((int)uVar5 < iVar6) {
        *(long *)(DAT_053814b0 + (long)(int)uVar5 * 8) = lVar7 + (long)iVar9 * 0x30;
        DAT_053814a8 = DAT_053814a8 + 1;
        uVar5 = (ulong)DAT_053814a8;
        iVar6 = DAT_053814ac;
      }
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
  if (*(long *)(DAT_05370ac0 + 8) != DAT_05370ac0) {
    lVar7 = (long)*(int *)(DAT_05370ac0 + 0x14);
    plVar11 = (long *)(*(long *)(DAT_05370ac0 + 8) - lVar7);
    plVar12 = (long *)(DAT_05370ac0 - lVar7);
    do {
      (**(code **)(*plVar11 + 0x18))(plVar11,&DAT_053814a8);
      plVar11 = (long *)(*(long *)((long)plVar11 + lVar7 + 8) - lVar7);
    } while (plVar11 != plVar12);
  }
  FUN_006f91cc(&DAT_053814a8);
  FUN_009c2a9c(*(undefined8 *)PTR_DAT_04bb47c0,&DAT_053814a8);
  if (DAT_053814ac <= (int)DAT_053814a8) {
    uVar3 = DAT_053814a8;
    if (DAT_053814ac <= (int)DAT_053814a8) {
      return;
    }
    goto LAB_01dd6dd0;
  }
  *(undefined8 *)(DAT_053814b0 + (long)(int)DAT_053814a8 * 8) = 0;
  uVar5 = (long)(int)DAT_053814a8 + 1;
  DAT_053814a8 = (uint)uVar5;
  if ((int)DAT_053814a8 < DAT_053814ac) {
    *(undefined8 *)(DAT_053814b0 + uVar5 * 8) = 0;
    DAT_053814a8 = DAT_053814a8 + 1;
    uVar5 = (ulong)DAT_053814a8;
    if (DAT_053814ac <= (int)DAT_053814a8) goto LAB_01dd6dc0;
LAB_01dd6fec:
    *(undefined8 *)(DAT_053814b0 + (long)(int)uVar5 * 8) = 0;
    uVar3 = DAT_053814a8 + 1;
    DAT_053814a8 = uVar3;
    if ((int)uVar3 < DAT_053814ac) {
LAB_01dd7008:
      *(undefined8 *)(DAT_053814b0 + (long)(int)uVar3 * 8) = 0;
      DAT_053814a8 = DAT_053814a8 + 1;
      uVar3 = DAT_053814a8;
      if (DAT_053814ac <= (int)DAT_053814a8) {
        return;
      }
      goto LAB_01dd6dd0;
    }
  }
  else {
    if ((int)DAT_053814a8 < DAT_053814ac) goto LAB_01dd6fec;
LAB_01dd6dc0:
    uVar3 = (uint)uVar5;
    if ((int)uVar3 < DAT_053814ac) goto LAB_01dd7008;
  }
  if (DAT_053814ac <= (int)uVar3) {
    return;
  }
LAB_01dd6dd0:
  *(long *)(DAT_053814b0 + (long)(int)uVar3 * 8) = *(long *)PTR_DAT_04bb27a8 + 0x4b78;
  DAT_053814a8 = DAT_053814a8 + 1;
  return;
}

