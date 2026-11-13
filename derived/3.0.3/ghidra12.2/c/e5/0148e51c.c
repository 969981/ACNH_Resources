
/* WARNING: Removing unreachable block (ram,0x0148ef30) */
/* WARNING: Removing unreachable block (ram,0x0148ef40) */

int FUN_0148e51c(long param_1,undefined8 *param_2)

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
  bool bVar10;
  short sVar11;
  byte bVar12;
  undefined *puVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  uint *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  uint uVar25;
  uint *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  int *piVar32;
  float fVar33;
  float fVar34;
  undefined4 local_17c;
  undefined8 *local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined **ppuStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined1 local_144;
  byte local_143;
  undefined1 local_142;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  long local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  int local_7c;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar27 = *(long *)PTR_DAT_04bb43c0;
  uVar15 = FUN_0277d6c4(param_2);
  lVar29 = *(long *)puVar2;
  if (lVar29 == 0) {
    return 0;
  }
  lVar27 = *(long *)(lVar27 + 0x57e58);
  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
  if (*(uint *)(lVar27 + 0x1d8) <= uVar15) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) == 0) {
    return 0;
  }
  local_90 = *(undefined4 *)param_2;
  uStack_8c = *(undefined4 *)((long)param_2 + 4);
  local_88 = (uint *)0x0;
  local_98 = PTR_DAT_04bc0510 + 0x10;
  uVar15 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar2 != 0) {
    lVar27 = *(long *)(lVar29 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
      lVar27 = *(long *)PTR_DAT_04bc0428;
      uVar15 = FUN_0277d6c4(param_2);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if (uVar15 < *(uint *)(lVar27 + 0x1d8)) {
        puVar22 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8);
        if (puVar22 != (uint *)0x0) {
          local_88 = puVar22;
        }
      }
    }
  }
  uVar21 = FUN_01ae6020(&local_98);
  if ((uVar21 & 1) == 0) {
    sVar11 = *(short *)PTR_DAT_04bb6298;
    if (sVar11 != -1) {
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8;
      if (0xff < (uint)(int)sVar11) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        uVar15 = FUN_01ae7550(&local_98);
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar15);
        bVar14 = uVar15 < 10;
        goto LAB_0148e6e8;
      }
    }
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
LAB_0148e6e8:
  puVar1 = PTR_DAT_04bb2720;
  local_a8 = 0;
  lVar27 = *(long *)PTR_DAT_04bb2720;
  if (lVar27 == 0) {
    puVar28 = &DAT_055c04a0;
  }
  else {
    puVar28 = &DAT_055c04a0;
    if (*(long *)(lVar27 + 0x330) != 0) {
      puVar28 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
      iVar16 = FUN_006bd550(*puVar28,0);
      puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar16 != 0x758f7eaf) {
        puVar28 = &DAT_055c04a0;
      }
    }
  }
  local_a4 = *(undefined4 *)(puVar28 + 7);
  local_a0 = FUN_017baf44();
  local_a0 = local_a0 & 1;
  piVar32 = (int *)(param_2 + 3);
  puStack_b0 = PTR_DAT_04bb3140 + 0x10;
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_d0 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = 0;
  local_c8 = 0;
  puStack_c0 = puStack_d0;
  FUN_01afb7fc(&local_98,&local_d8,*piVar32);
  puVar22 = (uint *)((long)param_2 + 0x1c);
  local_c8 = CONCAT44(local_c8._4_4_ + *(int *)((long)param_2 + 0x14),
                      (int)local_c8 + *(int *)(param_2 + 2));
  local_b8 = CONCAT44(local_b8._4_4_ + *(int *)((long)param_2 + 0x14),
                      (int)local_b8 + *(int *)(param_2 + 2));
  uVar21 = FUN_01a4fafc(&puStack_b0,*puVar22,&local_d8);
  puVar24 = PTR_DAT_04bbbc38;
  if ((uVar21 & 1) == 0) {
    return 1;
  }
  iVar16 = 0;
  if (*(long *)PTR_DAT_04bbbc38 != 0) {
    iVar16 = *(int *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
  }
  local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar16);
  if ((iVar16 != 0) && (local_178 = (undefined8 *)CONCAT44(local_178._4_4_,*puVar22), *puVar22 < 2))
  {
    iVar16 = FUN_0277d6c4(&local_90);
    if (iVar16 == 0x2b56) {
      uVar21 = FUN_014e609c();
    }
    else {
      uVar21 = FUN_014e5e70(*(undefined8 *)puVar24,&local_d8);
    }
    if ((uVar21 & 1) == 0) {
      return 1;
    }
  }
  puVar13 = PTR_DAT_04bb59d8;
  if (*(long *)PTR_DAT_04bb59d8 != 0) {
    lVar27 = *(long *)puVar1;
    if (lVar27 == 0) {
      puVar28 = &DAT_055c04a0;
    }
    else {
      puVar28 = &DAT_055c04a0;
      if (*(long *)(lVar27 + 0x330) != 0) {
        puVar28 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
        iVar16 = FUN_006bd550(*puVar28,0);
        puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar16 != 0x758f7eaf) {
          puVar28 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar28 + 7) == -0x17df00c3) {
      iVar16 = FUN_0277d6c4(&local_90);
      if (iVar16 == 0x2b56) {
        uVar21 = FUN_014e609c(*(undefined8 *)puVar24,&local_d8);
        if ((uVar21 & 1) == 0) {
          return 1;
        }
      }
      else {
        lVar27 = *(long *)puVar13;
        if ((int)local_c8 < *(int *)(lVar27 + 0x28)) {
          return 1;
        }
        if (*(int *)(lVar27 + 0x38) < (int)local_b8) {
          return 1;
        }
        if (local_c8._4_4_ < *(int *)(lVar27 + 0x2c)) {
          return 1;
        }
        if (*(int *)(lVar27 + 0x3c) < local_b8._4_4_) {
          return 1;
        }
      }
    }
  }
  bVar10 = (bool)(bVar14 ^ 1);
  if (*(char *)((long)param_2 + 0x34) == '\0') {
    bVar10 = true;
  }
  if (!bVar10) {
    if (((int)local_c8 <= *(int *)(param_2 + 5)) && (*(int *)(param_2 + 5) <= (int)local_b8)) {
      if ((local_c8._4_4_ <= *(int *)((long)param_2 + 0x2c)) &&
         (*(int *)((long)param_2 + 0x2c) <= local_b8._4_4_)) {
        return 1;
      }
    }
  }
  if (bVar14) {
    uVar15 = *puVar22;
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar15);
    if ((uVar15 < 2) || (uVar15 == 6)) {
      if ((uVar15 == 1) && (uVar21 = FUN_01a4ff00(&puStack_b0,0,&local_d8), (uVar21 & 1) == 0)) {
        iVar16 = local_b8._4_4_ + 1;
        if (iVar16 != local_c8._4_4_) {
          iVar3 = (int)local_c8;
          puVar1 = PTR_DAT_04bb2010 + 0x10;
          puVar24 = PTR_DAT_04bc0510 + 0x10;
          iVar19 = local_c8._4_4_;
          iVar30 = (int)local_c8;
          do {
            local_e0 = CONCAT44(iVar19,iVar30);
            local_f0 = 0;
            local_f8 = puVar1;
            local_e8 = puVar1;
            FUN_01a5033c(&local_100,&puStack_b0,0,&local_e8,&local_f8);
            if ((short)local_100 != -2) {
              lVar27 = *(long *)puVar2;
              uVar15 = FUN_0277d6c4(&local_100);
              lVar29 = *(long *)puVar2;
              if (lVar29 != 0) {
                lVar27 = *(long *)(lVar27 + 0x57e58);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                  local_130 = (undefined **)0x0;
                  local_138 = (undefined *)CONCAT44(uStack_fc,local_100);
                  local_140 = puVar24;
                  uVar15 = FUN_0277d6c4(&local_138);
                  if (*(long *)puVar2 != 0) {
                    lVar27 = *(long *)(lVar29 + 0x57e58);
                    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                    if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                      lVar27 = *(long *)PTR_DAT_04bc0428;
                      uVar15 = FUN_0277d6c4(&local_100);
                      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                      if (uVar15 < *(uint *)(lVar27 + 0x1d8)) {
                        ppuVar23 = *(undefined ***)
                                    (*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8);
                        if (ppuVar23 != (undefined **)0x0) {
                          local_130 = ppuVar23;
                        }
                      }
                    }
                  }
                  uVar21 = FUN_01ae6020(&local_140);
                  if ((uVar21 & 1) == 0) {
                    iVar17 = FUN_01ae7550(&local_140);
                    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar17);
                    if (iVar17 - 1U < 6) {
                      local_168 = (undefined *)0x0;
                      local_178 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
                      local_170 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
                      ppuStack_158 = (undefined **)0x0;
                      lVar27 = *(long *)puVar2;
                      local_108 = 0;
                      local_118 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                      local_110 = local_100;
                      uStack_10c = uStack_fc;
                      local_160 = local_170;
                      uVar15 = FUN_0277d6c4(&local_110);
                      if (*(long *)puVar2 != 0) {
                        lVar27 = *(long *)(lVar27 + 0x57e58);
                        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                        if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                          lVar27 = *(long *)PTR_DAT_04bc0428;
                          uVar15 = FUN_0277d6c4(&local_100);
                          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                          if (uVar15 < *(uint *)(lVar27 + 0x1d8)) {
                            lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8);
                            if (lVar27 != 0) {
                              local_108 = lVar27;
                            }
                          }
                        }
                      }
                      FUN_01afb480(&local_118,&local_178);
                      goto LAB_0148eb60;
                    }
                  }
                }
              }
            }
            if (iVar30 < (int)local_b8) {
              iVar30 = iVar30 + 1;
            }
            else {
              iVar19 = iVar19 + 1;
              iVar30 = (int)local_c8;
            }
          } while ((iVar3 != iVar30) || (iVar16 != iVar19));
        }
      }
      uVar21 = FUN_0251ee60(0x3f800000,0x40a00000,&local_d8,(long)param_2 + 0x35,
                            *(undefined4 *)PTR_DAT_04bb3238,1);
      if ((uVar21 & 1) != 0) {
        return 1;
      }
    }
  }
