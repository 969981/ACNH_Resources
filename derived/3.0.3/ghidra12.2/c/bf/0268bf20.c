
/* WARNING: Removing unreachable block (ram,0x0268c43c) */

void FUN_0268bf20(undefined4 *param_1,long param_2,uint param_3,int *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  byte *pbVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int local_f4;
  undefined4 local_f0;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  int local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar8 = PTR_DAT_04bb37e0;
  uVar2 = *(uint *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined2 *)param_1 = *(undefined2 *)puVar8;
  *(undefined *)((long)param_1 + 2) = puVar8[2];
  *(undefined *)((long)param_1 + 3) = puVar8[3];
  uVar18 = *(undefined2 *)puVar8;
  uVar17 = *(undefined4 *)(puVar8 + 4);
  uVar3 = puVar8[3];
  *(undefined2 *)(param_1 + 7) = uVar18;
  *(undefined2 *)(param_1 + 0xe) = uVar18;
  uVar4 = puVar8[2];
  param_1[1] = uVar17;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x1f) = uVar3;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar3;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar17 = *(undefined4 *)(puVar8 + 4);
  param_1[6] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1e) = uVar4;
  *(undefined1 *)((long)param_1 + 0x3a) = uVar4;
  param_1[8] = uVar17;
  param_1[0xf] = uVar17;
  puVar8 = PTR_DAT_04bb43c0;
  if (0 < (int)uVar2) {
    uVar23 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      lVar22 = *(long *)(*(long *)(param_2 + 0x120) + uVar23 * 8);
      puVar11 = (undefined8 *)(**(code **)(*(long *)(lVar22 + 0x60) + 0xf0))();
      uVar19 = *puVar11;
      local_7c = 0;
      local_80 = (uint)(ushort)uVar19;
      FUN_0277d4ac(&local_80);
      local_80 = CONCAT13((char)((ulong)uVar19 >> 0x18),
                          CONCAT12((char)((ulong)uVar19 >> 0x10),(undefined2)local_80));
      lVar20 = *(long *)puVar8;
      local_7c = (undefined4)((ulong)uVar19 >> 0x20);
      uVar9 = FUN_0277d6c4(&local_80);
      lVar21 = *(long *)puVar8;
      if (lVar21 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          local_88 = (uint *)0x0;
          local_90 = local_80;
          uStack_8c = local_7c;
          local_98 = puVar1;
          uVar9 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar8 != 0) {
            lVar20 = *(long *)(lVar21 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar20 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_80);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if (uVar9 < *(uint *)(lVar20 + 0x1d8)) {
                puVar15 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8);
                if (puVar15 != (uint *)0x0) {
                  local_88 = puVar15;
                }
              }
            }
          }
          local_9c = FUN_01aee3b4(&local_98);
          if (local_88 != (uint *)0x0) {
            uVar9 = *local_88;
            if ((uVar9 != 0) && (local_88 != (uint *)(ulong)uVar9)) {
              puVar15 = (uint *)((long)local_88 - (long)(ulong)uVar9);
              if ((*puVar15 != 0) &&
                 ((uVar9 = puVar15[1], uVar9 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
                lVar20 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar20 != 0) {
                  uVar16 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar16 = (uint)((ulong)((long)local_88 - lVar20) / (ulong)uVar9);
                  }
                  if (*puVar15 <= uVar16) {
                    uVar16 = 0xffffffff;
                  }
                  if ((uVar16 < *(uint *)PTR_DAT_04bc0090) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc0090 + 8) + (long)(int)uVar16 * 2) == 3)) {
                    iVar10 = FUN_01ae7550(&local_98);
                    local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar10);
                    if ((iVar10 - 1U < 6) &&
                       (((local_9c != 0 && (local_9c != 6)) && (local_9c != 7)))) {
                      local_68 = 0;
                      local_70 = local_80;
                      local_6c = local_7c;
                      lVar20 = *(long *)puVar8;
                      local_78 = PTR_DAT_04bc0510 + 0x10;
                      uVar9 = FUN_0277d6c4(&local_70);
                      if (*(long *)puVar8 != 0) {
                        lVar20 = *(long *)(lVar20 + 0x57e58);
                        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                        if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                          lVar20 = *(long *)PTR_DAT_04bc0428;
                          uVar9 = FUN_0277d6c4(&local_80);
                          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                          if (uVar9 < *(uint *)(lVar20 + 0x1d8)) {
                            lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8);
                            if (lVar20 != 0) {
                              local_68 = lVar20;
                            }
                          }
                        }
                      }
                      iVar10 = FUN_01ad7260(&local_78);
                      if ((iVar10 == 0) ||
                         (iVar10 = FUN_01ad7260(&local_78), iVar10 <= (int)param_3)) {
                        uVar17 = local_80;
                        uVar14 = local_7c;
                      }
                      else {
                        iVar10 = FUN_01ad7260(&local_78);
                        if ((iVar10 != 0) &&
                           (((param_3 == 0 ||
                             (iVar10 = FUN_01ad7260(&local_78), (int)param_3 < iVar10)) &&
                            (puVar12 = (ushort *)FUN_01afd600(&local_78), puVar12 != (ushort *)0x0))
                           )) {
                          *puVar12 = *puVar12 & 0xfff8 | (ushort)param_3 & 7;
                        }
                        uVar17 = local_70;
                        uVar14 = local_6c;
                      }
                      *param_1 = uVar17;
                      param_1[1] = uVar14;
                      pbVar13 = (byte *)(**(code **)(*(long *)(lVar22 + 0x98) + 0xf0))();
                      bVar5 = *pbVar13;
                      pbVar13 = (byte *)(**(code **)(*(long *)(lVar22 + 200) + 0xf0))
                                                  ((long *)(lVar22 + 200));
                      bVar6 = *pbVar13;
                      param_1[6] = (int)uVar23;
                      param_1[4] = (uint)bVar5;
                      param_1[5] = (uint)bVar6;
                      goto LAB_0268c070;
                    }
                  }
                }
              }
            }
            uVar14 = local_7c;
            uVar17 = local_80;
            if (local_88 != (uint *)0x0) {
              uVar9 = *local_88;
              uVar16 = 0;
              if ((uVar9 != 0) && (local_88 != (uint *)(ulong)uVar9)) {
                puVar15 = (uint *)((long)local_88 - (long)(ulong)uVar9);
                uVar16 = 0;
                if (*puVar15 != 0) {
                  uVar9 = puVar15[1];
                  if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                    lVar20 = 0xc;
                    if (*(char *)((long)puVar15 + 10) != '\0') {
                      lVar20 = 0x1c;
                    }
                    lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
                    if (lVar20 != 0) {
                      uVar16 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar16 = (uint)((ulong)((long)local_88 - lVar20) / (ulong)uVar9);
                      }
                      if (*puVar15 <= uVar16) {
                        uVar16 = 0xffffffff;
                      }
                      if ((uVar16 < *(uint *)PTR_DAT_04bc0048) &&
                         (uVar16 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar16 * 2),
                         uVar16 < 0x52)) goto LAB_0268c2f0;
                    }
                  }
                  uVar16 = 0;
                }
              }
