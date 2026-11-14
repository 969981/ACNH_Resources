
/* WARNING: Removing unreachable block (ram,0x01820738) */
/* WARNING: Removing unreachable block (ram,0x01820748) */
/* WARNING: Removing unreachable block (ram,0x01820754) */

undefined8 FUN_018206d0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  byte local_b8 [4];
  undefined4 local_b4;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  
  pfVar7 = (float *)FUN_0252d9bc(0);
  if (pfVar7 == (float *)0x0) {
    return 0;
  }
  fVar22 = *pfVar7;
  fVar20 = pfVar7[1];
  fVar23 = pfVar7[2];
  local_d8 = (undefined *)((ulong)local_d8._4_4_ << 0x20);
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar8 != 0) {
    fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
    fVar14 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
    fVar19 = fVar22 - fVar15;
    iVar5 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iVar6 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    local_d0 = (undefined *)CONCAT44(iVar6,iVar5);
    iVar2 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    fVar18 = (fVar23 - fVar14) / fVar19;
    fVar16 = 1.0;
    if (fVar23 - fVar14 < 0.0) {
      fVar16 = -1.0;
    }
    iVar3 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    fVar17 = 1.0;
    if (fVar19 < 0.0) {
      fVar17 = -1.0;
    }
    local_d8 = PTR_DAT_04bb2010 + 0x10;
    fVar21 = 0.0;
    if (fVar19 != 0.0) {
      fVar21 = fVar18;
    }
    fVar14 = fVar14 - fVar15 * fVar21;
    iVar12 = iVar6;
    local_b0 = local_d8;
    local_a8 = iVar5;
    local_a4 = iVar6;
    iVar10 = iVar5;
    while( true ) {
      iVar13 = iVar3;
      if (local_a8 != iVar2) {
        iVar13 = (int)((fVar14 + fVar21 * ((float)local_a8 * 5.0 + 2.5 + (float)(int)fVar17 * 5.0))
                      / 5.0);
      }
      if ((local_a8 < *(int *)(lVar8 + 0x20)) || (*(int *)(lVar8 + 0x30) < local_a8))
      goto LAB_01820920;
      while( true ) {
        if ((iVar12 < *(int *)(lVar8 + 0x24)) || (*(int *)(lVar8 + 0x34) < iVar12))
        goto LAB_01820920;
        local_e8 = (undefined *)
                   (CONCAT44(*(undefined4 *)(param_1 + 0x4a8),
                             (int)CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0x494))) ^ 1);
        uVar9 = FUN_01820f40(&local_b0,&local_d8,&local_e8);
        if ((uVar9 & 1) == 0) {
          iVar10 = (int)local_d0;
          goto LAB_01820920;
        }
        local_d0 = (undefined *)CONCAT44(local_a4,local_a8);
        iVar10 = local_a8;
        if (local_a4 == iVar13) break;
        iVar12 = local_a4 + (int)fVar16;
        local_a4 = iVar12;
        if ((local_a8 < *(int *)(lVar8 + 0x20)) || (*(int *)(lVar8 + 0x30) < local_a8))
        goto LAB_01820920;
      }
      if (local_a8 == iVar2) break;
      iVar12 = iVar13;
      local_a8 = local_a8 + (int)fVar17;
    }
    iVar10 = iVar2;