LAB_0148eb60:
  uVar21 = FUN_01a4ff00(&puStack_b0,*puVar22,&local_d8);
  if ((uVar21 & 1) == 0) {
    iVar16 = FUN_0277d6c4(&local_90);
    if ((iVar16 == 0x2b56) && (*puVar22 == 0)) {
      iVar16 = local_b8._4_4_ + 1;
      if (iVar16 == local_c8._4_4_) goto LAB_0148eb74;
      iVar3 = (int)local_c8;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      puVar28 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
      iVar19 = local_c8._4_4_;
      iVar30 = (int)local_c8;
      do {
        local_138 = (undefined *)CONCAT44(iVar19,iVar30);
        local_140 = puVar1;
        FUN_01a5033c(&local_118,&puStack_b0,0,&local_140,0);
        lVar29 = *(long *)puVar2;
        uVar15 = FUN_0277d6c4(&local_118);
        lVar27 = *(long *)puVar2;
        if (lVar27 != 0) {
          lVar29 = *(long *)(lVar29 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar29 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            local_168 = (undefined *)0x0;
            local_170 = local_118;
            local_178 = puVar28;
            uVar15 = FUN_0277d6c4(&local_170);
            if (*(long *)puVar2 != 0) {
              lVar27 = *(long *)(lVar27 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
              if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                lVar27 = *(long *)PTR_DAT_04bc0428;
                uVar15 = FUN_0277d6c4(&local_118);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if (uVar15 < *(uint *)(lVar27 + 0x1d8)) {
                  puVar24 = *(undefined **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8);
                  if (puVar24 != (undefined *)0x0) {
                    local_168 = puVar24;
                  }
                }
              }
            }
            uVar21 = FUN_01ae6020(&local_178);
            if ((uVar21 & 1) != 0) {
              return 1;
            }
          }
        }
        if (iVar30 < (int)local_b8) {
          iVar30 = iVar30 + 1;
        }
        else {
          iVar19 = iVar19 + 1;
          iVar30 = (int)local_c8;
        }
      } while ((iVar3 != iVar30) || (iVar16 != iVar19));
      bVar12 = 0;
    }
    else {
      if (*(int *)((long)param_2 + 0x1c) != 1) {
        return 1;
      }
      bVar12 = 1;
      if (*(char *)((long)param_2 + 0x36) == '\0') {
        return 1;
      }
    }
  }
  else {
LAB_0148eb74:
    bVar12 = 0;
  }
  puVar2 = PTR_DAT_04bb27c8;
  if (*(char *)((long)param_2 + 0x34) != '\0') {
    local_138 = (undefined *)
                CONCAT44(local_138._4_4_,(float)*(int *)((long)param_2 + 0x2c) * 5.0 + 2.5);
    local_140 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 5) * 5.0 + 2.5);
    local_170 = (undefined **)
                CONCAT44(local_170._4_4_,
                         ((float)local_c8._4_4_ * 5.0 + (float)local_b8._4_4_ * 5.0 + 5.0) * 0.5);
    local_178 = (undefined8 *)
                (ulong)(uint)(((float)(int)local_c8 * 5.0 + (float)(int)local_b8 * 5.0 + 5.0) * 0.5)
    ;
    lVar27 = *(long *)PTR_DAT_04bb27c8;
    if (lVar27 == 0) {
      fVar33 = -500.0;
      fVar34 = -500.0;
    }
    else {
      if ((*(long *)(lVar27 + 0xa8) == 0) || (*(char *)(lVar27 + 0x11c8) != '\0')) {
        fVar33 = -500.0;
LAB_0148ec24:
        if ((*(long *)(lVar27 + 0xa8) != 0) && (*(char *)(lVar27 + 0x11c8) == '\0')) {
          fVar34 = (float)FUN_0093a950(lVar27 + 0x28,&local_140,0);
          goto LAB_0148ee94;
        }
      }
      else {
        fVar33 = (float)FUN_0093a950(lVar27 + 0x28,&local_178,0);
        lVar27 = *(long *)puVar2;
        if (lVar27 != 0) goto LAB_0148ec24;
      }
      fVar34 = -500.0;
    }
