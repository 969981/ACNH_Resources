
uint FUN_024662c4(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 undefined8 param_5,uint param_6,ulong param_7)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  short sVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_130;
  float local_128;
  undefined4 local_124;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined8 local_11c;
  undefined1 local_114;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  
  puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
  if ((((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x565b4aba) &&
       (uVar13 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
       uVar13 < DAT_0534f408)) &&
      (puVar18 = *(uint **)(DAT_0534f410 + (long)(int)uVar13 * 8), puVar18 != (uint *)0x0)) &&
     (uVar13 = *puVar18, uVar13 != 0 && puVar18 != (uint *)(ulong)uVar13)) {
    puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar13);
    if (((*puVar20 == 0) || (uVar13 = puVar20[1], uVar13 == 0)) || ((ulong)(ushort)puVar20[2] == 0))
    goto LAB_024663d8;
    lVar19 = 0xc;
    if (*(char *)((long)puVar20 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar20 + lVar19 + (ulong)(ushort)puVar20[2] * 8;
    if (lVar19 == 0) goto LAB_024663d8;
    uVar3 = 0;
    if ((ulong)uVar13 != 0) {
      uVar3 = (uint)((ulong)((long)puVar18 - lVar19) / (ulong)uVar13);
    }
    if (*puVar20 <= uVar3) {
      uVar3 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0e98 <= uVar3) ||
       (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar3 * 2) != 1)) goto LAB_024663d8;
  }
  else {
LAB_024663d8:
    pbVar1 = (byte *)(param_4 + 0x1ee8);
    if (*(char *)(param_4 + 0x2264) == '\0') {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_054f0960);
          puVar14 = &DAT_054f0958;
          if (iVar12 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar14 = &DAT_054f0958;
        }
      }
      else {
        puVar14 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar14 = puVar14 + *pbVar1;
        }
      }
      local_130._0_4_ = 6.5861e-44;
      if ((*(uint *)((long)puVar14 + 4) >> 0xf & 1) == 0) {
        lVar19 = *(long *)PTR_DAT_04bb2720;
        if (lVar19 == 0) {
          puVar14 = &DAT_055c04a0;
        }
        else {
          puVar14 = &DAT_055c04a0;
          if (*(long *)(lVar19 + 0x330) != 0) {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
            iVar12 = FUN_006bd550(*puVar14,0);
            if (iVar12 != 0x758f7eaf) {
              puVar2 = &DAT_055c04a0;
            }
            puVar14 = puVar2;
          }
        }
        if (*(int *)(puVar14 + 7) != -0x17df00c3) {
          sVar9 = *(short *)PTR_DAT_04bb6298;
          if (sVar9 != -1) {
            local_130._0_4_ = 3.22299e-44;
            puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
            if (0xff < (uint)(int)sVar9) {
              puVar18 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar18 >> 0x17 & 1) != 0) goto LAB_024663e8;
          }
          uVar8 = *(undefined2 *)PTR_DAT_04bb37e0;
          uVar6 = PTR_DAT_04bb37e0[2];
          uVar7 = PTR_DAT_04bb37e0[3];
          uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          uVar5 = *(undefined4 *)PTR_DAT_04bb4e20;
          local_b0 = uVar8;
          local_ae = uVar6;
          local_ad = uVar7;
          local_ac = uVar4;
          FUN_0252d8f0(&local_130,pbVar1);
          puVar10 = PTR_DAT_04bb43c0;
          lVar19 = *(long *)PTR_DAT_04bb43c0;
          uVar13 = FUN_0277d6c4(&local_130);
          if (*(long *)puVar10 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar19 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) != 0))
            goto LAB_024663e8;
          }
          fVar31 = *(float *)(*(long *)(param_4 + 0x68) + 0x2dc);
          fVar22 = (float)FUN_023294cc(param_4);
          lVar19 = FUN_0251e98c(1);
          pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x7e0) + 0xf0))(lVar19 + 0x7e0);
          fVar30 = (fVar22 + *pfVar15) * 0.5;
          fVar22 = fVar31 * 5.0;
          if (fVar31 <= fVar30) {
            fVar22 = 0.0;
          }
          uVar16 = FUN_0277d9a8(&local_b0);
          if (((uVar16 & 1) != 0) || (uVar16 = FUN_0231dad0(param_4), (uVar16 & 1) != 0)) {
            lVar19 = *(long *)(param_4 + 0x68);
            fVar35 = *(float *)(lVar19 + 0x278);
            fVar34 = *(float *)(lVar19 + 0x27c);
            fVar32 = *(float *)(lVar19 + 0x280);
            bVar11 = FUN_016eb3d0(0,lVar19 + 0x278,1);
            if ((bVar11 & 1) == 0) {
              uVar24 = 0;
              uVar23 = FUN_016e46d8(fVar22 + 20.0,param_4);
              local_130 = (undefined *)CONCAT44(uVar24,uVar23);
              local_128 = param_3;
              uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
              if ((uVar16 & 1) == 0) {
                uVar24 = 0;
                uVar23 = FUN_016e46d8(fVar22 + 25.0,param_4);
                local_130 = (undefined *)CONCAT44(uVar24,uVar23);
                local_128 = param_3;
                uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
                if ((uVar16 & 1) == 0) {
                  uVar24 = 0;
                  uVar23 = FUN_016e46d8(fVar22 + 30.0,param_4);
                  local_130 = (undefined *)CONCAT44(uVar24,uVar23);
                  local_128 = param_3;
                  uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
                  if ((uVar16 & 1) == 0) {
                    uVar24 = 0;
                    uVar23 = FUN_016e46d8(fVar22 + 35.0,param_4);
                    local_130 = (undefined *)CONCAT44(uVar24,uVar23);
                    local_128 = param_3;
                    uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
                    if ((uVar16 & 1) == 0) {
                      uVar24 = 0;
                      uVar23 = FUN_016e46d8(fVar22 + 40.0,param_4);
                      local_130 = (undefined *)CONCAT44(uVar24,uVar23);
                      local_128 = param_3;
                      uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
                      if ((uVar16 & 1) == 0) {
                        uVar24 = 0;
                        uVar23 = FUN_016e46d8(fVar22 + 45.0,param_4);
                        local_130 = (undefined *)CONCAT44(uVar24,uVar23);
                        local_128 = param_3;
                        uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
                        if ((uVar16 & 1) == 0) {
                          uVar24 = 0;
                          uVar23 = FUN_016e46d8(fVar22 + 50.0,param_4);
                          local_130 = (undefined *)CONCAT44(uVar24,uVar23);
                          local_128 = param_3;
                          uVar16 = FUN_016ec07c(0x40a00000,&local_130,1);
                          if ((uVar16 & 1) == 0) goto LAB_024663e8;
                        }
                      }
                    }
                  }
                }
              }
              fVar34 = local_130._4_4_;
              fVar35 = (float)local_130;
              fVar32 = local_128;
            }
            else {
              uVar24 = 0;
              uVar23 = FUN_016e46d8(0x40f00000,param_4);
              local_130 = (undefined *)CONCAT44(uVar24,uVar23);
              local_c0 = (ulong)(uint)local_c0._4_4_ << 0x20;
              local_128 = param_3;
              FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_130,&local_c0);
              if ((float)local_c0 != 6.44597e-44) goto LAB_024663e8;
              uVar16 = FUN_016e61bc();
              uVar23 = 0;
              if ((uVar16 & 1) == 0) {
                uVar24 = FUN_016e46d8(fVar22 + 20.0,param_4);
                local_c0 = CONCAT44(uVar23,uVar24);
                local_b8 = param_3;
                uVar16 = FUN_016ec07c(0x40a00000,&local_c0,1);
                if ((uVar16 & 1) == 0) {
                  uVar24 = 0;
                  uVar23 = FUN_016e46d8(fVar22 + 25.0,param_4);
                  local_c0 = CONCAT44(uVar24,uVar23);
                  local_b8 = param_3;
                  uVar16 = FUN_016ec07c(0x40a00000,&local_c0,1);
                  if ((uVar16 & 1) == 0) {
                    uVar24 = 0;
                    uVar23 = FUN_016e46d8(fVar22 + 30.0,param_4);
                    local_c0 = CONCAT44(uVar24,uVar23);
                    local_b8 = param_3;
                    uVar16 = FUN_016ec07c(0x40a00000,&local_c0,1);
                    if ((uVar16 & 1) == 0) {
                      uVar24 = 0;
                      uVar23 = FUN_016e46d8(fVar22 + 35.0,param_4);
                      local_c0 = CONCAT44(uVar24,uVar23);
                      local_b8 = param_3;
                      uVar16 = FUN_016ec07c(0x40a00000,&local_c0,1);
                      if ((uVar16 & 1) == 0) {
                        uVar24 = 0;
                        uVar23 = FUN_016e46d8(fVar22 + 40.0,param_4);
                        local_c0 = CONCAT44(uVar24,uVar23);
                        local_b8 = param_3;
                        uVar16 = FUN_016ec07c(0x40a00000,&local_c0,1);
                        if ((uVar16 & 1) == 0) {
                          uVar24 = 0;
                          uVar23 = FUN_016e46d8(fVar22 + 45.0,param_4);
                          local_c0 = CONCAT44(uVar24,uVar23);
                          local_b8 = param_3;
                          uVar16 = FUN_016ec07c(0x40a00000,&local_c0,1);
                          if ((uVar16 & 1) == 0) {
                            uVar24 = 0;
                            uVar23 = FUN_016e46d8(fVar22 + 50.0,param_4);
                            local_c0 = CONCAT44(uVar24,uVar23);
                            uVar25 = 0x40a00000;
LAB_02466bf4:
                            local_b8 = param_3;
                            uVar16 = FUN_016ec07c(uVar25,&local_c0,1);
                            if ((uVar16 & 1) == 0) goto LAB_02466c10;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar24 = FUN_016e46d8(fVar22 + 20.0,param_4);
                local_c0 = CONCAT44(uVar23,uVar24);
                local_b8 = param_3;
                uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                if ((uVar16 & 1) == 0) {
                  uVar24 = 0;
                  uVar23 = FUN_016e46d8(fVar22 + 22.5,param_4);
                  local_c0 = CONCAT44(uVar24,uVar23);
                  local_b8 = param_3;
                  uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                  if ((uVar16 & 1) == 0) {
                    uVar24 = 0;
                    uVar23 = FUN_016e46d8(fVar22 + 25.0,param_4);
                    local_c0 = CONCAT44(uVar24,uVar23);
                    local_b8 = param_3;
                    uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                    if ((uVar16 & 1) == 0) {
                      uVar24 = 0;
                      uVar23 = FUN_016e46d8(fVar22 + 27.5,param_4);
                      local_c0 = CONCAT44(uVar24,uVar23);
                      local_b8 = param_3;
                      uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                      if ((uVar16 & 1) == 0) {
                        uVar24 = 0;
                        uVar23 = FUN_016e46d8(fVar22 + 30.0,param_4);
                        local_c0 = CONCAT44(uVar24,uVar23);
                        local_b8 = param_3;
                        uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                        if ((uVar16 & 1) == 0) {
                          uVar24 = 0;
                          uVar23 = FUN_016e46d8(fVar22 + 32.5,param_4);
                          local_c0 = CONCAT44(uVar24,uVar23);
                          local_b8 = param_3;
                          uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                          if ((uVar16 & 1) == 0) {
                            uVar24 = 0;
                            uVar23 = FUN_016e46d8(fVar22 + 35.0,param_4);
                            local_c0 = CONCAT44(uVar24,uVar23);
                            local_b8 = param_3;
                            uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                            if ((uVar16 & 1) == 0) {
                              uVar24 = 0;
                              uVar23 = FUN_016e46d8(fVar22 + 37.5,param_4);
                              local_c0 = CONCAT44(uVar24,uVar23);
                              local_b8 = param_3;
                              uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                              if ((uVar16 & 1) == 0) {
                                uVar24 = 0;
                                uVar23 = FUN_016e46d8(fVar22 + 40.0,param_4);
                                local_c0 = CONCAT44(uVar24,uVar23);
                                local_b8 = param_3;
                                uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                                if ((uVar16 & 1) == 0) {
                                  uVar24 = 0;
                                  uVar23 = FUN_016e46d8(fVar22 + 42.5,param_4);
                                  local_c0 = CONCAT44(uVar24,uVar23);
                                  local_b8 = param_3;
                                  uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                                  if ((uVar16 & 1) == 0) {
                                    uVar24 = 0;
                                    uVar23 = FUN_016e46d8(fVar22 + 45.0,param_4);
                                    local_c0 = CONCAT44(uVar24,uVar23);
                                    local_b8 = param_3;
                                    uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                                    if ((uVar16 & 1) == 0) {
                                      uVar24 = 0;
                                      uVar23 = FUN_016e46d8(fVar22 + 47.5,param_4);
                                      local_c0 = CONCAT44(uVar24,uVar23);
                                      local_b8 = param_3;
                                      uVar16 = FUN_016ec07c(0x40880000,&local_c0,1);
                                      if ((uVar16 & 1) == 0) {
                                        uVar24 = 0;
                                        uVar23 = FUN_016e46d8(fVar22 + 50.0,param_4);
                                        local_c0 = CONCAT44(uVar24,uVar23);
                                        uVar25 = 0x40880000;
                                        goto LAB_02466bf4;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              fVar34 = local_c0._4_4_;
              fVar35 = (float)local_c0;
              fVar32 = local_b8;
            }
LAB_02466c10:
            local_c0 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
            local_b8 = *(float *)(*(long *)(param_4 + 0x68) + 0x280);
            local_130 = (undefined *)CONCAT44(local_130._4_4_,*(undefined4 *)(param_4 + 0x230));
            local_cc = fVar35;
            fStack_c8 = fVar34;
            local_c4 = fVar32;
            uVar16 = FUN_02467370(&local_c0,&local_cc,pbVar1,&local_130,0);
            uVar13 = 0;
            if ((uVar16 & 1) == 0) goto LAB_024663ec;
            fVar27 = local_cc - (float)local_c0;
            fVar26 = local_c4 - local_b8;
            fVar36 = fVar27 * 0.2;
            fVar33 = fVar26 * 0.2;
            fVar28 = SQRT(fVar27 * fVar27 + 0.0 + fVar26 * fVar26);
            if (fVar28 <= 0.0) {
              fVar29 = 0.0;
            }
            else {
              fVar28 = 1.0 / fVar28;
              fVar27 = fVar27 * fVar28;
              fVar29 = fVar28 * 0.0;
              fVar26 = fVar26 * fVar28;
            }
            fVar27 = fVar22 * fVar27;
            fVar29 = fVar22 * fVar29;
            fVar26 = fVar22 * fVar26;
            lVar19 = (long)&local_124 + 2;
            local_128 = 0.0;
            local_d8 = (float)local_c0 + fVar36 + fVar27;
            local_d0 = local_b8 + fVar33 + fVar26;
            fStack_d4 = fVar29 + local_c0._4_4_ + 0.0;
            FUN_016e7890(lVar19);
            local_130 = (undefined *)CONCAT71(local_130._1_7_,1);
            local_124 = (float)((CONCAT31(local_124._1_3_,bVar11) ^ 1) & 0xffffff01);
            local_130 = (undefined *)CONCAT44(local_c0._4_4_,(float)local_130);
            fVar28 = (float)FUN_016e8340(0x40600000,&local_d8,&local_130);
            if (fVar28 - local_c0._4_4_ <= 9.0) {
              uStack_120 = 0;
              uStack_11f = 0;
              uStack_11e = 0x80;
              uStack_11d = 0x3f;
              local_130 = (undefined *)CONCAT44(fStack_d4,local_d8);
              local_11c = (ulong)(uint)local_11c;
              local_128 = local_d0;
              lVar17 = FUN_0251e98c(1);
              pfVar15 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))(lVar17 + 0x2a0);
              local_11c = CONCAT44(local_11c._4_4_,8);
              local_124 = *pfVar15 * 0.98;
              iVar12 = FUN_016ed290(&local_130,0,0,0);
              if (iVar12 == 0) {
                local_128 = 0.0;
                local_d8 = fVar27 + fVar36 + fVar36 + (float)local_c0;
                fStack_d4 = fVar29 + local_c0._4_4_ + 0.0;
                local_d0 = fVar26 + fVar33 + fVar33 + local_b8;
                FUN_016e7890(lVar19);
                local_130 = (undefined *)CONCAT71(local_130._1_7_,1);
                local_124 = (float)((CONCAT31(local_124._1_3_,bVar11) ^ 1) & 0xffffff01);
                local_130 = (undefined *)CONCAT44(local_c0._4_4_,(float)local_130);
                fVar28 = (float)FUN_016e8340(0x40600000,&local_d8,&local_130);
                if (fVar28 - local_c0._4_4_ <= 9.0) {
                  local_124 = -1.0;
                  uStack_120 = 0;
                  uStack_11f = 0;
                  uStack_11e = 0x80;
                  uStack_11d = 0x3f;
                  local_11c = 0x67;
                  local_130 = (undefined *)CONCAT44(fStack_d4,local_d8);
                  local_128 = local_d0;
                  lVar17 = FUN_0251e98c(1);
                  pfVar15 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))(lVar17 + 0x2a0)
                  ;
                  local_11c = CONCAT44(local_11c._4_4_,8);
                  local_124 = *pfVar15 * 0.98;
                  iVar12 = FUN_016ed290(&local_130,0,0,0);
                  if (iVar12 == 0) {
                    local_128 = 0.0;
                    fStack_d4 = fVar29 + local_c0._4_4_ + 0.0;
                    local_d8 = fVar27 + fVar36 * 3.0 + (float)local_c0;
                    local_d0 = fVar26 + fVar33 * 3.0 + local_b8;
                    FUN_016e7890(lVar19);
                    local_130 = (undefined *)CONCAT71(local_130._1_7_,1);
                    local_124 = (float)((CONCAT31(local_124._1_3_,bVar11) ^ 1) & 0xffffff01);
                    local_130 = (undefined *)CONCAT44(local_c0._4_4_,(float)local_130);
                    fVar28 = (float)FUN_016e8340(0x40600000,&local_d8,&local_130);
                    if (fVar28 - local_c0._4_4_ <= 9.0) {
                      local_124 = -1.0;
                      uStack_120 = 0;
                      uStack_11f = 0;
                      uStack_11e = 0x80;
                      uStack_11d = 0x3f;
                      local_11c = 0x67;
                      local_130 = (undefined *)CONCAT44(fStack_d4,local_d8);
                      local_128 = local_d0;
                      lVar17 = FUN_0251e98c(1);
                      pfVar15 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))
                                                   (lVar17 + 0x2a0);
                      local_11c = CONCAT44(local_11c._4_4_,8);
                      local_124 = *pfVar15 * 0.98;
                      iVar12 = FUN_016ed290(&local_130,0,0,0);
                      if (iVar12 == 0) {
                        local_128 = 0.0;
                        fStack_d4 = fVar29 + local_c0._4_4_ + 0.0;
                        local_d8 = fVar27 + fVar36 * 4.0 + (float)local_c0;
                        local_d0 = fVar26 + fVar33 * 4.0 + local_b8;
                        FUN_016e7890(lVar19);
                        local_130 = (undefined *)CONCAT71(local_130._1_7_,1);
                        local_124 = (float)((CONCAT31(local_124._1_3_,bVar11) ^ 1) & 0xffffff01);
                        local_130 = (undefined *)CONCAT44(local_c0._4_4_,(float)local_130);
                        fVar28 = (float)FUN_016e8340(0x40600000,&local_d8,&local_130);
                        if (fVar28 - local_c0._4_4_ <= 9.0) {
                          local_124 = -1.0;
                          uStack_120 = 0;
                          uStack_11f = 0;
                          uStack_11e = 0x80;
                          uStack_11d = 0x3f;
                          local_11c = 0x67;
                          local_130 = (undefined *)CONCAT44(fStack_d4,local_d8);
                          local_128 = local_d0;
                          lVar17 = FUN_0251e98c(1);
                          pfVar15 = (float *)(**(code **)(*(long *)(lVar17 + 0x2a0) + 0xf0))
                                                       (lVar17 + 0x2a0);
                          local_11c = CONCAT44(local_11c._4_4_,8);
                          local_124 = *pfVar15 * 0.98;
                          iVar12 = FUN_016ed290(&local_130,0,0,0);
                          if (iVar12 == 0) {
                            local_128 = 0.0;
                            local_d8 = fVar27 + fVar36 * 5.0 + (float)local_c0;
                            fStack_d4 = fVar29 + local_c0._4_4_ + 0.0;
                            local_d0 = fVar26 + fVar33 * 5.0 + local_b8;
                            FUN_016e7890(lVar19);
                            local_130 = (undefined *)CONCAT71(local_130._1_7_,1);
                            local_124 = (float)((CONCAT31(local_124._1_3_,bVar11) ^ 1) & 0xffffff01)
                            ;
                            local_130 = (undefined *)CONCAT44(local_c0._4_4_,(float)local_130);
                            fVar26 = (float)FUN_016e8340(0x40600000,&local_d8,&local_130);
                            if (fVar26 - local_c0._4_4_ <= 9.0) {
                              local_124 = -1.0;
                              uStack_120 = 0;
                              uStack_11f = 0;
                              uStack_11e = 0x80;
                              uStack_11d = 0x3f;
                              local_11c = 0x67;
                              local_130 = (undefined *)CONCAT44(fStack_d4,local_d8);
                              local_128 = local_d0;
                              lVar19 = FUN_0251e98c(1);
                              pfVar15 = (float *)(**(code **)(*(long *)(lVar19 + 0x2a0) + 0xf0))
                                                           (lVar19 + 0x2a0);
                              local_11c = CONCAT44(local_11c._4_4_,8);
                              local_124 = *pfVar15 * 0.98;
                              iVar12 = FUN_016ed290(&local_130,0,0,0);
                              if ((iVar12 == 0) &&
                                 (fVar26 = fVar35 - *(float *)(*(long *)(param_4 + 0x68) + 0x278),
                                 fVar27 = fVar32 - *(float *)(*(long *)(param_4 + 0x68) + 0x280),
                                 SQRT(fVar27 * fVar27 + fVar26 * fVar26) - fVar22 < fVar22 + 35.0))
                              {
                                local_130 = (undefined *)CONCAT44(fVar34,fVar35);
                                local_128 = fVar32;
                                uVar16 = FUN_016ec07c(0,&local_130,1);
                                if ((uVar16 & 1) != 0) {
                                  local_130 = PTR_DAT_04bb2020 + 0x10;
                                  local_128 = 1.584104e-36;
                                  local_124 = 0.0;
                                  uVar13 = FUN_0273f0a0(&local_130);
                                  uVar13 = uVar13 & param_6;
                                  if (((uVar13 & 1) != 0) && ((param_7 & 1) == 0)) {
                                    uVar23 = FUN_006f0400(fVar35 - *(float *)(*(long *)(param_4 +
                                                                                       0x68) + 0x278
                                                                             ),
                                                          fVar32 - *(float *)(*(long *)(param_4 +
                                                                                       0x68) + 0x280
                                                                             ));
                                    FUN_0252d8f0(&local_130,pbVar1);
                                    uVar16 = FUN_0277d9a8(&local_130);
                                    if ((uVar16 & 1) == 0) {
                                      local_124 = (float)uVar23;
                                      if ((bVar11 & 1) == 0) {
                                        uStack_120 = (undefined1)uVar8;
                                        uStack_11f = (undefined1)((ushort)uVar8 >> 8);
                                        local_11c = CONCAT44(uVar5,uVar4);
                                        local_114 = fVar30 < fVar31;
                                        local_130 = (undefined *)CONCAT44(fVar34,fVar35);
                                        local_128 = fVar32;
                                        uStack_11e = uVar6;
                                        uStack_11d = uVar7;
                                        FUN_024676ec(param_4,&local_130);
                                        uVar13 = 1;
                                      }
                                      else {
                                        uVar13 = 1;
                                        uStack_120 = 1;
                                        local_130 = (undefined *)CONCAT44(fVar34,fVar35);
                                        local_128 = fVar32;
                                        FUN_02467954(param_4,&local_130);
                                      }
                                    }
                                    else {
                                      iVar12 = (int)(fVar35 * 4.0);
                                      iVar21 = (int)(fVar34 * 4.0);
                                      if (0x7ffe < iVar12) {
                                        iVar12 = 0x7fff;
                                      }
                                      if (iVar12 < -0x7fff) {
                                        iVar12 = -0x8000;
                                      }
                                      if (0x7ffe < iVar21) {
                                        iVar21 = 0x7fff;
                                      }
                                      if (iVar21 < -0x7fff) {
                                        iVar21 = -0x8000;
                                      }
                                      local_130._0_4_ = (float)CONCAT22((short)iVar21,(short)iVar12)
                                      ;
                                      iVar12 = (int)(fVar32 * 4.0);
                                      if (0x7ffe < iVar12) {
                                        iVar12 = 0x7fff;
                                      }
                                      if (iVar12 < -0x7fff) {
                                        iVar12 = -0x8000;
                                      }
                                      local_130._0_6_ = CONCAT24((short)iVar12,(float)local_130);
                                      local_130 = (undefined *)
                                                  CONCAT26((short)((uint)uVar23 >> 0x10),
                                                           (undefined6)local_130);
                                      FUN_02476cb0(param_4,4,&local_130,0,0);
                                      uVar13 = 1;
                                    }
                                  }
                                  goto LAB_024663ec;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_024663e8:
  uVar13 = 0;
LAB_024663ec:
  return uVar13 & 1;
}

