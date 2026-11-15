
/* WARNING: Removing unreachable block (ram,0x01fbc060) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01fbaf50(long *param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  short sVar11;
  undefined *puVar12;
  undefined1 auVar13 [8];
  undefined1 auVar14 [8];
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int *piVar21;
  undefined4 uVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  undefined8 ******ppppppuVar30;
  ulong uVar31;
  undefined8 uVar32;
  long *plVar33;
  undefined *puVar34;
  undefined8 *******pppppppuVar35;
  undefined8 *******__src;
  ushort uVar36;
  long *plVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  int local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  int local_1f0;
  int local_1e8;
  undefined *local_1e0;
  undefined8 *******local_1d8;
  undefined1 local_1d0 [8];
  undefined8 *******local_1c8;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined8 *******local_1b0;
  undefined8 *******local_1a8;
  undefined8 *******local_1a0;
  undefined8 local_198;
  uint local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  uint local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined *local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined4 local_15c;
  uint *local_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined **local_128;
  undefined **local_120;
  undefined *local_118;
  int local_110;
  int local_10c;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  byte local_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  
  if ((*(byte *)((long)param_1 + 0xafb2) & 1) == 0) {
    puVar2 = (undefined2 *)((long)param_1 + 0x11fca);
    lVar23 = param_1[1];
    uVar18 = *(uint *)(lVar23 + 0x288);
    *(undefined4 *)(lVar23 + 0x288) = *(undefined4 *)(lVar23 + 0x28c);
    uVar18 = uVar18 ^ uVar18 << 0xb;
    *(undefined4 *)(lVar23 + 0x28c) = *(undefined4 *)(lVar23 + 0x290);
    uVar16 = *(uint *)(lVar23 + 0x294);
    *(uint *)(lVar23 + 0x290) = uVar16;
    uVar18 = uVar18 >> 8 ^ uVar16 >> 0x13 ^ uVar18 ^ uVar16;
    *(uint *)(lVar23 + 0x294) = uVar18;
    plVar37 = (long *)PTR_DAT_04bb5ce0;
    puVar34 = PTR_DAT_04bb2720;
    puVar3 = PTR_DAT_04bb2640;
    if (((((*(byte *)((long)param_1 + 0xafb2) >> 3 & 1) == 0) && (*(long *)PTR_DAT_04bb5ce0 != 0))
        && (lVar23 = *(long *)PTR_DAT_04bb2720, lVar23 != 0)) && (*(long *)(lVar23 + 0x330) != 0)) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar15 = FUN_006bd550(*puVar19,0);
      if (((iVar15 == 0x758f7eaf) && (lVar23 = *(long *)puVar34, lVar23 != 0)) &&
         ((*(long *)(lVar23 + 0x330) != 0 && (*(int *)(*(long *)(lVar23 + 0x330) + 0x244) != 0)))) {
        lVar26 = param_1[1];
        uVar16 = *(uint *)(lVar26 + 0x288);
        *(undefined4 *)(lVar26 + 0x288) = *(undefined4 *)(lVar26 + 0x28c);
        uVar16 = uVar16 ^ uVar16 << 0xb;
        *(undefined4 *)(lVar26 + 0x28c) = *(undefined4 *)(lVar26 + 0x290);
        uVar25 = *(uint *)(lVar26 + 0x294);
        *(uint *)(lVar26 + 0x290) = uVar25;
        uVar16 = uVar16 >> 8 ^ uVar25 >> 0x13 ^ uVar16 ^ uVar25;
        *(uint *)(lVar26 + 0x294) = uVar16;
        if (((0x31 < (uint)((ulong)uVar16 * 100 >> 0x20)) && (*plVar37 != 0)) &&
           (*(long *)(lVar23 + 0x330) != 0)) {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)puVar3 + 0x18))
                              (*(long **)puVar3,*(undefined4 *)(lVar23 + 0x338));
          iVar15 = FUN_006bd550(*puVar19,0);
          if ((((iVar15 == 0x758f7eaf) && (lVar23 = *(long *)puVar34, lVar23 != 0)) &&
              (*(long *)(lVar23 + 0x330) != 0)) &&
             (*(int *)(*(long *)(lVar23 + 0x330) + 0x244) != 0)) {
            local_a0 = 0;
            local_98 = 0;
            local_90 = 0;
            local_d0 = 0;
            sVar11 = *(short *)PTR_DAT_04bb37e0;
            uVar9 = PTR_DAT_04bb37e0[2];
            uVar10 = PTR_DAT_04bb37e0[3];
            local_f0 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_e8 = PTR_DAT_04bb2010 + 0x10;
            local_238 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            local_c8 = *(undefined **)PTR_DAT_04bb37e0;
            local_b0 = 0;
            local_e0 = 0;
            puStack_d8 = puStack_e8;
            local_c0 = local_f0;
            local_b8 = puStack_e8;
            puStack_a8 = puStack_e8;
            if (*plVar37 == 0) {
LAB_01fbb1c4:
              lVar23 = *(long *)PTR_DAT_04bb59d8;
              if (lVar23 != 0) {
                local_1f0 = *(int *)(lVar23 + 0x28);
                iVar17 = *(int *)(lVar23 + 0x2c);
                local_e0 = *(undefined8 *)(lVar23 + 0x28);
                iVar15 = *(int *)(lVar23 + 0x38);
                local_1e8 = *(int *)(lVar23 + 0x3c);
                goto LAB_01fbb1e8;
              }
              local_1e8 = 0;
              iVar17 = 0;
              local_1f0 = 0;
            }
            else {
              puVar19 = (undefined8 *)
                        (**(code **)(**(long **)puVar3 + 0x18))
                                  (*(long **)puVar3,*(undefined4 *)(lVar23 + 0x338));
              iVar15 = FUN_006bd550(*puVar19,0);
              if (((iVar15 != 0x758f7eaf) || (*(long *)puVar34 == 0)) ||
                 ((lVar23 = *(long *)(*(long *)puVar34 + 0x330), lVar23 == 0 ||
                  (*(int *)(lVar23 + 0x244) == 0)))) goto LAB_01fbb1c4;
              lVar23 = *plVar37;
              if (lVar23 == 0) {
                iVar15 = 0;
                local_1e8 = 0;
                iVar28 = 0x10;
                iVar17 = 0x10;
              }
              else {
                iVar15 = *(int *)(lVar23 + 0xd88);
                local_1e8 = *(int *)(lVar23 + 0xd8c);
                iVar17 = *(int *)(lVar23 + 0xd98);
                iVar28 = *(int *)(lVar23 + 0xd9c);
              }
              local_1f0 = iVar15;
              if (iVar17 <= iVar15) {
                local_1f0 = iVar17;
              }
              if (iVar15 <= iVar17) {
                iVar15 = iVar17;
              }
              iVar17 = local_1e8;
              if (iVar28 <= local_1e8) {
                iVar17 = iVar28;
              }
              local_e0 = CONCAT44(iVar17,local_1f0);
              if (local_1e8 <= iVar28) {
                local_1e8 = iVar28;
              }
LAB_01fbb1e8:
              local_d0 = CONCAT44(local_1e8,iVar15);
            }
            local_100 = 0;
            lVar23 = *(long *)(param_1[1] + 0x68);
            lVar26 = *(long *)puVar34;
            if (lVar26 == 0) {
              puVar19 = &DAT_055c04a0;
            }
            else {
              puVar19 = &DAT_055c04a0;
              if (*(long *)(lVar26 + 0x330) != 0) {
                puVar19 = (undefined8 *)
                          (**(code **)(**(long **)puVar3 + 0x18))
                                    (*(long **)puVar3,*(undefined4 *)(lVar26 + 0x338));
                iVar15 = FUN_006bd550(*puVar19,0);
                puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar15 != 0x758f7eaf) {
                  puVar19 = &DAT_055c04a0;
                }
              }
            }
            local_fc = *(undefined4 *)(puVar19 + 7);
            local_f8 = FUN_017baf44();
            local_108 = PTR_DAT_04bb3140 + 0x10;
            local_110 = local_1f0;
            puVar3 = PTR_DAT_04bb2010 + 0x10;
            local_f8 = local_f8 & 1;
            local_128 = &puStack_e8;
            local_120 = &puStack_d8;
            local_118 = puVar3;
            local_10c = iVar17;
            if (local_1e8 + 1 == iVar17) {
              fVar39 = 0.0;
              fVar41 = 0.0;
              local_24c = 0;
              local_248 = 0;
              local_240 = 0;
            }
            else {
              local_248 = 0;
              local_240 = 0;
              fVar39 = 0.0;
              local_24c = 0;
              fVar41 = 0.0;
              puVar34 = PTR_DAT_04bbc1a0 + 0x10;
              puVar4 = PTR_DAT_04bc0510 + 0x10;
              puVar5 = PTR_DAT_04bc1558 + 0x10;
              do {
                plVar33 = (long *)FUN_01a5010c(&local_108,1,&local_118);
                uVar20 = FUN_0277e294();
                if ((uVar20 & 1) != 0) {
                  uVar20 = FUN_014fe7fc(&local_108,&local_118,1);
                  puVar12 = PTR_DAT_04bb43c0;
                  if ((uVar20 & 1) != 0) {
                    local_140 = 0;
                    local_130 = 0;
                    local_160 = (undefined2)*plVar33;
                    local_15e = *(undefined1 *)((long)plVar33 + 2);
                    local_15d = *(undefined1 *)((long)plVar33 + 3);
                    local_15c = *(undefined4 *)((long)plVar33 + 4);
                    local_158 = (uint *)0x0;
                    lVar26 = *(long *)PTR_DAT_04bb43c0;
                    local_168 = puVar4;
                    local_150 = puVar34;
                    puStack_148 = puVar3;
                    local_138 = puVar3;
                    uVar16 = FUN_0277d6c4(&local_160);
                    if (*(long *)puVar12 != 0) {
                      lVar26 = *(long *)(lVar26 + 0x57e58);
                      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                      if ((uVar16 < *(uint *)(lVar26 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                        lVar26 = *(long *)PTR_DAT_04bc0428;
                        uVar16 = FUN_0277d6c4(plVar33);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                        if (uVar16 < *(uint *)(lVar26 + 0x1d8)) {
                          puVar24 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar16 * 8);
                          if (puVar24 != (uint *)0x0) {
                            local_158 = puVar24;
                          }
                        }
                      }
                    }
                    FUN_01afb480(&local_168,&local_150);
                    local_140 = CONCAT44(local_140._4_4_ + local_10c,(int)local_140 + local_110);
                    local_130 = CONCAT44(local_130._4_4_ + local_10c,(int)local_130 + local_110);
                    local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,1);
                    uVar20 = FUN_01fbc6d8(param_1,plVar33,&local_150,&local_1e0);
                    if ((uVar20 & 1) != 0) {
                      local_1e0 = (undefined *)
                                  CONCAT44(local_1e0._4_4_,*(undefined4 *)(param_1[1] + 0x230));
                      FUN_021e8490(&local_1e0,lVar23 + 0x278,param_1 + 0x31,1,0);
                      if (local_158 == (uint *)0x0) {
LAB_01fbb558:
                        uVar36 = 0;
                      }
                      else {
                        uVar16 = *local_158;
                        uVar36 = 0;
                        if ((uVar16 != 0) && (local_158 != (uint *)(ulong)uVar16)) {
                          puVar24 = (uint *)((long)local_158 - (long)(ulong)uVar16);
                          if ((*puVar24 != 0) &&
                             ((uVar16 = puVar24[1], uVar16 != 0 && ((ulong)(ushort)puVar24[2] != 0))
                             )) {
                            lVar26 = 0xc;
                            if (*(char *)((long)puVar24 + 10) != '\0') {
                              lVar26 = 0x1c;
                            }
                            lVar26 = (long)puVar24 + lVar26 + (ulong)(ushort)puVar24[2] * 8;
                            if (lVar26 != 0) {
                              uVar25 = 0;
                              if ((ulong)uVar16 != 0) {
                                uVar25 = (uint)((ulong)((long)local_158 - lVar26) / (ulong)uVar16);
                              }
                              if (*puVar24 <= uVar25) {
                                uVar25 = 0xffffffff;
                              }
                              if ((uVar25 < *(uint *)PTR_DAT_04bc0110) &&
                                 (uVar36 = *(ushort *)
                                            (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar25 * 2
                                            ), uVar36 < 9)) goto LAB_01fbb55c;
                            }
                          }
                          goto LAB_01fbb558;
                        }
                      }
LAB_01fbb55c:
                      local_1d8 = (undefined8 *******)0x0;
                      local_1d0 = (undefined1  [8])0x0;
                      local_1c8 = (undefined8 *******)0x0;
                      local_1c0 = (undefined1  [8])(PTR_DAT_04bbc1a0 + 0x10);
                      local_18c = 0;
                      local_1b8 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
                      local_1b0 = (undefined8 *******)0x0;
                      local_1a0 = (undefined8 *******)0x0;
                      local_198 = 0xffffffff00000000;
                      local_190 = 0xffffffff;
                      local_188 = 0xfffe;
                      local_1e0 = puVar5;
                      local_1a8 = local_1b8;
                      FUN_0277d4ac(&local_188);
                      local_178 = local_178 & 0xffffff00;
                      local_174 = 0;
                      local_180 = 0x3bf800000;
                      uVar20 = FUN_01fbcee8(param_1,&local_1e0,plVar33,&local_150,uVar36);
                      if ((uVar20 & 1) != 0) {
                        fVar38 = ((float)(int)local_140 * 5.0 + (float)(int)local_130 * 5.0 + 5.0) *
                                 0.5;
                        fVar40 = ((float)local_140._4_4_ * 5.0 +
                                 (float)(int)local_130._4_4_ * 5.0 + 5.0) * 0.5;
                        fVar42 = fVar38 - *(float *)(lVar23 + 0x278);
                        fVar43 = fVar40 - *(float *)(lVar23 + 0x280);
                        if (SQRT(fVar43 * fVar43 + fVar42 * fVar42) < 3.4028235e+38) {
                          sVar11 = (short)*plVar33;
                          local_24c = (int)local_140;
                          local_248 = CONCAT44((int)local_130,local_140._4_4_);
                          uVar9 = *(undefined1 *)((long)plVar33 + 2);
                          uVar10 = *(undefined1 *)((long)plVar33 + 3);
                          local_238 = *(undefined4 *)((long)plVar33 + 4);
                          local_c8 = (undefined *)*plVar33;
                          local_a0 = local_130;
                          local_b0 = local_140;
                          local_90 = (ulong)(uint)fVar40 << 0x20;
                          local_240 = CONCAT44(1,local_130._4_4_);
                          local_98 = CONCAT44(fVar38,1);
                          fVar39 = fVar40;
                          fVar41 = fVar38;
                        }
                      }
                    }
                  }
                }
                if (local_110 < *(int *)(local_120 + 1)) {
                  local_110 = local_110 + 1;
                }
                else {
                  local_110 = *(int *)(local_128 + 1);
                  local_10c = local_10c + 1;
                }
              } while ((local_1f0 != local_110) || (local_1e8 + 1 != local_10c));
              iVar17 = (int)local_e0;
              local_110 = (int)local_e0;
              local_10c = local_e0._4_4_;
              iVar15 = local_d0._4_4_ + 1;
              puVar3 = PTR_DAT_04bb2010 + 0x10;
              local_128 = &puStack_e8;
              local_120 = &puStack_d8;
              local_118 = puVar3;
              if (iVar15 != local_e0._4_4_) {
                puVar34 = PTR_DAT_04bbc1a0 + 0x10;
                puVar4 = PTR_DAT_04bc0510 + 0x10;
                puVar5 = PTR_DAT_04bc1558 + 0x10;
                do {
                  plVar33 = (long *)FUN_01a5010c(&local_108,0,&local_118);
                  uVar20 = FUN_0277e294();
                  if ((uVar20 & 1) != 0) {
                    uVar20 = FUN_014fe7fc(&local_108,&local_118,0);
                    puVar12 = PTR_DAT_04bb43c0;
                    if ((uVar20 & 1) != 0) {
                      local_140 = 0;
                      local_130 = 0;
                      local_160 = (undefined2)*plVar33;
                      local_15e = *(undefined1 *)((long)plVar33 + 2);
                      local_15d = *(undefined1 *)((long)plVar33 + 3);
                      local_15c = *(undefined4 *)((long)plVar33 + 4);
                      local_158 = (uint *)0x0;
                      lVar26 = *(long *)PTR_DAT_04bb43c0;
                      local_168 = puVar4;
                      local_150 = puVar34;
                      puStack_148 = puVar3;
                      local_138 = puVar3;
                      uVar16 = FUN_0277d6c4(&local_160);
                      if (*(long *)puVar12 != 0) {
                        lVar26 = *(long *)(lVar26 + 0x57e58);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                        if ((uVar16 < *(uint *)(lVar26 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                          lVar26 = *(long *)PTR_DAT_04bc0428;
                          uVar16 = FUN_0277d6c4(plVar33);
                          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                          if (uVar16 < *(uint *)(lVar26 + 0x1d8)) {
                            puVar24 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar16 * 8);
                            if (puVar24 != (uint *)0x0) {
                              local_158 = puVar24;
                            }
                          }
                        }
                      }
                      FUN_01afb480(&local_168,&local_150);
                      local_1e0 = (undefined *)((ulong)local_1e0 & 0xffffffff00000000);
                      local_140 = CONCAT44(local_140._4_4_ + local_10c,(int)local_140 + local_110);
                      local_130 = CONCAT44(local_130._4_4_ + local_10c,(int)local_130 + local_110);
                      uVar20 = FUN_01fbc6d8(param_1,plVar33,&local_150,&local_1e0);
                      if ((uVar20 & 1) != 0) {
                        local_1e0 = (undefined *)
                                    CONCAT44(local_1e0._4_4_,*(undefined4 *)(param_1[1] + 0x230));
                        FUN_021e8490(&local_1e0,lVar23 + 0x278,param_1 + 0x31,1,0);
                        if (local_158 == (uint *)0x0) {
LAB_01fbb9a0:
                          uVar36 = 0;
                        }
                        else {
                          uVar16 = *local_158;
                          uVar36 = 0;
                          if ((uVar16 != 0) && (local_158 != (uint *)(ulong)uVar16)) {
                            puVar24 = (uint *)((long)local_158 - (long)(ulong)uVar16);
                            if ((*puVar24 != 0) &&
                               ((uVar16 = puVar24[1], uVar16 != 0 &&
                                ((ulong)(ushort)puVar24[2] != 0)))) {
                              lVar26 = 0xc;
                              if (*(char *)((long)puVar24 + 10) != '\0') {
                                lVar26 = 0x1c;
                              }
                              lVar26 = (long)puVar24 + lVar26 + (ulong)(ushort)puVar24[2] * 8;
                              if (lVar26 != 0) {
                                uVar25 = 0;
                                if ((ulong)uVar16 != 0) {
                                  uVar25 = (uint)((ulong)((long)local_158 - lVar26) / (ulong)uVar16)
                                  ;
                                }
                                if (*puVar24 <= uVar25) {
                                  uVar25 = 0xffffffff;
                                }
                                if ((uVar25 < *(uint *)PTR_DAT_04bc0110) &&
                                   (uVar36 = *(ushort *)
                                              (*(long *)(PTR_DAT_04bc0110 + 8) +
                                              (long)(int)uVar25 * 2), uVar36 < 9))
                                goto LAB_01fbb9a4;
                              }
                            }
                            goto LAB_01fbb9a0;
                          }
                        }
LAB_01fbb9a4:
                        local_1d8 = (undefined8 *******)0x0;
                        local_1d0 = (undefined1  [8])0x0;
                        local_1c8 = (undefined8 *******)0x0;
                        local_1c0 = (undefined1  [8])(PTR_DAT_04bbc1a0 + 0x10);
                        local_18c = 0;
                        local_1b8 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
                        local_1b0 = (undefined8 *******)0x0;
                        local_1a0 = (undefined8 *******)0x0;
                        local_198 = 0xffffffff00000000;
                        local_190 = 0xffffffff;
                        local_188 = 0xfffe;
                        local_1e0 = puVar5;
                        local_1a8 = local_1b8;
                        FUN_0277d4ac(&local_188);
                        local_178 = local_178 & 0xffffff00;
                        local_174 = 0;
                        local_180 = 0x3bf800000;
                        uVar20 = FUN_01fbcee8(param_1,&local_1e0,plVar33,&local_150,uVar36);
                        if ((uVar20 & 1) != 0) {
                          fVar38 = ((float)(int)local_140 * 5.0 + (float)(int)local_130 * 5.0 + 5.0)
                                   * 0.5;
                          fVar40 = ((float)local_140._4_4_ * 5.0 +
                                   (float)(int)local_130._4_4_ * 5.0 + 5.0) * 0.5;
                          fVar42 = fVar38 - *(float *)(lVar23 + 0x278);
                          fVar43 = fVar40 - *(float *)(lVar23 + 0x280);
                          if (SQRT(fVar43 * fVar43 + fVar42 * fVar42) < 3.4028235e+38) {
                            sVar11 = (short)*plVar33;
                            local_24c = (int)local_140;
                            local_248 = CONCAT44((int)local_130,local_140._4_4_);
                            uVar9 = *(undefined1 *)((long)plVar33 + 2);
                            uVar10 = *(undefined1 *)((long)plVar33 + 3);
                            local_238 = *(undefined4 *)((long)plVar33 + 4);
                            local_c8 = (undefined *)*plVar33;
                            local_b0 = local_140;
                            local_a0 = local_130;
                            local_98 = (ulong)(uint)fVar38 << 0x20;
                            local_90 = (ulong)(uint)fVar40 << 0x20;
                            local_240 = (ulong)local_130._4_4_;
                            fVar39 = fVar40;
                            fVar41 = fVar38;
                          }
                        }
                      }
                    }
                  }
                  if (local_110 < *(int *)(local_120 + 1)) {
                    local_110 = local_110 + 1;
                  }
                  else {
                    local_110 = *(int *)(local_128 + 1);
                    local_10c = local_10c + 1;
                  }
                } while ((iVar17 != local_110) || (iVar15 != local_10c));
              }
            }
            *(float *)((long)param_1 + 0x11ffc) = fVar41;
            *(undefined4 *)(param_1 + 0x2400) = 0;
            *(float *)((long)param_1 + 0x12004) = fVar39;
            *(undefined1 *)puVar2 = uVar9;
            *(short *)(param_1 + 0x23f9) = sVar11;
            *(undefined1 *)((long)param_1 + 0x11fcb) = uVar10;
            *(undefined4 *)((long)param_1 + 0x11fcc) = local_238;
            *(int *)(param_1 + 0x23fc) = local_24c;
            *(undefined4 *)((long)param_1 + 0x11fe4) = (undefined4)local_248;
            *(undefined4 *)(param_1 + 0x23fe) = local_248._4_4_;
            *(undefined4 *)((long)param_1 + 0x11ff4) = (undefined4)local_240;
            *(undefined4 *)(param_1 + 0x23ff) = local_240._4_4_;
            if ((sVar11 != -2) &&
               (uVar20 = FUN_01f9d6fc(param_1,&local_c8,&local_c0,1,0), (uVar20 & 1) != 0)) {
              return 1;
            }
          }
        }
      }
    }
    puVar4 = PTR_DAT_04bb3968;
    puVar34 = PTR_DAT_04bb2720;
    puVar3 = PTR_DAT_04bb2640;
    iVar15 = (int)((ulong)uVar18 * 100 >> 0x20);
    if ((int)param_1[0x15f1] == 1) {
      lVar23 = *(long *)PTR_DAT_04bb3968;
      if (*plVar37 != 0) {
        lVar26 = *(long *)PTR_DAT_04bb2720;
        if ((lVar26 != 0) && (*(long *)(lVar26 + 0x330) != 0)) {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
          iVar17 = FUN_006bd550(*puVar19,0);
          puVar5 = PTR_DAT_04bb43c0;
          if (iVar17 == 0x758f7eaf) {
            if (*(long *)puVar34 != 0) {
              lVar26 = *(long *)(*(long *)puVar34 + 0x330);
              if ((lVar26 != 0) && (*(int *)(lVar26 + 0x244) != 0)) {
                lVar26 = *(long *)PTR_DAT_04bb43c0;
                puVar7 = (undefined2 *)PTR_DAT_04bb37e0;
                if (*plVar37 != 0) {
                  puVar7 = (undefined2 *)(*plVar37 + 0xe54);
                }
                uVar18 = FUN_0277d6c4();
                plVar37 = (long *)PTR_DAT_04bb5ce0;
                if (*(long *)puVar5 != 0) {
                  lVar26 = *(long *)(lVar26 + 0x57e58);
                  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                  if ((((uVar18 < *(uint *)(lVar26 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) &&
                      (*(long *)PTR_DAT_04bb5ce0 != 0)) &&
                     ((lVar26 = *(long *)puVar34, lVar26 != 0 && (*(long *)(lVar26 + 0x330) != 0))))
                  {
                    puVar19 = (undefined8 *)
                              (**(code **)(**(long **)puVar3 + 0x18))
                                        (*(long **)puVar3,*(undefined4 *)(lVar26 + 0x338));
                    iVar17 = FUN_006bd550(*puVar19,0);
                    if ((((iVar17 == 0x758f7eaf) &&
                         ((*(long *)puVar34 != 0 &&
                          (lVar26 = *(long *)(*(long *)puVar34 + 0x330), lVar26 != 0)))) &&
                        (*(int *)(lVar26 + 0x244) != 0)) &&
                       (uVar20 = FUN_01fa3304(param_1), (uVar20 & 1) == 0)) {
                      fVar39 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278);
                      local_c8 = PTR_DAT_04bb2010 + 0x10;
                      fVar41 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
                      local_c0 = (undefined *)
                                 CONCAT44((int)((float)(int)fVar41 / 5.0) - (uint)(fVar41 < 0.0),
                                          (int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0));
                      FUN_01a4f4bc(&local_1e0);
                      local_1e0 = PTR_DAT_04bb3140 + 0x10;
                      uVar20 = FUN_01a4fd6c(&local_1e0,6,&local_c8,1);
                      if ((uVar20 & 1) != 0) {
                        FUN_01ad5d04(&local_c8,puVar7);
                        local_190 = local_190 & 0xffffff;
                        local_1d8 = (undefined8 *******)(local_1d0 + 4);
                        local_1d0._0_5_ = 0x40;
                        local_1e0 = PTR_DAT_04bb2bc0 + 0x10;
                        FUN_01b10b80(&local_c8,&local_1e0);
                        if ((char)param_1[0x1615] != '\0') {
                          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
                          if (*(int *)((long)param_1 + 0xb0ac) == 1) goto LAB_01fbbecc;
                        }
                        if (*(char *)local_1d8 != '\0') {
                          piVar21 = (int *)(**(code **)(*(long *)(lVar23 + 0x178b0) + 0xf0))();
                          if (iVar15 < *piVar21) {
                            FUN_01fb5cac(param_1,puVar7,2,0);
                            *(undefined4 *)((long)param_1 + 0xb0ac) = 1;
                            *(undefined1 *)(param_1 + 0x1615) = 1;
                            *(undefined2 *)(param_1 + 0x23f9) = *puVar7;
                            *(undefined1 *)puVar2 = *(undefined1 *)(puVar7 + 1);
                            *(undefined1 *)((long)param_1 + 0x11fcb) =
                                 *(undefined1 *)((long)puVar7 + 3);
                            *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)(puVar7 + 2);
                            return 1;
                          }
                          piVar21 = (int *)(**(code **)(*(long *)(lVar23 + 0x178b0) + 0xf0))();
                          iVar15 = iVar15 - *piVar21;
                        }
                      }
                    }
                  }
                }
LAB_01fbbecc:
                local_f0 = (undefined *)0xfffe;
                FUN_0277d4ac(&local_f0);
                if ((char)param_1[0x1615] != '\0') {
                  local_1e0 = (undefined *)((ulong)local_1e0 & 0xffffffff00000000);
                  if (*(int *)((long)param_1 + 0xb0ac) == 0) goto LAB_01fbc268;
                }
                lVar26 = *plVar37;
                local_c8 = (undefined *)(*(long *)(param_1[1] + 0x68) + 0x278);
                if (lVar26 == 0) {
                  local_150 = (undefined *)CONCAT44(local_150._4_4_,2);
                }
                else {
                  iVar17 = *(int *)(lVar26 + 0xea0);
                  local_150 = (undefined *)CONCAT44(local_150._4_4_,iVar17);
                  if (*(char *)(lVar26 + 0xe9e) != '\0') {
                    uVar20 = FUN_01fc6738(&local_c8,lVar26 + 0xe94,iVar17);
                    if ((uVar20 & 1) != 0) {
                      local_f0 = *(undefined **)(lVar26 + 0xe94);
                      uVar18 = (uint)(long)((float)iVar17 * 90.0 * 11930465.0);
LAB_01fbc1d0:
                      plVar33 = (long *)(lVar23 + 0x178e0);
                      piVar21 = (int *)(**(code **)(*plVar33 + 0xf0))(plVar33);
                      if (iVar15 < *piVar21) {
                        *(uint *)(param_1 + 0x240d) = uVar18 ^ 0x80000000;
                        *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 2;
                        FUN_01fb5cac(param_1,&local_f0,0,0);
                        *(undefined4 *)((long)param_1 + 0xb0ac) = 0;
                        *(undefined1 *)(param_1 + 0x1615) = 1;
                        *(undefined2 *)(param_1 + 0x23f9) = (undefined2)local_f0;
                        *puVar2 = local_f0._2_2_;
                        *(undefined4 *)((long)param_1 + 0x11fcc) = local_f0._4_4_;
                        return 1;
                      }
                      piVar21 = (int *)(**(code **)(*plVar33 + 0xf0))(plVar33);
                      iVar15 = iVar15 - *piVar21;
                      goto LAB_01fbc268;
                    }
                    lVar26 = *plVar37;
                  }
                }
                local_1e0 = (undefined *)0x0;
                local_1d8 = (undefined8 *******)0x0;
                plVar37 = (long *)PTR_DAT_04bb37e0;
                if (lVar26 != 0) {
                  plVar37 = (long *)(lVar26 + 0xe70);
                }
                local_1b8 = &local_1b0;
                local_1c8 = (undefined8 *******)local_1c0;
                local_1b0 = &local_1a8;
                local_1a8 = (undefined8 *******)0x0;
                local_1d0 = (undefined1  [8])local_1c8;
                local_1c0 = (undefined1  [8])&local_1b8;
                if (&local_1a0 != (undefined8 ********)0x0) {
                  local_1c0 = (undefined1  [8])((ulong)&local_1b8 & 0xffffffff00000000);
                  local_1d0 = (undefined1  [8])&local_1b8;
                  if ((undefined8 *******)&local_1b8 != (undefined8 *******)0x0) {
                    local_1d0 = (undefined1  [8])local_1b8;
                  }
                  auVar13 = local_1d0;
                  uVar20 = (ulong)local_1b8 >> 0x20;
                  local_1b8 = (undefined8 *******)CONCAT44((int)uVar20,1);
                  if (local_1d0 != (undefined1  [8])0x0) {
                    local_1d0 = *(undefined1 (*) [8])local_1d0;
                  }
                  auVar14 = local_1d0;
                  local_1a0 = local_1c8;
                  *(undefined4 *)auVar13 = 2;
                  if (local_1d0 != (undefined1  [8])0x0) {
                    local_1d0 = *(undefined1 (*) [8])local_1d0;
                  }
                  *(undefined4 *)auVar14 = 3;
                  local_1e0 = (undefined *)0x400000004;
                  local_1d8 = &local_1a0;
                }
                uVar18 = nn::os::GetSystemTick();
                if (1 < (int)local_1e0) {
                  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
                  uVar16 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 2;
                  uVar25 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
                  uVar20 = (ulong)local_1e0 & 0xffffffff;
                  uVar27 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 4;
                  do {
                    uVar18 = uVar18 ^ uVar18 << 0xb;
                    uVar8 = uVar18 >> 8 ^ uVar27 >> 0x13 ^ uVar18 ^ uVar27;
                    uVar29 = uVar20 - 1 & 0xffffffff;
                    ppppppuVar30 = local_1d8[uVar29];
                    uVar31 = uVar20 * uVar8 >> 0x1d & 0x7fffffff8;
                    local_1d8[uVar29] = *(undefined8 *******)((long)local_1d8 + uVar31);
                    *(undefined8 *******)((long)local_1d8 + uVar31) = ppppppuVar30;
                    bVar1 = 2 < uVar20;
                    uVar20 = uVar20 - 1;
                    uVar18 = uVar16;
                    uVar16 = uVar25;
                    uVar25 = uVar27;
                    uVar27 = uVar8;
                  } while (bVar1);
                }
                if ((int)local_1e0 != 0) {
                  lVar26 = (long)(int)local_1e0 << 3;
                  pppppppuVar35 = local_1d8;
                  do {
                    ppppppuVar30 = *pppppppuVar35;
                    if ((*(int *)ppppppuVar30 != (int)local_150) &&
                       (uVar20 = FUN_01fc6738(&local_c8,plVar37), (uVar20 & 1) != 0)) {
                      local_f0 = (undefined *)*plVar37;
                      uVar18 = (uint)(long)((float)*(int *)ppppppuVar30 * 90.0 * 11930465.0) ^
                               0x80000000;
                      plVar37 = (long *)PTR_DAT_04bb5ce0;
                      goto LAB_01fbc1d0;
                    }
                    pppppppuVar35 = pppppppuVar35 + 1;
                    lVar26 = lVar26 + -8;
                  } while (lVar26 != 0);
                }
                plVar37 = (long *)PTR_DAT_04bb5ce0;
              }
            }
          }
        }
      }
LAB_01fbc268:
      puVar34 = PTR_DAT_04bb37e0;
      puVar3 = PTR_PTR_04bb2238;
      pppppppuVar35 = (undefined8 *******)(local_1c0 + 4);
      local_180._0_4_ = (uint)(uint3)local_180;
      local_1e0 = *(undefined **)PTR_DAT_04bb37e0;
      local_1c0._0_4_ = 0x40;
      local_1d0 = (undefined1  [8])(PTR_DAT_04bb2f70 + 0x10);
      local_1d8 = (undefined8 *******)0x0;
      local_1c8 = pppppppuVar35;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      __src = *(undefined8 ********)(puVar3 + 8);
      if (pppppppuVar35 != __src) {
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
        lVar26 = 0;
        do {
          if (*(char *)(*(long *)(puVar3 + 8) + lVar26) == '\0') goto LAB_01fbc32c;
          lVar6 = *(long *)(puVar3 + 8) + lVar26;
          if (*(char *)(lVar6 + 1) == '\0') {
            lVar26 = lVar26 + 1;
            goto LAB_01fbc32c;
          }
          if (*(char *)(lVar6 + 2) == '\0') {
            lVar26 = lVar26 + 2;
            goto LAB_01fbc32c;
          }
          lVar26 = lVar26 + 3;
        } while (lVar26 != 0x80001);
        lVar26 = 0;
LAB_01fbc32c:
        iVar17 = (int)lVar26;
        if ((int)local_1c0._0_4_ <= (int)lVar26) {
          iVar17 = local_1c0._0_4_ + -1;
        }
        memcpy(pppppppuVar35,__src,(long)iVar17);
        *(undefined1 *)((long)pppppppuVar35 + (long)iVar17) = 0;
      }
      local_170 = 0;
      local_178 = *(uint *)puVar34;
      local_174 = *(undefined4 *)(puVar34 + 4);
      local_1d0 = (undefined1  [8])(PTR_DAT_04bb2bc0 + 0x10);
      if ((char)param_1[0x1615] != '\0') {
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,2);
        if (*(int *)((long)param_1 + 0xb0ac) != 2) goto LAB_01fbc398;
LAB_01fbc424:
        puVar3 = PTR_DAT_04bb2720;
        if (((*plVar37 != 0) && (lVar23 = *(long *)PTR_DAT_04bb2720, lVar23 != 0)) &&
           (*(long *)(lVar23 + 0x330) != 0)) {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar17 = FUN_006bd550(*puVar19,0);
          if (((iVar17 == 0x758f7eaf) && (*(long *)puVar3 != 0)) &&
             ((lVar23 = *(long *)(*(long *)puVar3 + 0x330), lVar23 != 0 &&
              (*(int *)(lVar23 + 0x244) != 0)))) goto LAB_01fbc600;
        }
        piVar21 = (int *)(**(code **)(*(long *)(*(long *)puVar4 + 0x17940) + 0xf0))();
        iVar17 = *piVar21;
        if ((char)param_1[0x1615] == '\0') {
LAB_01fbc4e0:
          if (iVar15 < iVar17) {
            lVar23 = param_1[1];
            puVar3 = (undefined *)((long)&local_b8 + 4);
            local_b8 = (undefined *)CONCAT44(local_b8._4_4_,8);
            local_b0._0_4_ = (uint)(uint3)local_b0;
            local_c8 = PTR_DAT_04bb6a30 + 0x10;
            local_c0 = puVar3;
            (**(code **)(*(long *)(lVar23 + 0x3e0) + 0x18))(lVar23 + 0x3e0);
            puVar34 = *(undefined **)(lVar23 + 1000);
            if (puVar3 != puVar34) {
              (**(code **)(*(long *)(lVar23 + 0x3e0) + 0x18))(lVar23 + 0x3e0);
              lVar26 = 0;
              do {
                if (*(char *)(*(long *)(lVar23 + 1000) + lVar26) == '\0') goto LAB_01fbc58c;
                lVar6 = *(long *)(lVar23 + 1000) + lVar26;
                if (*(char *)(lVar6 + 1) == '\0') {
                  lVar26 = lVar26 + 1;
                  goto LAB_01fbc58c;
                }
                if (*(char *)(lVar6 + 2) == '\0') {
                  lVar26 = lVar26 + 2;
                  goto LAB_01fbc58c;
                }
                lVar26 = lVar26 + 3;
              } while (lVar26 != 0x80001);
              lVar26 = 0;
LAB_01fbc58c:
              iVar28 = (int)lVar26;
              if ((int)local_b8 <= (int)lVar26) {
                iVar28 = (int)local_b8 + -1;
              }
              memcpy(puVar3,puVar34,(long)iVar28);
              puVar3[iVar28] = 0;
            }
            local_c8 = PTR_DAT_04bb3768 + 0x10;
            uVar20 = FUN_021fcfc0(&local_f0,&local_c8,*(long *)(param_1[1] + 0x68) + 0x278);
            if ((uVar20 & 1) != 0) {
              FUN_01fc2458(param_1);
              uVar22 = 9;
              goto LAB_01fbc5ec;
            }
          }
        }
        else {
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,9);
          if (*(int *)((long)param_1 + 0xb0ac) != 9) goto LAB_01fbc4e0;
        }
        iVar15 = iVar15 - iVar17;
        goto LAB_01fbc600;
      }
LAB_01fbc398:
      if ((((*(int *)(param_1[1] + 0x750) != 0) ||
           (uVar20 = (**(code **)(*param_1 + 0x608))(param_1), (uVar20 & 1) != 0)) ||
          ((*(byte *)(param_1 + 0x15f6) >> 5 & 1) != 0)) ||
         (uVar20 = FUN_01fc1450(param_1,&local_1e0,0), (uVar20 & 1) == 0)) goto LAB_01fbc424;
      plVar33 = (long *)(lVar23 + 0x17910);
      piVar21 = (int *)(**(code **)(*plVar33 + 0xf0))(plVar33);
      if (*piVar21 <= iVar15) {
        piVar21 = (int *)(**(code **)(*plVar33 + 0xf0))(plVar33);
        iVar15 = iVar15 - *piVar21;
        goto LAB_01fbc424;
      }
      FUN_01fa19e0(param_1,&local_1e0,0);
      uVar22 = 2;
LAB_01fbc5ec:
      *(undefined4 *)((long)param_1 + 0xb0ac) = uVar22;
      *(undefined1 *)(param_1 + 0x1615) = 1;
    }
    else {
LAB_01fbc600:
      if ((((*(byte *)(param_1 + 0x15f6) >> 6 & 1) != 0) ||
          (uVar20 = (**(code **)(*param_1 + 0x608))(param_1), (uVar20 & 1) != 0)) ||
         (piVar21 = (int *)(**(code **)(*(long *)(*(long *)puVar4 + 0x17880) + 0xf0))(),
         *piVar21 <= iVar15)) goto LAB_01fbc650;
      FUN_01fb8360(param_1);
    }
    uVar32 = 1;
  }
  else {
LAB_01fbc650:
    uVar32 = 0;
  }
  return uVar32;
}

