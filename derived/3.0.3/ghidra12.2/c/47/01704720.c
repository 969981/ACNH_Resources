
/* WARNING: Removing unreachable block (ram,0x01704bb8) */
/* WARNING: Removing unreachable block (ram,0x01704ab4) */
/* WARNING: Removing unreachable block (ram,0x01705648) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01704720(long *param_1)

{
  ulong *puVar1;
  float *pfVar2;
  bool bVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  char cVar17;
  uint *puVar18;
  int *piVar19;
  byte bVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  char *pcVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined1 local_12d;
  undefined4 local_128;
  bool local_124;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float fStack_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  undefined4 local_84;
  
  (**(code **)(*param_1 + 0x1c8))();
  (**(code **)(*param_1 + 0x1e0))(param_1);
  if ((char)param_1[0xbe7] != '\0') {
    (**(code **)(*param_1 + 0x4f0))(param_1,param_1 + 0xbe1);
  }
  puVar14 = PTR_DAT_04bb43c0;
  puVar1 = (ulong *)(param_1[0x290] + ((ulong)*(uint *)(param_1[0x290] + 0x10) & 1) * 0x20 + 0x14);
  uVar15 = *puVar1;
  uVar10 = *puVar1;
  local_b0 = (long *)*puVar1;
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_b0);
  lVar23 = *(long *)puVar14;
  if (lVar23 != 0) {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar25 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      uVar7 = FUN_0277d6c4(&local_b0);
      puVar4 = PTR_DAT_04bc0510;
      lVar25 = *(long *)puVar14;
      if (lVar25 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          local_170 = (long *)(PTR_DAT_04bc0510 + 0x10);
          local_160 = (undefined *)0x0;
          uStack_168 = (char *)uVar10;
          uVar7 = FUN_0277d6c4(&uStack_168);
          if (*(long *)puVar14 != 0) {
            lVar23 = *(long *)(lVar25 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              lVar23 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(&local_b0);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
                 (puVar13 = *(undefined **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8),
                 puVar13 != (undefined *)0x0)) {
                local_160 = puVar13;
              }
            }
          }
          local_108 = local_108 & 0xffffffffffff0000;
          FUN_01adab50(&local_170,&local_108);
          fVar26 = 0.0;
          do {
            local_f8 = CONCAT44(local_f8._4_4_,fVar26);
            if ((fVar26 != 0.0) && (local_ec = fVar26, (uint)fVar26 < 0xe)) {
              fVar28 = (float)((int)fVar26 + 7);
              if (-1 < (int)fVar26) {
                fVar28 = fVar26;
              }
              local_e0 = fVar26;
              if (((uint)((int)fVar28 >> 3) < 2) &&
                 ((*(byte *)((long)&local_108 + (ulong)(uint)((int)fVar28 >> 3)) >>
                   (ulong)((uint)fVar26 & 7) & 1) != 0)) {
                if ((fVar26 != 1.26117e-44) ||
                   (uVar10 = FUN_01ad8fd0(&local_170), (uVar10 & 1) == 0)) break;
                lVar23 = *(long *)puVar14;
                local_170 = (long *)(puVar4 + 0x10);
                local_160 = (undefined *)0x0;
                uStack_168 = (char *)uVar15;
                uVar7 = FUN_0277d6c4(&uStack_168);
                if (*(long *)puVar14 != 0) {
                  lVar23 = *(long *)(lVar23 + 0x57e58);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                  if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                    lVar23 = *(long *)PTR_DAT_04bc0428;
                    uVar7 = FUN_0277d6c4(&local_b0);
                    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                    if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
                       (puVar14 = *(undefined **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8),
                       puVar14 != (undefined *)0x0)) {
                      local_160 = puVar14;
                    }
                  }
                }
                uVar10 = FUN_01ad9b70(&local_170);
                if ((uVar10 & 1) == 0) break;
                uVar10 = FUN_01ad98d0(&local_170);
                if ((uVar10 & 1) == 0) {
                  uVar10 = FUN_01ad9a20(&local_170);
                  if ((uVar10 & 1) == 0) break;
                  lVar23 = param_1[0x227];
                  if (lVar23 == 0) {
                    local_e0 = 0.0;
                    puVar16 = &DAT_04c931a0;
                  }
                  else {
                    local_e0 = (float)(*(uint *)(param_1 + 0x2d3) >> 1 & 1);
                    fVar26 = 0.0;
                    if (*(long *)(lVar23 + 0x78) != 0) {
                      fVar26 = *(float *)(*(long *)(lVar23 + 0x78) + 0x18);
                    }
                    fVar28 = local_e0;
                    if ((uint)fVar26 <= (uint)local_e0) {
                      fVar28 = 0.0;
                    }
                    if ((uint)*(float *)(lVar23 + 0x80) <= (uint)fVar28) {
                      fVar28 = 0.0;
                    }
                    puVar16 = (undefined8 *)
                              (*(long *)(lVar23 + 0x88) + (long)(int)fVar28 * 0xe8 + 0x60);
                  }
                  local_ec = *(float *)(puVar16 + 0xb);
                  lVar23 = FUN_0171ec68(&local_ec);
                  if (lVar23 == 0) {
LAB_01704c5c:
                    bVar20 = 0;
                  }
                  else {
                    local_e0 = 2.38221e-44;
                    lVar23 = FUN_016f8f70(lVar23,0xb,0x42ad246a,*(undefined8 *)PTR_DAT_04bbde80);
                    if (lVar23 == 0) goto LAB_01704c5c;
                    fVar26 = (float)((int)local_e0 + 7);
                    if (-1 < (int)local_e0) {
                      fVar26 = local_e0;
                    }
                    bVar20 = *(byte *)(lVar23 + (ulong)(uint)((int)fVar26 >> 3)) >>
                             (ulong)((uint)local_e0 & 7) & 1;
                  }
                  lVar23 = FUN_017067d4(param_1,*(undefined4 *)(param_1[9] + 0x230),0);
                  if (lVar23 != 0) {
                    FUN_0161043c(lVar23 + 0x1160,1,bVar20);
                  }
                  lVar23 = FUN_017067d4(param_1,*(undefined4 *)(param_1[9] + 0x230),1);
                  if (lVar23 == 0) break;
                  bVar20 = bVar20 ^ 1;
                }
                else {
                  lVar23 = param_1[0x227];
                  if (lVar23 == 0) {
                    local_e0 = 0.0;
                    puVar16 = &DAT_04c931a0;
                  }
                  else {
                    local_e0 = (float)(*(uint *)(param_1 + 0x2d3) >> 1 & 1);
                    fVar26 = 0.0;
                    if (*(long *)(lVar23 + 0x78) != 0) {
                      fVar26 = *(float *)(*(long *)(lVar23 + 0x78) + 0x18);
                    }
                    fVar28 = local_e0;
                    if ((uint)fVar26 <= (uint)local_e0) {
                      fVar28 = 0.0;
                    }
                    if ((uint)*(float *)(lVar23 + 0x80) <= (uint)fVar28) {
                      fVar28 = 0.0;
                    }
                    puVar16 = (undefined8 *)
                              (*(long *)(lVar23 + 0x88) + (long)(int)fVar28 * 0xe8 + 0x60);
                  }
                  local_ec = *(float *)(puVar16 + 0xb);
                  lVar23 = FUN_0171ec68(&local_ec);
                  if (lVar23 == 0) {
LAB_01704b58:
                    bVar20 = 0;
                  }
                  else {
                    local_e0 = 2.38221e-44;
                    lVar23 = FUN_016f8f70(lVar23,0xb,0x42ad246a,*(undefined8 *)PTR_DAT_04bbde80);
                    if (lVar23 == 0) goto LAB_01704b58;
                    fVar26 = (float)((int)local_e0 + 7);
                    if (-1 < (int)local_e0) {
                      fVar26 = local_e0;
                    }
                    bVar20 = *(byte *)(lVar23 + (ulong)(uint)((int)fVar26 >> 3)) >>
                             (ulong)((uint)local_e0 & 7) & 1;
                  }
                  lVar23 = FUN_017067d4(param_1,*(undefined4 *)(param_1[9] + 0x230),0);
                  if (lVar23 != 0) {
                    FUN_0161043c(lVar23 + 0x1160,1,bVar20 ^ 1);
                  }
                  lVar23 = FUN_017067d4(param_1,*(undefined4 *)(param_1[9] + 0x230),1);
                  if (lVar23 == 0) break;
                }
                FUN_0161043c(lVar23 + 0x1160,2,bVar20);
                break;
              }
            }
            fVar26 = (float)((int)fVar26 + 1);
          } while (fVar26 != 1.96182e-44);
        }
      }
    }
  }
  local_b0 = (long *)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1[9] + 0x230));
  FUN_0071cb58(&local_170,PTR_DAT_04bb32f8,&local_b0,0);
  plVar11 = local_170;
  if (local_170 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar10 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
    if ((uVar10 & 1) == 0) {
      uStack_168._0_3_ = (uint3)(ushort)uStack_168;
    }
  }
  bVar5 = true;
  if (((local_170 != (long *)0x0) && ((char)uStack_168 != '\0')) && (uStack_168._2_1_ != '\0')) {
    local_e0 = *(float *)((long)local_170 + 0x274);
    local_ec = *(float *)(param_1[9] + 0x230);
    auVar35 = FUN_0071cb58(&local_b0,&local_e0,&local_ec,0);
    plVar11 = local_b0;
    if (local_b0 != (long *)0x0) {
      if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32d8);
      }
      auVar35 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb32d0);
      if ((auVar35._0_8_ & 1) == 0) {
        local_a8._0_3_ = (uint3)(ushort)local_a8;
      }
    }
    bVar5 = true;
    if (((local_b0 != (long *)0x0) && ((char)local_a8 != '\0')) && (local_a8._2_1_ != '\0')) {
      uVar7 = FUN_006f0400(*(float *)(local_b0 + 0x55) - *(float *)(local_b0 + 0x52),
                           *(float *)(local_b0 + 0x56) - *(float *)(local_b0 + 0x53),auVar35._0_8_,
                           auVar35._8_8_,1);
      fVar26 = (float)uVar7 * 8.381903e-08;
      fVar28 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1[9] + 0x68) + 0x2b4));
      fVar28 = fVar28 * 8.381903e-08;
      if (fVar26 <= 360.0) {
        if (fVar26 < 0.0) {
          fVar29 = fVar26 / 360.0 + -1.0;
          goto LAB_01704e28;
        }
      }
      else {
        fVar29 = fVar26 / 360.0;
LAB_01704e28:
        fVar26 = fVar26 - (float)(int)fVar29 * 360.0;
      }
      if (fVar28 <= 360.0) {
        if (fVar28 < 0.0) {
          fVar29 = fVar28 / 360.0 + -1.0;
          goto LAB_01704e64;
        }
      }
      else {
        fVar29 = fVar28 / 360.0;
LAB_01704e64:
        fVar28 = fVar28 - (float)(int)fVar29 * 360.0;
      }
      fVar29 = 0.0;
      if (fVar26 != fVar28) {
        fVar29 = fVar26 - fVar28;
        if (fVar26 <= fVar28) {
          fVar29 = fVar28 - fVar26;
        }
        if (180.0 < fVar29) {
          fVar29 = 360.0 - fVar29;
        }
      }
      fVar26 = -fVar29;
      if (0.0 <= fVar29) {
        fVar26 = fVar29;
      }
      bVar5 = 90.0 < fVar26;
    }
  }
  puVar14 = PTR_DAT_04bb2020;
  local_b0 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_a8 = "BodyToCamera";
  if (((param_1[0x227] != 0) && (lVar23 = *(long *)(param_1[0x227] + 0x78), lVar23 != 0)) &&
     (plVar11 = *(long **)(lVar23 + 0x48), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x28))(plVar11,&local_b0,bVar5);
  }
  (**(code **)(*param_1 + 0x588))(param_1);
  FUN_01703b50(param_1,2);
  *(undefined1 *)((long)param_1 + 0x5e96) = 0;
  param_1[0xbd5] = 0;
  *(undefined4 *)(param_1 + 0xbd6) = 0;
  param_1[0xbd3] = 0;
  *(undefined8 *)((long)param_1 + 0x5e9d) = 0;
  uVar10 = (**(code **)(*param_1 + 0x100))(param_1);
  if ((((uVar10 & 1) != 0) && (param_1[9] != 0)) &&
     (plVar11 = *(long **)(param_1[9] + 0x80), plVar11 != (long *)0x0)) {
    if (((*PTR_DAT_04bb3f20 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3f20), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb3f18 = PTR_DAT_04bb3040 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3f20);
    }
    uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb3f18);
    if ((uVar10 & 1) != 0) {
      local_118 = 0;
      lVar23 = *(long *)(param_1[9] + 0x68);
      local_ec = *(float *)(lVar23 + 0x278);
      fStack_e8 = *(float *)(lVar23 + 0x27c);
      local_e4 = *(float *)(lVar23 + 0x280);
      local_e0 = local_ec;
      local_dc = fStack_e8;
      fStack_d8 = local_e4;
      uVar10 = FUN_016ff8c0(param_1,0xf,&local_e0);
      puVar4 = PTR_DAT_04bb27c8;
      if ((uVar10 & 1) != 0) {
        FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_e0,&local_118);
      }
      uVar10 = FUN_016ff8c0(param_1,0x13,&local_ec);
      if ((uVar10 & 1) != 0) {
        FUN_0093a950(*(long *)puVar4 + 0x28,&local_ec,&local_118);
      }
      local_f0 = 0.0;
      *(undefined8 *)((long)plVar11 + 0x2dc) = 0;
      *(undefined8 *)((long)plVar11 + 0x2e4) = 0;
      *(undefined8 *)((long)plVar11 + 0x2ec) = 0;
      local_158 = &fStack_14c;
      local_f8 = 0;
      local_100 = 0.0;
      local_108 = 0;
      local_150 = 4.48416e-44;
      local_12d = 0;
      local_160 = PTR_DAT_04bb2028 + 0x10;
      local_124 = true;
      local_120 = 0;
      uStack_168 = (char *)CONCAT44(uStack_168._4_4_,1);
      local_128 = 0;
      local_114 = 0;
      local_b0 = (long *)(puVar14 + 0x10);
      local_170 = (long *)0x14;
      fStack_14c = 1.1384729e+27;
      fStack_148 = 7.013719e-39;
      local_a8 = "PlayerNetMove";
      if (param_1[0x227] == 0) {
LAB_01705184:
        local_124 = true;
        local_120 = 0;
      }
      else {
        lVar23 = *(long *)(param_1[0x227] + 0x88);
        plVar21 = (long *)(lVar23 + 0x60);
        (**(code **)(*plVar21 + 0x18))(plVar21);
        (**(code **)(*plVar21 + 0x18))(plVar21);
        pcVar24 = *(char **)(lVar23 + 0x68);
        (**(code **)((long)local_b0 + 0x18))(&local_b0);
        if (pcVar24 == local_a8) {
LAB_0170518c:
          local_124 = false;
LAB_01705190:
          local_120 = 0x3c23d70a;
        }
        else {
          pcVar24 = *(char **)(lVar23 + 0x68);
          if (*pcVar24 != *local_a8) goto LAB_01705184;
          if (*pcVar24 == '\0') goto LAB_0170518c;
          uVar10 = 0;
          do {
            uVar15 = uVar10;
            if ((uVar15 == 0x80000) || (pcVar24[uVar15 + 1] != local_a8[uVar15 + 1]))
            goto LAB_01705184;
            if (pcVar24[uVar15 + 1] == '\0') goto LAB_01705164;
            if (pcVar24[uVar15 + 2] != local_a8[uVar15 + 2]) goto LAB_01705184;
            uVar10 = uVar15 + 2;
          } while (pcVar24[uVar15 + 2] != '\0');
          uVar15 = uVar15 + 1;
LAB_01705164:
          local_120 = 0;
          local_124 = uVar15 >> 0x13 != 0;
          if (uVar15 >> 0x13 == 0) goto LAB_01705190;
        }
      }
      lVar23 = param_1[0x227];
      if (lVar23 == 0) {
        puVar16 = &DAT_04c931a0;
      }
      else {
        puVar16 = *(undefined8 **)(lVar23 + 0x88);
      }
      if (*(char *)puVar16[1] != '\0') {
        local_174 = *(undefined4 *)(puVar16 + 0xb);
        puVar12 = (uint *)FUN_0171ec68(&local_174);
        puVar13 = PTR_DAT_04bbde90;
        puVar4 = PTR_DAT_04bbde88;
        if ((puVar12 == (uint *)0x0) || (uVar7 = *puVar12, uVar7 == 0)) {
          bVar6 = true;
          bVar5 = true;
        }
        else {
          cVar17 = *PTR_DAT_04bbde88;
          bVar6 = true;
          do {
            if (cVar17 != '\0') {
              uVar8 = *(uint *)(puVar13 + 0x1c);
              if ((int)uVar8 < 0) {
                if (uVar8 == 0xffffffff) goto LAB_01705244;
              }
              else if ((char *)((ulong)uVar8 + (long)puVar12) != (char *)0x0) {
                bVar5 = *(char *)((ulong)uVar8 + (long)puVar12) == '\0';
                goto LAB_01705304;
              }
LAB_01705300:
              bVar5 = true;
LAB_01705304:
              uVar7 = *puVar12;
              if (uVar7 == 0) goto LAB_017053b0;
              uVar8 = *(uint *)(puVar13 + 0x20);
              bVar6 = true;
              goto LAB_01705328;
            }
            cVar17 = '\x01';
            *(undefined8 *)puVar13 = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
            uVar7 = *puVar12;
LAB_01705244:
            puVar18 = (uint *)(ulong)uVar7;
            bVar5 = true;
            if ((puVar18 == (uint *)0x0) || (puVar12 == puVar18)) goto LAB_01705304;
            lVar23 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar18)) != '\0') {
              lVar23 = 0x1c;
            }
            lVar23 = (long)puVar12 + (lVar23 - (long)puVar18);
            if (lVar23 == 0) goto LAB_01705304;
            uVar10 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar18));
            *(undefined4 *)(puVar13 + 0x1c) = 0xfffffffe;
            if (uVar10 == 0) goto LAB_01705304;
            piVar19 = (int *)(lVar23 + 4);
            while (piVar19[-1] != -0x7b89e04a) {
              piVar19 = piVar19 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) goto LAB_01705300;
            }
            bVar5 = true;
            iVar9 = 0;
            if (*piVar19 != -1) {
              iVar9 = *piVar19;
            }
            *(int *)(puVar13 + 0x1c) = iVar9;
            uVar7 = *puVar12;
          } while (uVar7 != 0);
        }
        goto LAB_017053b4;
      }
      uVar8 = 0;
      uVar7 = 0;
      bVar5 = true;
      bVar6 = true;
      goto LAB_01705430;
    }
  }
  goto LAB_01705590;
  while( true ) {
    if ((uVar8 != 0xffffffff) || (lVar23 = (long)puVar12 - (ulong)uVar7, lVar23 == 0))
    goto LAB_017053b0;
    lVar25 = 0xc;
    if (*(char *)(lVar23 + 10) != '\0') {
      lVar25 = 0x1c;
    }
    if (lVar25 + lVar23 == 0) goto LAB_017053b0;
    uVar10 = (ulong)*(ushort *)(lVar23 + 8);
    *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_017053b0;
    puVar18 = (uint *)(lVar25 + lVar23 + 4);
    while (puVar18[-1] != 0xfc3116b5) {
      puVar18 = puVar18 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_017053b0;
    }
    uVar8 = 0;
    if (*puVar18 != 0xffffffff) {
      uVar8 = *puVar18;
    }
    *(uint *)(puVar13 + 0x20) = uVar8;
    uVar7 = *puVar12;
    if (uVar7 == 0) break;
LAB_01705328:
    if (-1 < (int)uVar8) {
      if ((char *)((long)puVar12 + (ulong)uVar8) == (char *)0x0) {
LAB_017053b0:
        bVar6 = true;
      }
      else {
        bVar6 = *(char *)((long)puVar12 + (ulong)uVar8) == '\0';
      }
      break;
    }
  }
LAB_017053b4:
  local_114 = 0;
  local_b0 = (long *)CONCAT44(local_b0._4_4_,7);
  if (param_1[0x227] == 0) {
    local_114 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = FUN_03850a90(param_1[0x227],7,0,0);
    local_114 = 0;
    local_b0 = (long *)CONCAT44(local_b0._4_4_,8);
    uVar8 = 0;
    if (param_1[0x227] != 0) {
      uVar8 = FUN_03850a90(param_1[0x227],8,0,0);
    }
  }
  bVar3 = bVar6;
  if (bVar5) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar7 = uVar7 & 1;
    uVar8 = uVar8 & 1;
    lVar23 = param_1[0x227];
LAB_01705430:
    uVar10 = FUN_03850cb0(lVar23,&local_f8,&local_108,&local_170);
    if ((uVar10 & 1) != 0) {
      if (uVar7 == 0) {
        if (0.0 < SQRT(local_f8._4_4_ * local_f8._4_4_ + (float)local_f8 * (float)local_f8 +
                       local_f0 * local_f0)) {
          *(float *)((long)plVar11 + 0x2dc) = (float)local_f8;
          *(float *)(plVar11 + 0x5c) = local_f8._4_4_;
          *(float *)((long)plVar11 + 0x2e4) = local_f0;
          if (bVar5) {
            local_b0 = (long *)((ulong)local_b0 & 0xffffffff00000000);
            *(byte *)(plVar11 + 0x5b) = *(byte *)(plVar11 + 0x5b) | 1;
          }
          if (bVar6) {
            local_b0 = (long *)CONCAT44(local_b0._4_4_,1);
            *(byte *)(plVar11 + 0x5b) = *(byte *)(plVar11 + 0x5b) | 2;
          }
          *(float *)(param_1 + 0xbd3) = (float)local_f8;
          *(float *)((long)param_1 + 0x5e9c) = local_f8._4_4_;
          *(float *)(param_1 + 0xbd4) = local_f0;
          *(undefined1 *)((long)param_1 + 0x5e96) = 1;
        }
      }
      if (uVar8 == 0) {
        if (0.0 < SQRT(local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108 +
                       local_100 * local_100)) {
          *(float *)(plVar11 + 0x5d) = (float)local_108;
          *(float *)((long)plVar11 + 0x2ec) = local_108._4_4_;
          *(float *)(plVar11 + 0x5e) = local_100;
          if (bVar5) {
            local_b0 = (long *)CONCAT44(local_b0._4_4_,2);
            *(byte *)(plVar11 + 0x5b) = *(byte *)(plVar11 + 0x5b) | 4;
          }
          if (bVar6) {
            local_b0 = (long *)CONCAT44(local_b0._4_4_,3);
            *(byte *)(plVar11 + 0x5b) = *(byte *)(plVar11 + 0x5b) | 8;
          }
          *(float *)(param_1 + 0xbd5) = (float)local_108;
          *(float *)((long)param_1 + 0x5eac) = local_108._4_4_;
          *(float *)(param_1 + 0xbd6) = local_100;
          *(undefined1 *)((long)param_1 + 0x5ea4) = 1;
        }
      }
    }
  }
LAB_01705590:
  if (*(int *)((long)param_1 + 0x5e84) != 0) {
    uStack_168 = (char *)((ulong)uStack_168 & 0xffffffff00000000);
    local_170 = (long *)0x0;
    uVar10 = FUN_016ff8c0(param_1,*(int *)((long)param_1 + 0x5e84),&local_170);
    if ((uVar10 & 1) != 0) {
      plVar11 = *(long **)(param_1[9] + 0x90);
      if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5b58);
      }
      if ((plVar11 != (long *)0x0) &&
         (uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11,PTR_DAT_04bb5b50), (uVar10 & 1) != 0)) {
        (**(code **)(*plVar11 + 0xf8))(plVar11,&local_170,*(undefined4 *)((long)plVar11 + 0x284));
      }
    }
  }
  local_170 = (long *)(puVar14 + 0x10);
  uStack_168 = "PlayerMenuWait";
  lVar23 = param_1[0x227];
  if (lVar23 == 0) {
    local_b0 = (long *)((ulong)local_b0._4_4_ << 0x20);
LAB_01705738:
    fVar26 = 0.0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x2d3) >> 1 & 1;
    local_b0 = (long *)(CONCAT44(local_b0._4_4_,*(uint *)(param_1 + 0x2d3) >> 1) &
                       0xffffffff00000001);
    uVar8 = 0;
    if (*(long *)(lVar23 + 0x78) != 0) {
      uVar8 = *(uint *)(*(long *)(lVar23 + 0x78) + 0x18);
    }
    if (uVar8 <= uVar7) {
      uVar7 = 0;
    }
    if (*(uint *)(lVar23 + 0x80) <= uVar7) {
      uVar7 = 0;
    }
    lVar23 = *(long *)(lVar23 + 0x88) + (long)(int)uVar7 * 0xe8;
    plVar11 = (long *)(lVar23 + 0x60);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    pcVar24 = *(char **)(lVar23 + 0x68);
    (**(code **)((long)local_170 + 0x18))(&local_170);
    if (pcVar24 != uStack_168) {
      pcVar24 = *(char **)(lVar23 + 0x68);
      if (*pcVar24 != *uStack_168) goto LAB_01705738;
      if (*pcVar24 != '\0') {
        uVar10 = 0;
        do {
          uVar15 = uVar10;
          if ((uVar15 == 0x80000) || (pcVar24[uVar15 + 1] != uStack_168[uVar15 + 1]))
          goto LAB_01705738;
          if (pcVar24[uVar15 + 1] == '\0') goto LAB_01705724;
          if (pcVar24[uVar15 + 2] != uStack_168[uVar15 + 2]) goto LAB_01705738;
          uVar10 = uVar15 + 2;
        } while (pcVar24[uVar15 + 2] != '\0');
        uVar15 = uVar15 + 1;
LAB_01705724:
        fVar26 = 0.0;
        if (uVar15 >> 0x13 != 0) goto LAB_0170573c;
      }
    }
    fVar26 = 10.0;
  }
LAB_0170573c:
  fVar28 = *(float *)(param_1 + 0xbdd);
  if (fVar26 <= fVar28) {
    if (fVar26 < fVar28) {
      fVar29 = fVar28 + -1.0;
      bVar5 = false;
      bVar6 = false;
      if (fVar29 <= fVar28) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar29) && !NAN(fVar26)) {
          bVar5 = fVar29 == fVar26;
          bVar6 = fVar26 <= fVar29;
        }
      }
      if (bVar6 && !bVar5) {
        fVar26 = fVar29;
      }
      goto LAB_01705778;
    }
  }
  else {
    fVar29 = fVar28 + 1.0;
    bVar5 = false;
    bVar6 = false;
    if (fVar28 <= fVar29) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar29) && !NAN(fVar26)) {
        bVar5 = fVar29 < fVar26;
        bVar6 = false;
      }
    }
    if (bVar5 != bVar6) {
      fVar26 = fVar29;
    }
LAB_01705778:
    *(float *)(param_1 + 0xbdd) = fVar26;
  }
  uVar7 = *(uint *)(param_1 + 0x297);
  if ((0xfffeffff < uVar7) || (uVar8 = uVar7 & 0xffff, uVar8 == 0xffff)) {
    lVar23 = param_1[0x22a];
    if (lVar23 == 0) {
      fVar27 = 0.0;
      fVar28 = 1.0;
      fVar29 = 0.0;
      fVar30 = 0.0;
      fVar31 = 0.0;
      fVar32 = 0.0;
      uStack_168 = (char *)_UNK_04102208;
      local_170 = (long *)_DAT_04102200;
      local_158 = (float *)_UNK_04102888;
      local_160 = (undefined *)_DAT_04102880;
      fVar34 = 0.0;
      fVar26 = 1.0;
      fStack_148 = (float)_UNK_041023d8;
      local_150 = (float)_DAT_041023d0;
      fStack_14c = (float)((ulong)_DAT_041023d0 >> 0x20);
      fVar33 = 0.0;
      goto LAB_01705908;
    }
    local_170 = (long *)(puVar14 + 0x10);
    uStack_168 = PTR_DAT_04bb2f90 + 0x1e;
    if (*(int *)(lVar23 + 0x30) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      lVar22 = *(long *)(lVar23 + 0x38);
      lVar25 = 0;
      lVar23 = (long)*(int *)(lVar23 + 0x30) << 3;
      uVar7 = 0xffffffff;
      do {
        plVar11 = (long *)**(undefined8 **)(lVar22 + lVar25 * 8);
        iVar9 = (**(code **)(*plVar11 + 0x38))(plVar11,&local_170);
        if (iVar9 != -1) {
          uVar7 = (uint)lVar25 & 0xffff | iVar9 << 0x10;
          break;
        }
        lVar25 = lVar25 + 1;
        lVar23 = lVar23 + -8;
      } while (lVar23 != 0);
    }
    uVar8 = uVar7 & 0xffff;
  }
  fVar27 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar34 = 0.0;
  fVar33 = 0.0;
  uStack_168 = (char *)_UNK_04102208;
  local_170 = (long *)_DAT_04102200;
  local_158 = (float *)_UNK_04102888;
  local_160 = (undefined *)_DAT_04102880;
  fStack_148 = (float)_UNK_041023d8;
  fStack_144 = (float)((ulong)_UNK_041023d8 >> 0x20);
  local_150 = (float)_DAT_041023d0;
  fStack_14c = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar30 = 0.0;
  fVar26 = 1.0;
  fVar28 = 1.0;
  fVar29 = 0.0;
  if (uVar8 != 0xffff && uVar7 < 0xffff0000) {
    plVar11 = (long *)**(undefined8 **)
                        (*(long *)(param_1[0x22a] + 0x38) +
                        (-(ulong)(uVar8 >> 0xf) & 0xfffffffffff80000 | (ulong)uVar8 << 3));
    (**(code **)(*plVar11 + 0x70))(plVar11,&local_170,(int)uVar7 >> 0x10);
    fVar32 = SUB84(local_160,0);
    fVar33 = local_170._4_4_ * 0.0;
    fVar34 = SUB84(uStack_168,0);
    fVar30 = SUB84(local_158,0);
    fVar31 = local_160._4_4_ * 0.0;
    fVar27 = fStack_14c * 0.0;
    fVar26 = (float)local_170;
    fVar28 = fStack_148;
    fVar29 = local_150;
  }
LAB_01705908:
  fVar30 = fVar30 + fVar31 + fVar32 * 0.0 + 0.0;
  fVar26 = fVar34 + fVar33 + fVar26 * 0.0 + 0.0;
  fStack_144 = fVar28 + fVar27 + fVar29 * 0.0 + 0.0;
  local_158 = (float *)CONCAT44(fVar30,(undefined4)local_158);
  fVar30 = fVar30 * 0.0;
  uStack_168 = (char *)CONCAT44(fVar26,(undefined4)uStack_168);
  uVar7 = FUN_006f0400(fVar30 + fVar26 * 5.9604645e-08 + fStack_144 * -0.99999994,
                       fVar30 + fVar26 * 0.99999994 + fStack_144 * 5.9604645e-08);
  local_94 = 0;
  local_84 = 0;
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar7 >> 0x18) * 0x10);
  fVar26 = (float)(uVar7 & 0xffffff) * 5.9604645e-08;
  fVar28 = *pfVar2 + fVar26 * pfVar2[1];
  fStack_88 = pfVar2[2] + fVar26 * pfVar2[3];
  local_90 = -(pfVar2[1] * fVar26) - *pfVar2;
  fStack_98 = fVar28 * 0.0;
  local_a0 = fStack_88 * 0.0;
  local_9c = fStack_98 * 0.0 + 1.0;
  local_b0 = (long *)CONCAT44(fStack_98,fStack_88);
  local_a8 = (char *)(ulong)(uint)(fVar28 + 0.0);
  local_8c = local_a0;
  FUN_007535b4(&local_e0,&local_b0);
  FUN_016ff8c0(param_1,1,&local_ec);
  FUN_016ff8c0(param_1,10,&local_f8);
  fVar27 = local_ec - local_ec;
  fVar28 = local_e4 - local_e4;
  fVar29 = (fStack_e8 + 1.0) - fStack_e8;
  fVar26 = SQRT(fVar29 * fVar29 + fVar27 * fVar27 + fVar28 * fVar28);
  if (0.0 < fVar26) {
    fVar26 = 1.0 / fVar26;
    fVar27 = fVar27 * fVar26;
    fVar29 = fVar29 * fVar26;
    fVar28 = fVar28 * fVar26;
  }
  fVar30 = (float)local_f8 - local_ec;
  fVar32 = fStack_b4 +
           fVar29 * 30.0 * fStack_bc + fVar27 * 30.0 * local_c0 + fVar28 * 30.0 * local_b8;
  fVar34 = local_f8._4_4_ - fStack_e8;
  fVar26 = local_f0 - local_e4;
  local_108 = (ulong)(uint)(fStack_c4 +
                           fVar29 * 30.0 * fStack_cc + fVar27 * 30.0 * local_d0 +
                           fVar28 * 30.0 * local_c8) << 0x20;
  fVar28 = SQRT(fVar34 * fVar34 + fVar30 * fVar30 + fVar26 * fVar26);
  if (0.0 < fVar28) {
    fVar28 = 1.0 / fVar28;
    fVar30 = fVar30 * fVar28;
    fVar34 = fVar34 * fVar28;
    fVar26 = fVar26 * fVar28;
  }
  local_114 = 0;
  local_110 = fStack_c4 +
              fStack_cc * fVar34 * 30.0 + fVar30 * 30.0 * local_d0 + fVar26 * 30.0 * local_c8;
  fVar29 = fStack_b4 +
           fStack_bc * fVar34 * 30.0 + fVar30 * 30.0 * local_c0 + fVar26 * 30.0 * local_b8;
  fStack_10c = fVar29;
  local_100 = fVar32;
  fVar28 = (float)FUN_03eb5870(&local_108,&local_114);
  fVar26 = -(fVar28 * 57.295776);
  if (0.0 <= fVar28 * 57.295776) {
    fVar26 = fVar28 * 57.295776;
  }
  fVar28 = -fVar26;
  if (fVar32 <= fVar29) {
    fVar28 = fVar26;
  }
  if (((param_1[0x227] != 0) && (lVar23 = *(long *)(param_1[0x227] + 0x78), lVar23 != 0)) &&
     (plVar11 = *(long **)(lVar23 + 0x48), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x30))(fVar28 + *(float *)(param_1 + 0xbdd),plVar11,PTR_DAT_04bbde68);
  }
  if ((((*(uint *)(param_1[9] + 0x248) >> 7 & 1) != 0) && (param_1[0x227] != 0)) &&
     ((lVar23 = *(long *)(param_1[0x227] + 0x78), lVar23 != 0 &&
      (plVar11 = *(long **)(lVar23 + 0x48), plVar11 != (long *)0x0)))) {
    (**(code **)(*plVar11 + 0x28))(plVar11,PTR_DAT_04bbde70,0);
  }
  *(undefined1 *)(param_1 + 0xbe0) = *(undefined1 *)((long)param_1 + 0x5f01);
  return;
}

