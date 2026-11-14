
/* WARNING: Removing unreachable block (ram,0x01a1e42c) */
/* WARNING: Removing unreachable block (ram,0x01a1e160) */
/* WARNING: Removing unreachable block (ram,0x01a1e170) */

undefined4 FUN_01a1e110(float *param_1,float *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar20 == 0) {
    return 0x3c;
  }
  fVar21 = *param_2;
  fVar22 = param_2[2];
  uVar3 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  fVar23 = *param_1;
  fVar27 = fVar23 - fVar21;
  uVar4 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar5 = uVar3 - ((uVar3 & 0x80000001) == 1);
  iVar6 = uVar4 - ((uVar4 & 0x80000001) == 1);
  iVar16 = iVar6 + 1;
  fVar24 = param_1[2];
  fVar26 = (fVar24 - fVar22) / fVar27;
  uVar3 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  uVar4 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  iVar7 = uVar3 - ((uVar3 & 0x80000001) == 1);
  iVar8 = uVar4 - ((uVar4 & 0x80000001) == 1);
  fVar23 = 1.0;
  if (fVar24 - fVar22 < 0.0) {
    fVar23 = -1.0;
  }
  fVar24 = 1.0;
  if (fVar27 < 0.0) {
    fVar24 = -1.0;
  }
  fVar25 = 0.0;
  if (fVar27 != 0.0) {
    fVar25 = fVar26;
  }
  fVar22 = fVar22 - fVar21 * fVar25;
  iVar13 = (int)fVar24;
  iVar2 = (int)fVar23 * 2;
  iVar19 = iVar5;
  iVar15 = iVar5 + 1;
  iVar14 = iVar5 + 1;
  iVar18 = iVar6;
  iVar12 = iVar5;
  do {
    iVar17 = iVar19;
    iVar19 = iVar8;
    if (iVar17 != iVar7) {
      fVar21 = fVar22 + fVar25 * (((float)iVar17 * 5.0 + (float)iVar14 * 5.0 + 5.0) * 0.5 +
                                 (float)(int)fVar24 * 5.0);
      uVar3 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
      iVar19 = uVar3 - ((uVar3 & 0x80000001) == 1);
    }
    if ((((iVar17 < *(int *)(lVar20 + 0x20)) || (*(int *)(lVar20 + 0x30) < iVar14)) ||
        (iVar18 < *(int *)(lVar20 + 0x24))) ||
       ((*(int *)(lVar20 + 0x34) < iVar16 ||
        (uVar9 = (*param_3)(param_2[1],iVar17,iVar18,param_4), (uVar9 & 1) == 0)))) {
LAB_01a1e474:
      if (iVar17 == iVar12) {
        uVar11 = 8;
        uVar10 = 4;
        iVar12 = iVar17;
        iVar13 = (int)fVar23;
      }
      else {
        uVar11 = 0x20;
        uVar10 = 0x10;
      }
      if (iVar13 < 1) {
        uVar11 = uVar10;
      }
      if (iVar12 == iVar7) goto LAB_01a1e4b0;
      goto LAB_01a1e4c0;
    }
    iVar15 = iVar14;
    if (iVar18 != iVar19) {
      if (iVar17 < *(int *)(lVar20 + 0x20)) {
        iVar12 = iVar17;
        goto LAB_01a1e474;
      }
LAB_01a1e3a4:
      if (((*(int *)(lVar20 + 0x30) < iVar14) ||
          (iVar12 = iVar18 + iVar2, iVar12 < *(int *)(lVar20 + 0x24))) ||
         ((iVar1 = iVar16 + iVar2, *(int *)(lVar20 + 0x34) < iVar1 ||
          (uVar9 = (*param_3)(param_2[1],iVar17,iVar12,param_4), (uVar9 & 1) == 0))))
      goto LAB_01a1e470;
      if ((iVar2 - iVar19) + iVar18 != 0) break;
      iVar16 = iVar2 + iVar16;
      iVar18 = iVar19;
    }
    if (iVar17 == iVar7) {
      uVar11 = 0;
      iVar12 = iVar7;
LAB_01a1e4b0:
      if (iVar18 == iVar8) {
        return 1;
      }
LAB_01a1e4c0:
      if ((iVar12 == iVar5) && (iVar18 == iVar6)) {
        return uVar11;
      }
      fVar21 = ((float)iVar18 * 5.0 + (float)iVar16 * 5.0 + 5.0) * 0.5;
      if (fVar27 == 0.0) {
        param_1[2] = fVar21;
      }
      else {
        fVar23 = -5.0;
        if (fVar26 <= 0.0) {
          fVar23 = 5.0;
        }
        fVar24 = 5.0;
        if (fVar26 <= 0.0) {
          fVar24 = -5.0;
        }
        fVar27 = ((float)iVar15 * 5.0 + 5.0 + (float)iVar12 * 5.0) * 0.5;
        fVar25 = fVar22 + fVar26 * (fVar23 + fVar27);
        fVar24 = fVar22 + fVar26 * (fVar24 + fVar27);
        fVar23 = fVar21 + -5.0;
        if (fVar21 + -5.0 <= fVar25) {
          fVar23 = fVar25;
        }
        fVar25 = fVar21 + 5.0;
        if (fVar24 <= fVar21 + 5.0) {
          fVar25 = fVar24;
        }
        fVar21 = (fVar23 + fVar25) * 0.5;
        param_1[2] = fVar21;
        if (fVar26 != 0.0) {
          fVar27 = (fVar21 - fVar22) / fVar26;
        }
        *param_1 = fVar27;
      }
      return 2;
    }
    iVar19 = iVar17 + iVar13 * 2;
    iVar14 = iVar14 + iVar13 * 2;
    iVar12 = iVar17;
  } while( true );
  iVar18 = iVar12;
  iVar16 = iVar1;
  if (iVar17 < *(int *)(lVar20 + 0x20)) {
LAB_01a1e470:
    iVar12 = iVar17;
    goto LAB_01a1e474;
  }
  goto LAB_01a1e3a4;
}

