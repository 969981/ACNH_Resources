
/* WARNING: Removing unreachable block (ram,0x025226dc) */
/* WARNING: Removing unreachable block (ram,0x025224b8) */
/* WARNING: Removing unreachable block (ram,0x02522574) */
/* WARNING: Removing unreachable block (ram,0x025228e8) */

undefined8 FUN_02521940(float *param_1,float *param_2,float *param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  undefined8 local_260;
  undefined8 local_258;
  int local_250;
  int iStack_24c;
  undefined *local_248;
  int local_240;
  int iStack_23c;
  uint local_234;
  undefined *local_230;
  undefined *puStack_228;
  undefined8 local_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  int local_158 [2];
  undefined *local_150;
  int local_148 [2];
  undefined *local_140;
  undefined *puStack_138;
  int local_130;
  int local_12c;
  undefined *local_128;
  int local_120;
  int local_11c;
  undefined *local_118;
  undefined *puStack_110;
  int local_108;
  int local_104;
  undefined *local_100;
  int local_f8;
  int local_f4;
  undefined *local_f0;
  undefined *puStack_e8;
  int local_e0;
  int local_dc;
  undefined *local_d8;
  int local_d0;
  int local_cc;
  undefined *local_c8;
  undefined *puStack_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c [3];
  
  puVar1 = PTR_DAT_04bb2018;
  fVar23 = *param_3;
  fVar25 = param_3[2];
  puStack_228 = PTR_DAT_04bb2018 + 0x10;
  local_230 = PTR_DAT_04bbc5d8 + 0x10;
  local_170 = 0;
  local_210 = 0;
  local_1c0 = 0;
  local_98 = (int)((float)(int)fVar23 / 10.0) - (uint)(fVar23 < 0.0);
  local_220 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_180 = 0;
  local_94 = (int)((float)(int)fVar25 / 10.0) - (uint)(fVar25 < 0.0);
  local_234 = *param_4 + 0x10000000U >> 0x1d;
  local_b8 = (int)((float)(int)(fVar23 + -10.0) / 10.0) - (uint)(fVar23 + -10.0 < 0.0);
  iVar24 = (int)((float)(int)(fVar25 + -10.0) / 10.0) - (uint)(fVar25 + -10.0 < 0.0);
  local_a8 = local_b8 + 2;
  local_a4 = iVar24 + 2;
  if (local_234 == 4) {
    local_120 = local_b8 + 1;
    iVar27 = local_94 + -2;
    iVar21 = iVar24 + -3;
    iVar3 = iVar24 + -1;
    local_220 = CONCAT44(iVar21,local_b8);
    local_210 = CONCAT44(iVar3,local_a8);
    local_1f8 = CONCAT44(iVar21,local_b8 + -1);
    local_1e8 = CONCAT44(iVar3,local_120);
    local_1d0 = CONCAT44(iVar21,local_120);
    local_1c0 = CONCAT44(iVar3,local_b8 + 3);
    iVar21 = local_98;
    local_130 = local_b8 + -1;
    local_108 = local_120;
    local_104 = iVar24 + -2;
    local_f8 = local_b8 + 3;
    local_f4 = iVar24;
    local_94 = local_94 + -1;
  }
  else {
    iVar21 = 0;
    iVar27 = 0;
    local_130 = local_b8;
    local_120 = local_a8;
    local_108 = local_b8;
    local_104 = iVar24;
    local_f8 = local_a8;
    local_f4 = local_a4;
  }
  local_148[1] = local_f4;
  local_158[1] = local_104;
  if (local_234 == 2) {
    iVar27 = local_130 + 3;
    local_12c = local_104 + -1;
    local_130 = local_130 + 2;
    iVar3 = local_120 + 3;
    local_120 = local_120 + 2;
    local_1f8 = CONCAT44(local_12c,iVar27);
    local_11c = local_f4 + -1;
    iVar27 = local_108 + 3;
    iVar21 = local_98 + 2;
    local_108 = local_108 + 2;
    local_220 = CONCAT44(local_104,local_b8 + 3);
    local_104 = local_104 + 1;
    iVar20 = local_f8 + 3;
    local_f8 = local_f8 + 2;
    local_210 = CONCAT44(local_f4,local_b8 + 5);
    local_1e8 = CONCAT44(local_11c,iVar3);
    local_1d0 = CONCAT44(local_104,iVar27);
    local_1c0 = CONCAT44(local_f4 + 1,iVar20);
    iVar27 = local_94;
    local_158[0] = local_a8;
    local_148[0] = local_b8 + 4;
    local_f4 = local_f4 + 1;
    local_98 = local_98 + 1;
  }
  else {
    local_158[0] = local_b8;
    local_148[0] = local_a8;
    local_12c = local_104;
    local_11c = local_f4;
  }
  if (local_234 == 6) {
    iVar27 = local_158[0] + -3;
    local_158[0] = local_158[0] + -2;
    iVar3 = local_148[0] + -3;
    local_148[0] = local_148[0] + -2;
    iVar20 = local_130 + -3;
    local_130 = local_130 + -2;
    local_12c = local_12c + 1;
    local_11c = local_11c + 1;
    iVar4 = local_108 + -3;
    iVar5 = local_120 + -3;
    local_120 = local_120 + -2;
    local_108 = local_108 + -2;
    local_104 = local_104 + -1;
    iVar6 = local_f8 + -3;
    local_f8 = local_f8 + -2;
    local_f4 = local_f4 + -1;
    iVar21 = local_98 + -2;
    local_220 = CONCAT44(local_158[1],iVar27);
    local_210 = CONCAT44(local_148[1],iVar3);
    local_1f8 = CONCAT44(local_12c,iVar20);
    local_1e8 = CONCAT44(local_11c,iVar5);
    local_1d0 = CONCAT44(local_104,iVar4);
    local_1c0 = CONCAT44(local_f4,iVar6);
    iVar27 = local_94;
    local_98 = local_98 + -1;
  }
  if (local_234 == 0) {
    iVar21 = local_158[1] + 3;
    local_158[1] = local_158[1] + 2;
    iVar3 = local_148[1] + 3;
    local_148[1] = local_148[1] + 2;
    local_130 = local_130 + 1;
    iVar20 = local_12c + 3;
    local_12c = local_12c + 2;
    local_120 = local_120 + 1;
    iVar4 = local_11c + 3;
    local_11c = local_11c + 2;
    local_108 = local_108 + -1;
    iVar5 = local_104 + 3;
    local_104 = local_104 + 2;
    local_f8 = local_f8 + -1;
    iVar27 = local_94 + 2;
    local_220 = CONCAT44(iVar21,local_158[0]);
    local_210 = CONCAT44(iVar3,local_148[0]);
    local_1f8 = CONCAT44(iVar20,local_130);
    local_1e8 = CONCAT44(iVar4,local_120);
    local_1d0 = CONCAT44(iVar5,local_108);
    local_1c0 = CONCAT44(local_f4 + 3,local_f8);
    iVar21 = local_98;
    local_f4 = local_f4 + 2;
    local_94 = local_94 + 1;
  }
  if (local_234 == 3) {
    iVar27 = local_158[0] + 3;
    iVar21 = local_158[1] + -3;
    local_158[0] = local_158[0] + 2;
    local_158[1] = local_158[1] + -2;
    iVar3 = local_148[0] + 3;
    local_148[0] = local_148[0] + 2;
    iVar7 = local_148[1] + -3;
    local_148[1] = local_148[1] + -2;
    local_220 = CONCAT44(iVar21,iVar27);
    iVar20 = local_130 + 3;
    local_130 = local_130 + 2;
    iVar8 = local_12c + -2;
    local_12c = local_12c + -1;
    iVar4 = local_120 + 3;
    local_120 = local_120 + 2;
    iVar9 = local_11c + -2;
    local_11c = local_11c + -1;
    iVar5 = local_108 + 3;
    local_108 = local_108 + 2;
    iVar6 = local_f8 + 3;
    local_f8 = local_f8 + 2;
    iVar21 = local_98 + 2;
    iVar27 = local_94 + -2;
    local_210 = CONCAT44(iVar7,iVar3);
    local_1f8 = CONCAT44(iVar8,iVar20);
    local_1d0 = CONCAT44(local_104 + -1,iVar5);
    uVar18 = 5;
    local_1c0 = CONCAT44(local_f4 + -1,iVar6);
    local_1a8 = CONCAT44(iVar24 + -3,local_a8);
    local_1e8 = CONCAT44(iVar9,iVar4);
    local_198 = CONCAT44(iVar24 + -1,local_b8 + 4);
    local_180 = CONCAT44(iVar24 + -3,local_b8 + 1);
    local_170 = CONCAT44(iVar24 + -1,local_b8 + 3);
    local_e0 = local_b8 + 1;
    local_d0 = local_b8 + 3;
    local_b4 = iVar24 + -2;
    local_a4 = iVar24;
    local_98 = local_98 + 1;
    local_94 = local_94 + -1;
  }
  else {
    uVar18 = 3;
    local_e0 = local_b8;
    local_d0 = local_a8;
    local_b4 = iVar24;
  }
  if (local_234 == 5) {
    local_220 = CONCAT44(local_158[1] + -3,local_158[0] + -3);
    local_210 = CONCAT44(local_148[1] + -3,local_148[0] + -3);
    local_158[0] = local_158[0] + -2;
    local_158[1] = local_158[1] + -2;
    local_148[0] = local_148[0] + -2;
    local_148[1] = local_148[1] + -2;
    local_1f8 = CONCAT44(local_12c + -2,local_130 + -3);
    iVar24 = local_a4 + -3;
    local_1e8 = CONCAT44(local_11c + -2,local_120 + -3);
    local_1d0 = CONCAT44(local_104 + -1,local_108 + -3);
    local_1c0 = CONCAT44(local_f4 + -1,local_f8 + -3);
    iVar3 = local_d0 + -2;
    local_180 = CONCAT44(local_b4 + -3,local_b8 + -1);
    local_130 = local_130 + -2;
    local_1a8 = CONCAT44(local_b4 + -3,local_e0 + -2);
    local_12c = local_12c + -1;
    local_120 = local_120 + -2;
    local_11c = local_11c + -1;
    local_108 = local_108 + -2;
    local_f8 = local_f8 + -2;
    local_e0 = local_e0 + -1;
    local_b4 = local_b4 + -2;
    local_d0 = local_d0 + -1;
    local_a4 = local_a4 + -2;
    iVar21 = local_98 + -2;
    iVar27 = local_94 + -2;
    uVar18 = 5;
    local_198 = CONCAT44(iVar24,iVar3);
    local_170 = CONCAT44(iVar24,local_b8 + 1);
    local_98 = local_98 + -1;
    local_94 = local_94 + -1;
  }
  if (local_234 == 1) {
    local_220 = CONCAT44(local_158[1] + 3,local_158[0] + 3);
    local_210 = CONCAT44(local_148[1] + 3,local_148[0] + 3);
    iVar24 = local_130 + 3;
    local_158[0] = local_158[0] + 2;
    local_158[1] = local_158[1] + 2;
    local_148[0] = local_148[0] + 2;
    local_148[1] = local_148[1] + 2;
    local_130 = local_130 + 2;
    local_1f8 = CONCAT44(local_12c + 2,iVar24);
    iVar24 = local_a4 + 3;
    local_1e8 = CONCAT44(local_11c + 2,local_120 + 3);
    local_1d0 = CONCAT44(local_104 + 1,local_108 + 3);
    local_1c0 = CONCAT44(local_f4 + 1,local_f8 + 3);
    iVar3 = local_d0 + 2;
    local_180 = CONCAT44(local_b4 + 3,local_b8 + 1);
    local_12c = local_12c + 1;
    local_1a8 = CONCAT44(local_b4 + 3,local_e0 + 2);
    local_120 = local_120 + 2;
    local_11c = local_11c + 1;
    local_108 = local_108 + 2;
    local_f8 = local_f8 + 2;
    local_e0 = local_e0 + 1;
    local_b4 = local_b4 + 2;
    local_d0 = local_d0 + 1;
    local_a4 = local_a4 + 2;
    iVar21 = local_98 + 2;
    iVar27 = local_94 + 2;
    uVar18 = 5;
    local_198 = CONCAT44(iVar24,iVar3);
    local_170 = CONCAT44(iVar24,local_b8 + 3);
    local_98 = local_98 + 1;
    local_94 = local_94 + 1;
  }
  if (local_234 == 7) {
    local_220 = CONCAT44(local_158[1] + 3,local_158[0] + -3);
    local_210 = CONCAT44(local_148[1] + 3,local_148[0] + -3);
    local_1d0 = CONCAT44(local_104 + 1,local_108 + -3);
    iVar21 = local_98 + -2;
    iVar27 = local_94 + 2;
    local_1f8 = CONCAT44(local_12c + 2,local_130 + -3);
    local_1c0 = CONCAT44(local_f4 + 1,local_f8 + -3);
    local_198 = CONCAT44(local_a4 + 3,local_d0 + -2);
    uVar18 = 5;
    local_1e8 = CONCAT44(local_11c + 2,local_120 + -3);
    local_1a8 = CONCAT44(local_b4 + 3,local_e0 + -2);
    local_180 = CONCAT44(local_b4 + 3,local_b8 + -1);
    local_170 = CONCAT44(local_a4 + 3,local_b8 + 1);
    local_158[0] = local_158[0] + -2;
    local_158[1] = local_158[1] + 2;
    local_148[0] = local_148[0] + -2;
    local_148[1] = local_148[1] + 2;
    local_130 = local_130 + -2;
    local_12c = local_12c + 1;
    local_120 = local_120 + -2;
    local_11c = local_11c + 1;
    local_108 = local_108 + -2;
    local_f8 = local_f8 + -2;
    local_e0 = local_e0 + -1;
    local_d0 = local_d0 + -1;
    local_b4 = local_b4 + 2;
    local_a4 = local_a4 + 2;
    local_98 = local_98 + -1;
    local_94 = local_94 + 1;
  }
  puStack_218 = puStack_228;
  puStack_208 = local_230;
  local_200 = puStack_228;
  local_1f0 = puStack_228;
  local_1e0 = local_230;
  puStack_1d8 = puStack_228;
  puStack_1c8 = puStack_228;
  puStack_1b8 = local_230;
  local_1b0 = puStack_228;
  local_1a0 = puStack_228;
  local_190 = local_230;
  puStack_188 = puStack_228;
  puStack_178 = puStack_228;
  puStack_168 = local_230;
  local_160 = puStack_228;
  local_150 = puStack_228;
  local_140 = local_230;
  puStack_138 = puStack_228;
  local_128 = puStack_228;
  local_118 = local_230;
  puStack_110 = puStack_228;
  local_100 = puStack_228;
  local_f0 = local_230;
  puStack_e8 = puStack_228;
  local_dc = local_b4;
  local_d8 = puStack_228;
  local_cc = local_a4;
  local_c8 = local_230;
  puStack_c0 = puStack_228;
  local_b0 = puStack_228;
  local_a0 = puStack_228;
  uVar12 = FUN_00977640(&local_a0);
  if (((uVar12 & 1) != 0) && (uVar12 = FUN_01318220(&local_a0), (uVar12 & 1) == 0)) {
    uVar12 = 0;
    do {
      iVar3 = local_148[uVar12 * 10 + 1];
      iVar24 = local_158[uVar12 * 10 + 1];
      if (iVar3 + 1 == iVar24) {
LAB_0252251c:
        if (param_2 != (float *)0x0) {
          param_2[2] = (float)local_94 * 10.0 + 5.0;
          *param_2 = (float)local_98 * 10.0 + 5.0;
          if ((*(long *)PTR_DAT_04bb2200 == 0) ||
             (lVar17 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar17 == 0)) {
LAB_02522848:
            fVar23 = -100.0;
          }
          else {
            local_260 = (undefined *)((ulong)local_260 & 0xffffffff00000000);
            lVar17 = *(long *)(lVar17 + 0x118);
            if (lVar17 == 0) goto LAB_02522848;
            local_8c[0] = 0;
            fVar23 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,local_8c);
            if (local_8c[0] == 5) {
              fVar23 = 0.0;
              if ((*(long *)(lVar17 + 0x280) != 0) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
                pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x488) + 0xf0))(lVar17 + 0x488);
                fVar23 = *pfVar14;
              }
            }
            else {
              local_260 = (undefined *)CONCAT44(local_260._4_4_,local_8c[0]);
              lVar15 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_8c[0]);
              if (((lVar15 == 0) ||
                  (pcVar16 = (char *)FUN_009823a0(lVar15,0xd,0x58da05ed,
                                                  *(undefined8 *)PTR_DAT_04bb5d10),
                  pcVar16 == (char *)0x0)) || (*pcVar16 == '\0')) goto LAB_02522848;
              fVar25 = 0.0;
              if ((*(long *)(lVar17 + 0x280) != 0) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
                pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x458) + 0xf0))(lVar17 + 0x458);
                fVar25 = *pfVar14;
              }
              fVar23 = fVar23 + fVar25;
            }
          }
          if (fVar23 <= -4.0) {
            fVar23 = -4.0;
          }
          param_2[1] = fVar23;
        }
        if (param_1 == (float *)0x0) {
          return 1;
        }
        iVar27 = local_148[uVar12 * 10];
        iVar24 = local_158[uVar12 * 10];
        param_1[2] = ((float)local_158[uVar12 * 10 + 1] * 10.0 +
                     (float)local_148[uVar12 * 10 + 1] * 10.0 + 10.0) * 0.5;
        *param_1 = ((float)iVar24 * 10.0 + (float)iVar27 * 10.0 + 10.0) * 0.5;
        if ((*(long *)PTR_DAT_04bb2200 == 0) ||
           (lVar17 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar17 == 0)) {
LAB_025229c8:
          fVar23 = -100.0;
        }
        else {
          local_260 = (undefined *)((ulong)local_260._4_4_ << 0x20);
          lVar17 = *(long *)(lVar17 + 0x118);
          if (lVar17 == 0) goto LAB_025229c8;
          local_8c[0] = 0;
          fVar23 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1,local_8c);
          if (local_8c[0] == 5) {
            fVar23 = 0.0;
            if ((*(long *)(lVar17 + 0x280) != 0) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
              pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x488) + 0xf0))(lVar17 + 0x488);
              fVar23 = *pfVar14;
            }
          }
          else {
            local_260 = (undefined *)CONCAT44(local_260._4_4_,local_8c[0]);
            lVar15 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_8c[0]);
            if (((lVar15 == 0) ||
                (pcVar16 = (char *)FUN_009823a0(lVar15,0xd,0x58da05ed,
                                                *(undefined8 *)PTR_DAT_04bb5d10),
                pcVar16 == (char *)0x0)) || (*pcVar16 == '\0')) goto LAB_025229c8;
            fVar25 = 0.0;
            if ((*(long *)(lVar17 + 0x280) != 0) &&
               (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
              pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x458) + 0xf0))(lVar17 + 0x458);
              fVar25 = *pfVar14;
            }
            fVar23 = fVar23 + fVar25;
          }
        }
        if (fVar23 <= -4.0) {
          fVar23 = -4.0;
        }
        goto LAB_025229d8;
      }
      iVar4 = local_158[uVar12 * 10];
      uVar22 = 1;
      iVar20 = iVar4;
      do {
        local_258 = (undefined *)CONCAT44(iVar24,iVar20);
        local_260 = puVar1 + 0x10;
        uVar13 = FUN_00977640(&local_260);
        if (((uVar13 & 1) == 0) && (uVar13 = FUN_00977820(&local_260), (uVar13 & 1) == 0)) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_01318220(&local_260);
          uVar11 = uVar11 ^ 1;
        }
        if (iVar20 < local_148[uVar12 * 10]) {
          iVar20 = iVar20 + 1;
        }
        else {
          iVar20 = local_158[uVar12 * 10];
          iVar24 = iVar24 + 1;
        }
        uVar22 = uVar22 & uVar11;
      } while ((iVar4 != iVar20) || (iVar3 + 1 != iVar24));
      if (uVar22 != 0) goto LAB_0252251c;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar18);
  }
  uVar12 = FUN_00977990(&local_a0);
  if (((uVar12 & 1) != 0) || (uVar12 = FUN_00977b50(&local_a0), (uVar12 & 1) != 0)) {
    uVar12 = (ulong)uVar18;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    piVar19 = (int *)((long)&local_210 + 4);
    do {
      fVar26 = (float)piVar19[-4] * 10.0 + 2.5;
      fVar23 = (float)piVar19[-5] * 10.0 + 2.5;
      fVar25 = (float)piVar19[-1] * 10.0 + 10.0 + -2.5;
      local_240 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      iStack_23c = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
      fVar23 = (float)*piVar19 * 10.0 + 10.0 + -2.5;
      iVar24 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
      iVar3 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      local_250 = local_240;
      if (iVar24 <= local_240) {
        local_250 = iVar24;
      }
      if (local_240 <= iVar24) {
        local_240 = iVar24;
      }
      iStack_24c = iStack_23c;
      if (iVar3 <= iStack_23c) {
        iStack_24c = iVar3;
      }
      if (iStack_23c <= iVar3) {
        iStack_23c = iVar3;
      }
      local_260 = puVar1;
      local_258 = puVar2;
      local_248 = puVar2;
      uVar13 = FUN_00978db0(&local_260);
      puVar10 = PTR_DAT_04bb2200;
      if ((uVar13 & 1) != 0) {
        if (param_2 != (float *)0x0) {
          *param_2 = (float)iVar21 * 10.0 + 5.0;
          lVar17 = *(long *)puVar10;
          param_2[2] = (float)iVar27 * 10.0 + 5.0;
          if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x50), lVar17 == 0)) {
LAB_02522654:
            fVar23 = -100.0;
          }
          else {
            local_8c[0] = 0;
            lVar17 = *(long *)(lVar17 + 0x118);
            if (lVar17 == 0) goto LAB_02522654;
            local_90 = 0;
            fVar23 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_90);
            if (local_90 == 5) {
              fVar23 = 0.0;
              if ((*(long *)(lVar17 + 0x280) != 0) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
                pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x488) + 0xf0))(lVar17 + 0x488);
                fVar23 = *pfVar14;
              }
            }
            else {
              local_8c[0] = local_90;
              lVar15 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_90);
              if (((lVar15 == 0) ||
                  (pcVar16 = (char *)FUN_009823a0(lVar15,0xd,0x58da05ed,
                                                  *(undefined8 *)PTR_DAT_04bb5d10),
                  pcVar16 == (char *)0x0)) || (*pcVar16 == '\0')) goto LAB_02522654;
              fVar25 = 0.0;
              if ((*(long *)(lVar17 + 0x280) != 0) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
                pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x458) + 0xf0))(lVar17 + 0x458);
                fVar25 = *pfVar14;
              }
              fVar23 = fVar23 + fVar25;
            }
          }
          if (fVar23 <= -4.0) {
            fVar23 = -4.0;
          }
          param_2[1] = fVar23;
        }
        if (param_1 != (float *)0x0) {
          param_1[2] = ((float)iStack_24c * 5.0 + (float)iStack_23c * 5.0 + 5.0) * 0.5;
          *param_1 = ((float)local_250 * 5.0 + (float)local_240 * 5.0 + 5.0) * 0.5;
          lVar17 = *(long *)puVar10;
          if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x50), lVar17 == 0)) {
LAB_025227bc:
            fVar23 = -100.0;
          }
          else {
            local_8c[0] = 0;
            lVar17 = *(long *)(lVar17 + 0x118);
            if (lVar17 == 0) goto LAB_025227bc;
            local_90 = 0;
            fVar23 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_1,&local_90);
            if (local_90 == 5) {
              fVar23 = 0.0;
              if ((*(long *)(lVar17 + 0x280) != 0) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
                pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x488) + 0xf0))(lVar17 + 0x488);
                fVar23 = *pfVar14;
              }
            }
            else {
              local_8c[0] = local_90;
              lVar15 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_90);
              if (((lVar15 == 0) ||
                  (pcVar16 = (char *)FUN_009823a0(lVar15,0xd,0x58da05ed,
                                                  *(undefined8 *)PTR_DAT_04bb5d10),
                  pcVar16 == (char *)0x0)) || (*pcVar16 == '\0')) goto LAB_025227bc;
              fVar25 = 0.0;
              if ((*(long *)(lVar17 + 0x280) != 0) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x280) + 8), lVar17 != 0)) {
                pfVar14 = (float *)(**(code **)(*(long *)(lVar17 + 0x458) + 0xf0))(lVar17 + 0x458);
                fVar25 = *pfVar14;
              }
              fVar23 = fVar23 + fVar25;
            }
          }
          if (fVar23 <= -4.0) {
            fVar23 = -4.0;
          }
LAB_025229d8:
          param_1[1] = fVar23;
        }
        return 1;
      }
      piVar19 = piVar19 + 10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return 0;
}

