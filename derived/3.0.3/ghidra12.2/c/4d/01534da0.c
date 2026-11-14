
void FUN_01534da0(long param_1,undefined4 *param_2,float *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  long *plVar18;
  int *piVar19;
  long lVar20;
  uint *puVar21;
  undefined8 *puVar22;
  long lVar23;
  uint uVar24;
  float fVar25;
  undefined *local_100;
  float local_f8;
  undefined4 uStack_f4;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  uint local_8c [3];
  
  local_a0 = 0;
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if (lVar20 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar10 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar22 + 7);
  local_98 = FUN_017baf44();
  local_98 = local_98 & 1;
  local_a8 = PTR_DAT_04bb3140 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  uVar24 = 0;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  iVar10 = 0;
  puVar3 = PTR_DAT_04bc0510 + 0x10;
  puVar4 = PTR_DAT_04bb3290 + 0x10;
  do {
    lVar20 = param_1 + 0x60 + (long)iVar10 * 0x30;
    if ((*(char *)(lVar20 + 0x28) != '\0') && ((*(char *)(param_3 + 5) == '\0' || (uVar24 == 0)))) {
      local_b0 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_b0);
      local_b8 = 0;
      local_c0 = puVar1;
      plVar15 = (long *)FUN_01a5190c(&local_a8,param_3[4],(undefined *)(lVar20 + 8),&local_c0);
      local_b0 = (undefined *)*plVar15;
      if ((short)*plVar15 != -2) {
        puVar22 = (undefined8 *)FUN_01a5190c(&local_a8,0,&local_c0,0);
        local_e8 = (undefined *)*puVar22;
        uVar16 = FUN_01aef228(&local_e8,(int)param_3[3] + 0x20000000U >> 0x1e);
        if ((uVar16 & 1) == 0) {
          return;
        }
        uVar11 = FUN_0277e788(&local_b0);
        uVar12 = FUN_016e4f68(&local_b0);
        local_e0 = (undefined *)(lVar20 + 0x18);
        iVar14 = *(int *)(lVar20 + 0x10);
        uVar13 = *(uint *)(lVar20 + 0x14);
        local_d0 = *(undefined **)(lVar20 + 0x10);
        local_d8 = (uint *)(PTR_DAT_04bb2010 + 0x10);
        iVar5 = *(int *)(lVar20 + 0x24);
        local_e8 = (undefined *)(lVar20 + 8);
        while (iVar5 + 1U != uVar13) {
          do {
            plVar15 = (long *)FUN_01a5190c(&local_a8,param_3[4],&local_d8,0);
            local_100 = (undefined *)*plVar15;
            piVar19 = (int *)FUN_014fbd50(&local_a8,param_3[4],&local_d8);
            puVar7 = PTR_DAT_04bb43c0;
            iVar6 = *piVar19;
            lVar20 = *(long *)PTR_DAT_04bb43c0;
            uVar13 = FUN_0277d6c4(&local_100);
            if (*(long *)puVar7 == 0) goto LAB_015352d0;
            lVar20 = *(long *)(lVar20 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (((*(uint *)(lVar20 + 0x1d8) <= uVar13) ||
                (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) ||
               ((uVar16 = FUN_0277e294(&local_100), (uVar16 & 1) != 0 && (iVar6 == 0))))
            goto LAB_015352d0;
            if ((int)local_d0 < *(int *)(local_e0 + 8)) {
              iVar6 = (int)local_d0 + 1;
              uVar13 = local_d0._4_4_;
            }
            else {
              uVar13 = local_d0._4_4_ + 1;
              iVar6 = *(int *)(local_e8 + 8);
              local_d0 = (undefined *)((ulong)uVar13 << 0x20);
            }
            local_d0 = (undefined *)CONCAT44(local_d0._4_4_,iVar6);
          } while (iVar14 != iVar6);
        }
        if (((uVar11 | uVar12) & 1) != 0) goto LAB_01535018;
LAB_015352d0:
        puVar7 = PTR_DAT_04bb43c0;
        lVar20 = *(long *)PTR_DAT_04bb43c0;
        uVar13 = FUN_0277d6c4(&local_b0);
        lVar23 = *(long *)puVar7;
        if (lVar23 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            local_d8 = (uint *)0x0;
            local_e8 = PTR_DAT_04bc0510 + 0x10;
            local_e0 = local_b0;
            uVar13 = FUN_0277d6c4(&local_e0);
            if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_01535458:
              puVar17 = (uint *)0x0;
              local_100 = (undefined *)CONCAT44(local_100._4_4_,0xac);
              bVar9 = true;
              local_8c[0] = 0xbc;
            }
            else {
              lVar20 = *(long *)(lVar23 + 0x57e58);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((*(uint *)(lVar20 + 0x1d8) <= uVar13) ||
                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
              goto LAB_01535458;
              lVar20 = *(long *)PTR_DAT_04bc0428;
              uVar13 = FUN_0277d6c4(&local_b0);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((*(uint *)(lVar20 + 0x1d8) <= uVar13) ||
                 (puVar17 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8),
                 puVar17 == (uint *)0x0)) goto LAB_01535458;
              local_8c[0] = 0;
              local_100 = (undefined *)CONCAT44(local_100._4_4_,0xac);
              uVar13 = *puVar17;
              local_d8 = puVar17;
              if ((uVar13 == 0) || (puVar17 == (uint *)(ulong)uVar13)) {
LAB_01535748:
                bVar9 = false;
              }
              else {
                puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar13);
                local_8c[0] = 0;
                if (*puVar21 == 0) goto LAB_01535748;
                uVar13 = puVar21[1];
                if ((uVar13 == 0) || ((ulong)(ushort)puVar21[2] == 0)) {
LAB_01535744:
                  local_8c[0] = 0;
                  goto LAB_01535748;
                }
                lVar20 = 0xc;
                if (*(char *)((long)puVar21 + 10) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar21 + lVar20 + (ulong)(ushort)puVar21[2] * 8;
                if (lVar20 == 0) goto LAB_01535744;
                uVar11 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar11 = (uint)((ulong)((long)puVar17 - lVar20) / (ulong)uVar13);
                }
                if (*puVar21 <= uVar11) {
                  uVar11 = 0xffffffff;
                }
                if (*(uint *)PTR_DAT_04bc00c8 <= uVar11) goto LAB_01535744;
                local_8c[0] = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2);
                if (local_8c[0] < 0xbd) goto LAB_01535748;
                bVar9 = false;
                local_8c[0] = 0;
              }
            }
            if ((local_8c[0] != (uint)local_100) &&
               (uVar16 = FUN_01ae89e0(&local_e8), (uVar16 & 1) == 0)) {
              if (!bVar9) {
                puVar21 = (uint *)((long)puVar17 - (ulong)*puVar17);
                if (((*puVar17 != 0) && (puVar21 != (uint *)0x0)) && (*puVar21 != 0)) {
                  uVar13 = puVar21[1];
                  if ((uVar13 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                    lVar20 = 0xc;
                    if (*(char *)((long)puVar21 + 10) != '\0') {
                      lVar20 = 0x1c;
                    }
                    lVar20 = (long)puVar21 + lVar20 + (ulong)(ushort)puVar21[2] * 8;
                    if (lVar20 != 0) {
                      uVar11 = 0;
                      if ((ulong)uVar13 != 0) {
                        uVar11 = (uint)((ulong)((long)puVar17 - lVar20) / (ulong)uVar13);
                      }
                      if (*puVar21 <= uVar11) {
                        uVar11 = 0xffffffff;
                      }
                      if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2) ==
                          0xad)) goto LAB_01535018;
                    }
                  }
                  if ((*puVar21 != 0) &&
                     ((uVar13 = puVar21[1], uVar13 != 0 && ((ulong)(ushort)puVar21[2] != 0)))) {
                    lVar20 = 0xc;
                    if (*(char *)((long)puVar21 + 10) != '\0') {
                      lVar20 = 0x1c;
                    }
                    lVar20 = (long)puVar21 + lVar20 + (ulong)(ushort)puVar21[2] * 8;
                    if (lVar20 != 0) {
                      uVar11 = 0;
                      if ((ulong)uVar13 != 0) {
                        uVar11 = (uint)((ulong)((long)puVar17 - lVar20) / (ulong)uVar13);
                      }
                      if (*puVar21 <= uVar11) {
                        uVar11 = 0xffffffff;
                      }
                      if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2) ==
                          0xaf)) goto LAB_01535018;
                    }
                  }
                }
              }
              uVar16 = FUN_01ae8b58(&local_e8);
              if ((uVar16 & 1) == 0) goto LAB_01534ef0;
            }
