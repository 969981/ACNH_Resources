
void FUN_014bbff0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,int *param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  undefined8 ****ppppuVar29;
  undefined4 uVar30;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 ****local_170;
  undefined8 ****ppppuStack_168;
  undefined8 ***local_160;
  undefined8 **local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140 [20];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_78;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(param_5 + 0x60);
  lVar24 = *(long *)puVar3;
  if (lVar24 != 0) {
    lVar26 = *(long *)(lVar26 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      local_170 = (undefined8 ****)0x0;
      local_178 = *(undefined8 **)(param_5 + 0x60);
      local_180 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
      uVar11 = FUN_0277d6c4(&local_178);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar24 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(param_5 + 0x60);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
             (puVar18 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8),
             puVar18 != (uint *)0x0)) {
            uVar17 = *puVar18;
            uVar11 = 0;
            if (uVar17 == 0) {
              uVar14 = 0;
              goto LAB_014bc1ac;
            }
            uVar14 = 0;
            if (puVar18 == (uint *)(ulong)uVar17) goto LAB_014bc1ac;
            puVar21 = (uint *)((long)puVar18 - (long)(ulong)uVar17);
            if (*puVar21 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = puVar21[1];
              if ((uVar11 == 0) || ((ulong)(ushort)puVar21[2] == 0)) {
LAB_014bcd58:
                uVar11 = 0;
              }
              else {
                lVar24 = 0xc;
                if (*(char *)((long)puVar21 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
                if (lVar24 == 0) goto LAB_014bcd58;
                uVar17 = 0;
                if ((ulong)uVar11 != 0) {
                  uVar17 = (uint)((ulong)((long)puVar18 - lVar24) / (ulong)uVar11);
                }
                if (*puVar21 <= uVar17) {
                  uVar17 = 0xffffffff;
                }
                if (*(uint *)PTR_DAT_04bc00c8 <= uVar17) goto LAB_014bcd58;
                uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2);
                uVar11 = (uint)uVar8;
                if (0xbc < uVar8) {
                  uVar11 = 0;
                }
              }
              if (((*puVar21 != 0) && (uVar17 = puVar21[1], uVar17 != 0)) &&
                 ((ulong)(ushort)puVar21[2] != 0)) {
                lVar24 = 0xc;
                if (*(char *)((long)puVar21 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
                if (lVar24 != 0) {
                  uVar14 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar14 = (uint)((ulong)((long)puVar18 - lVar24) / (ulong)uVar17);
                  }
                  if (*puVar21 <= uVar14) {
                    uVar14 = 0xffffffff;
                  }
                  if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar14 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
                     uVar14 < 0x52)) goto LAB_014bc1ac;
                }
              }
            }
            uVar14 = 0;
            goto LAB_014bc1ac;
          }
        }
      }
    }
  }
  uVar14 = 0;
  uVar11 = 0xbc;