LAB_0148ee94:
    if (fVar33 - fVar34 < -7.0) {
      return 1;
    }
    if (7.0 < fVar33 - fVar34) {
      return 1;
    }
  }
  uVar15 = *puVar22;
  local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar15);
  if ((uVar15 < 2) || (uVar15 == 6)) {
    iVar16 = FUN_0277d6c4(&local_90);
    puVar1 = PTR_DAT_04bb27c8;
    puVar2 = PTR_DAT_04bb27a8;
    if ((iVar16 == 0x2b56) && (*puVar22 == 0)) {
      iVar16 = local_b8._4_4_ + 1;
      if (iVar16 != local_c8._4_4_) {
        iVar3 = (int)local_c8;
        iVar19 = local_c8._4_4_;
        iVar30 = (int)local_c8;
        do {
          local_178 = *(undefined8 **)(*(long *)puVar2 + 0x1f8);
          local_170 = (undefined **)(*(long *)puVar1 + 0x28);
          uVar21 = FUN_035aa210(iVar30,iVar19,&local_178);
          if ((uVar21 & 1) == 0) {
            return 1;
          }
          if (iVar30 < (int)local_b8) {
            iVar30 = iVar30 + 1;
          }
          else {
            iVar19 = iVar19 + 1;
            iVar30 = (int)local_c8;
          }
        } while ((iVar3 != iVar30) || (iVar16 != iVar19));
      }
      if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
         ((lVar27 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar27 != 0 &&
          (uVar21 = FUN_009721a0(lVar27,&local_d8,0), (uVar21 & 1) != 0)))) {
        return 1;
      }
    }
    else {
      uVar21 = FUN_00978be0(&local_d8);
      if ((uVar21 & 1) == 0) {
        return 1;
      }
    }
  }
  local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x76);
  if (local_88 == (uint *)0x0) {
    uVar15 = 0xbc;
  }
  else {
    uVar31 = *local_88;
    uVar15 = 0;
    if ((uVar31 != 0) && (local_88 != (uint *)(ulong)uVar31)) {
      puVar26 = (uint *)((long)local_88 - (long)(ulong)uVar31);
      uVar15 = 0;
      if (*puVar26 != 0) {
        uVar15 = puVar26[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
          lVar27 = 0xc;
          if (*(char *)((long)puVar26 + 10) != '\0') {
            lVar27 = 0x1c;
          }
          lVar27 = (long)puVar26 + lVar27 + (ulong)(ushort)puVar26[2] * 8;
          if (lVar27 != 0) {
            uVar31 = 0;
            if ((ulong)uVar15 != 0) {
              uVar31 = (uint)((ulong)((long)local_88 - lVar27) / (ulong)uVar15);
            }
            if (*puVar26 <= uVar31) {
              uVar31 = 0xffffffff;
            }
            if ((uVar31 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar15 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar31 * 2),
               uVar15 < 0xbd)) goto LAB_0148f07c;
          }
        }
        uVar15 = 0;
      }
    }
  }
