
/* WARNING: Removing unreachable block (ram,0x022072e4) */
/* WARNING: Removing unreachable block (ram,0x02207568) */
/* WARNING: Removing unreachable block (ram,0x022074c8) */

void FUN_02207210(int param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
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
  float fVar24;
  float fVar25;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  float local_e4;
  int local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  uint local_ac;
  
  puVar5 = PTR_DAT_04bb30a0;
  puVar1 = PTR_DAT_04bb2010;
  local_dc = param_1;
  if (param_1 == 2) {
    local_d8 = (undefined *)((ulong)local_d8._4_4_ << 0x20);
    local_d0 = (char *)((ulong)local_d0 & 0xffffffff00000000);
    local_110 = PTR_DAT_04bb2020 + 0x10;
    local_108 = &DAT_040c9d84;
    FUN_021da1b0(&local_d8,&local_110);
    fVar14 = local_d0._0_4_ - param_2[2];
    fVar19 = (float)local_d8 - *param_2;
    goto LAB_02207874;
  }
  if (param_1 != 1) {
    if (param_1 != 0) {
      return;
    }
    local_ac = 1;
    local_100 = 0;
    local_d8._0_4_ = 1.4013e-45;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_f0 = 0;
    uVar8 = 0x6e090aaa;
    if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1) {
      uVar8 = 0x55acd0a6;
    }
    local_110 = puVar1;
    local_108 = puVar2;
    local_f8 = puVar2;
    uVar9 = FUN_0118ad90(&local_110,uVar8);
    fVar20 = 5.0;
    fVar21 = 5.0;
    fVar19 = 5.0;
    if ((uVar9 & 1) != 0) {
      if (3 < local_ac) {
        local_ac = 0;
      }
      fVar21 = (float)((&DAT_05300528)[(ulong)local_ac * 8] + (int)local_100) * 5.0 + 5.0;
      fVar19 = (float)((&DAT_0530052c)[(ulong)local_ac * 8] + local_100._4_4_) * 5.0 + 5.0;
    }
    local_ac = 2;
    local_100 = 0;
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,2);
    local_f0 = 0;
    uVar8 = 0x3b84b490;
    if (*(int *)(*(long *)puVar5 + 0x65204) != 1) {
      uVar8 = 0x995cbf71;
    }
    local_110 = puVar1;
    local_108 = puVar2;
    local_f8 = puVar2;
    uVar9 = FUN_0118ad90(&local_110,uVar8);
    fVar14 = 5.0;
    if ((uVar9 & 1) != 0) {
      uVar11 = local_ac;
      if (3 < local_ac) {
        uVar11 = 0;
      }
      fVar20 = (float)((&DAT_05300528)[(ulong)uVar11 * 8] + (int)local_100) * 5.0 + 5.0;
      fVar14 = (float)((&DAT_0530052c)[(ulong)uVar11 * 8] + local_100._4_4_) * 5.0 + 5.0;
    }
    fVar14 = ((fVar19 + fVar14) * 0.5 + -5.0) - param_2[2];
    fVar19 = (fVar21 + fVar20) * 0.5 - *param_2;
    goto LAB_02207874;
  }
  local_ac = 0;
  local_100 = 0;
  local_d8 = (undefined *)((ulong)local_d8._4_4_ << 0x20);
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  local_f0 = 0;
  uVar8 = 0x6e090aaa;
  if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1) {
    uVar8 = 0x55acd0a6;
  }
  local_110 = puVar3;
  local_108 = puVar4;
  local_f8 = puVar4;
  uVar9 = FUN_0118ad90(&local_110,uVar8);
  fVar20 = 5.0;
  fVar14 = 5.0;
  fVar19 = 5.0;
  if ((uVar9 & 1) != 0) {
    if (3 < local_ac) {
      local_ac = 0;
    }
    fVar19 = (float)((&DAT_05300528)[(ulong)local_ac * 8] + (int)local_100) * 5.0 + 5.0;
    fVar14 = (float)((&DAT_0530052c)[(ulong)local_ac * 8] + local_100._4_4_) * 5.0 + 5.0;
  }
  local_110 = (undefined *)CONCAT44(local_110._4_4_,fVar19);
  local_108 = (undefined *)CONCAT44(local_108._4_4_,fVar14);
  local_b0 = 1;
  local_ac = 1;
  local_c8 = 0;
  uStack_b8 = 0;
  uVar8 = 0x6e090aaa;
  if (*(int *)(*(long *)puVar5 + 0x65204) != 1) {
    uVar8 = 0x55acd0a6;
  }
  local_d8 = puVar3;
  local_d0 = puVar4;
  local_c0 = puVar4;
  uVar9 = FUN_0118ad90(&local_d8,uVar8);
  fVar21 = 5.0;
  fVar22 = 5.0;
  if ((uVar9 & 1) != 0) {
    if (3 < local_b0) {
      local_b0 = 0;
    }
    fVar22 = (float)((&DAT_05300528)[(ulong)local_b0 * 8] + (int)local_c8) * 5.0 + 5.0;
    fVar21 = (float)((&DAT_0530052c)[(ulong)local_b0 * 8] + local_c8._4_4_) * 5.0 + 5.0;
  }
  local_108 = (undefined *)CONCAT44(fVar22,(undefined4)local_108);
  local_100 = CONCAT44(fVar21,(int)local_100);
  puVar1 = puVar1 + 0x10;
  local_b0 = 2;
  uStack_b8 = 0;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = 0;
  local_ac = 2;
  uVar8 = 0x3b84b490;
  if (*(int *)(*(long *)puVar5 + 0x65204) != 1) {
    uVar8 = 0x995cbf71;
  }
  local_d8 = puVar3;
  local_d0 = puVar1;
  local_c0 = puVar1;
  uVar9 = FUN_0118ad90(&local_d8,uVar8);
  fVar23 = 5.0;
  fVar24 = 5.0;
  if ((uVar9 & 1) != 0) {
    if (3 < local_b0) {
      local_b0 = 0;
    }
    fVar24 = (float)((&DAT_05300528)[(ulong)local_b0 * 8] + (int)local_c8) * 5.0 + 5.0;
    fVar23 = (float)((&DAT_0530052c)[(ulong)local_b0 * 8] + local_c8._4_4_) * 5.0 + 5.0;
  }
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,fVar24);
  local_f0 = CONCAT44(local_f0._4_4_,fVar23);
  local_b0 = 3;
  local_ac = 3;
  local_c8 = 0;
  uStack_b8 = 0;
  uVar8 = 0x3b84b490;
  if (*(int *)(*(long *)puVar5 + 0x65204) != 1) {
    uVar8 = 0x995cbf71;
  }
  local_d8 = puVar3;
  local_d0 = puVar1;
  local_c0 = puVar1;
  uVar9 = FUN_0118ad90(&local_d8,uVar8);
  fVar25 = 5.0;
  if ((uVar9 & 1) != 0) {
    uVar11 = local_b0;
    if (3 < local_b0) {
      uVar11 = 0;
    }
    fVar25 = (float)((&DAT_05300528)[(ulong)uVar11 * 8] + (int)local_c8) * 5.0 + 5.0;
    fVar20 = (float)((&DAT_0530052c)[(ulong)uVar11 * 8] + local_c8._4_4_) * 5.0 + 5.0;
  }
  local_f0 = CONCAT44(fVar25,(undefined4)local_f0);
  local_d8 = PTR_DAT_04bb2020 + 0x10;
  local_d0 = "HarvestProgress";
  local_e4 = fVar20;
  uVar9 = FUN_0273ea30(&local_d8);
  iVar7 = (int)uVar9;
  if (iVar7 < 1) {
    fVar16 = param_2[2];
    uVar11 = 0;
    fVar15 = *param_2;
LAB_02207858:
    fVar14 = *(float *)((long)&local_108 + (ulong)uVar11 * 0xc);
    fVar19 = *(float *)((long)&local_110 + (ulong)uVar11 * 0xc);
  }
  else {
    fVar15 = *param_2;
    fVar16 = param_2[2];
    if (iVar7 == 1) {
      uVar11 = 0;
      goto LAB_02207858;
    }
    fVar17 = (fVar16 - fVar14) * (fVar16 - fVar14) + (fVar15 - fVar19) * (fVar15 - fVar19);
    fVar22 = (fVar16 - fVar21) * (fVar16 - fVar21) + (fVar15 - fVar22) * (fVar15 - fVar22);
    fVar21 = (float)NEON_fminnm(fVar17,0x47c35000);
    uVar11 = (uint)(fVar22 < fVar21);
    if (iVar7 == 2) goto LAB_02207858;
    fVar18 = fVar22;
    if (fVar21 <= fVar22) {
      fVar18 = fVar21;
    }
    fVar23 = (fVar16 - fVar23) * (fVar16 - fVar23) + (fVar15 - fVar24) * (fVar15 - fVar24);
    uVar12 = 2;
    if (fVar18 <= fVar23) {
      uVar12 = (uint)(fVar22 < fVar21);
    }
    uVar11 = uVar12;
    if (iVar7 == 3) goto LAB_02207858;
    if (fVar18 <= fVar23) {
      fVar23 = fVar18;
    }
    fVar20 = (fVar16 - fVar20) * (fVar16 - fVar20) + (fVar15 - fVar25) * (fVar15 - fVar25);
    uVar11 = 3;
    if (fVar23 <= fVar20) {
      uVar11 = uVar12;
    }
    if (iVar7 == 4) goto LAB_02207858;
    if (fVar23 <= fVar20) {
      fVar20 = fVar23;
    }
    if (iVar7 == 5) {
      uVar12 = 4;
    }
    else {
      lVar13 = 0;
      uVar12 = 4;
      uVar10 = uVar11;
      do {
        uVar11 = uVar12;
        fVar21 = fVar17;
        if (fVar20 <= fVar17) {
          uVar11 = uVar10;
          fVar21 = fVar20;
        }
        fVar20 = fVar21;
        bVar6 = lVar13 != (uVar9 & 0xfffffffe) - 6;
        lVar13 = lVar13 + 2;
        uVar12 = uVar12 + 2;
        uVar10 = uVar11;
      } while (bVar6);
    }
    if (fVar20 <= fVar17) {
      uVar12 = uVar11;
    }
    if ((uVar9 & 1) != 0) {
      uVar11 = uVar12;
    }
    if (uVar11 < 4) goto LAB_02207858;
  }
  fVar14 = fVar14 - fVar16;
  fVar19 = fVar19 - fVar15;
LAB_02207874:
  uVar8 = FUN_006f0400(fVar19,fVar14);
  *param_3 = uVar8;
  return;
}