LAB_01820920:
    if ((iVar10 == iVar2) && (local_d0._4_4_ == iVar3)) {
LAB_01820a40:
      *(float *)(param_1 + 0x328) = fVar22;
      *(float *)(param_1 + 0x32c) = fVar20;
      *(float *)(param_1 + 0x330) = fVar23;
      FUN_018781fc(param_1);
      *(undefined1 *)(param_1 + 0x543) = 0;
      return 1;
    }
    if ((iVar10 != iVar5) || (local_d0._4_4_ != iVar6)) {
      fVar23 = (float)local_d0._4_4_ * 5.0 + 2.5;
      if (fVar19 != 0.0) {
        fVar22 = (float)iVar10 * 5.0 + 2.5;
        fVar15 = -5.0;
        if (fVar18 <= 0.0) {
          fVar15 = 5.0;
        }
        fVar16 = 5.0;
        if (fVar18 <= 0.0) {
          fVar16 = -5.0;
        }
        fVar19 = fVar14 + fVar18 * (fVar15 + fVar22);
        fVar16 = fVar14 + fVar18 * (fVar16 + fVar22);
        fVar15 = fVar23 + -5.0;
        if (fVar23 + -5.0 <= fVar19) {
          fVar15 = fVar19;
        }
        fVar19 = fVar23 + 5.0;
        if (fVar16 <= fVar23 + 5.0) {
          fVar19 = fVar16;
        }
        fVar23 = (fVar15 + fVar19) * 0.5;
        if (fVar18 != 0.0) {
          fVar22 = (fVar23 - fVar14) / fVar18;
        }
      }
      fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - fVar22;
      fVar14 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - fVar23;
      if (100.0 <= fVar14 * fVar14 + fVar15 * fVar15) goto LAB_01820a40;
    }
  }
  lVar8 = FUN_0252d9bc(0);
  if (lVar8 == 0) {
    return 0;
  }
  iVar5 = FUN_01317b90(lVar8,0);
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar5);
  iVar6 = FUN_01317b90(*(long *)(param_1 + 0x300) + 0x278,0);
  puVar4 = PTR_DAT_04bb2010;
  lVar11 = *(long *)(param_1 + 0x300);
  if (iVar5 == iVar6) {
    fVar14 = *(float *)(lVar11 + 0x27c);
  }
  else {
    fVar14 = *(float *)(lVar11 + 0x27c);
    fVar16 = *(float *)(lVar8 + 4) - fVar14;
    fVar15 = -fVar16;
    if (0.0 <= fVar16) {
      fVar15 = fVar16;
    }
    if (13.0 < fVar15) {
      return 0;
    }
  }
  local_b8[0] = *(byte *)(param_1 + 0x494) ^ 1;
  local_b4 = *(undefined4 *)(param_1 + 0x4a8);
  local_d8 = *(undefined **)(param_1 + 0x498);
  local_c8 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
  uStack_c4 = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
  local_c0 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = (int)((float)(int)*(float *)(lVar11 + 0x278) / 5.0) -
             (uint)(*(float *)(lVar11 + 0x278) < 0.0);
  local_a4 = (int)((float)(int)*(float *)(lVar11 + 0x280) / 5.0) -
             (uint)(*(float *)(lVar11 + 0x280) < 0.0);
  local_d0 = puVar1;
  local_b0 = puVar1;
  FUN_01946dd0(fVar14,&local_d8,&local_b0,local_b8);
  fVar15 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
  fVar14 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
  local_e0 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  local_a4 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iStack_dc = local_a4 + -1;
  local_e8 = puVar1;
  local_b0 = puVar1;
  local_a8 = local_e0;
  uVar9 = FUN_01820f40(&local_e8,&local_b0,local_b8);
  if ((uVar9 & 1) == 0) {
    fVar15 = 3.4028235e+38;
  }
  else {
    fVar16 = (float)iStack_dc * 5.0 + 2.5;
    fVar14 = (float)local_e0 * 5.0 + 2.5;
    fVar18 = fVar16 - pfVar7[2];
    fVar15 = fVar14 - *pfVar7;
    fVar18 = fVar18 * fVar18 + fVar15 * fVar15;
    fVar15 = 3.4028235e+38;
    if (fVar18 < 3.4028235e+38) {
      *(undefined1 *)(param_1 + 0x543) = 1;
      fVar22 = fVar14;
      fVar23 = fVar16;
      fVar15 = fVar18;
    }
  }
  iStack_dc = local_a4 + 1;
  local_e0 = local_a8;
  local_e8 = puVar1;
  uVar9 = FUN_01820f40(&local_e8,&local_b0,local_b8);
  if ((uVar9 & 1) != 0) {
    fVar16 = (float)local_e0 * 5.0 + 2.5;
    fVar14 = (float)iStack_dc * 5.0 + 2.5;
    fVar18 = fVar16 - *pfVar7;
    fVar19 = fVar14 - pfVar7[2];
    fVar18 = fVar19 * fVar19 + fVar18 * fVar18;
    if (fVar18 < fVar15) {
      *(undefined1 *)(param_1 + 0x543) = 1;
      fVar22 = fVar16;
      fVar23 = fVar14;
      fVar15 = fVar18;
    }
  }
  local_e0 = local_a8 + -1;
  iStack_dc = local_a4;
  local_e8 = puVar4 + 0x10;
  uVar9 = FUN_01820f40(&local_e8,&local_b0,local_b8);
  if ((uVar9 & 1) != 0) {
    fVar16 = (float)local_e0 * 5.0 + 2.5;
    fVar14 = (float)iStack_dc * 5.0 + 2.5;
    fVar18 = fVar16 - *pfVar7;
    fVar19 = fVar14 - pfVar7[2];
    fVar18 = fVar19 * fVar19 + fVar18 * fVar18;
    if (fVar18 < fVar15) {
      *(undefined1 *)(param_1 + 0x543) = 1;
      fVar22 = fVar16;
      fVar23 = fVar14;
      fVar15 = fVar18;
    }
  }
  local_e0 = local_a8 + 1;
  iStack_dc = local_a4;
  local_e8 = puVar4 + 0x10;
  uVar9 = FUN_01820f40(&local_e8,&local_b0,local_b8);
  if ((uVar9 & 1) != 0) {
    fVar16 = (float)local_e0 * 5.0 + 2.5;
    fVar14 = (float)iStack_dc * 5.0 + 2.5;
    fVar18 = fVar16 - *pfVar7;
    fVar19 = fVar14 - pfVar7[2];
    if (fVar19 * fVar19 + fVar18 * fVar18 < fVar15) {
      *(undefined1 *)(param_1 + 0x543) = 1;
      fVar22 = fVar16;
      fVar23 = fVar14;
    }
  }
  *(float *)(param_1 + 0x328) = fVar22;
  *(float *)(param_1 + 0x32c) = fVar20;
  *(float *)(param_1 + 0x330) = fVar23;
  FUN_018781fc(param_1);
  return 1;
}