LAB_014bc1ac:
  uVar7 = *(undefined4 *)(param_5 + 0x18);
  uVar30 = FUN_014e8b30(param_5);
  uVar12 = FUN_014eb660(param_5);
  if (*param_4 < param_4[1]) {
    puVar19 = *(undefined8 **)(param_4 + 4);
    if (puVar19 != (undefined8 *)0x0) {
      *(undefined8 *)(param_4 + 4) = *puVar19;
    }
    *(undefined4 *)puVar19 = uVar7;
    *(undefined2 *)((long)puVar19 + 4) = *(undefined2 *)(param_5 + 0x60);
    *(undefined1 *)((long)puVar19 + 6) = *(undefined1 *)(param_5 + 0x62);
    *(undefined1 *)((long)puVar19 + 7) = *(undefined1 *)(param_5 + 99);
    uVar7 = *(undefined4 *)(param_5 + 100);
    *(undefined4 *)((long)puVar19 + 0xc) = uVar30;
    *(undefined4 *)(puVar19 + 2) = param_2;
    *(undefined4 *)((long)puVar19 + 0x14) = param_3;
    *(undefined4 *)(puVar19 + 3) = uVar12;
    *(uint *)((long)puVar19 + 0x1c) = uVar11;
    *(uint *)(puVar19 + 4) = uVar14;
    *(undefined4 *)(puVar19 + 1) = uVar7;
    if (*param_4 < param_4[1]) {
      *(undefined8 **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = puVar19;
      *param_4 = *param_4 + 1;
    }
  }
  if (*(int *)(param_5 + 0x18) == 1) {
    uVar15 = FUN_014eb83c(param_5);
    if ((uVar15 & 1) != 0) {
      FUN_014eefe8(&local_180,param_5);
      puVar3 = PTR_DAT_04bb27c0;
      if (local_170 != (undefined8 ****)&local_178) {
        puVar1 = PTR_DAT_04bb3290 + 0x10;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        ppppuVar29 = local_170;
        do {
          uVar11 = *(uint *)(ppppuVar29 + -1);
          if ((uVar11 != 0) && (lVar24 = *(long *)puVar3, lVar24 != 0)) {
            plVar27 = *(long **)(*(long *)(*(long *)(lVar24 + 0x1c0) + 8) +
                                ((ulong)(uVar11 >> 0x11) & 0x7ff8));
            if ((plVar27 == (long *)0x0) ||
               (((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar27 + 0x46) != uVar11))
               )) {
              plVar27 = (long *)0x0;
            }
            if (*(int *)(lVar24 + 0x288) == 1 || *(int *)(lVar24 + 0x288) == -1) {
              plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar24 = *(long *)puVar3;
              iVar13 = (**(code **)(*plVar16 + 0x60))();
              if (iVar13 < 0x11) {
                uVar11 = 1;
              }
              else {
                uVar11 = *(uint *)(lVar24 + 0x5e8);
                if (4 < uVar11) goto LAB_014bc360;
                uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
              }
            }
            else {
LAB_014bc360:
              uVar11 = 0;
            }
            if (plVar27 != (long *)0x0) {
              lVar24 = plVar27[0x2a];
              uVar17 = *(uint *)(plVar27 + 0x49);
              if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
                *(undefined **)PTR_DAT_04bb5920 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb5928);
              }
              uVar14 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb5920);
              if ((((int)lVar24 == 1) && ((uVar14 & uVar11) != 0)) && ((uVar17 >> 4 & 1) != 0)) {
                FUN_01476a50(&local_78,plVar27);
                puVar9 = PTR_DAT_04bb43c0;
                lVar24 = *(long *)PTR_DAT_04bb43c0;
                uVar11 = FUN_0277d6c4(&local_78);
                lVar26 = *(long *)puVar9;
                if (lVar26 == 0) {
LAB_014bc53c:
                  uVar17 = 0;
                  uVar11 = 0xbc;
                }
                else {
                  lVar24 = *(long *)(lVar24 + 0x57e58);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if ((*(uint *)(lVar24 + 0x1d8) <= uVar11) ||
                     (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                  goto LAB_014bc53c;
                  local_90 = 0;
                  local_98 = (undefined4)local_78;
                  local_94 = local_78._4_4_;
                  local_a0 = puVar2;
                  uVar11 = FUN_0277d6c4(&local_98);
                  if (*(long *)PTR_DAT_04bb43c0 == 0) goto LAB_014bc53c;
                  lVar24 = *(long *)(lVar26 + 0x57e58);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if ((*(uint *)(lVar24 + 0x1d8) <= uVar11) ||
                     (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                  goto LAB_014bc53c;
                  lVar24 = *(long *)PTR_DAT_04bc0428;
                  uVar11 = FUN_0277d6c4(&local_78);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if ((*(uint *)(lVar24 + 0x1d8) <= uVar11) ||
                     (puVar18 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8),
                     puVar18 == (uint *)0x0)) goto LAB_014bc53c;
                  uVar14 = *puVar18;
                  uVar11 = 0;
                  if (uVar14 == 0) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = 0;
                    if (puVar18 != (uint *)(ulong)uVar14) {
                      puVar21 = (uint *)((long)puVar18 - (long)(ulong)uVar14);
                      uVar11 = 0;
                      if (*puVar21 != 0) {
                        uVar11 = puVar21[1];
                        if ((uVar11 == 0) || ((ulong)(ushort)puVar21[2] == 0)) {
LAB_014bc5c0:
                          uVar11 = 0;
                        }
                        else {
                          lVar24 = 0xc;
                          if (*(char *)((long)puVar21 + 10) != '\0') {
                            lVar24 = 0x1c;
                          }
                          lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
                          if (lVar24 == 0) goto LAB_014bc5c0;
                          uVar17 = 0;
                          if ((ulong)uVar11 != 0) {
                            uVar17 = (uint)((ulong)((long)puVar18 - lVar24) / (ulong)uVar11);
                          }
                          if (*puVar21 <= uVar17) {
                            uVar17 = 0xffffffff;
                          }
                          if (*(uint *)PTR_DAT_04bc00c8 <= uVar17) goto LAB_014bc5c0;
                          uVar8 = *(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2);
                          uVar11 = (uint)uVar8;
                          if (0xbc < uVar8) {
                            uVar11 = 0;
                          }
                        }
                        if (((*puVar21 != 0) && (uVar14 = puVar21[1], uVar14 != 0)) &&
                           ((ulong)(ushort)puVar21[2] != 0)) {
                          lVar24 = 0xc;
                          if (*(char *)((long)puVar21 + 10) != '\0') {
                            lVar24 = 0x1c;
                          }
                          lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
                          uVar17 = 0;
                          if (lVar24 != 0) {
                            uVar17 = 0;
                            if ((ulong)uVar14 != 0) {
                              uVar17 = (uint)((ulong)((long)puVar18 - lVar24) / (ulong)uVar14);
                            }
                            if (*puVar21 <= uVar17) {
                              uVar17 = 0xffffffff;
                            }
                            if ((*(uint *)PTR_DAT_04bc0048 <= uVar17) ||
                               (uVar8 = *(ushort *)
                                         (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar17 * 2),
                               uVar17 = (uint)uVar8, 0x51 < uVar8)) goto LAB_014bc62c;
                          }
                          goto LAB_014bc544;
                        }
                      }
LAB_014bc62c:
                      uVar17 = 0;
                    }
                  }
                }
LAB_014bc544:
                if (*param_4 < param_4[1]) {
                  lVar26 = plVar27[0xd];
                  lVar24 = plVar27[0x5a];
                  puVar19 = *(undefined8 **)(param_4 + 4);
                  if (puVar19 != (undefined8 *)0x0) {
                    *(undefined8 *)(param_4 + 4) = *puVar19;
                  }
                  *(undefined4 *)puVar19 = 1;
                  *(undefined4 *)((long)puVar19 + 4) = (undefined4)local_78;
                  *(undefined4 *)(puVar19 + 1) = local_78._4_4_;
                  uVar23 = *(undefined8 *)(lVar26 + 0x278);
                  uVar7 = *(undefined4 *)(lVar26 + 0x280);
                  *(uint *)((long)puVar19 + 0x1c) = uVar11;
                  *(uint *)(puVar19 + 4) = uVar17;
                  *(undefined8 *)((long)puVar19 + 0xc) = uVar23;
                  *(undefined4 *)((long)puVar19 + 0x14) = uVar7;
                  *(int *)(puVar19 + 3) = (int)lVar24;
                  if (*param_4 < param_4[1]) {
                    *(undefined8 **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = puVar19;
                    *param_4 = *param_4 + 1;
                  }
                }
              }
            }
          }
          ppppuVar29 = (undefined8 ****)ppppuVar29[1];
        } while (ppppuVar29 + -1 != (undefined8 ****)&local_180);
      }
      ppuVar20 = &local_178;
      do {
        ppuVar20 = (undefined8 **)ppuVar20[1];
      } while (ppuVar20 != &local_178);
    }
    uVar15 = FUN_014eb9bc(param_5);
    if ((uVar15 & 1) != 0) {
      FUN_014ef1fc(&local_180,param_5);
      if ((int)local_180 != 0) {
        lVar24 = (long)(int)local_180 << 3;
        puVar3 = PTR_DAT_04bc0510 + 0x10;
        puVar19 = local_178;
        do {
          puVar1 = PTR_DAT_04bb43c0;
          puVar25 = (undefined4 *)*puVar19;
          lVar26 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(puVar25);
          lVar28 = *(long *)puVar1;
          if (lVar28 == 0) goto LAB_014bc850;
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          uVar17 = 0xbc;
          if (*(uint *)(lVar26 + 0x1d8) <= uVar11) goto LAB_014bc854;
          if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
LAB_014bc850:
            uVar17 = 0xbc;
          }
          else {
            local_98 = *puVar25;
            local_94 = puVar25[1];
            local_90 = 0;
            local_a0 = puVar3;
            uVar11 = FUN_0277d6c4(&local_98);
            if (*(long *)PTR_DAT_04bb43c0 == 0) goto LAB_014bc850;
            lVar26 = *(long *)(lVar28 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            uVar17 = 0xbc;
            if (uVar11 < *(uint *)(lVar26 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) == 0)
              goto LAB_014bc850;
              lVar26 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(puVar25);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
              uVar17 = 0xbc;
              if (uVar11 < *(uint *)(lVar26 + 0x1d8)) {
                puVar18 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8);
                if (puVar18 == (uint *)0x0) goto LAB_014bc850;
                uVar11 = *puVar18;
                uVar17 = 0;
                if ((uVar11 != 0) && (puVar18 != (uint *)(ulong)uVar11)) {
                  puVar21 = (uint *)((long)puVar18 - (long)(ulong)uVar11);
                  uVar17 = 0;
                  if (*puVar21 != 0) {
                    uVar11 = puVar21[1];
                    if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                      lVar26 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar26 = 0x1c;
                      }
                      lVar26 = (long)puVar21 + lVar26 + (ulong)(ushort)puVar21[2] * 8;
                      if (lVar26 != 0) {
                        uVar17 = 0;
                        if ((ulong)uVar11 != 0) {
                          uVar17 = (uint)((ulong)((long)puVar18 - lVar26) / (ulong)uVar11);
                        }
                        if (*puVar21 <= uVar17) {
                          uVar17 = 0xffffffff;
                        }
                        if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar8 = *(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2),
                           uVar17 = (uint)uVar8, uVar8 < 0xbd)) goto LAB_014bc854;
                      }
                    }
                    uVar17 = 0;
                  }
                }
              }
            }
          }
