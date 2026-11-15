
/* WARNING: Removing unreachable block (ram,0x01ec71b8) */
/* WARNING: Removing unreachable block (ram,0x01ec6fe8) */

void FUN_01ec6980(long *param_1,undefined1 *param_2,long param_3,undefined1 param_4)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  uint *puVar5;
  undefined4 uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  undefined4 *puVar21;
  long lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined *local_1d0;
  undefined *local_1c8;
  int local_1c0;
  int iStack_1bc;
  undefined *local_1b8;
  int local_1b0;
  int iStack_1ac;
  float local_1a4 [2];
  float local_19c;
  undefined **local_198;
  undefined **ppuStack_190;
  undefined8 local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined8 local_160;
  undefined **local_158;
  undefined **local_150;
  undefined *local_148;
  int local_140;
  int local_13c;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  byte local_128;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  byte local_110;
  float local_104;
  undefined4 uStack_100;
  float local_fc;
  undefined *local_f8;
  undefined *puStack_f0;
  int local_e8;
  int local_e4;
  undefined *local_e0;
  int local_d8;
  int local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  uint local_9c;
  int local_98;
  float local_94 [2];
  float local_8c;
  
  *param_2 = 0;
  puVar21 = (undefined4 *)(param_2 + 0x10);
  *puVar21 = *(undefined4 *)(param_3 + 0x14);
  puVar2 = PTR_DAT_04bb2010;
  local_f8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_f0 = PTR_DAT_04bb2010 + 0x10;
  ppuStack_190 = &local_1d0;
  local_1d0 = (undefined *)((ulong)local_1d0 & 0xffffffffffffff00);
  local_198 = &PTR_FUN_04a74ed0;
  local_a8 = *(undefined4 *)(param_1[1] + 0x230);
  fVar24 = *(float *)(param_3 + 8) + -2.5;
  fVar25 = *(float *)(param_3 + 0x10) + -2.5;
  local_e8 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  local_d8 = local_e8 + 1;
  local_e4 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  local_d4 = local_e4 + 1;
  local_c0 = CONCAT44(local_e4,local_e8);
  local_188 = &local_d0;
  local_b0 = CONCAT44(local_d4,local_d8);
  iVar11 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_104 = ((float)local_e8 * 5.0 + (float)local_d8 * 5.0 + 5.0) * 0.5;
  local_fc = ((float)local_e4 * 5.0 + (float)local_d4 * 5.0 + 5.0) * 0.5;
  local_e0 = puStack_f0;
  local_d0 = local_f8;
  puStack_c8 = puStack_f0;
  local_b8 = puStack_f0;
  local_a4 = param_4;
  if (iVar11 != 0) {
    lVar22 = (long)iVar11 << 3;
    puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_198)(&local_198,*puVar12);
      lVar22 = lVar22 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar22 != 0);
    if ((char)local_1d0 != '\0') {
      return;
    }
  }
  puVar10 = PTR_DAT_04bb5ce0;
  puVar9 = PTR_DAT_04bb2720;
  puVar8 = PTR_DAT_04bb2640;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar22 = *(long *)PTR_DAT_04bb2720, lVar22 == 0)) ||
     (*(long *)(lVar22 + 0x330) == 0)) {
LAB_01ec6c70:
    uVar13 = FUN_014e609c(*(undefined8 *)PTR_DAT_04bbbc38,&local_f8);
    if ((uVar13 & 1) == 0) {
LAB_01ec7478:
      *param_2 = 0;
      return;
    }
  }
  else {
    puVar12 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
    iVar11 = FUN_006bd550(*puVar12,0);
    if (((iVar11 != 0x758f7eaf) || (lVar22 = *(long *)puVar9, lVar22 == 0)) ||
       ((*(long *)(lVar22 + 0x330) == 0 || (*(int *)(*(long *)(lVar22 + 0x330) + 0x244) == 0))))
    goto LAB_01ec6c70;
    lVar19 = *(long *)puVar10;
    if (lVar19 == 0) {
      iVar11 = 0;
      iVar15 = 0;
      iVar17 = 0x10;
      iVar20 = 0x10;
    }
    else {
      iVar11 = *(int *)(lVar19 + 0xd88);
      iVar15 = *(int *)(lVar19 + 0xd8c);
      iVar20 = *(int *)(lVar19 + 0xd98);
      iVar17 = *(int *)(lVar19 + 0xd9c);
    }
    iVar16 = iVar11;
    if (iVar20 <= iVar11) {
      iVar16 = iVar20;
    }
    if (iVar11 <= iVar20) {
      iVar11 = iVar20;
    }
    iVar20 = iVar15;
    if (iVar17 <= iVar15) {
      iVar20 = iVar17;
    }
    if (iVar15 <= iVar17) {
      iVar15 = iVar17;
    }
    if (((local_e8 < iVar16) || (iVar11 < local_d8)) || ((local_e4 < iVar20 || (iVar15 < local_d4)))
       ) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)puVar8 + 0x18))
                          (*(long **)puVar8,*(undefined4 *)(lVar22 + 0x338));
      iVar11 = FUN_006bd550(*puVar12,0);
      piVar1 = (int *)(PTR_DAT_04bc3a80 + 0x38);
      if (iVar11 != 0x758f7eaf) {
        piVar1 = &DAT_055c04d8;
      }
      iVar11 = *piVar1;
      if ((((((iVar11 != -0x7975b8e8) && (iVar11 != -0x3e092032)) && (DAT_05ac0a90 != iVar11)) &&
           ((DAT_05ac0aa0 != iVar11 && (DAT_05ac0ab0 != iVar11)))) && (DAT_05ac0ac0 != iVar11)) &&
         (((DAT_05ac0ad0 != iVar11 && (DAT_05ac0ae0 != iVar11)) &&
          ((DAT_05ac0af0 != iVar11 &&
           (((DAT_05ac0b00 != iVar11 && (DAT_05ac0b10 != iVar11)) && (DAT_05ac0b20 != iVar11))))))))
      {
        if ((*(long *)puVar10 != 0) && (sVar7 = *(short *)PTR_DAT_04bb6298, sVar7 != -1)) {
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,7);
          puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
          if (0xff < (uint)(int)sVar7) {
            puVar5 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar5 >> 7 & 1) != 0) goto LAB_01ec6c70;
        }
        uVar13 = FUN_0180b660();
        if ((uVar13 & 1) == 0) goto LAB_01ec7478;
      }
      goto LAB_01ec6c70;
    }
  }
  local_118 = 0;
  lVar22 = *(long *)puVar9;
  if (lVar22 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar11 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_114 = *(undefined4 *)(puVar12 + 7);
  local_110 = FUN_017baf44();
  local_110 = local_110 & 1;
  local_130 = 0;
  local_120 = PTR_DAT_04bb3140 + 0x10;
  local_138 = PTR_DAT_04bbfe68 + 0x10;
  lVar22 = *(long *)puVar9;
  if (lVar22 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar11 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_12c = *(undefined4 *)(puVar12 + 7);
  local_128 = FUN_017baf44();
  iVar15 = local_e8;
  local_128 = local_128 & 1;
  puVar2 = puVar2 + 0x10;
  iVar11 = local_d4 + 1;
  local_140 = local_e8;
  local_13c = local_e4;
  local_158 = &puStack_f0;
  local_150 = &local_e0;
  local_148 = puVar2;
  if (iVar11 != local_e4) {
    puVar3 = param_2 + 4;
    bVar23 = true;
    ppuVar4 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    do {
      uVar13 = FUN_01a4f798(&local_120,0,&local_148);
      if ((uVar13 & 1) != 0) {
        local_160 = 0;
        local_168 = puVar2;
        FUN_01a5033c(auStack_170,&local_138,0,&local_148,&local_168);
        uVar13 = FUN_0097abd0(&local_148,0);
        puVar8 = PTR_DAT_04bb2010;
        if ((uVar13 & 1) != 0) {
          local_188 = (undefined **)0x0;
          ppuStack_190 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          local_178 = 0;
          local_198 = ppuVar4;
          local_180 = ppuStack_190;
          FUN_0277f02c(auStack_170,&local_198);
          local_188._0_4_ = (int)local_188 + (int)local_160;
          local_178._0_4_ = (int)local_178 + (int)local_160;
          local_188._4_4_ = local_188._4_4_ + local_160._4_4_;
          local_178._4_4_ = local_178._4_4_ + local_160._4_4_;
          if (((local_e8 < (int)local_188) || ((int)local_178 < local_d8)) ||
             ((local_e4 < local_188._4_4_ || (local_178._4_4_ < local_d4)))) {
            bVar23 = false;
          }
          else {
            local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,(float)local_13c * 5.0 + 2.5);
            local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,(float)local_140 * 5.0 + 2.5);
            uVar13 = FUN_021f2ed0(&local_1d0,0);
            if ((uVar13 & 1) == 0) {
LAB_01ec6ff4:
              local_19c = (float)local_13c * 5.0 + 2.5;
              local_1a4[0] = (float)local_140 * 5.0 + 2.5;
              uVar13 = FUN_021f4f90(local_1a4,0,0);
              if ((uVar13 & 1) == 0) {
                bVar23 = false;
              }
              else {
                uVar13 = FUN_021f53e0(&local_104,puVar3,puVar21);
                if ((uVar13 & 1) == 0) {
                  iVar20 = 0;
                }
                else {
                  local_1c8 = puVar8 + 0x10;
                  local_b0 = 0;
                  local_c0 = 0;
                  local_1d0 = PTR_DAT_04bbc1a0 + 0x10;
                  local_1c0 = (int)((float)(int)(*(float *)(param_2 + 4) + -2.5) / 5.0) -
                              (uint)(*(float *)(param_2 + 4) + -2.5 < 0.0);
                  iStack_1bc = (int)((float)(int)(*(float *)(param_2 + 0xc) + -2.5) / 5.0) -
                               (uint)(*(float *)(param_2 + 0xc) + -2.5 < 0.0);
                  local_1b0 = local_1c0 + 1;
                  iStack_1ac = iStack_1bc + 1;
                  local_1b8 = local_1c8;
                  local_d0 = local_1d0;
                  puStack_c8 = local_1c8;
                  local_b8 = local_1c8;
                  uVar13 = FUN_021f4f90(puVar3,&local_d0,0);
                  if ((uVar13 & 1) != 0) {
                    iVar16 = (int)local_b0;
                    iVar18 = local_b0._4_4_;
                    iVar17 = local_c0._4_4_;
                    iVar20 = (int)local_c0;
                    if ((2 < ((int)local_b0 - (int)local_c0) + 1) &&
                       (local_98 = *(int *)(*(long *)(param_1[1] + 0x68) + 0x2b4),
                       2 < (local_b0._4_4_ - local_c0._4_4_) + 1)) {
                      uVar13 = FUN_021f53e0(puVar3,local_94,&local_98);
                      iVar16 = (int)local_b0;
                      iVar18 = local_b0._4_4_;
                      iVar17 = local_c0._4_4_;
                      iVar20 = (int)local_c0;
                      if ((uVar13 & 1) != 0) {
                        local_9c = local_98 + 0x20000000U >> 0x1e;
                        if ((local_9c | 2) == 2) {
                          if (((float)(int)local_c0 * 5.0 + (float)(int)local_b0 * 5.0 + 5.0) * 0.5
                              < local_94[0]) {
                            iVar20 = (int)local_c0 + 2;
                          }
                          iVar18 = 3;
                          iVar16 = 1;
                        }
                        else {
                          if (((float)local_c0._4_4_ * 5.0 + (float)local_b0._4_4_ * 5.0 + 5.0) *
                              0.5 < local_8c) {
                            iVar17 = local_c0._4_4_ + 2;
                          }
                          iVar18 = 1;
                          iVar16 = 3;
                        }
                        iVar16 = iVar16 + iVar20;
                        iVar18 = iVar18 + iVar17;
                      }
                    }
                    local_1c0 = iVar20;
                    iStack_1bc = iVar17;
                    local_1b0 = iVar16;
                    iStack_1ac = iVar18;
                  }
                  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                  uVar13 = FUN_014903e0(&local_1d0,&local_d0);
                  if ((uVar13 & 1) == 0) {
                    iVar20 = 1;
                    *param_2 = 1;
                    *(undefined1 **)(param_2 + 0x14) = &DAT_100000003;
                  }
                  else {
                    iVar20 = 3;
                  }
                }
                bVar23 = false;
                if (iVar20 != 0) goto LAB_01ec7248;
              }
            }
            else {
              local_94[0] = 0.0;
              (**(code **)(*param_1 + 0x508))(param_1,local_94);
              uVar13 = FUN_021f32f0(&local_104,puVar3,puVar21,0,local_94);
              puStack_c8 = puVar8 + 0x10;
              local_d0 = PTR_DAT_04bbc1a0 + 0x10;
              iVar16 = (int)((float)(int)(*(float *)(param_2 + 4) + -2.5) / 5.0) -
                       (uint)(*(float *)(param_2 + 4) + -2.5 < 0.0);
              iVar20 = iVar16 + 1;
              iVar18 = (int)((float)(int)(*(float *)(param_2 + 0xc) + -2.5) / 5.0) -
                       (uint)(*(float *)(param_2 + 0xc) + -2.5 < 0.0);
              iVar17 = iVar18 + 1;
              local_c0 = CONCAT44(iVar18,iVar16);
              local_b0 = CONCAT44(iVar17,iVar20);
              local_b8 = puStack_c8;
              if (((uVar13 & 1) == 0) ||
                 ((((iVar16 < local_e8 || local_d8 < iVar20) || iVar18 < local_e4) ||
                  iVar17 != local_d4) &&
                  (((local_e8 <= iVar16 && iVar20 <= local_d8) && local_e4 <= iVar18) &&
                  iVar17 - local_d4 < 0) ==
                  (((local_e8 <= iVar16 && iVar20 <= local_d8) && local_e4 <= iVar18) &&
                  SBORROW4(iVar17,local_d4)))) goto LAB_01ec6ff4;
              local_1a4[0] = 0.0;
              uVar13 = FUN_014903e0(&local_d0,local_1a4);
              if ((uVar13 & 1) == 0) {
                iVar20 = 1;
                *param_2 = 1;
                *(undefined8 *)(param_2 + 0x14) = 0x100000001;
              }
              else {
                iVar20 = 3;
              }
LAB_01ec7248:
              bVar23 = false;
              if (iVar20 != 3) {
                return;
              }
            }
          }
        }
      }
      if (local_140 < *(int *)(local_150 + 1)) {
        local_140 = local_140 + 1;
      }
      else {
        local_13c = local_13c + 1;
        local_140 = *(int *)(local_158 + 1);
      }
    } while (iVar15 != local_140 || iVar11 != local_13c);
    if (!bVar23) {
      uVar14 = 0;
      goto LAB_01ec7390;
    }
  }
  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
  uVar13 = FUN_014903e0(&local_f8,&local_d0);
  puVar2 = PTR_DAT_04bb2720;
  uVar14 = 0;
  if ((uVar13 & 1) != 0) goto LAB_01ec7390;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar22 = *(long *)PTR_DAT_04bb2720, lVar22 == 0)) ||
     (*(long *)(lVar22 + 0x330) == 0)) {
LAB_01ec7304:
    FUN_012e1cb8(&local_d0,(long)param_1 + 0xaf74,2,2);
    if ((((local_e8 != (int)local_c0) || (local_e4 != local_c0._4_4_)) ||
        ((local_d8 != (int)local_b0 || (local_d4 != local_b0._4_4_)))) &&
       (uVar13 = FUN_01ec9ff0(&local_f8), (uVar13 & 1) == 0)) {
      return;
    }
  }
  else {
    puVar12 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
    iVar11 = FUN_006bd550(*puVar12,0);
    if (((iVar11 != 0x758f7eaf) || (*(long *)puVar2 == 0)) ||
       ((lVar22 = *(long *)(*(long *)puVar2 + 0x330), lVar22 == 0 || (*(int *)(lVar22 + 0x244) == 0)
        ))) goto LAB_01ec7304;
  }
  *(float *)(param_2 + 0xc) = local_fc;
  *(ulong *)(param_2 + 4) = CONCAT44(uStack_100,local_104);
  uVar6 = *(undefined4 *)(param_3 + 0x14);
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = uVar6;
  uVar14 = 1;
LAB_01ec7390:
  *param_2 = uVar14;
  return;
}

