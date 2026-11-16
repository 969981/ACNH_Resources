
void FUN_0265eba0(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined *puVar18;
  ulong uVar19;
  uint local_dc;
  undefined8 local_d0;
  long local_c8 [11];
  undefined8 local_70;
  undefined8 local_68;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0xffffffffffffffff;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = 0xffffffffffffffff;
    param_1[1] = 0xffffffffffffffff;
    param_1[2] = 0xffffffffffffffff;
    puVar18 = PTR_DAT_04bc27f0;
    plVar12 = (long *)PTR_DAT_04bb46b0;
    if (*(long *)PTR_DAT_04bb46b0 != 0) {
      local_d0 = 0xa00000000;
      lVar14 = 10;
      lVar15 = 0x140;
      do {
        lVar9 = *plVar12;
        if (lVar9 != 0) {
          puVar10 = *(undefined8 **)(lVar9 + 0x10);
          if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
            lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
            if (lVar9 != 0) {
              lVar9 = lVar9 + 0x70;
              goto LAB_0265ec70;
            }
          }
          else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
                  (lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar9 != 0)) {
LAB_0265ec70:
            puVar10 = (undefined8 *)(lVar9 + lVar15);
            if ((long *)*puVar10 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              puVar4 = *(undefined8 **)*puVar10;
              uVar5 = 0;
              if (puVar4 != (undefined8 *)0x0) {
                uVar5 = (**(code **)*puVar4)();
              }
            }
            uVar11 = (ulong)*(byte *)(puVar10[-3] + puVar10[-4]);
            if ((uVar11 < 0x23) &&
               (bVar2 = ((byte *)(puVar10[-3] + puVar10[-4]))[1], bVar2 <= (byte)puVar18[uVar11])) {
              uVar17 = (uint)(&DAT_053e6eb8)[uVar11] >> (ulong)(bVar2 & 0x1f) & 1;
            }
            else {
              uVar17 = 0;
            }
            if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + lVar15) != 0)) &&
               (puVar4 = *(undefined8 **)(*(long *)(lVar9 + lVar15) + 8),
               puVar4 != (undefined8 *)0x0)) {
              (**(code **)*puVar4)();
            }
            if (uVar17 != 0) {
              if ((int)local_d0 < local_d0._4_4_) {
                local_c8[(long)(int)local_d0 + 1] = (long)(puVar10 + -5);
                local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
              }
            }
          }
        }
        lVar14 = lVar14 + -1;
        lVar15 = lVar15 + 0x10798;
      } while (lVar14 != 0);
      local_dc = (int)local_d0 - 1;
      if (local_dc != 0 && 0 < (int)local_d0) {
        uVar17 = 0;
        do {
          if ((int)local_dc <= (int)uVar17) break;
          uVar11 = (ulong)uVar17;
          uVar19 = (ulong)local_dc;
          uVar5 = uVar11;
          local_dc = uVar17;
          do {
            lVar15 = local_c8[uVar5 + 1];
            lVar14 = local_c8[uVar5 + 2];
            if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar10 == (undefined8 *)0x0)) {
              uVar6 = 0;
              plVar12 = *(long **)(lVar14 + 0x28);
              if (plVar12 != (long *)0x0) goto LAB_0265edcc;
LAB_0265edf0:
              uVar16 = 0;
            }
            else {
              uVar6 = (**(code **)*puVar10)();
              uVar6 = uVar6 & 0xffffffff;
              plVar12 = *(long **)(lVar14 + 0x28);
              if (plVar12 == (long *)0x0) goto LAB_0265edf0;
LAB_0265edcc:
              if ((undefined8 *)*plVar12 == (undefined8 *)0x0) goto LAB_0265edf0;
              uVar16 = (*(code *)**(undefined8 **)*plVar12)();
              uVar16 = uVar16 & 0xffffffff;
            }
            local_68 = FUN_0272eca4(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x12674,1);
            local_70 = FUN_0272eca4(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x12674,1);
            lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
            if ((lVar7 < lVar9) ||
               (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar7 == lVar9)) {
              lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              if (lVar9 <= lVar7) {
                nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              }
              if ((((uVar16 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
              if (lVar7 < lVar9) {
                lVar15 = local_c8[uVar5 + 2];
                local_dc = (uint)uVar5;
                local_c8[uVar5 + 2] = local_c8[uVar5 + 1];
                local_c8[uVar5 + 1] = lVar15;
              }
            }
            else {
              if ((((uVar16 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar19 != uVar5);
          plVar12 = &DAT_05574040;
          if ((int)local_dc <= (int)uVar17) break;
          uVar5 = (ulong)local_dc;
          uVar17 = local_dc;
          do {
            lVar15 = local_c8[uVar5];
            lVar14 = local_c8[uVar5 + 1];
            if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
               (puVar10 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar10 == (undefined8 *)0x0)) {
              uVar19 = 0;
              plVar13 = *(long **)(lVar15 + 0x28);
              if (plVar13 != (long *)0x0) goto LAB_0265efbc;
LAB_0265efe0:
              uVar6 = 0;
            }
            else {
              uVar19 = (**(code **)*puVar10)();
              uVar19 = uVar19 & 0xffffffff;
              plVar13 = *(long **)(lVar15 + 0x28);
              if (plVar13 == (long *)0x0) goto LAB_0265efe0;
LAB_0265efbc:
              if ((undefined8 *)*plVar13 == (undefined8 *)0x0) goto LAB_0265efe0;
              uVar6 = (*(code *)**(undefined8 **)*plVar13)();
              uVar6 = uVar6 & 0xffffffff;
            }
            local_68 = FUN_0272eca4(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 0x12674,1);
            local_70 = FUN_0272eca4(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x12674,1);
            lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
            lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
            if ((lVar7 < lVar9) ||
               (lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70), lVar7 == lVar9)) {
              lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
              lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              if (lVar9 <= lVar7) {
                nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
              }
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
              if ((((uVar19 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
            }
            else {
              if ((((uVar6 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
              if ((((uVar19 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
                 (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8),
                 puVar10 != (undefined8 *)0x0)) {
                (**(code **)*puVar10)();
              }
              lVar15 = local_c8[uVar5];
              uVar17 = (uint)uVar5;
              local_c8[uVar5] = local_c8[uVar5 + 1];
              local_c8[uVar5 + 1] = lVar15;
            }
            uVar5 = uVar5 - 1;
          } while ((long)uVar11 < (long)uVar5);
        } while (uVar17 != local_dc);
        puVar18 = PTR_DAT_04bc27f0;
      }
      if (0 < (int)local_d0) {
        uVar5 = 0;
        puVar10 = param_1;
        do {
          uVar8 = 0xffffffff;
          if (uVar5 < (local_d0 & 0xffffffff)) {
            lVar15 = local_c8[uVar5 + 1];
            if (lVar15 == 0) {
              uVar8 = 0xffffffff;
            }
            else {
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f260:
                if (lVar14 == lVar15) goto LAB_0265f1e4;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f1b8:
                    if (*(long **)(lVar14 + 0x140) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x140);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x128) + *(long *)(lVar14 + 0x120));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x140) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x140) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    lVar14 = lVar14 + 0x118;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f260;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f260;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f1b8;
                }
                if (lVar15 == 0) {
LAB_0265f1e4:
                  uVar8 = 0;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f37c:
                if (lVar14 == lVar15) goto LAB_0265f2f0;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f2b8:
                    if (*(long **)(lVar14 + 0x108d8) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x108d8);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x108c0) + *(long *)(lVar14 + 0x108b8));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x108d8) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x108d8) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x108b0;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f37c;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f37c;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f2b8;
                }
                if (lVar15 == 0) {
LAB_0265f2f0:
                  uVar8 = 1;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f498:
                if (lVar14 == lVar15) goto LAB_0265f40c;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f3d4:
                    if (*(long **)(lVar14 + 0x21070) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x21070);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x21058) + *(long *)(lVar14 + 0x21050));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x21070) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x21070) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x21048;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f498;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f498;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f3d4;
                }
                if (lVar15 == 0) {
LAB_0265f40c:
                  uVar8 = 2;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f5b4:
                if (lVar14 == lVar15) goto LAB_0265f528;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f4f0:
                    if (*(long **)(lVar14 + 0x31808) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x31808);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x317f0) + *(long *)(lVar14 + 0x317e8));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x31808) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x31808) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x317e0;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f5b4;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f5b4;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f4f0;
                }
                if (lVar15 == 0) {
LAB_0265f528:
                  uVar8 = 3;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f6d0:
                if (lVar14 == lVar15) goto LAB_0265f644;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f60c:
                    if (*(long **)(lVar14 + 0x41fa0) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x41fa0);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x41f88) + *(long *)(lVar14 + 0x41f80));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x41fa0) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x41fa0) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x41f78;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f6d0;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f6d0;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f60c;
                }
                if (lVar15 == 0) {
LAB_0265f644:
                  uVar8 = 4;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f7ec:
                if (lVar14 == lVar15) goto LAB_0265f760;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f728:
                    if (*(long **)(lVar14 + 0x52738) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x52738);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x52720) + *(long *)(lVar14 + 0x52718));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x52738) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x52738) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x52710;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f7ec;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f7ec;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f728;
                }
                if (lVar15 == 0) {
LAB_0265f760:
                  uVar8 = 5;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265f908:
                if (lVar14 == lVar15) goto LAB_0265f87c;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f844:
                    if (*(long **)(lVar14 + 0x62ed0) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x62ed0);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x62eb8) + *(long *)(lVar14 + 0x62eb0));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x62ed0) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x62ed0) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x62ea8;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265f908;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265f908;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f844;
                }
                if (lVar15 == 0) {
LAB_0265f87c:
                  uVar8 = 6;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265fa20:
                if (lVar14 == lVar15) goto LAB_0265f998;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265f960:
                    if (*(long **)(lVar14 + 0x73668) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x73668);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x73650) + *(long *)(lVar14 + 0x73648));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x73668) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x73668) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x73640;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265fa20;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265fa20;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265f960;
                }
                if (lVar15 == 0) {
LAB_0265f998:
                  uVar8 = 7;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 == 0) {
LAB_0265fb38:
                if (lVar14 == lVar15) goto LAB_0265fab0;
              }
              else {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
LAB_0265fa78:
                    if (*(long **)(lVar14 + 0x83e00) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x83e00);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x83de8) + *(long *)(lVar14 + 0x83de0));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x83e00) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x83e00) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x83dd8;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                    goto LAB_0265fb38;
                  }
                }
                else {
                  lVar14 = 0;
                  if (puVar4 == (undefined8 *)0x0) goto LAB_0265fb38;
                  if (((long *)puVar4[0x26] != (long *)0x0) &&
                     (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 != 0))
                  goto LAB_0265fa78;
                }
                if (lVar15 == 0) {
LAB_0265fab0:
                  uVar8 = 8;
                  goto LAB_0265f130;
                }
              }
              lVar9 = *plVar12;
              lVar14 = 0;
              if (lVar9 != 0) {
                puVar4 = *(undefined8 **)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
                  lVar14 = (**(code **)(*(long *)*puVar4 + 0x38))();
                  if (lVar14 != 0) {
                    lVar14 = lVar14 + 0x70;
                    goto LAB_0265fb90;
                  }
LAB_0265fbbc:
                  lVar14 = 0;
                }
                else {
                  lVar14 = 0;
                  if (puVar4 != (undefined8 *)0x0) {
                    if (((long *)puVar4[0x26] == (long *)0x0) ||
                       (lVar14 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar14 == 0))
                    goto LAB_0265fbbc;
LAB_0265fb90:
                    if (*(long **)(lVar14 + 0x94598) == (long *)0x0) {
                      uVar11 = 0;
                    }
                    else {
                      puVar4 = (undefined8 *)**(long **)(lVar14 + 0x94598);
                      uVar11 = 0;
                      if (puVar4 != (undefined8 *)0x0) {
                        uVar11 = (**(code **)*puVar4)();
                      }
                    }
                    pbVar1 = (byte *)(*(long *)(lVar14 + 0x94580) + *(long *)(lVar14 + 0x94578));
                    uVar19 = (ulong)*pbVar1;
                    if ((uVar19 < 0x23) && (bVar2 = pbVar1[1], bVar2 <= (byte)puVar18[uVar19])) {
                      uVar17 = (uint)(&DAT_053e6eb8)[uVar19] >> (ulong)(bVar2 & 0x1f) & 1;
                    }
                    else {
                      uVar17 = 0;
                    }
                    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x94598) != 0)) &&
                       (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x94598) + 8),
                       puVar4 != (undefined8 *)0x0)) {
                      (**(code **)*puVar4)();
                    }
                    puVar18 = &DAT_053e6e93;
                    lVar14 = lVar14 + 0x94570;
                    if (uVar17 == 0) {
                      lVar14 = 0;
                    }
                  }
                }
              }
              uVar8 = 9;
              if (lVar14 != lVar15) {
                uVar8 = 0xffffffff;
              }
            }
          }
LAB_0265f130:
          bVar3 = 9 < uVar5;
          uVar5 = uVar5 + 1;
          puVar4 = puVar10;
          if (bVar3) {
            puVar4 = param_1;
          }
          puVar10 = (undefined8 *)((long)puVar10 + 4);
          *(undefined4 *)puVar4 = uVar8;
        } while ((local_d0 & 0xffffffff) != uVar5);
      }
    }
  }
  return;
}