LAB_014bc854:
          if (*param_4 < param_4[1]) {
            puVar22 = *(undefined8 **)(param_4 + 4);
            if (puVar22 != (undefined8 *)0x0) {
              *(undefined8 *)(param_4 + 4) = *puVar22;
            }
            *(undefined4 *)puVar22 = 2;
            *(undefined2 *)((long)puVar22 + 4) = *(undefined2 *)puVar25;
            *(undefined1 *)((long)puVar22 + 6) = *(undefined1 *)((long)puVar25 + 2);
            *(undefined1 *)((long)puVar22 + 7) = *(undefined1 *)((long)puVar25 + 3);
            *(undefined4 *)(puVar22 + 1) = puVar25[1];
            uVar23 = *(undefined8 *)(puVar25 + 6);
            uVar7 = puVar25[8];
            *(uint *)((long)puVar22 + 0x1c) = uVar17;
            *(undefined4 *)(puVar22 + 4) = 0;
            *(undefined8 *)((long)puVar22 + 0xc) = uVar23;
            *(undefined4 *)((long)puVar22 + 0x14) = uVar7;
            *(undefined4 *)(puVar22 + 3) = 1;
            if (*param_4 < param_4[1]) {
              *(undefined8 **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = puVar22;
              *param_4 = *param_4 + 1;
            }
          }
          puVar19 = puVar19 + 1;
          lVar24 = lVar24 + -8;
        } while (lVar24 != 0);
      }
    }
    if (0 < *(int *)(param_5 + 0xe8)) {
      local_180 = (undefined8 *)0x0;
      local_178 = (undefined8 *)0x0;
      local_160 = &local_158;
      local_158 = &local_150;
      local_170 = &local_160;
      local_150 = &local_148;
      local_148 = 0;
      if (local_140 != (undefined8 *)0x0) {
        local_180 = (undefined8 *)0x400000000;
        local_178 = local_140;
      }
      ppppuStack_168 = local_170;
      FUN_014ef460(param_5,&local_180);
      puVar9 = PTR_DAT_04bb37d8;
      puVar2 = PTR_DAT_04bb37d0;
      puVar1 = PTR_DAT_04bb3350;
      puVar3 = PTR_DAT_04bb27c0;
      if ((int)local_180 != 0) {
        lVar24 = (long)(int)local_180 << 3;
        puVar4 = PTR_DAT_04bb3750 + 0x10;
        puVar5 = PTR_DAT_04bb4100 + 0x10;
        puVar6 = PTR_DAT_04bc0510 + 0x10;
        puVar19 = local_178;
        do {
          uVar11 = *(uint *)*puVar19;
          if ((uVar11 != 0) && (lVar26 = *(long *)puVar3, lVar26 != 0)) {
            plVar27 = *(long **)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                                ((ulong)(uVar11 >> 0x11) & 0x7ff8));
            if ((plVar27 == (long *)0x0) ||
               (((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar27 + 0x46) != uVar11))
               )) {
              plVar27 = (long *)0x0;
            }
            if (*(int *)(lVar26 + 0x288) == 1 || *(int *)(lVar26 + 0x288) == -1) {
              plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
              lVar26 = *(long *)puVar3;
              iVar13 = (**(code **)(*plVar16 + 0x60))();
              if (iVar13 < 0x11) {
                uVar11 = 1;
              }
              else {
                uVar11 = *(uint *)(lVar26 + 0x5e8);
                if (4 < uVar11) goto LAB_014bca38;
                uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
              }
            }
            else {
LAB_014bca38:
              uVar11 = 0;
            }
            if (plVar27 != (long *)0x0) {
              lVar26 = plVar27[0x2a];
              if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
                *(undefined **)puVar2 = puVar4;
                __cxa_guard_release(puVar9);
              }
              uVar15 = (**(code **)(*plVar27 + 0x20))(plVar27,puVar2);
              uVar17 = 0;
              if ((int)lVar26 == 1) {
                uVar17 = uVar11;
              }
              if (((uVar15 & 1) != 0) && (uVar17 != 0)) {
                plVar16 = (long *)plVar27[0x77];
                if (((*PTR_DAT_04bb6728 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar13 != 0)) {
                  *(undefined **)PTR_DAT_04bb6720 = puVar5;
                  __cxa_guard_release(PTR_DAT_04bb6728);
                }
                if (((plVar16 != (long *)0x0) &&
                    (uVar15 = (**(code **)*plVar16)(plVar16,PTR_DAT_04bb6720), (uVar15 & 1) != 0))
                   && (uVar15 = (**(code **)(*plVar16 + 0x3b8))(plVar16), (uVar15 & 1) != 0)) {
                  local_78 = 0x2b56;
                  FUN_0277d4ac(&local_78);
                  puVar10 = PTR_DAT_04bb43c0;
                  lVar26 = *(long *)PTR_DAT_04bb43c0;
                  uVar11 = FUN_0277d6c4(&local_78);
                  lVar28 = *(long *)puVar10;
                  if (lVar28 == 0) {
                    uVar17 = 0xbc;
                  }
                  else {
                    lVar26 = *(long *)(lVar26 + 0x57e58);
                    uVar17 = 0xbc;
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                    if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                      local_90 = 0;
                      local_98 = (undefined4)local_78;
                      local_94 = local_78._4_4_;
                      local_a0 = puVar6;
                      uVar11 = FUN_0277d6c4(&local_98);
                      if (*(long *)PTR_DAT_04bb43c0 != 0) {
                        lVar26 = *(long *)(lVar28 + 0x57e58);
                        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                        if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                          lVar26 = *(long *)PTR_DAT_04bc0428;
                          uVar11 = FUN_0277d6c4(&local_78);
                          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
                          if ((uVar11 < *(uint *)(lVar26 + 0x1d8)) &&
                             (puVar18 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar11 * 8
                                                  ), puVar18 != (uint *)0x0)) {
                            uVar11 = *puVar18;
                            uVar17 = 0;
                            if ((uVar11 != 0) && (puVar18 != (uint *)(ulong)uVar11)) {
                              puVar21 = (uint *)((long)puVar18 - (long)(ulong)uVar11);
                              if ((*puVar21 != 0) &&
                                 ((uVar11 = puVar21[1], uVar11 != 0 &&
                                  ((ulong)(ushort)puVar21[2] != 0)))) {
                                lVar26 = 0xc;
                                if (*(char *)((long)puVar21 + 10) != '\0') {
                                  lVar26 = 0x1c;
                                }
                                lVar26 = (long)puVar21 + lVar26 + (ulong)(ushort)puVar21[2] * 8;
                                if (lVar26 != 0) {
                                  uVar17 = 0;
                                  if ((ulong)uVar11 != 0) {
                                    uVar17 = (uint)((ulong)((long)puVar18 - lVar26) / (ulong)uVar11)
                                    ;
                                  }
                                  if (*puVar21 <= uVar17) {
                                    uVar17 = 0xffffffff;
                                  }
                                  if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                                     (uVar8 = *(ushort *)
                                               (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                               (long)(int)uVar17 * 2), uVar17 = (uint)uVar8,
                                     uVar8 < 0xbd)) goto LAB_014bcc54;
                                }
                              }
                              uVar17 = 0;
                            }
                          }
                        }
                      }
                    }
                  }
LAB_014bcc54:
                  local_a0 = (undefined *)0xfffe;
                  FUN_0277d4ac(&local_a0);
                  if (*param_4 < param_4[1]) {
                    lVar26 = plVar27[0xd];
                    puVar22 = *(undefined8 **)(param_4 + 4);
                    if (puVar22 != (undefined8 *)0x0) {
                      *(undefined8 *)(param_4 + 4) = *puVar22;
                    }
                    *(undefined4 *)puVar22 = 3;
                    *(undefined4 *)((long)puVar22 + 4) = (undefined4)local_a0;
                    *(undefined4 *)(puVar22 + 1) = local_a0._4_4_;
                    uVar23 = *(undefined8 *)(lVar26 + 0x278);
                    uVar7 = *(undefined4 *)(lVar26 + 0x280);
                    *(uint *)((long)puVar22 + 0x1c) = uVar17;
                    *(undefined4 *)(puVar22 + 4) = 0;
                    *(undefined8 *)((long)puVar22 + 0xc) = uVar23;
                    *(undefined4 *)((long)puVar22 + 0x14) = uVar7;
                    *(undefined4 *)(puVar22 + 3) = 1;
                    if (*param_4 < param_4[1]) {
                      *(undefined8 **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = puVar22;
                      *param_4 = *param_4 + 1;
                    }
                  }
                }
              }
            }
          }
          puVar19 = puVar19 + 1;
          lVar24 = lVar24 + -8;
        } while (lVar24 != 0);
      }
    }
  }
  return;
}

