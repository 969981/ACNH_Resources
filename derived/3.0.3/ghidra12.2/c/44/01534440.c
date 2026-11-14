
void FUN_01534440(long param_1,float *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  float fVar21;
  undefined8 *puVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  bool bVar26;
  long lVar27;
  long *plVar28;
  float fVar29;
  undefined *local_110;
  float local_108;
  float fStack_104;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  uint local_8c;
  
  local_a0 = 0;
  lVar19 = *(long *)PTR_DAT_04bb2720;
  if (lVar19 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar12 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar22 + 7);
  local_98 = FUN_017baf44();
  local_98 = local_98 & 1;
  iVar25 = *(int *)(param_1 + 0x14);
  local_a8 = PTR_DAT_04bb3140 + 0x10;
  iVar12 = *(int *)(param_1 + 0x24) + 1;
  if (iVar12 != iVar25) {
    iVar9 = *(int *)(param_1 + 0x10);
    iVar10 = *(int *)(param_1 + 0x20);
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bb3290 + 0x10;
    iVar23 = iVar9;
    do {
      iVar14 = *(int *)(param_1 + 0x10);
      iVar7 = *(int *)(param_1 + 0x14);
      iVar6 = *(int *)(param_1 + 0x20);
      iVar8 = *(int *)(param_1 + 0x24);
      if (((iVar14 <= iVar23 && iVar23 <= iVar6) && iVar7 <= iVar25) && iVar25 == iVar8 ||
          (((iVar14 <= iVar23 && iVar23 <= iVar6) && iVar7 <= iVar25) && iVar25 - iVar8 < 0) !=
          (((iVar14 <= iVar23 && iVar23 <= iVar6) && iVar7 <= iVar25) && SBORROW4(iVar25,iVar8))) {
        iVar14 = *(int *)(param_1 + 0x48);
        if ((iVar14 <= iVar23) && (iVar23 <= iVar14 + 10)) {
          iVar6 = *(int *)(param_1 + 0x4c);
          if (((iVar6 <= iVar25) &&
              ((((iVar25 <= iVar6 + 10 && ((uint)(iVar23 - iVar14) < 10)) &&
                ((uint)(iVar25 - iVar6) < 10)) &&
               (uVar13 = (iVar23 - iVar14) + (iVar25 - iVar6) * 10,
               (*(uint *)(param_1 + 0x30 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1)
               != 0)))) &&
             ((*(char *)(param_3 + 0x14) == '\0' ||
              ((int)((float)(int)*(float *)(param_3 + 0x18) / 5.0) -
               (uint)(*(float *)(param_3 + 0x18) < 0.0) == iVar23 &&
               (int)((float)(int)*(float *)(param_3 + 0x20) / 5.0) -
               (uint)(*(float *)(param_3 + 0x20) < 0.0) == iVar25)))) {
            local_c0 = 0xfffe;
            local_b8 = puVar1;
            local_b0 = iVar23;
            iStack_ac = iVar25;
            FUN_0277d4ac(&local_c0);
            local_d0 = PTR_DAT_04bb2010 + 0x10;
            local_c8 = 0;
            FUN_01a5033c(&local_f8,&local_a8,*(undefined4 *)(param_3 + 0x10),&local_b8,&local_d0);
            local_c0._0_4_ = SUB84(local_f8,0);
            local_c0._4_4_ = local_f8._4_4_;
            if ((short)local_f8 != -2) {
              uVar15 = FUN_0277e788(&local_c0);
              uVar16 = FUN_016e4f68(&local_c0);
              puVar11 = PTR_DAT_04bb43c0;
              if (((uVar15 & 1) != 0) || ((uVar16 & 1) != 0)) goto LAB_01534920;
              lVar19 = *(long *)PTR_DAT_04bb43c0;
              uVar13 = FUN_0277d6c4(&local_c0);
              lVar27 = *(long *)puVar11;
              if (lVar27 != 0) {
                lVar19 = *(long *)(lVar19 + 0x57e58);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((uVar13 < *(uint *)(lVar19 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                  local_e8 = (uint *)0x0;
                  local_f8 = PTR_DAT_04bc0510 + 0x10;
                  local_f0 = (undefined *)CONCAT44(local_c0._4_4_,(float)local_c0);
                  uVar13 = FUN_0277d6c4(&local_f0);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_015348d0:
                    puVar24 = (uint *)0x0;
                    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xac);
                    bVar26 = true;
                    local_8c = 0xbc;
                  }
                  else {
                    lVar19 = *(long *)(lVar27 + 0x57e58);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((*(uint *)(lVar19 + 0x1d8) <= uVar13) ||
                       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
                    goto LAB_015348d0;
                    lVar19 = *(long *)PTR_DAT_04bc0428;
                    uVar13 = FUN_0277d6c4(&local_c0);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((*(uint *)(lVar19 + 0x1d8) <= uVar13) ||
                       (puVar24 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8),
                       puVar24 == (uint *)0x0)) goto LAB_015348d0;
                    local_8c = 0;
                    local_110 = (undefined *)CONCAT44(local_110._4_4_,0xac);
                    uVar13 = *puVar24;
                    local_e8 = puVar24;
                    if ((uVar13 == 0) || (puVar24 == (uint *)(ulong)uVar13)) {
LAB_01534cc4:
                      bVar26 = false;
                    }
                    else {
                      puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar13);
                      local_8c = 0;
                      if (*puVar20 == 0) goto LAB_01534cc4;
                      uVar13 = puVar20[1];
                      if ((uVar13 == 0) || ((ulong)(ushort)puVar20[2] == 0)) {
LAB_01534cc0:
                        local_8c = 0;
                        goto LAB_01534cc4;
                      }
                      lVar19 = 0xc;
                      if (*(char *)((long)puVar20 + 10) != '\0') {
                        lVar19 = 0x1c;
                      }
                      lVar19 = (long)puVar20 + lVar19 + (ulong)(ushort)puVar20[2] * 8;
                      if (lVar19 == 0) goto LAB_01534cc0;
                      uVar5 = 0;
                      if ((ulong)uVar13 != 0) {
                        uVar5 = (uint)((ulong)((long)puVar24 - lVar19) / (ulong)uVar13);
                      }
                      if (*puVar20 <= uVar5) {
                        uVar5 = 0xffffffff;
                      }
                      if (*(uint *)PTR_DAT_04bc00c8 <= uVar5) goto LAB_01534cc0;
                      local_8c = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2);
                      if (local_8c < 0xbd) goto LAB_01534cc4;
                      bVar26 = false;
                      local_8c = 0;
                    }
                  }
                  if ((local_8c != (uint)local_110) &&
                     (uVar15 = FUN_01ae89e0(&local_f8), (uVar15 & 1) == 0)) {
                    if (!bVar26) {
                      puVar20 = (uint *)((long)puVar24 - (ulong)*puVar24);
                      if ((((*puVar24 != 0) && (puVar20 != (uint *)0x0)) && (*puVar20 != 0)) &&
                         ((uVar13 = puVar20[1], uVar13 != 0 && ((ulong)(ushort)puVar20[2] != 0)))) {
                        lVar19 = 0xc;
                        if (*(char *)((long)puVar20 + 10) != '\0') {
                          lVar19 = 0x1c;
                        }
                        lVar19 = (long)puVar20 + lVar19 + (ulong)(ushort)puVar20[2] * 8;
                        if (lVar19 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar13 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar24 - lVar19) / (ulong)uVar13);
                          }
                          if (*puVar20 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2) ==
                              0xad)) goto LAB_01534920;
                        }
                      }
                    }
                    uVar15 = FUN_01ae893c(&local_f8);
                    if (((uVar15 & 1) == 0) && (uVar15 = FUN_01ae8b58(&local_f8), (uVar15 & 1) == 0)
                       ) goto LAB_015345f4;
                  }
LAB_01534920:
                  puVar11 = PTR_DAT_04bb43c0;
                  local_e8 = (uint *)0x0;
                  local_f0 = PTR_DAT_04bb2010 + 0x10;
                  local_d8 = 0;
                  local_108 = (float)local_c0;
                  fStack_104 = local_c0._4_4_;
                  local_100 = 0;
                  lVar19 = *(long *)PTR_DAT_04bb43c0;
                  local_110 = puVar3;
                  local_f8 = puVar2;
                  local_e0 = local_f0;
                  uVar13 = FUN_0277d6c4(&local_108);
                  if (*(long *)puVar11 != 0) {
                    lVar19 = *(long *)(lVar19 + 0x57e58);
                    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((uVar13 < *(uint *)(lVar19 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                      lVar19 = *(long *)PTR_DAT_04bc0428;
                      uVar13 = FUN_0277d6c4(&local_c0);
                      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                      if (uVar13 < *(uint *)(lVar19 + 0x1d8)) {
                        lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8);
                        if (lVar19 != 0) {
                          local_100 = lVar19;
                        }
                      }
                    }
                  }
                  FUN_01afb480(&local_110,&local_f8);
                  local_d8 = CONCAT44(local_d8._4_4_ + (int)local_c8._4_4_,
                                      (int)local_d8 + (int)(float)local_c8);
                  local_e8 = (uint *)CONCAT44(local_e8._4_4_ + (int)local_c8._4_4_,
                                              (int)local_e8 + (int)(float)local_c8);
                  if ((*(int *)(param_3 + 0x10) != 0) ||
                     ((uVar15 = FUN_0277e158(&local_c0), (uVar15 & 1) == 0 &&
                      (uVar15 = FUN_01a4ff00(&local_a8,1,&local_f8), (uVar15 & 1) != 0)))) {
                    puVar17 = (undefined4 *)FUN_014fbd50(&local_a8,0,&local_d0);
                    local_110 = (undefined *)CONCAT44(local_110._4_4_,*puVar17);
                    uVar15 = FUN_015039ac(&local_110);
                    if (((uVar15 & 1) != 0) && (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 != 0)) {
                      if (((((uint)local_110 == 0) ||
                           (plVar28 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                                ((ulong)((uint)local_110 >> 0x11) & 0x7ff8)),
                           plVar28 == (long *)0x0)) || ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0))
                         || (*(uint *)(plVar28 + 0x46) != (uint)local_110)) {
                        plVar28 = (long *)0x0;
                      }
                      if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
                        plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                               (*(long *)PTR_DAT_04bb3350 + 0x68));
                        lVar19 = *(long *)PTR_DAT_04bb27c0;
                        iVar14 = (**(code **)(*plVar18 + 0x60))();
                        if (iVar14 < 0x11) {
                          uVar13 = 1;
                        }
                        else {
                          if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_01534b00;
                          uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
                        }
                      }
                      else {
LAB_01534b00:
                        uVar13 = 0;
                      }
                      if (plVar28 != (long *)0x0) {
                        lVar19 = plVar28[0x2a];
                        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                           (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar14 != 0)) {
                          *(undefined **)PTR_DAT_04bb5920 = puVar4;
                          __cxa_guard_release(PTR_DAT_04bb5928);
                        }
                        uVar15 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb5920);
                        uVar5 = 0;
                        if ((int)lVar19 == 1) {
                          uVar5 = uVar13;
                        }
                        if (((((uVar15 & 1) != 0) && (uVar5 != 0)) && (plVar28[0xe] != 0)) &&
                           (*(int *)(plVar28[0xe] + 0x280) == 0)) {
                          local_108 = ((float)local_e8._4_4_ * 5.0 +
                                      (float)local_d8._4_4_ * 5.0 + 5.0) * 0.5;
                          local_110 = (undefined *)
                                      (ulong)(uint)(((float)(int)local_e8 * 5.0 +
                                                    (float)(int)local_d8 * 5.0 + 5.0) * 0.5);
                          lVar19 = *(long *)PTR_DAT_04bb27c8;
                          if (((lVar19 == 0) || (*(long *)(lVar19 + 0xa8) == 0)) ||
                             (*(char *)(lVar19 + 0x11c8) != '\0')) {
                            fVar29 = -500.0;
                          }
                          else {
                            fVar29 = (float)FUN_0093a950(lVar19 + 0x28,&local_110,0);
                          }
                          fVar29 = fVar29 - *(float *)(param_3 + 4);
                          if (((-7.0 <= fVar29) && (fVar29 <= 7.0)) &&
                             (uVar15 = FUN_01262200(PTR_DAT_04bbcc10,&local_f8), (uVar15 & 1) == 0))
                          {
                            if (*(short *)param_2 == -2) {
                              *param_2 = (float)local_c0;
                              param_2[1] = local_c0._4_4_;
                              param_2[4] = (float)local_c8;
                              param_2[5] = local_c8._4_4_;
                              fVar21 = local_c8._4_4_;
                              fVar29 = (float)local_c8;
                            }
                            else {
                              fVar29 = param_2[4];
                              fVar21 = param_2[5];
                            }
                            if ((fVar29 != (float)local_c8) || (fVar21 != local_c8._4_4_)) {
                              uVar15 = FUN_0277d9a8(&local_c0);
                              if ((uVar15 & 1) == 0) {
LAB_01534d3c:
                                uVar13 = 0;
                              }
                              else {
                                FUN_01ad5d04(&local_110,&local_c0);
                                local_8c = FUN_01aee3b4(&local_110);
                                if (0x1b < local_8c) goto LAB_01534d3c;
                                uVar13 = 0x80001c0U >> (ulong)(local_8c & 0x1f) & 1;
                              }
                              uVar15 = FUN_01535804(param_1,param_3 + 0xc,&local_d0,param_2 + 2,
                                                    uVar13);
                              if ((uVar15 & 1) != 0) {
                                *param_2 = (float)local_c0;
                                param_2[1] = local_c0._4_4_;
                                param_2[4] = (float)local_c8;
                                param_2[5] = local_c8._4_4_;
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
LAB_015345f4:
      if (iVar23 < iVar10) {
        iVar23 = iVar23 + 1;
      }
      else {
        iVar25 = iVar25 + 1;
        iVar23 = iVar9;
      }
    } while ((iVar9 != iVar23) || (iVar12 != iVar25));
  }
  return;
}

