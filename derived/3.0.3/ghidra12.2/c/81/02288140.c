
uint FUN_02288140(long param_1,uint param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_a4;
  undefined4 local_9c;
  uint local_98 [2];
  undefined8 local_90;
  undefined4 local_84;
  
  plVar11 = (long *)PTR_DAT_04bb27c0;
  uVar9 = 0;
  if (((param_2 < 2) && (*(int *)(param_1 + 0x308) != 0)) && (*(int *)(param_1 + 0x340) != 0)) {
    lVar14 = param_1 + 0x2d4;
    uVar18 = (ulong)param_2;
    fVar22 = *(float *)(lVar14 + (ulong)param_2 * 0x38 + 0x2c);
    if (0.5 <= fVar22) {
      if (0.6 <= fVar22) {
        if (0.7 <= fVar22) {
          if (0.9 <= fVar22) {
            if (1.0 <= fVar22) {
              if (1.2 <= fVar22) {
                if (1.2 <= fVar22) {
                  uVar12 = 6;
                }
                else {
                  uVar12 = 0;
                }
              }
              else {
                uVar12 = 5;
              }
            }
            else {
              uVar12 = 4;
            }
          }
          else {
            uVar12 = 3;
          }
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        uVar12 = 1;
      }
      lVar15 = lVar14 + uVar18 * 0x38;
      puVar3 = (uint *)(param_1 + 0x278 + uVar18 * 8);
      uVar20 = 0;
      *(uint *)(lVar15 + 0x28) = uVar12;
      puVar1 = (uint *)(lVar15 + 0x34);
      puVar2 = PTR_DAT_04bb3290 + 0x10;
      local_98[0] = uVar12;
      bVar5 = true;
      do {
        bVar4 = bVar5;
        if (uVar20 != uVar18) {
          lVar13 = *plVar11;
          if (lVar13 == 0) {
            uVar21 = 0;
            plVar19 = (long *)0x0;
            bVar5 = false;
            bVar6 = false;
            plVar10 = (long *)0x0;
            uVar17 = 0;
            puVar16 = (uint *)(lVar14 + uVar20 * 0x38 + 0x34);
          }
          else {
            uVar9 = *puVar1;
            if (((uVar9 == 0) ||
                (plVar19 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                     ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
               (((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar19 + 0x46) != uVar9)))
               ) {
              plVar19 = (long *)0x0;
            }
            if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
              plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                     (*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar13 = *plVar11;
              iVar7 = (**(code **)(*plVar10 + 0x60))();
              if (iVar7 < 0x11) {
                uVar21 = 1;
                uVar9 = 1;
              }
              else {
                if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_022883d0;
                uVar21 = 0x101000100 >> (((ulong)*(uint *)(lVar13 + 0x5e8) & 7) << 3);
                uVar9 = (uint)uVar21;
              }
              if (plVar19 != (long *)0x0) goto LAB_022883d8;
LAB_02288430:
              bVar5 = false;
            }
            else {
LAB_022883d0:
              uVar21 = 0;
              uVar9 = 0;
              if (plVar19 == (long *)0x0) goto LAB_02288430;
LAB_022883d8:
              bVar5 = (int)plVar19[0x2a] == 1;
              if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
                *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbe9e0);
              }
              uVar21 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bbe9d8);
              if ((uVar21 & 1) == 0) {
                uVar9 = 0;
              }
              uVar21 = (ulong)uVar9;
            }
            lVar13 = *plVar11;
            puVar16 = (uint *)(lVar14 + uVar20 * 0x38 + 0x34);
            if (lVar13 == 0) {
              bVar6 = false;
              plVar10 = (long *)0x0;
              uVar17 = 0;
            }
            else {
              uVar9 = *puVar16;
              if ((((uVar9 == 0) ||
                   (plVar10 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                        ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0))
                  || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar10 + 0x46) != uVar9)) {
                plVar10 = (long *)0x0;
              }
              if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
                plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar13 = *(long *)PTR_DAT_04bb27c0;
                iVar7 = (**(code **)(*plVar11 + 0x60))();
                if (iVar7 < 0x11) {
                  uVar17 = 1;
                  uVar9 = 1;
                  goto joined_r0x02288500;
                }
                if (*(uint *)(lVar13 + 0x5e8) < 5) {
                  uVar17 = 0x101000100 >> (((ulong)*(uint *)(lVar13 + 0x5e8) & 7) << 3);
                  uVar9 = (uint)uVar17;
                  goto joined_r0x02288500;
                }
                uVar17 = 0;
                uVar9 = 0;
                if (plVar10 == (long *)0x0) goto LAB_0228852c;
LAB_02288548:
                bVar6 = (int)plVar10[0x2a] == 1;
                if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
                  *(undefined **)PTR_DAT_04bbe9d8 = puVar2;
                  __cxa_guard_release(PTR_DAT_04bbe9e0);
                }
                uVar17 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe9d8);
                if ((uVar17 & 1) == 0) {
                  uVar9 = 0;
                }
                uVar17 = (ulong)uVar9;
              }
              else {
                uVar17 = 0;
                uVar9 = 0;
joined_r0x02288500:
                if (plVar10 != (long *)0x0) goto LAB_02288548;
LAB_0228852c:
                bVar6 = false;
              }
              plVar11 = (long *)PTR_DAT_04bb27c0;
            }
          }
          fVar23 = *(float *)(lVar14 + uVar20 * 0x38 + 0x2c);
          if (0.5 <= fVar23) {
            if (0.6 <= fVar23) {
              if (0.7 <= fVar23) {
                if (0.9 <= fVar23) {
                  if (1.0 <= fVar23) {
                    uVar9 = 5;
                    if (1.2 <= fVar23) {
                      if (fVar23 < 1.2) goto LAB_022885bc;
                      uVar9 = 6;
                    }
                  }
                  else {
                    uVar9 = 4;
                  }
                }
                else {
                  uVar9 = 3;
                }
              }
              else {
                uVar9 = 2;
              }
            }
            else {
              uVar9 = 1;
            }
          }
          else {
LAB_022885bc:
            uVar9 = 0;
          }
          *(uint *)(lVar14 + uVar20 * 0x38 + 0x28) = uVar9;
          if ((2 < uVar12) || (2 < uVar9)) {
            uVar9 = 0;
            if ((((uVar21 & 0xff) == 0) ||
                (((plVar19 == (long *)0x0 || (!bVar5)) || (uVar9 = 0, plVar10 == (long *)0x0)))) ||
               ((!bVar6 || ((uVar17 & 0xff) == 0)))) break;
            if ((*(byte *)((long)plVar19 + 0x29c) >> 3 & 1) == 0) {
              local_a4 = CONCAT44(local_a4._4_4_,4);
              if ((((*(byte *)((long)plVar19 + 0x29c) >> 4 & 1) == 0) &&
                  ((*(byte *)((long)plVar10 + 0x29c) >> 3 & 1) == 0)) &&
                 (local_a4 = CONCAT44(local_a4._4_4_,4),
                 (*(byte *)((long)plVar10 + 0x29c) >> 4 & 1) == 0)) goto LAB_02288a48;
            }
            local_98[0] = 3;
            if (*(float *)(lVar15 + 0x14) - *(float *)(lVar14 + uVar20 * 0x38 + 0x14) != 0.0)
            goto LAB_022882e0;
            if (*(char *)(param_1 + 0x28c) != '\0') {
              uVar9 = 1;
              break;
            }
            lVar13 = lVar14 + uVar20 * 0x38;
            fVar24 = *(float *)(lVar15 + 0x10) - *(float *)(lVar13 + 0x10);
            fVar25 = *(float *)(lVar15 + 0x18) - *(float *)(lVar13 + 0x18);
            if (fVar22 * 5.0 + fVar23 * 5.0 < SQRT(fVar25 * fVar25 + fVar24 * fVar24))
            goto LAB_022882e0;
            lVar14 = *plVar11;
            if (lVar14 == 0) {
              plVar19 = (long *)0x0;
LAB_02288990:
              plVar11 = (long *)0x0;
            }
            else {
              uVar9 = *puVar1;
              if ((((uVar9 == 0) ||
                   (plVar19 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                        ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0))
                  || ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar19 + 0x46) != uVar9)) {
                plVar19 = (long *)0x0;
              }
              if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
                plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                (**(code **)(*plVar10 + 0x60))();
              }
              if (plVar19 != (long *)0x0) {
                if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
                  *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bbe9e0);
                }
                (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bbe9d8);
              }
              lVar14 = *plVar11;
              if (lVar14 == 0) goto LAB_02288990;
              uVar9 = *puVar16;
              if ((((uVar9 == 0) ||
                   (plVar11 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                        ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0))
                  || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar11 + 0x46) != uVar9)) {
                plVar11 = (long *)0x0;
              }
              if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
                plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                (**(code **)(*plVar10 + 0x60))();
              }
              if (plVar11 != (long *)0x0) {
                if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
                  *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bbe9e0);
                }
                (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe9d8);
              }
            }
            if (((*(byte *)((long)plVar19 + 0x29c) >> 3 & 1) == 0) &&
               ((*(byte *)((long)plVar19 + 0x29c) >> 4 & 1) == 0)) {
              local_98[0] = 8;
              if (plVar11[0xe] == 0) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(plVar11[0xe] + 0x280);
                if ((iVar7 == 8) || (iVar7 == 2)) goto LAB_02288a48;
              }
              local_a4 = CONCAT44(local_a4._4_4_,2);
              local_84 = 7;
              if (iVar7 != 7) {
                uVar9 = 0;
                if ((2 < (int)*(uint *)(lVar15 + 0x28)) && (*(uint *)(param_1 + 0x354) < 5)) {
                  uVar8 = FUN_02288bcc();
                  local_9c = *(undefined4 *)((long)plVar19 + 0x2e4);
                  local_a4 = *(undefined8 *)((long)plVar19 + 0x2dc);
                  local_90 = 0;
                  uVar9 = FUN_02287a80(local_98,&local_a4);
                  if ((uVar9 & 1) != 0) {
                    uVar12 = *puVar16;
                    *(int *)(param_1 + 0x2a8) = (int)local_90;
                    *(int *)(param_1 + 0x2ac) = local_90._4_4_;
                    puVar16 = (uint *)(param_1 + 0x278 + uVar20 * 8);
                    *puVar16 = uVar12;
                    puVar16[1] = 3;
                    puVar3[1] = 5;
                    uVar12 = *puVar1;
                    *(float *)(param_1 + 0x290) =
                         ((float)(int)local_90 * 5.0 + (float)((int)local_90 + 1) * 5.0 + 5.0) * 0.5
                    ;
                    *(float *)(param_1 + 0x298) =
                         ((float)local_90._4_4_ * 5.0 + (float)(local_90._4_4_ + 1) * 5.0 + 5.0) *
                         0.5;
                    *puVar3 = uVar12;
                    *(undefined4 *)(param_1 + 0x288) = uVar8;
                    *(undefined1 *)(param_1 + 0x28c) = 1;
                  }
                }
                break;
              }
            }
          }
LAB_02288a48:
          uVar9 = 0;
          break;
        }
LAB_022882e0:
        uVar9 = 0;
        uVar20 = 1;
        bVar5 = false;
      } while (bVar4);
    }
    else {
      uVar9 = 0;
      *(undefined4 *)(lVar14 + uVar18 * 0x38 + 0x28) = 0;
    }
  }
  return uVar9 & 1;
}