LAB_0268c2f0:
              local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar16);
              if ((uVar16 & 0xfffffffe) == 10) {
                param_1[7] = local_80;
                param_1[8] = local_7c;
                pbVar13 = (byte *)(**(code **)(*(long *)(lVar22 + 0x98) + 0xf0))();
                bVar5 = *pbVar13;
                pbVar13 = (byte *)(**(code **)(*(long *)(lVar22 + 200) + 0xf0))
                                            ((long *)(lVar22 + 200));
                bVar6 = *pbVar13;
                param_1[0xc] = (uint)bVar5;
                param_1[0xd] = (uint)bVar6;
              }
              else {
                uVar9 = *local_88;
                if ((uVar9 != 0) && (local_88 != (uint *)(ulong)uVar9)) {
                  puVar15 = (uint *)((long)local_88 - (long)(ulong)uVar9);
                  if ((*puVar15 != 0) &&
                     ((uVar9 = puVar15[1], uVar9 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
                    lVar20 = 0xc;
                    if (*(char *)((long)puVar15 + 10) != '\0') {
                      lVar20 = 0x1c;
                    }
                    lVar20 = (long)puVar15 + lVar20 + (ulong)(ushort)puVar15[2] * 8;
                    if (lVar20 != 0) {
                      uVar16 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar16 = (uint)((ulong)((long)local_88 - lVar20) / (ulong)uVar9);
                      }
                      if (*puVar15 <= uVar16) {
                        uVar16 = 0xffffffff;
                      }
                      if ((uVar16 < *(uint *)PTR_DAT_04bc0048) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar16 * 2) ==
                          0x1d)) {
                        uVar3 = local_80._2_1_;
                        local_a2 = local_80._2_1_;
                        uVar4 = local_80._3_1_;
                        uVar18 = (undefined2)local_80;
                        lVar21 = *(long *)puVar8;
                        local_a4 = (undefined2)local_80;
                        local_a1 = local_80._3_1_;
                        local_f0 = local_7c;
                        local_a0 = local_7c;
                        uVar9 = FUN_0277d6c4(&local_a4);
                        lVar20 = *(long *)puVar8;
                        if (lVar20 == 0) {
                          lVar20 = 0;
                        }
                        else {
                          lVar21 = *(long *)(lVar21 + 0x57e58);
                          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                          if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                            if (*param_4 == 7) {
                              puVar7 = &DAT_0417b3bc;
                              if (4 < param_3) goto LAB_0268c420;
LAB_0268c5a0:
                              local_f4 = *(int *)(puVar7 + (ulong)param_3 * 4);
                            }
                            else {
                              if (*param_4 != 1) goto LAB_0268c6cc;
                              puVar7 = &DAT_040581a0;
                              if (param_3 < 8) goto LAB_0268c5a0;
LAB_0268c420:
                              local_f4 = 0;
                            }
                            local_68 = 0;
                            local_78 = PTR_DAT_04bc0510 + 0x10;
                            local_70 = uVar17;
                            local_6c = uVar14;
                            uVar9 = FUN_0277d6c4(&local_70);
                            if (*(long *)puVar8 != 0) {
                              lVar20 = *(long *)(lVar20 + 0x57e58);
                              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                              if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
                                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0))
                              {
                                lVar20 = *(long *)PTR_DAT_04bc0428;
                                uVar9 = FUN_0277d6c4(&local_a4);
                                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                                if (uVar9 < *(uint *)(lVar20 + 0x1d8)) {
                                  lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) +
                                                    (long)(int)uVar9 * 8);
                                  if (lVar20 != 0) {
                                    local_68 = lVar20;
                                  }
                                }
                              }
                            }
                            iVar10 = FUN_01ad7260(&local_78);
                            if (iVar10 != 0) {
                              iVar10 = FUN_01ad7260(&local_78);
                              if (local_f4 < iVar10) {
                                iVar10 = FUN_01ad7260(&local_78);
                                if ((iVar10 != 0) &&
                                   (((local_f4 == 0 ||
                                     (iVar10 = FUN_01ad7260(&local_78), local_f4 < iVar10)) &&
                                    (puVar12 = (ushort *)FUN_01afd600(&local_78),
                                    puVar12 != (ushort *)0x0)))) {
                                  *puVar12 = *puVar12 & 0xfff8 | (ushort)local_f4 & 7;
                                }
                                local_a2 = local_70._2_1_;
                                local_a4 = (undefined2)local_70;
                                local_a1 = local_70._3_1_;
                                local_f0 = local_6c;
                                uVar18 = (undefined2)local_70;
                                uVar3 = local_70._2_1_;
                                uVar4 = local_70._3_1_;
                              }
                            }
                            lVar20 = *(long *)puVar8;
                          }
                        }