LAB_0148f07c:
  local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar15);
  if ((uVar15 == 0x76) && (*piVar32 != 0)) {
    return 1;
  }
  puVar28 = param_2 + 1;
  if (*puVar22 == 1) {
    iVar16 = FUN_0277d6c4(&local_90);
    if (iVar16 == 0x2b56) {
      local_178 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
      local_170 = (undefined **)0x0;
      FUN_01a5033c(&local_140,&puStack_b0,0,puVar28,&local_178);
      uVar21 = FUN_0277e294(&local_140);
      if ((uVar21 & 1) == 0) {
        return 1;
      }
      uVar21 = FUN_02115040(&local_d8,PTR_DAT_04bb3238);
      if ((uVar21 & 1) == 0) {
        return 1;
      }
      uVar21 = FUN_014903e0(&local_d8,puVar22);
      if ((uVar21 & 1) != 0) {
        return 1;
      }
    }
    else {
      iVar16 = FUN_01ae7550(&local_98);
      if ((iVar16 - 5U & 0xfffffffd) != 0) {
        return 1;
      }
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_e0 = 0;
      local_e8 = puVar2;
      local_178._0_4_ = iVar16;
      FUN_01a5033c(&local_100,&puStack_b0,0,puVar28,&local_e8);
      uVar21 = FUN_0277e294(&local_100);
      if ((uVar21 & 1) == 0) {
        return 1;
      }
      FUN_01ad5d04(&local_118,&local_100);
      local_120 = 0;
      local_130 = (undefined **)0x0;
      local_140 = PTR_DAT_04bbc1a0 + 0x10;
      local_138 = puVar2;
      local_128 = puVar2;
      uVar18 = FUN_01ae98d0(&local_118);
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar18);
      uVar21 = FUN_01500520(&local_140,&local_100,&local_e8,&local_178);
      if ((uVar21 & 1) == 0) {
        return 1;
      }
      iVar16 = (int)local_130;
      if (((((int)local_c8 < (int)local_130) || ((int)local_120 < (int)local_b8)) ||
          (local_c8._4_4_ < (int)local_130._4_4_)) ||
         (!(bool)(local_b8._4_4_ <= local_120._4_4_ & (bVar12 ^ 1)))) {
        if (*(char *)((long)param_2 + 0x36) == '\0') {
          return 1;
        }
        if (((int)local_120 - (int)local_130) + 1 < ((int)local_b8 - (int)local_c8) + 1) {
          return 1;
        }
        if ((int)((local_120._4_4_ - local_130._4_4_) + 1) < (local_b8._4_4_ - local_c8._4_4_) + 1)
        {
          return 1;
        }
        iVar16 = 0;
        iVar19 = (int)local_120 - (int)local_b8;
        if ((int)local_b8 <= (int)local_120) {
          iVar19 = 0;
        }
        iVar30 = (int)local_130 - (int)local_c8;
        if ((int)local_130 - (int)local_c8 == 0 || (int)local_130 < (int)local_c8) {
          iVar30 = iVar19;
        }
        iVar19 = local_120._4_4_ - local_b8._4_4_;
        if (local_b8._4_4_ <= local_120._4_4_) {
          iVar19 = 0;
        }
        iVar3 = ((int)local_120 - (int)local_b8) + iVar30;
        iVar17 = iVar30 + (int)local_c8;
        iVar9 = local_130._4_4_ - local_c8._4_4_;
        if ((int)local_130._4_4_ <= local_c8._4_4_) {
          iVar9 = iVar19;
        }
        local_178 = (undefined8 *)*param_2;
        local_168 = (undefined *)param_2[2];
        iVar19 = (local_c8._4_4_ - local_130._4_4_) + iVar9;
        iVar4 = (local_120._4_4_ - local_b8._4_4_) + iVar9;
        iVar5 = iVar9 + local_c8._4_4_;
        iVar6 = iVar9 + local_b8._4_4_;
        iVar7 = iVar30 + (int)local_b8;
        iVar8 = ((int)local_c8 - (int)local_130) + iVar30;
        local_142 = 0;
        if (iVar8 <= iVar3) {
          iVar8 = iVar3;
        }
        if (iVar19 <= iVar4) {
          iVar19 = iVar4;
        }
        uVar15 = iVar8 << 1 | 1;
        local_160 = (undefined **)param_2[3];
        uVar31 = iVar19 << 1 | 1;
        local_150 = *(undefined4 *)(param_2 + 5);
        uStack_14c = *(undefined4 *)((long)param_2 + 0x2c);
        local_170 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        if ((int)uVar15 <= (int)uVar31) {
          uVar15 = uVar31;
        }
        local_144 = *(undefined1 *)((long)param_2 + 0x34);
        local_148 = *(undefined4 *)(param_2 + 6);
        local_143 = *(byte *)((long)param_2 + 0x35);
        if (7 < local_143) {
          local_143 = 0xff;
        }
        ppuStack_158 = local_170;
        do {
          local_17c = 0;
          local_f0 = 0;
          FUN_006f6a70(&local_f8,&local_17c,1,iVar16);
          if (((int)local_130 <= iVar17 + (int)local_f0) &&
             (iVar7 + (int)local_f0 <= (int)local_120)) {
            if (((int)local_130._4_4_ <= iVar5 + local_f0._4_4_) &&
               (iVar6 + local_f0._4_4_ <= local_120._4_4_)) {
              local_168 = (undefined *)
                          CONCAT44(local_f0._4_4_ + iVar9 + *(int *)((long)param_2 + 0x14),
                                   (int)local_f0 + iVar30 + *(int *)(param_2 + 2));
              iVar19 = FUN_0148e51c(param_1,&local_178);
              if (iVar19 == 9) {
                return 9;
              }
            }
          }
          iVar16 = iVar16 + 1;
        } while (uVar15 * uVar15 != iVar16);
        return 1;
      }
      local_178 = &local_138;
      local_170 = &local_128;
      local_160 = local_130;
      uVar15 = local_120._4_4_ + 1;
      local_168 = PTR_DAT_04bb2010 + 0x10;
      if (uVar15 != local_130._4_4_) {
        uVar31 = 0;
        do {
          FUN_01a50240(&local_f8,&puStack_b0,1,&local_168);
          uVar20 = FUN_0277da10(&local_f8);
          if ((int)local_160 < *(int *)(local_170 + 1)) {
            iVar19 = (int)local_160 + 1;
            uVar25 = local_160._4_4_;
          }
          else {
            uVar25 = local_160._4_4_ + 1;
            iVar19 = *(int *)(local_178 + 1);
            local_160 = (undefined **)((ulong)uVar25 << 0x20);
          }
          local_160 = (undefined **)CONCAT44(local_160._4_4_,iVar19);
          uVar31 = uVar31 + (uVar20 & 1);
        } while (iVar16 != iVar19 || uVar15 != uVar25);
        if (3 < uVar31) {
          return 1;
        }
      }
    }
  }
  local_178 = (undefined8 *)((ulong)local_178 & 0xffffffff00000000);
  uVar21 = FUN_0290cbcc(&local_178);
  if ((uVar21 & 1) != 0) {
    uVar21 = FUN_0180c170();
    if (((uVar21 & 1) != 0) &&
       (uVar21 = FUN_01500808(&puStack_b0,*puVar22,&local_d8), (uVar21 & 1) == 0)) {
      return 1;
    }
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,4);
    uVar21 = FUN_0290cbcc(&local_178);
    if (((uVar21 & 1) == 0) || (*puVar22 - 6 < 0xfffffffc)) {
      FUN_01afbaa4(&local_178,param_2,piVar32);
      local_7c = FUN_01490640(&local_178,puVar28,puVar22);
      if (local_7c != 9) {
        return local_7c;
      }
    }
  }
  FUN_01490b64(param_1,param_2,piVar32,puVar28,param_1 + 0x20,puVar22,param_1 + 0x2c);
  return 9;
}

