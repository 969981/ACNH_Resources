
void FUN_018ae010(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  byte bVar10;
  ushort uVar11;
  short sVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  short *psVar22;
  uint *puVar23;
  undefined2 *puVar24;
  long *plVar25;
  undefined1 *__src;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  long *plVar35;
  short sVar36;
  long *plVar37;
  long lVar38;
  float fVar39;
  int local_1b0;
  uint local_190;
  undefined4 local_18c;
  long *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 *local_170;
  undefined2 local_168;
  undefined2 local_166;
  undefined4 local_164;
  long *local_160;
  long *local_158;
  uint local_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  uint local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined *local_130;
  undefined1 *local_128;
  int local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 local_74;
  
  plVar30 = (long *)PTR_DAT_04bb27c0;
  lVar26 = *(long *)PTR_DAT_04bb27c0;
  if (lVar26 == 0) {
    return;
  }
  uVar17 = *(uint *)PTR_DAT_04bbea10;
  if ((((uVar17 == 0) ||
       (plVar35 = *(long **)(*(long *)(*(long *)(lVar26 + 0x1c0) + 8) +
                            ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
      ((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar35 + 0x46) != uVar17)) {
    plVar35 = (long *)0x0;
  }
  if (*(int *)(lVar26 + 0x288) == 1 || *(int *)(lVar26 + 0x288) == -1) {
    plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar26 = *plVar30;
    iVar14 = (**(code **)(*plVar18 + 0x60))();
    if (iVar14 < 0x11) {
      uVar17 = 1;
      goto joined_r0x018ae0ec;
    }
    if (*(uint *)(lVar26 + 0x5e8) < 5) {
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar26 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x018ae0ec;
    }
  }
  uVar17 = 0;
joined_r0x018ae0ec:
  if (plVar35 != (long *)0x0) {
    if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar14 != 0)) {
      *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9f0);
    }
    uVar15 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bbe9e8);
    if (((uVar17 & uVar15) == 1) && (lVar26 = *(long *)PTR_DAT_04bb46b0, lVar26 != 0)) {
      puVar27 = *(undefined8 **)(lVar26 + 0x10);
      if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
        lVar26 = (**(code **)(*(long *)*puVar27 + 0x38))();
        if (lVar26 == 0) {
          return;
        }
        lVar26 = lVar26 + 0x70;
      }
      else {
        if (puVar27 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar27[0x26] == (long *)0x0) {
          return;
        }
        lVar26 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
        if (lVar26 == 0) {
          return;
        }
      }
      plVar37 = (long *)PTR_DAT_04bb4800;
      plVar18 = (long *)(lVar26 + 0x1bf198);
      lVar19 = FUN_019db0b8(*(undefined8 *)PTR_DAT_04bb4800);
      lVar20 = FUN_019db1e0(*plVar37);
      local_148 = (long **)CONCAT44(local_148._4_4_,(undefined4)local_148);
      if (*(long *)PTR_DAT_04bb4008 != 0) {
        lVar28 = *(long *)(param_1 + 0x2d8);
        local_148 = (long **)CONCAT44(local_148._4_4_,(undefined4)local_148);
        if (lVar28 != 0) {
          uVar17 = *(uint *)(param_1 + 0x2d0);
          if (uVar17 != 0) {
            uVar15 = 0;
            do {
              puVar3 = (undefined1 *)(lVar28 + ((long)((ulong)uVar15 << 0x20) >> 0x1d));
              *puVar3 = 0;
              *(undefined4 *)(puVar3 + 4) = 0xffffffff;
              uVar15 = uVar15 + 1;
            } while (uVar17 != uVar15);
          }
          uVar17 = *(uint *)(param_1 + 0x2e0);
          if (0 < (int)uVar17) {
            uVar29 = (ulong)uVar17 & 3;
            if (uVar17 < 4) {
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              do {
                lVar28 = uVar31 * 4;
                uVar31 = uVar31 + 4;
                *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar28) = 0xffffffff;
                *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar28 + 4) = 0xffffffff;
                *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar28 + 8) = 0xffffffff;
                *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar28 + 0xc) = 0xffffffff;
              } while (((ulong)uVar17 & 0xfffffffc) != uVar31);
            }
            if ((uVar17 & 3) != 0) {
              lVar28 = uVar31 << 2;
              do {
                uVar29 = uVar29 - 1;
                *(undefined4 *)(*(long *)(param_1 + 0x2e8) + lVar28) = 0xffffffff;
                lVar28 = lVar28 + 4;
              } while (uVar29 != 0);
            }
          }
          if ((((*(char *)(param_1 + 0x314) == '\0') ||
               (uVar17 = *(uint *)(param_1 + 0x310), uVar17 < 2)) ||
              (*(long *)(param_1 + 0x308) == 0)) ||
             (uVar15 = *(uint *)(param_1 + 0x300), uVar15 < uVar17)) {
            sVar36 = -2;
            sVar12 = -2;
          }
          else {
            if ((int)uVar15 < (int)uVar17) {
              sVar12 = -2;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x318);
              *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
              uVar4 = uVar4 ^ uVar4 << 0xb;
              *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
              uVar6 = *(uint *)(param_1 + 0x324);
              *(uint *)(param_1 + 800) = uVar6;
              uVar4 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar4 ^ uVar6;
              lVar28 = (ulong)uVar17 * (ulong)uVar4;
              *(uint *)(param_1 + 0x324) = uVar4;
              lVar32 = lVar28 >> 0x20;
              uVar17 = (uint)((ulong)lVar28 >> 0x20);
              lVar28 = lVar32;
              if (uVar15 <= uVar17) {
                lVar28 = 0;
              }
              uVar15 = *(uint *)(*(long *)(param_1 + 0x308) + lVar28 * 4);
              if (((int)uVar15 < 0) || (*(int *)(lVar20 + 0x78) <= (int)uVar15)) {
                plVar30 = *(long **)(lVar20 + 0x60);
              }
              else {
                plVar30 = (long *)(*(long *)(lVar20 + 0x60) + (ulong)uVar15 * 8);
              }
              psVar22 = (short *)(**(code **)(*(long *)(*plVar30 + 0x30) + 0xf0))();
              iVar14 = *(int *)(param_1 + 0x310);
              sVar12 = *psVar22;
              uVar15 = iVar14 - 1;
              if ((int)uVar17 <= iVar14 + -2) {
                iVar14 = ~uVar17 + iVar14;
                do {
                  uVar4 = uVar17 + 1;
                  if (*(uint *)(param_1 + 0x300) <= uVar17 + 1) {
                    uVar4 = 0;
                  }
                  lVar28 = lVar32;
                  if (*(uint *)(param_1 + 0x300) <= uVar17) {
                    lVar28 = 0;
                  }
                  iVar14 = iVar14 + -1;
                  *(undefined4 *)(*(long *)(param_1 + 0x308) + lVar28 * 4) =
                       *(undefined4 *)(*(long *)(param_1 + 0x308) + (long)(int)uVar4 * 4);
                } while (iVar14 != 0);
              }
              if (*(uint *)(param_1 + 0x300) <= uVar15) {
                uVar15 = 0;
              }
              *(undefined4 *)(*(long *)(param_1 + 0x308) + (long)(int)uVar15 * 4) = 0xffffffff;
              uVar17 = *(uint *)(param_1 + 0x310);
              uVar15 = *(uint *)(param_1 + 0x300);
            }
            if ((int)uVar15 < (int)(uVar17 - 1)) {
              sVar36 = -2;
            }
            else {
              uVar4 = *(uint *)(param_1 + 0x318);
              *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
              uVar4 = uVar4 ^ uVar4 << 0xb;
              *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
              uVar6 = *(uint *)(param_1 + 0x324);
              *(uint *)(param_1 + 800) = uVar6;
              uVar4 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar4 ^ uVar6;
              lVar32 = (ulong)uVar4 * (ulong)(uVar17 - 1);
              *(uint *)(param_1 + 0x324) = uVar4;
              lVar28 = lVar32 >> 0x20;
              if (uVar15 <= (uint)((ulong)lVar32 >> 0x20)) {
                lVar28 = 0;
              }
              uVar17 = *(uint *)(*(long *)(param_1 + 0x308) + lVar28 * 4);
              if (((int)uVar17 < 0) || (*(int *)(lVar20 + 0x78) <= (int)uVar17)) {
                plVar30 = *(long **)(lVar20 + 0x60);
              }
              else {
                plVar30 = (long *)(*(long *)(lVar20 + 0x60) + (ulong)uVar17 * 8);
              }
              psVar22 = (short *)(**(code **)(*(long *)(*plVar30 + 0x30) + 0xf0))();
              sVar36 = *psVar22;
            }
          }
          if ((*(long **)(lVar26 + 0x1bf1b8) == (long *)0x0) ||
             (puVar27 = (undefined8 *)**(long **)(lVar26 + 0x1bf1b8), puVar27 == (undefined8 *)0x0))
          {
            uVar29 = 0;
          }
          else {
            uVar29 = (**(code **)*puVar27)();
            uVar29 = uVar29 & 0xffffffff;
          }
          if (*(int *)(lVar20 + 0x78) < 1) {
            uVar17 = 0;
          }
          else {
            lVar28 = 0;
            uVar17 = 0;
            do {
              lVar32 = *plVar18;
              lVar38 = *(long *)(lVar26 + 0x1bf1a0);
              puVar21 = (ushort *)
                        (**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x60) + lVar28 * 8) +
                                              0x30) + 0xf0))();
              local_160 = (long *)(ulong)*puVar21;
              FUN_0277d4ac(&local_160);
              uVar31 = FUN_027bf130(lVar38 + lVar32,&local_160);
              if ((uVar31 & 1) != 0) {
                uVar15 = uVar17;
                if (*(uint *)(param_1 + 0x2d0) <= uVar17) {
                  uVar15 = 0;
                }
                uVar17 = uVar17 + 1;
                *(int *)(*(long *)(param_1 + 0x2d8) + (long)(int)uVar15 * 8 + 4) = (int)lVar28;
              }
              lVar28 = lVar28 + 1;
            } while (lVar28 < *(int *)(lVar20 + 0x78));
          }
          if ((((uVar29 & 1) != 0) && (*(long *)(lVar26 + 0x1bf1b8) != 0)) &&
             (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x1bf1b8) + 8),
             puVar27 != (undefined8 *)0x0)) {
            (**(code **)*puVar27)();
          }
          puVar1 = PTR_DAT_04bb3238;
          plVar30 = (long *)PTR_DAT_04bb27c0;
          if ((*(long *)(param_1 + 0x2c8) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) {
            puVar27 = *(undefined8 **)PTR_DAT_04bb4808;
            if (puVar27 != (undefined8 *)0x0) {
              *puVar27 = 0xffffffffffffffff;
              uVar5 = *(undefined4 *)puVar1;
              *(undefined1 *)((long)puVar27 + 0xc) = 0;
              *(undefined1 *)((long)puVar27 + 0x14) = 0;
              *(undefined4 *)(puVar27 + 1) = uVar5;
              *(undefined4 *)(puVar27 + 2) = uVar5;
            }
            uVar15 = 0;
            uVar4 = *(uint *)(param_1 + 0x2d0);
            if (uVar17 <= *(uint *)(param_1 + 0x2d0)) {
              uVar4 = uVar17;
            }
            do {
              uVar17 = *(uint *)(param_1 + 0x318);
              *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
              uVar17 = uVar17 ^ uVar17 << 0xb;
              uVar6 = *(uint *)(param_1 + 0x2d0);
              lVar38 = *(long *)(param_1 + 0x2d8);
              *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
              uVar7 = *(uint *)(param_1 + 0x324);
              *(uint *)(param_1 + 800) = uVar7;
              uVar17 = uVar17 >> 8 ^ uVar7 >> 0x13 ^ uVar17 ^ uVar7;
              lVar28 = (ulong)uVar4 * (ulong)uVar17;
              *(uint *)(param_1 + 0x324) = uVar17;
              lVar32 = lVar28 >> 0x20;
              uVar17 = (uint)((ulong)lVar28 >> 0x20);
              lVar28 = lVar32;
              if (uVar6 <= uVar17) {
                lVar28 = 0;
              }
              if (*(char *)(lVar38 + lVar28 * 8) == '\0') {
                if (*(char *)(param_1 + 0x314) == '\0') {
LAB_018ae4c4:
                  uVar6 = uVar15;
                  if (*(uint *)(param_1 + 0x2e0) <= uVar15) {
                    uVar6 = 0;
                  }
                  uVar15 = uVar15 + 1;
                  *(undefined4 *)(*(long *)(param_1 + 0x2e8) + (long)(int)uVar6 * 4) =
                       *(undefined4 *)(lVar38 + lVar28 * 8 + 4);
                  if (*(uint *)(param_1 + 0x2d0) <= uVar17) {
                    lVar32 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0x2d8) + lVar32 * 8) = 1;
                }
                else if (uVar15 == 0) {
                  if (uVar6 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar17 = 0;
                    do {
                      piVar34 = (int *)(lVar38 + ((long)((ulong)uVar17 << 0x20) >> 0x1d) + 4);
                      psVar22 = (short *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x60) +
                                                                         (long)*piVar34 * 8) + 0x30)
                                                     + 0xf0))();
                      if (sVar12 == *psVar22) {
                        **(int **)(param_1 + 0x2e8) = *piVar34;
                        uVar15 = 1;
                        *(undefined1 *)(lVar38 + (long)(int)uVar17 * 8) = 1;
                        break;
                      }
                      uVar17 = uVar17 + 1;
                      uVar15 = 0;
                    } while (uVar6 != uVar17);
                  }
                }
                else {
                  if (uVar15 != 1) goto LAB_018ae4c4;
                  if (uVar6 == 0) {
                    uVar15 = 1;
                  }
                  else {
                    uVar17 = 0;
                    do {
                      piVar34 = (int *)(lVar38 + ((long)((ulong)uVar17 << 0x20) >> 0x1d) + 4);
                      psVar22 = (short *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x60) +
                                                                         (long)*piVar34 * 8) + 0x30)
                                                     + 0xf0))();
                      if (sVar36 == *psVar22) {
                        *(int *)(*(long *)(param_1 + 0x2e8) +
                                (ulong)(1 < *(uint *)(param_1 + 0x2e0)) * 4) = *piVar34;
                        *(undefined1 *)(lVar38 + (long)(int)uVar17 * 8) = 1;
                        uVar15 = 2;
                        break;
                      }
                      uVar17 = uVar17 + 1;
                      uVar15 = 1;
                    } while (uVar6 != uVar17);
                  }
                }
              }
              puVar1 = PTR_DAT_04bb39d8;
            } while (((int)uVar15 < (int)uVar4) && ((int)uVar15 < (int)*(char *)(param_1 + 0x2a1)));
            iVar14 = *(int *)PTR_DAT_04bb3238;
            iVar8 = *(int *)(param_1 + 0x2e0);
            plVar30 = (long *)PTR_DAT_04bb27c0;
            local_1b0 = iVar14;
            if (iVar8 != 0) {
              lVar28 = *(long *)(param_1 + 0x2e8);
              uVar29 = 0;
              do {
                iVar16 = iVar14;
                if (*(int *)(lVar28 + (-(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2)) != -1)
                {
                  lVar32 = (long)(int)uVar29;
                  do {
                    if (*(char *)(param_1 + 0x314) == '\0') {
                      uVar17 = *(uint *)(param_1 + 0x2c0);
                    }
                    else {
                      psVar22 = (short *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x60) +
                                                                         (long)*(int *)(lVar28 + 
                                                  lVar32 * 4) * 8) + 0x30) + 0xf0))();
                      if (sVar12 == *psVar22) {
                        uVar17 = *(uint *)(param_1 + 0x2c0);
                        uVar15 = 4;
                        break;
                      }
                      psVar22 = (short *)(**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x60) +
                                                                         (long)*(int *)(lVar28 + 
                                                  lVar32 * 4) * 8) + 0x30) + 0xf0))();
                      uVar17 = *(uint *)(param_1 + 0x2c0);
                      if (sVar36 == *psVar22) {
                        uVar15 = 0;
                        break;
                      }
                    }
                    puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
                    uVar15 = *puVar23 ^ *puVar23 << 0xb;
                    uVar4 = puVar23[3];
                    *puVar23 = puVar23[1];
                    puVar23[1] = puVar23[2];
                    uVar15 = uVar15 >> 8 ^ uVar4 >> 0x13 ^ uVar15 ^ uVar4;
                    puVar23[2] = uVar4;
                    puVar23[3] = uVar15;
                    lVar38 = (ulong)uVar15 * (ulong)uVar17;
                    uVar17 = *(uint *)(param_1 + 0x2c0);
                    uVar15 = (uint)((ulong)lVar38 >> 0x20);
                    lVar38 = lVar38 >> 0x20;
                    if (uVar17 <= uVar15) {
                      lVar38 = 0;
                    }
                    lVar38 = *(long *)(param_1 + 0x2c8) + lVar38 * 0x20;
                  } while ((*(char *)(lVar38 + 0x1c) == '\0') || (*(char *)(lVar38 + 0x1d) != '\0'))
                  ;
                  uVar4 = uVar15;
                  if (uVar17 <= uVar15) {
                    uVar4 = 0;
                  }
                  *(undefined1 *)(*(long *)(param_1 + 0x2c8) + (long)(int)uVar4 * 0x20 + 0x1d) = 1;
                  puVar21 = (ushort *)
                            (**(code **)(*(long *)(*(long *)(*(long *)(lVar20 + 0x60) +
                                                            (long)*(int *)(lVar28 + lVar32 * 4) * 8)
                                                  + 0x30) + 0xf0))();
                  uVar11 = *puVar21;
                  uVar17 = uVar15;
                  if (*(uint *)(param_1 + 0x2c0) <= uVar15) {
                    uVar17 = 0;
                  }
                  lVar38 = *(long *)(param_1 + 0x2c8) + (long)(int)uVar17 * 0x20;
                  local_160 = *(long **)(lVar38 + 0x10);
                  local_158 = (long *)(ulong)*(uint *)(lVar38 + 0x18);
                  uStack_14c = 1;
                  local_148._0_4_ = 0xffffffff;
                  local_148._4_4_ = *(undefined4 *)(lVar28 + lVar32 * 4);
                  local_150 = (uint)uVar11;
                  iVar16 = FUN_018afb50(param_1,&local_160);
                  uVar17 = uVar15;
                  if (*(uint *)(param_1 + 0x2c0) <= uVar15) {
                    uVar17 = 0;
                  }
                  *(int *)(*(long *)(param_1 + 0x2c8) +
                          (-(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5)) =
                       iVar16;
                  uVar31 = FUN_01a12390(*(undefined8 *)PTR_DAT_04bb4008,3,(uint)uVar11);
                  plVar30 = (long *)PTR_DAT_04bb27c0;
                  if ((uVar31 & 1) == 0) {
                    iVar16 = iVar14;
                  }
                  else {
                    if (uVar15 == 0) {
                      local_1b0 = iVar16;
                    }
                    else if (uVar15 == 4) goto LAB_018ae608;
                    iVar16 = iVar14;
                  }
                }