LAB_0268c6cc:
                        *(undefined2 *)(param_1 + 0xe) = uVar18;
                        *(undefined1 *)((long)param_1 + 0x3a) = uVar3;
                        *(undefined1 *)((long)param_1 + 0x3b) = uVar4;
                        param_1[0xf] = local_f0;
                        local_78 = PTR_DAT_04bc0510 + 0x10;
                        local_70 = CONCAT13(uVar4,CONCAT12(uVar3,uVar18));
                        local_6c = local_f0;
                        local_68 = 0;
                        uVar9 = FUN_0277d6c4(&local_70);
                        if (*(long *)puVar8 != 0) {
                          lVar20 = *(long *)(lVar20 + 0x57e58);
                          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                          if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                            FUN_0277d6c4(param_1 + 0xe);
                          }
                        }
                        pbVar13 = (byte *)(**(code **)(*(long *)(lVar22 + 0x98) + 0xf0))();
                        bVar5 = *pbVar13;
                        pbVar13 = (byte *)(**(code **)(*(long *)(lVar22 + 200) + 0xf0))
                                                    ((long *)(lVar22 + 200));
                        bVar6 = *pbVar13;
                        param_1[0x14] = (int)uVar23;
                        param_1[0x12] = (uint)bVar5;
                        param_1[0x13] = (uint)bVar6;
                      }
                    }
                  }
                }
              }
              goto LAB_0268c070;
            }
          }
          local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
        }
      }
LAB_0268c070:
      uVar23 = uVar23 + 1;
    } while (uVar2 != uVar23);
  }
  return;
}