LAB_01535018:
            puVar7 = PTR_DAT_04bb43c0;
            local_d8 = (uint *)0x0;
            local_e0 = PTR_DAT_04bb2010 + 0x10;
            local_c8 = 0;
            local_f8 = (float)local_b0;
            uStack_f4 = local_b0._4_4_;
            local_f0 = 0;
            lVar20 = *(long *)PTR_DAT_04bb43c0;
            local_100 = puVar3;
            local_e8 = puVar2;
            local_d0 = local_e0;
            uVar13 = FUN_0277d6c4(&local_f8);
            if (*(long *)puVar7 != 0) {
              lVar20 = *(long *)(lVar20 + 0x57e58);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((uVar13 < *(uint *)(lVar20 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                lVar20 = *(long *)PTR_DAT_04bc0428;
                uVar13 = FUN_0277d6c4(&local_b0);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if (uVar13 < *(uint *)(lVar20 + 0x1d8)) {
                  lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8);
                  if (lVar20 != 0) {
                    local_f0 = lVar20;
                  }
                }
              }
            }
            FUN_01afb480(&local_100,&local_e8);
            local_d8 = (uint *)CONCAT44(local_d8._4_4_ + local_b8._4_4_,
                                        (uint)local_d8 + (int)local_b8);
            local_c8 = CONCAT44(local_c8._4_4_ + local_b8._4_4_,(int)local_c8 + (int)local_b8);
            puVar17 = (uint *)FUN_014fbd50(&local_a8,0,&local_c0);
            local_8c[0] = *puVar17;
            uVar16 = FUN_015039ac(local_8c);
            if (((uVar16 & 1) != 0) && (lVar20 = *(long *)PTR_DAT_04bb27c0, lVar20 != 0)) {
              if ((local_8c[0] == 0) ||
                 (((plVar15 = *(long **)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                                        ((ulong)(local_8c[0] >> 0x11) & 0x7ff8)),
                   plVar15 == (long *)0x0 || ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) ||
                  (*(uint *)(plVar15 + 0x46) != local_8c[0])))) {
                plVar15 = (long *)0x0;
              }
              if ((*(int *)(lVar20 + 0x288) == 1) || (*(int *)(lVar20 + 0x288) == -1)) {
                plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar20 = *(long *)PTR_DAT_04bb27c0;
                iVar14 = (**(code **)(*plVar18 + 0x60))();
                if (iVar14 < 0x11) {
                  uVar13 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_01535598;
                  uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar20 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_01535598:
                uVar13 = 0;
              }
              if (plVar15 != (long *)0x0) {
                lVar20 = plVar15[0x2a];
                if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar14 != 0)) {
                  *(undefined **)PTR_DAT_04bb5920 = puVar4;
                  __cxa_guard_release(PTR_DAT_04bb5928);
                }
                uVar16 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb5920);
                uVar11 = 0;
                if ((int)lVar20 == 1) {
                  uVar11 = uVar13;
                }
                if (((((uVar16 & 1) != 0) && (uVar11 != 0)) && (plVar15[0xe] != 0)) &&
                   (*(int *)(plVar15[0xe] + 0x280) == 0)) {
                  FUN_01476a50(&local_100,plVar15);
                  iVar14 = FUN_006f0400(*(float *)(plVar15[0xd] + 0x278) - *param_3,
                                        *(float *)(plVar15[0xd] + 0x280) - param_3[2]);
                  uVar16 = FUN_01aef228(&local_100,iVar14 + 0x20000000U >> 0x1e);
                  if ((uVar16 & 1) != 0) {
                    local_f8 = ((float)(int)local_d8._4_4_ * 5.0 + (float)local_c8._4_4_ * 5.0 + 5.0
                               ) * 0.5;
                    local_100 = (undefined *)
                                (ulong)(uint)(((float)(int)(uint)local_d8 * 5.0 +
                                              (float)(int)local_c8 * 5.0 + 5.0) * 0.5);
                    lVar20 = *(long *)PTR_DAT_04bb27c8;
                    if (((lVar20 == 0) || (*(long *)(lVar20 + 0xa8) == 0)) ||
                       (*(char *)(lVar20 + 0x11c8) != '\0')) {
                      fVar25 = -500.0;
                    }
                    else {
                      fVar25 = (float)FUN_0093a950(lVar20 + 0x28,&local_100,0);
                    }
                    if ((-7.0 <= fVar25 - param_3[1]) && (fVar25 - param_3[1] <= 7.0)) {
                      if (local_c8._4_4_ + 1U == local_d8._4_4_) {
LAB_01535794:
                        if (((int)param_3[3] + 0x10000000U >> 0x1d & 1) == 0) {
                          bVar8 = 8 < uVar24;
                          bVar9 = uVar24 == 9;
                        }
                        else {
                          bVar8 = 2 < uVar24;
                          bVar9 = uVar24 == 3;
                        }
                        if (bVar8 && !bVar9) {
                          *(undefined1 *)(param_2 + 6) = 1;
                        }
                        *param_2 = (float)local_b0;
                        param_2[1] = local_b0._4_4_;
                        param_2[4] = (int)local_b8;
                        param_2[5] = local_b8._4_4_;
                        return;
                      }
                      uVar13 = local_d8._4_4_;
                      uVar11 = (uint)local_d8;
                      while (((0xff < uVar13 || (0x11f < uVar11)) ||
                             ((*(uint *)(PTR_DAT_04bbcc10 +
                                        (ulong)(uVar11 + uVar13 * 0x120 >> 5) * 4 + 8) >>
                               (ulong)(uVar11 & 0x1f) & 1) == 0))) {
                        if ((int)uVar11 < (int)local_c8) {
                          uVar11 = uVar11 + 1;
                        }
                        else {
                          uVar13 = uVar13 + 1;
                          uVar11 = (uint)local_d8;
                        }
                        if (((uint)local_d8 == uVar11) && (local_c8._4_4_ + 1U == uVar13))
                        goto LAB_01535794;
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
LAB_01534ef0:
    uVar24 = uVar24 + 1;
    iVar10 = iVar10 + 1;
    if (uVar24 == 0xd) {
      return;
    }
  } while( true );
}