LAB_018ae608:
                iVar14 = iVar16;
                uVar31 = uVar29 + 1;
                uVar29 = uVar31 & 0xffffffff;
              } while (iVar8 != (int)uVar31);
            }
            puVar1 = PTR_DAT_04bb4808;
            plVar37 = (long *)PTR_DAT_04bb4800;
            if ((*(long *)PTR_DAT_04bb4808 != 0 && iVar14 != 0) && local_1b0 != 0) {
              fVar39 = (float)FUN_01943a80(*(long *)PTR_DAT_04bb4808,sVar12,sVar36);
              uVar17 = *(uint *)(param_1 + 0x318);
              *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
              uVar17 = uVar17 ^ uVar17 << 0xb;
              *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
              uVar15 = *(uint *)(param_1 + 0x324);
              *(uint *)(param_1 + 800) = uVar15;
              uVar17 = uVar17 >> 8 ^ uVar15 >> 0x13 ^ uVar17 ^ uVar15;
              *(uint *)(param_1 + 0x324) = uVar17;
              lVar28 = *(long *)puVar1;
              bVar13 = fVar39 <= (float)(uVar17 >> 9 | 0x3f800000) + -1.0;
              iVar8 = iVar14;
              if (bVar13) {
                iVar8 = local_1b0;
              }
              *(int *)(lVar28 + 8) = iVar8;
              if (bVar13) {
                local_1b0 = iVar14;
              }
              *(int *)(lVar28 + 0x10) = local_1b0;
            }
          }
          if (*(long *)(param_1 + 0x2f8) != 0) {
            iVar14 = *(int *)(param_1 + 0x2d0);
            if (iVar14 != 0) {
              lVar28 = *(long *)(param_1 + 0x2d8);
              uVar17 = 0;
              uVar29 = 0;
              do {
                if (*(char *)(lVar28 + (-(uVar29 >> 0x1f) & 0xfffffff800000000 | uVar29 << 3)) ==
                    '\0') {
                  uVar15 = uVar17;
                  if (*(uint *)(param_1 + 0x2f0) <= uVar17) {
                    uVar15 = 0;
                  }
                  uVar17 = uVar17 + 1;
                  *(undefined4 *)(*(long *)(param_1 + 0x2f8) + (long)(int)uVar15 * 4) =
                       *(undefined4 *)(lVar28 + (long)(int)uVar29 * 8 + 4);
                }
                uVar31 = uVar29 + 1;
                uVar29 = uVar31 & 0xffffffff;
              } while (iVar14 != (int)uVar31);
            }
            if ((*(long **)(lVar26 + 0x1bf1b8) == (long *)0x0) ||
               (puVar27 = (undefined8 *)**(long **)(lVar26 + 0x1bf1b8), puVar27 == (undefined8 *)0x0
               )) {
              uVar17 = 1;
            }
            else {
              uVar17 = (**(code **)*puVar27)();
              uVar17 = uVar17 ^ 1;
            }
            iVar14 = *(int *)(param_1 + 0x2f0);
            if (iVar14 != 0) {
              lVar28 = *(long *)(param_1 + 0x2f8);
              uVar29 = 0;
              do {
                if (*(int *)(lVar28 + (-(uVar29 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2)) == -1)
                break;
                lVar38 = *(long *)(lVar20 + 0x60);
                lVar32 = *(long *)(lVar38 + (long)*(int *)(lVar28 + (long)(int)uVar29 * 4) * 8);
                lVar33 = *(long *)PTR_DAT_04bb4800;
                if (lVar33 == 0) {
                  if (*(int *)(lVar32 + 0xb8) == 0) {
                    local_158 = (long *)0x0;
                  }
                  else {
                    local_158 = (long *)**(long **)(lVar32 + 0xc0);
                  }
                }
                else {
                  if (*(char *)(lVar33 + 0x80c) == '\0') {
                    bVar10 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
                    *(undefined1 *)(lVar33 + 0x80c) = 1;
                    uVar15 = (uint)(bVar10 - 0x12 < 0xfffffff4);
                    *(uint *)(lVar33 + 0x808) = uVar15;
                  }
                  else {
                    uVar15 = *(uint *)(lVar33 + 0x808);
                  }
                  local_188 = (long *)CONCAT44(local_188._4_4_,uVar15);
                  if (uVar15 < *(uint *)(lVar32 + 0xb8)) {
                    local_158 = *(long **)(*(long *)(lVar32 + 0xc0) + (long)(int)uVar15 * 8);
                  }
                  else {
                    local_158 = (long *)0x0;
                  }
                  lVar38 = *(long *)(lVar20 + 0x60);
                }
                lVar32 = (long)(int)uVar29 * 4;
                local_150 = *(uint *)(lVar28 + lVar32);
                local_188 = (long *)CONCAT44(local_188._4_4_,2);
                local_160 = plVar35 + 0x50;
                local_148 = &local_188;
                puVar21 = (ushort *)
                          (**(code **)(*(long *)(*(long *)(lVar38 + (long)*(int *)(lVar28 + lVar32)
                                                                    * 8) + 0x30) + 0xf0))();
                local_13c = 0;
                local_140 = (uint)*puVar21;
                FUN_0277d4ac(&local_140);
                uVar31 = FUN_027bf130(*(long *)(lVar26 + 0x1bf1a0) + *plVar18,&local_140);
                if ((uVar31 & 1) != 0) {
                  FUN_018afa7c(param_1,&local_160);
                }
                uVar31 = uVar29 + 1;
                uVar29 = uVar31 & 0xffffffff;
              } while (iVar14 != (int)uVar31);
            }
            plVar37 = (long *)PTR_DAT_04bb4800;
            plVar30 = (long *)PTR_DAT_04bb27c0;
            if ((((uVar17 & 1) == 0) && (*(long *)(lVar26 + 0x1bf1b8) != 0)) &&
               (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x1bf1b8) + 8),
               puVar27 != (undefined8 *)0x0)) {
              (**(code **)*puVar27)();
            }
          }
        }
      }
      if ((*(long **)(lVar26 + 0x1bf1b8) == (long *)0x0) ||
         (puVar27 = (undefined8 *)**(long **)(lVar26 + 0x1bf1b8), puVar27 == (undefined8 *)0x0)) {
        local_190 = 0;
      }
      else {
        local_190 = (**(code **)*puVar27)();
      }
      if (0 < *(int *)(lVar19 + 0x78)) {
        uVar29 = 0;
        puVar1 = PTR_DAT_04bb2e50 + 0x10;
        puVar2 = PTR_DAT_04bb2d88 + 0x10;
        do {
          local_170 = &local_18c;
          if (uVar29 < *(uint *)(lVar19 + 0x58)) {
            lVar20 = *(long *)(*(long *)(lVar19 + 0x60) + uVar29 * 8);
          }
          else {
            lVar20 = 0;
          }
          lVar28 = *plVar37;
          if (lVar28 == 0) {
            if (*(int *)(lVar20 + 0xb8) == 0) goto LAB_018aec40;
            local_180 = **(undefined8 **)(lVar20 + 0xc0);
          }
          else {
            if (*(char *)(lVar28 + 0x80c) == '\0') {
              bVar10 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
              *(undefined1 *)(lVar28 + 0x80c) = 1;
              uVar17 = (uint)(bVar10 - 0x12 < 0xfffffff4);
              *(uint *)(lVar28 + 0x808) = uVar17;
            }
            else {
              uVar17 = *(uint *)(lVar28 + 0x808);
            }
            local_160 = (long *)CONCAT44(local_160._4_4_,uVar17);
            if (uVar17 < *(uint *)(lVar20 + 0xb8)) {
              local_180 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + (long)(int)uVar17 * 8);
            }
            else {
LAB_018aec40:
              local_180 = 0;
            }
          }
          local_178 = (undefined4)uVar29;
          local_18c = 0;
          local_188 = plVar35 + 0x50;
          puVar24 = (undefined2 *)(**(code **)(*(long *)(lVar20 + 0x30) + 0xf0))();
          local_168 = *puVar24;
          local_166 = 0;
          local_164 = 0;
          FUN_0277d4ac(&local_168);
          lVar28 = *plVar37;
          if (lVar28 == 0) {
            if (*(int *)(lVar20 + 0xb8) == 0) goto LAB_018aed00;
            lVar20 = **(long **)(lVar20 + 0xc0);
          }
          else {
            if (*(char *)(lVar28 + 0x80c) == '\0') {
              bVar10 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
              *(undefined1 *)(lVar28 + 0x80c) = 1;
              uVar17 = (uint)(bVar10 - 0x12 < 0xfffffff4);
              *(uint *)(lVar28 + 0x808) = uVar17;
            }
            else {
              uVar17 = *(uint *)(lVar28 + 0x808);
            }
            local_160 = (long *)CONCAT44(local_160._4_4_,uVar17);
            if (uVar17 < *(uint *)(lVar20 + 0xb8)) {
              lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + (long)(int)uVar17 * 8);
            }
            else {
LAB_018aed00:
              lVar20 = 0;
            }
          }
          piVar34 = (int *)(**(code **)(*(long *)(lVar20 + 0x528) + 0xf0))(lVar20 + 0x528);
          iVar14 = *piVar34;
          uVar31 = FUN_027bf130(*(long *)(lVar26 + 0x1bf1a0) + *plVar18,&local_168);
          if (iVar14 == 0xc) {
            if ((uVar31 & 1) != 0) {
              local_158 = (long *)((ulong)local_158 & 0xffffffff00000000);
              local_78 = 0xffffffff;
              local_74 = 0;
              lVar20 = *plVar30;
              local_160 = (long *)0x0;
              if (lVar20 != 0) {
                uVar17 = *(uint *)PTR_DAT_04bbea10;
                if (((uVar17 == 0) ||
                    (plVar37 = *(long **)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                                         ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar37 == (long *)0x0
                    )) || (((*(uint *)(plVar37 + 0x49) >> 1 & 1) != 0 ||
                           (*(uint *)(plVar37 + 0x46) != uVar17)))) {
                  plVar37 = (long *)0x0;
                }
                if ((*(int *)(lVar20 + 0x288) == 1) || (*(int *)(lVar20 + 0x288) == -1)) {
                  plVar25 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar20 = *plVar30;
                  iVar14 = (**(code **)(*plVar25 + 0x60))();
                  if (iVar14 < 0x11) {
                    uVar17 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_018aee04;
                    uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar20 + 0x5e8) & 0x1f) & 1;
                  }
                }
                else {
LAB_018aee04:
                  uVar17 = 0;
                }
                if (plVar37 != (long *)0x0) {
                  if ((*PTR_DAT_04bbe9f0 & 1) == 0) {
                    iVar14 = __cxa_guard_acquire(PTR_DAT_04bbe9f0);
                    if (iVar14 != 0) {
                      *(undefined **)PTR_DAT_04bbe9e8 = puVar1;
                      __cxa_guard_release(PTR_DAT_04bbe9f0);
                    }
                  }
                  uVar15 = (**(code **)(*plVar37 + 0x20))(plVar37,PTR_DAT_04bbe9e8);
                  if ((uVar17 & uVar15) != 0) {
                    FUN_01934398(plVar37 + 0xfa,&local_78,&local_160);
                    plVar37 = local_160;
                    uVar17 = (uint)local_158;
                    local_74 = 4;
                    uVar5 = local_178;
                    uVar9 = local_78;
                    uVar15 = FUN_0277d6c4(&local_168);
                    lVar20 = *(long *)PTR_DAT_04bb4008;
                    if (lVar20 != 0) {
                      local_160 = (long *)0x5400000000;
                      uStack_14c = 0x3f800000;
                      local_148._0_4_ = 0;
                      local_120 = 0x80;
                      local_9d = 0;
                      local_11c[0] = 0;
                      local_90 = 0;
                      local_94 = 0;
                      local_158 = plVar37;
                      local_150 = uVar17;
                      local_98 = 7;
                      local_148._4_4_ = 0;
                      local_140 = 0;
                      local_13c = 0;
                      uStack_138 = 0;
                      local_130 = puVar2;
                      local_128 = local_11c;
                      uStack_14c = FUN_01a12580(lVar20,uVar15);
                      __src = (undefined1 *)FUN_01a113c0(lVar20,uVar15);
                      puVar3 = local_128;
                      if (local_128 != __src) {
                        lVar20 = 0;
                        do {
                          if (__src[lVar20] == '\0') goto LAB_018aeb34;
                          if (__src[lVar20 + 1] == '\0') {
                            lVar20 = lVar20 + 1;
                            goto LAB_018aeb34;
                          }
                          if (__src[lVar20 + 2] == '\0') {
                            lVar20 = lVar20 + 2;
                            goto LAB_018aeb34;
                          }
                          lVar20 = lVar20 + 3;
                        } while (lVar20 != 0x80001);
                        lVar20 = 0;
LAB_018aeb34:
                        iVar14 = (int)lVar20;
                        if (local_120 <= (int)lVar20) {
                          iVar14 = local_120 + -1;
                        }
                        memcpy(local_128,__src,(long)iVar14);
                        puVar3[iVar14] = 0;
                        plVar30 = (long *)PTR_DAT_04bb27c0;
                      }
                      local_148._4_4_ = local_74;
                      local_140 = uVar15;
                      local_13c = uVar5;
                      uStack_138 = uVar9;
                      FUN_007402e0(*plVar30,&local_160,
                                   *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230),1);
                    }
                  }
                }
              }
              plVar37 = (long *)PTR_DAT_04bb4800;
            }
          }
          else if ((uVar31 & 1) != 0) {
            FUN_018afa7c(param_1,&local_188);
          }
          uVar29 = uVar29 + 1;
        } while ((long)uVar29 < (long)*(int *)(lVar19 + 0x78));
      }
      if ((((local_190 & 1) != 0) && (*(long *)(lVar26 + 0x1bf1b8) != 0)) &&
         (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x1bf1b8) + 8), puVar27 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar27)();
      }
    }
  }
  return;
}

