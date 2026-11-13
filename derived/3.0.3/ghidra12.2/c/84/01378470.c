
/* WARNING: Removing unreachable block (ram,0x0137869c) */
/* WARNING: Removing unreachable block (ram,0x01378680) */
/* WARNING: Removing unreachable block (ram,0x01378690) */
/* WARNING: Removing unreachable block (ram,0x013786bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01378470(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined ***pppuVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_42bc;
  undefined8 local_42b8;
  undefined8 local_42b0;
  undefined **local_4278;
  undefined **local_4270;
  undefined *local_4268;
  int local_4260;
  int local_425c;
  undefined1 local_4258 [4];
  undefined4 uStack_4254;
  float local_4250 [2];
  undefined8 auStack_4248 [2];
  undefined1 *puStack_4238;
  undefined8 local_4230;
  undefined ***apppuStack_4228 [3];
  undefined1 local_4210 [8];
  undefined1 auStack_4208 [8];
  undefined8 local_4200 [3];
  undefined1 local_41e8 [8];
  undefined1 local_41e0 [8];
  undefined8 local_41d8 [3];
  undefined1 local_41c0 [8];
  undefined1 local_41b8 [8];
  undefined8 local_41b0 [3];
  undefined1 local_4198 [8];
  undefined **appuStack_4190 [1985];
  undefined **local_388;
  undefined8 local_380;
  undefined1 *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined1 auStack_340 [56];
  undefined1 auStack_308 [400];
  undefined **ppuStack_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 auStack_154 [52];
  undefined *local_120;
  uint auStack_118 [14];
  undefined *local_e0;
  int local_d8;
  int local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  
  puStack_4238 = auStack_4208;
  apppuStack_4228[2] = &local_388;
  stack0xffffffffffffbdb4 = 0x1400000014;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c8 = PTR_DAT_04bb2010 + 0x10;
  auStack_118[6] = 0;
  auStack_118[7] = 0;
  auStack_118[8] = 0;
  auStack_118[9] = 0;
  auStack_118[2] = 0;
  auStack_118[3] = 0;
  auStack_118[4] = 0;
  auStack_118[5] = 0;
  auStack_118[0xc] = 0;
  local_4230 = 0;
  apppuStack_4228[0] = (undefined ***)0x0;
  auStack_4248[1] = 400;
  apppuStack_4228[1] = (undefined ***)0x0;
  local_120 = PTR_DAT_04bb5b30 + 0x10;
  auStack_118[10] = 0;
  auStack_118[0xb] = 0;
  auStack_118[0] = 0;
  auStack_118[1] = 0;
  local_e0 = PTR_DAT_04bb2e18 + 0x10;
  local_4210[0] = 0;
  local_b0 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  local_ac = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  iVar6 = local_b0 + -10;
  local_b0 = local_b0 + 9;
  iVar7 = local_ac + -10;
  local_ac = local_ac + 9;
  local_4278 = &puStack_c8;
  local_4270 = &local_b8;
  lVar14 = 0x50;
  do {
    *(undefined4 *)(local_4258 + lVar14 + 3) = 0;
    pppuVar4 = (undefined ***)((long)appuStack_4190 + lVar14);
    *(undefined4 *)(local_4258 + lVar14) = 0;
    *(undefined8 *)((long)local_4250 + lVar14) = 0;
    *(undefined8 *)((long)auStack_4248 + lVar14) = 0;
    *(undefined8 *)((long)auStack_4248 + lVar14 + 8) = 0;
    *(undefined1 *)((long)auStack_4248 + lVar14 + 0x10) = 0;
    *(undefined4 *)((long)apppuStack_4228 + lVar14 + -8) = 0;
    *(undefined4 *)((long)apppuStack_4228 + lVar14 + -5) = 0;
    *(undefined8 *)((long)apppuStack_4228 + lVar14 + 0x10) = 0;
    local_4210[lVar14] = 0;
    *(undefined4 *)(auStack_4208 + lVar14) = 0;
    *(undefined4 *)(auStack_4208 + lVar14 + 3) = 0;
    local_41e8[lVar14] = 0;
    *(undefined8 *)((long)local_4200 + lVar14) = 0;
    *(undefined4 *)(local_41e0 + lVar14 + 3) = 0;
    *(undefined4 *)(local_41e0 + lVar14) = 0;
    *(undefined8 *)((long)local_41d8 + lVar14 + 0x10) = 0;
    local_41c0[lVar14] = 0;
    *(undefined4 *)(local_41b8 + lVar14) = 0;
    *(undefined4 *)(local_41b8 + lVar14 + 3) = 0;
    *(undefined8 *)((long)local_41b0 + lVar14 + 0x10) = 0;
    local_4198[lVar14] = 0;
    *(undefined8 *)((long)apppuStack_4228 + lVar14) = 0;
    *(undefined8 *)((long)apppuStack_4228 + lVar14 + 8) = 0;
    *(undefined8 *)((long)local_4200 + lVar14 + 8) = 0;
    *(undefined8 *)((long)local_4200 + lVar14 + 0x10) = 0;
    *(undefined8 *)((long)local_41d8 + lVar14) = 0;
    *(undefined8 *)((long)local_41d8 + lVar14 + 8) = 0;
    *(undefined8 *)((long)local_41b0 + lVar14) = 0;
    *(undefined8 *)((long)local_41b0 + lVar14 + 8) = 0;
    lVar14 = lVar14 + 200;
  } while (pppuVar4 != apppuStack_4228[2]);
  local_360 = 0;
  local_378 = auStack_340;
  local_358 = 0;
  uStack_4254 = 0x200020;
  local_4250[0] = 1.8734772e-38;
  local_388 = &PTR_LAB_04993880;
  local_380 = 0xd00000190;
  local_4258._0_2_ = 0x20;
  local_350 = 0;
  local_348 = 0;
  local_370 = 0x14ffffffff;
  local_4258._2_2_ = 0x20;
  local_368 = 0x14;
  local_d8 = iVar6;
  local_d4 = iVar7;
  local_c0 = iVar6;
  iStack_bc = iVar7;
  local_b8 = puStack_c8;
  memset(auStack_308,0,400);
  local_170 = 0xd00000190;
  local_160 = 0x14ffffffff;
  local_168 = auStack_154;
  ppuStack_178 = &PTR_LAB_049938a0;
  local_158 = 0x14;
  FUN_0137a0f0(local_4258,&local_d0);
  iVar9 = local_c0;
  local_4260 = local_c0;
  local_425c = iStack_bc;
  local_4268 = PTR_DAT_04bb2010 + 0x10;
  iVar16 = local_ac + 1;
  if (iVar16 != iStack_bc) {
    do {
      uVar13 = FUN_0137a560(local_4258,&local_4268);
      if ((((local_d8 <= local_4260 && local_4260 <= local_d8 + 0x14) && (local_d4 <= local_425c))
          && (local_425c <= local_d4 + 0x14)) &&
         (((uint)(local_4260 - local_d8) < 0x14 && ((uint)(local_425c - local_d4) < 0x14)))) {
        uVar5 = (local_4260 - local_d8) + (local_425c - local_d4) * 0x14;
        uVar15 = 1 << (ulong)(uVar5 & 0x1f);
        uVar5 = uVar5 >> 5;
        if ((uVar13 & 1) == 0) {
          uVar15 = auStack_118[uVar5] & (uVar15 ^ 0xffffffff);
        }
        else {
          uVar15 = auStack_118[uVar5] | uVar15;
        }
        auStack_118[uVar5] = uVar15;
      }
      if (local_4260 < *(int *)(local_4270 + 1)) {
        local_4260 = local_4260 + 1;
      }
      else {
        local_425c = local_425c + 1;
        local_4260 = *(int *)(local_4278 + 1);
      }
    } while (iVar9 != local_4260 || iVar16 != local_425c);
    iVar16 = local_ac + 1;
  }
  iVar11 = local_c0;
  iVar10 = local_d4;
  iVar9 = local_d8;
  if (iVar16 != iStack_bc) {
    iVar1 = iStack_bc + 0x14;
    iVar2 = local_d4 + 0x14;
    iVar3 = local_d8 + 0x14;
    local_42bc = 0;
    fVar25 = 3.4028235e+38;
    local_42b8 = 0;
    local_42b0 = 0;
    fVar21 = (float)(local_c0 + 8) * 5.0;
    fVar26 = 3.4028235e+38;
    fVar27 = fVar21 + 5.0;
    iVar17 = iStack_bc;
    iVar18 = local_c0;
    do {
      uVar15 = iVar18 - iVar9;
      if (((iVar9 > iVar18 || iVar3 < iVar18) || (iVar17 < iVar10)) ||
         ((iVar2 < iVar17 ||
          (((0x13 < uVar15 || (0x13 < (uint)(iVar17 - iVar10))) ||
           (uVar5 = uVar15 + (iVar17 - iVar10) * 0x14,
           (auStack_118[uVar5 >> 5] >> (ulong)(uVar5 & 0x1f) & 1) != 0)))))) {
        uVar13 = FUN_0137ab4c(iVar18,iVar17,0);
        fVar21 = extraout_s0;
        if ((uVar13 & 1) == 0) {
          uVar13 = FUN_0137ab4c(iVar18,iVar17,1);
          fVar21 = extraout_s0_00;
          if ((uVar13 & 1) == 0) {
            if ((((uint)(iVar17 - iVar7) < 0x14) &&
                (iVar19 = iVar18 + 3, (uint)(iVar19 - iVar6) < 0x14)) &&
               ((((iVar9 <= iVar19 && ((iVar19 <= iVar3 && (iVar10 <= iVar17)))) &&
                 (iVar17 <= iVar2)) &&
                ((((((uint)(iVar19 - iVar9) < 0x14 && ((uint)(iVar17 - iVar10) < 0x14)) &&
                   (iVar20 = (iVar17 - iVar10) * 0x14, uVar5 = iVar20 + (iVar19 - iVar9),
                   (auStack_118[uVar5 >> 5] >> (ulong)(uVar5 & 0x1f) & 1) != 0)) &&
                  ((uVar5 = (iVar18 + 2) - iVar9, iVar9 <= iVar18 + 2 && (uVar5 < 0x14)))) &&
                 (uVar5 = iVar20 + uVar5,
                 (auStack_118[uVar5 >> 5] >> (ulong)(uVar5 & 0x1f) & 1) != 0)))))) {
              uVar13 = FUN_0137ab4c(iVar19,iVar17,0);
              fVar21 = extraout_s0_01;
              if ((uVar13 & 1) != 0) goto LAB_01378994;
              uVar13 = FUN_0137ab4c(iVar19,iVar17,1);
              fVar28 = 0.0;
              fVar21 = extraout_s0_02;
              iVar20 = iVar17;
              if ((uVar13 & 1) != 0) goto LAB_01378994;
LAB_01378a60:
              local_4258 = (undefined1  [4])((float)iVar18 * 5.0 + 5.0);
              local_4250[0] = (float)iVar17 * 5.0 + 5.0;
              local_4278 = (undefined **)CONCAT44(local_4278._4_4_,(float)iVar19 * 5.0 + 5.0);
              local_4270 = (undefined **)CONCAT44(local_4270._4_4_,(float)iVar20 * 5.0 + 5.0);
              lVar14 = *(long *)PTR_DAT_04bb27c8;
              if (lVar14 == 0) {
                fVar22 = -500.0;
                fVar21 = -500.0;
              }
              else {
                if ((*(long *)(lVar14 + 0xa8) == 0) || (*(char *)(lVar14 + 0x11c8) != '\0')) {
                  fVar22 = -500.0;
LAB_01378ad0:
                  if ((*(long *)(lVar14 + 0xa8) != 0) && (*(char *)(lVar14 + 0x11c8) == '\0')) {
                    fVar21 = (float)FUN_0093a950(lVar14 + 0x28,&local_4278,0);
                    goto LAB_01378b80;
                  }
                }
                else {
                  fVar22 = (float)FUN_0093a950(lVar14 + 0x28,local_4258,0);
                  lVar14 = *(long *)PTR_DAT_04bb27c8;
                  if (lVar14 != 0) goto LAB_01378ad0;
                }
                fVar21 = -500.0;
              }
LAB_01378b80:
              fVar22 = fVar22 - fVar21;
              fVar21 = -fVar22;
              if (0.0 <= fVar22) {
                fVar21 = fVar22;
              }
              if (fVar21 <= 5.0) {
                fVar23 = (float)local_4258 - fVar27;
                fVar24 = local_4250[0] - ((float)iVar1 * 5.0 + 5.0);
                fVar22 = SQRT((param_3[2] - local_4250[0]) * (param_3[2] - local_4250[0]) +
                              (*param_3 - (float)local_4258) * (*param_3 - (float)local_4258)) +
                         -45.0;
                fVar21 = -fVar22;
                if (0.0 <= fVar22) {
                  fVar21 = fVar22;
                }
                fVar22 = fVar24 * fVar24 + fVar23 * fVar23;
                fVar21 = fVar28 + fVar21;
                bVar12 = false;
                if ((fVar21 + -10.0 < fVar25) && (bVar12 = false, !NAN(fVar22) && !NAN(fVar26))) {
                  bVar12 = fVar22 < fVar26;
                }
                if (bVar12) {
                  local_42b0 = CONCAT44(1,iVar20);
                  local_42b8 = CONCAT44(iVar19,iVar17);
                  fVar25 = fVar21;
                  fVar26 = fVar22;
                  local_42bc = iVar18;
                }
              }
            }
            else {
LAB_01378994:
              if ((((((uint)(iVar18 - iVar6) < 0x14) &&
                    (iVar20 = iVar17 + 3, (uint)(iVar20 - iVar7) < 0x14)) &&
                   ((iVar9 <= iVar18 && iVar18 <= iVar3 &&
                    (((iVar10 <= iVar20 && (iVar20 <= iVar2)) && (uVar15 < 0x14)))))) &&
                  (((uint)(iVar20 - iVar10) < 0x14 &&
                   (uVar5 = uVar15 + (iVar20 - iVar10) * 0x14,
                   (auStack_118[uVar5 >> 5] >> (ulong)(uVar5 & 0x1f) & 1) != 0)))) &&
                 ((uVar5 = (iVar17 + 2) - iVar10, iVar10 <= iVar17 + 2 &&
                  ((uVar5 < 0x14 &&
                   (uVar15 = uVar15 + uVar5 * 0x14,
                   (auStack_118[uVar15 >> 5] >> (ulong)(uVar15 & 0x1f) & 1) != 0)))))) {
                uVar13 = FUN_0137ab4c(iVar18,iVar20,0);
                fVar21 = extraout_s0_03;
                if ((uVar13 & 1) == 0) {
                  uVar13 = FUN_0137ab4c(iVar18,iVar20,1);
                  fVar21 = extraout_s0_04;
                  if ((uVar13 & 1) == 0) {
                    fVar28 = 22.5;
                    iVar19 = iVar18;
                    goto LAB_01378a60;
                  }
                }
              }
            }
          }
        }
      }
      if (iVar18 < local_b0) {
        iVar18 = iVar18 + 1;
      }
      else {
        iVar17 = iVar17 + 1;
        iVar18 = local_c0;
      }
    } while ((iVar11 != iVar18) || (iVar16 != iVar17));
    if ((local_42b0 & 0x100000000) != 0) {
      if (param_1 != (float *)0x0) {
        *param_1 = (float)local_42bc * 5.0 + 5.0;
        fVar21 = (float)(int)local_42b8 * 5.0 + 5.0;
        param_1[2] = fVar21;
      }
      puVar8 = PTR_DAT_04bb27c8;
      if (param_2 == (float *)0x0) {
        fVar25 = _DAT_00000008;
      }
      else {
        fVar21 = (float)local_42b8._4_4_ * 5.0 + 5.0;
        fVar25 = (float)(int)local_42b0 * 5.0 + 5.0;
        *param_2 = fVar21;
        param_2[2] = fVar25;
      }
      fVar21 = fVar21 - *param_1;
      fVar25 = fVar25 - param_1[2];
      fVar27 = 0.0;
      fVar26 = SQRT(fVar21 * fVar21 + 0.0 + fVar25 * fVar25);
      if (0.0 < fVar26) {
        fVar26 = 1.0 / fVar26;
        fVar21 = fVar21 * fVar26;
        fVar25 = fVar25 * fVar26;
        fVar27 = fVar26 * 0.0 * 1.25;
      }
      *param_1 = *param_1 + fVar21 * 1.25;
      param_1[2] = param_1[2] + fVar25 * 1.25;
      param_1[1] = param_1[1] + fVar27;
      *param_2 = *param_2 - fVar21 * 1.25;
      param_2[1] = param_2[1] - fVar27;
      lVar14 = *(long *)puVar8;
      param_2[2] = param_2[2] - fVar25 * 1.25;
      if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) || (*(char *)(lVar14 + 0x11c8) != '\0')
         ) {
        fVar21 = -500.0;
      }
      else {
        fVar21 = (float)FUN_0093a950(lVar14 + 0x28,param_1,0);
      }
      param_1[1] = fVar21;
      lVar14 = *(long *)puVar8;
      if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) || (*(char *)(lVar14 + 0x11c8) != '\0')
         ) {
        fVar21 = -500.0;
      }
      else {
        fVar21 = (float)FUN_0093a950(lVar14 + 0x28,param_2,0);
      }
      param_2[1] = fVar21;
      return 1;
    }
  }
  return 0;
}

