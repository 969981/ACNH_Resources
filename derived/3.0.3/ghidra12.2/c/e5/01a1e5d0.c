
/* WARNING: Removing unreachable block (ram,0x01a1e624) */
/* WARNING: Removing unreachable block (ram,0x01a1e634) */

undefined4 FUN_01a1e5d0(float *param_1,float *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined **local_c0;
  int local_b8;
  int iStack_b4;
  undefined8 *local_b0;
  int local_a8;
  int local_a4;
  
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar15 == 0) {
    return 0x3c;
  }
  fVar18 = *param_2;
  fVar20 = *param_1;
  fVar19 = param_2[2];
  fVar24 = fVar20 - fVar18;
  iVar1 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar2 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  fVar21 = param_1[2];
  fVar23 = (fVar21 - fVar19) / fVar24;
  iVar17 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  fVar20 = 1.0;
  if (fVar21 - fVar19 < 0.0) {
    fVar20 = -1.0;
  }
  fVar22 = 1.0;
  if (fVar24 < 0.0) {
    fVar22 = -1.0;
  }
  iVar12 = (int)fVar20;
  fVar20 = 0.0;
  if (fVar24 != 0.0) {
    fVar20 = fVar23;
  }
  iVar3 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar7 = (int)fVar22;
  fVar19 = fVar19 - fVar18 * fVar20;
  local_b0 = &DAT_048f9750;
  local_c0 = &PTR_FUN_048f9730;
  iVar16 = iVar1;
  iVar9 = iVar2;
  local_a8 = iVar1;
  local_a4 = iVar2;
  do {
    iVar13 = iVar3;
    if (local_a8 != iVar17) {
      fVar18 = fVar19 + fVar20 * ((float)local_a8 * 5.0 + 2.5 + (float)(int)fVar22 * 2.5);
      iVar13 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    }
    iVar14 = iVar9;
    if ((local_a8 < *(int *)(lVar15 + 0x20)) || (*(int *)(lVar15 + 0x30) < local_a8)) {
LAB_01a1e8cc:
      if (local_a8 == iVar16) {
        local_a8 = iVar16;
        local_a4 = iVar14;
LAB_01a1e8dc:
        uVar10 = 8;
        iVar13 = local_a4;
        if (iVar12 < 1) {
          uVar10 = 4;
        }
      }
      else {
        uVar10 = 0x20;
        local_a8 = iVar16;
        iVar13 = iVar14;
        if (iVar7 < 1) {
          uVar10 = 0x10;
        }
      }
joined_r0x01a1e91c:
      bVar4 = local_a8 == iVar17;
      iVar17 = local_a8;
      if (bVar4) goto LAB_01a1e920;
      goto LAB_01a1e948;
    }
    iVar5 = local_a4;
    while( true ) {
      local_a4 = iVar5;
      if ((iVar9 < *(int *)(lVar15 + 0x24)) || (*(int *)(lVar15 + 0x34) < iVar9)) goto LAB_01a1e8cc;
      fVar18 = (float)local_a8 * 0.5;
      uVar11 = 0;
      if (fVar18 != (float)(int)fVar18) {
        uVar11 = (uint)(fVar18 < 0.0);
      }
      local_b8 = (int)fVar18 - uVar11;
      fVar18 = (float)iVar9 * 0.5;
      uVar11 = 0;
      if (fVar18 != (float)(int)fVar18) {
        uVar11 = (uint)(fVar18 < 0.0);
      }
      iStack_b4 = (int)fVar18 - uVar11;
      uVar6 = (*param_3)(param_2[1],&local_c0,&local_b0,param_4);
      if ((uVar6 & 1) == 0) {
        if (local_a8 == iVar16) {
          uVar8 = 4;
          uVar10 = 8;
          iVar7 = iVar12;
        }
        else {
          uVar10 = 0x20;
          uVar8 = 0x10;
        }
        local_a8 = iVar16;
        iVar13 = iVar14;
        if (iVar7 < 1) {
          uVar10 = uVar8;
        }
        goto joined_r0x01a1e91c;
      }
      iVar16 = local_a8;
      if (local_a4 == iVar13) break;
      iVar9 = local_a4 + iVar12;
      if (local_a8 < *(int *)(lVar15 + 0x20)) goto LAB_01a1e8dc;
      iVar14 = local_a4;
      iVar5 = iVar9;
      if (*(int *)(lVar15 + 0x30) < local_a8) goto LAB_01a1e8dc;
    }
    if (local_a8 == iVar17) {
      uVar10 = 0;
LAB_01a1e920:
      local_a8 = iVar17;
      if (iVar13 == iVar3) {
        return 1;
      }
LAB_01a1e948:
      if ((local_a8 == iVar1) && (iVar13 == iVar2)) {
        return uVar10;
      }
      fVar18 = (float)iVar13 * 5.0 + 2.5;
      if (fVar24 == 0.0) {
        param_1[2] = fVar18;
      }
      else {
        fVar20 = 1.0;
        if (fVar23 < 0.0) {
          fVar20 = -1.0;
        }
        fVar21 = (float)local_a8 * 5.0 + 2.5;
        fVar24 = fVar19 + fVar23 * (fVar21 + fVar20 * -2.5);
        fVar22 = fVar19 + fVar23 * (fVar21 + fVar20 * 2.5);
        fVar20 = fVar18 + -2.5;
        if (fVar18 + -2.5 <= fVar24) {
          fVar20 = fVar24;
        }
        fVar24 = fVar18 + 2.5;
        if (fVar22 <= fVar18 + 2.5) {
          fVar24 = fVar22;
        }
        fVar18 = (fVar20 + fVar24) * 0.5;
        param_1[2] = fVar18;
        if (fVar23 != 0.0) {
          fVar21 = (fVar18 - fVar19) / fVar23;
        }
        *param_1 = fVar21;
      }
      return 2;
    }
    iVar9 = iVar13;
    local_a8 = local_a8 + iVar7;
  } while( true );
}

