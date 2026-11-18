
void FUN_03693930(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  uint *puVar23;
  long *plVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined4 *puVar33;
  ulong uVar34;
  long *plVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  undefined *local_a0;
  char *pcStack_98;
  
  uVar9 = param_2 & 0xff;
  bVar14 = *(int *)(param_1 + 0x26f0) != 1;
  uVar30 = (uint)bVar14 << 1;
  if (*(int *)(param_1 + 0x26f0) != 2) {
    uVar30 = (uint)bVar14 << 1 | 4;
  }
  if (*(int *)(param_1 + 0x26f0) != 3) {
    uVar30 = uVar30 | 8;
  }
  uVar15 = nn::os::GetSystemTick();
  local_c0 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  local_b0 = (local_c0 ^ local_c0 >> 0x1e) * 0x6c078965 + 2;
  uVar25 = (local_b0 ^ local_b0 >> 0x1e) * 0x6c078965 + 3;
  uVar16 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 4;
  uVar15 = uVar30 - (uVar30 >> 1 & 0x55);
  uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
  uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
  uVar15 = uVar15 + (uVar15 >> 8);
  uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
  uVar18 = uVar16;
  local_b8 = uVar25;
  if (uVar15 != 0) {
    local_c0 = local_c0 ^ local_c0 * 0x800;
    uVar18 = local_c0 >> 8 ^ uVar16 >> 0x13 ^ local_c0 ^ uVar16;
    if (uVar30 == 0) {
      uVar15 = 0xffffffff;
    }
    else {
      iVar17 = (int)((ulong)uVar18 * (ulong)uVar15 >> 0x20) + 2;
      uVar15 = 0xffffffff;
      do {
        iVar17 = iVar17 + -1;
        if (iVar17 < 2) {
          uVar30 = uVar30 - 1 & (uVar30 ^ 0xffffffff);
          uVar30 = uVar30 - (uVar30 >> 1 & 0x55555555);
          uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
          uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
          uVar30 = uVar30 + (uVar30 >> 8);
          uVar15 = uVar30 + (uVar30 >> 0x10) & 0x3f;
          break;
        }
        uVar30 = uVar30 - 1 & uVar30;
      } while (uVar30 != 0);
    }
    *(uint *)(param_1 + 0x26f0) = uVar15;
    local_c0 = local_b0;
    local_b8 = uVar16;
    local_b0 = uVar25;
  }
  puVar13 = PTR_DAT_04bb27c0;
  uVar30 = 0;
  bVar14 = false;
  uVar34 = 0;
  uVar15 = 0;
  uVar32 = 0xffffffff;
  puVar5 = PTR_DAT_04bb3750 + 0x10;
  puVar6 = PTR_DAT_04bb3070 + 0x10;
  puVar7 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((1 << (ulong)((uint)uVar34 & 0x1f) & uVar9) != 0) {
      if ((long)uVar34 < (long)(int)*(uint *)(param_1 + 0x278)) {
        if (uVar34 < *(uint *)(param_1 + 0x278)) {
          lVar29 = *(long *)(*(long *)(param_1 + 0x280) + uVar34 * 8);
          lVar27 = *(long *)puVar13;
        }
        else {
          lVar29 = 0;
          lVar27 = *(long *)puVar13;
        }
        if (lVar27 != 0) {
          uVar25 = *(uint *)(lVar29 + 0x40);
          if ((((uVar25 == 0) ||
               (plVar35 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                                    ((ulong)(uVar25 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
              ((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar35 + 0x46) != uVar25))
          {
            plVar35 = (long *)0x0;
          }
          if (*(int *)(lVar27 + 0x288) == 1 || *(int *)(lVar27 + 0x288) == -1) {
            plVar24 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar29 = *(long *)puVar13;
            iVar17 = (**(code **)(*plVar24 + 0x60))();
            if (iVar17 < 0x11) {
              uVar25 = 1;
            }
            else {
              if (4 < *(uint *)(lVar29 + 0x5e8)) goto LAB_03693c04;
              uVar25 = 0x1aU >> (ulong)(*(uint *)(lVar29 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_03693c04:
            uVar25 = 0;
          }
          if (plVar35 != (long *)0x0) {
            if (((*PTR_DAT_04bb3748 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar17 != 0)) {
              *(undefined **)PTR_DAT_04bb3740 = puVar5;
              __cxa_guard_release(PTR_DAT_04bb3748);
            }
            uVar16 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb3740);
            if ((uVar25 & uVar16) == 1) {
              plVar35 = (long *)plVar35[0xc];
              if (plVar35 != (long *)0x0) {
                if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
                   (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar17 != 0)) {
                  *(undefined **)PTR_DAT_04bb37b0 = puVar6;
                  __cxa_guard_release(PTR_DAT_04bb37b8);
                }
                uVar22 = (**(code **)(*plVar35 + 0x10))(plVar35,PTR_DAT_04bb37b0);
                if ((uVar22 & 1) != 0) {
                  if (*(int *)(param_1 + 0x26f0) == 2) {
                    pcStack_98 = "SeparatePoseTypeNum";
                    if (((plVar35[0x227] == 0) ||
                        (lVar29 = *(long *)(plVar35[0x227] + 0x78), lVar29 == 0)) ||
                       (plVar24 = *(long **)(lVar29 + 0x48), plVar24 == (long *)0x0)) {
                      uVar16 = 0;
                    }
                    else {
                      local_a0 = puVar7;
                      uVar16 = (**(code **)(*plVar24 + 0xf8))(plVar24,&local_a0);
                      if (((int)uVar32 == -1) && (0 < (int)uVar16)) {
                        if (uVar16 < 8) {
                          uVar25 = 0;
                          uVar31 = uVar15;
                          uVar15 = 0;
                        }
                        else {
                          uVar25 = 0;
                          do {
                            uVar31 = uVar25 + 1;
                            uVar26 = uVar25 + 2;
                            uVar10 = uVar25 & 0x1f;
                            uVar1 = uVar25 + 4;
                            uVar11 = uVar25 + 3;
                            uVar2 = uVar25 + 5;
                            uVar3 = uVar25 + 7;
                            uVar4 = uVar25 + 6;
                            uVar25 = uVar25 + 8;
                            uVar15 = uVar15 | 1 << (ulong)uVar10 & 0xffffU |
                                     1 << (ulong)(uVar31 & 0x1f) & 0xffffU |
                                     1 << (ulong)(uVar26 & 0x1f) & 0xffffU |
                                     1 << (ulong)(uVar11 & 0x1f) & 0xffffU |
                                     1 << (ulong)(uVar1 & 0x1f) & 0xffffU |
                                     1 << (ulong)(uVar2 & 0x1f) & 0xffffU |
                                     1 << (ulong)(uVar4 & 0x1f) & 0xffffU |
                                     1 << (ulong)(uVar3 & 0x1f) & 0xffffU;
                          } while (uVar25 != (uVar16 & 0xfffffff8));
                          uVar31 = uVar15;
                        }
                        uVar26 = uVar16 & 7;
                        if ((uVar16 & 7) != 0) {
                          do {
                            uVar15 = uVar25 & 0x1f;
                            uVar25 = uVar25 + 1;
                            uVar26 = uVar26 - 1;
                            uVar15 = uVar31 | 1 << (ulong)uVar15 & 0xffffU;
                            uVar31 = uVar15;
                          } while (uVar26 != 0);
                        }
                      }
                    }
                    uVar25 = uVar15 - (uVar15 >> 1 & 0x5555);
                    uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
                    uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
                    uVar25 = uVar25 + (uVar25 >> 8);
                    uVar31 = uVar25 + (uVar25 >> 0x10) & 0x3f;
                    local_c0 = local_c0 ^ local_c0 << 0xb;
                    uVar25 = local_c0 >> 8 ^ uVar18 >> 0x13 ^ local_c0 ^ uVar18;
                    if (uVar31 == 0) {
                      uVar32 = (ulong)uVar25 * (ulong)uVar16 >> 0x20;
                    }
                    else {
                      if (uVar15 != 0) {
                        iVar17 = (int)((ulong)uVar25 * (ulong)uVar31 >> 0x20) + 2;
                        uVar16 = uVar15;
                        do {
                          iVar17 = iVar17 + -1;
                          if (iVar17 < 2) {
                            uVar16 = uVar16 - 1 & (uVar16 ^ 0xffffffff);
                            uVar16 = uVar16 - (uVar16 >> 1 & 0x55555555);
                            uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
                            uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
                            uVar16 = uVar16 + (uVar16 >> 8);
                            uVar32 = (ulong)(uVar16 + (uVar16 >> 0x10) & 0x3f);
                            goto LAB_03693e0c;
                          }
                          uVar16 = uVar16 - 1 & uVar16;
                        } while (uVar16 != 0);
                      }
                      uVar32 = 0xffffffff;
                    }
LAB_03693e0c:
                    uVar15 = uVar15 & (1 << (ulong)((uint)uVar32 & 0x1f) ^ 0xffffffffU);
                    local_c0 = local_b0;
                    local_b0 = local_b8;
                    local_b8 = uVar18;
                  }
                  else {
                    uVar25 = uVar18;
                    if ((int)uVar32 == -1) {
                      if (*(int *)(param_1 + 0x26f0) == 1) {
                        pcStack_98 = "SamePoseTypeNum";
                        if ((plVar35[0x227] == 0) ||
                           (lVar29 = *(long *)(plVar35[0x227] + 0x78), lVar29 == 0))
                        goto LAB_03693e7c;
LAB_03693e60:
                        local_a0 = PTR_DAT_04bb2020 + 0x10;
                        plVar24 = *(long **)(lVar29 + 0x48);
                        uVar32 = 0;
                        if (plVar24 != (long *)0x0) {
                          uVar32 = (**(code **)(*plVar24 + 0xf8))(plVar24,&local_a0);
                        }
                      }
                      else {
                        pcStack_98 = "SymmetryPoseTypeNum";
                        if ((plVar35[0x227] != 0) &&
                           (lVar29 = *(long *)(plVar35[0x227] + 0x78), lVar29 != 0))
                        goto LAB_03693e60;
LAB_03693e7c:
                        uVar32 = 0;
                      }
                      uVar25 = local_c0 ^ local_c0 << 0xb;
                      local_c0 = local_b0;
                      uVar25 = uVar25 >> 8 ^ uVar18 >> 0x13 ^ uVar25 ^ uVar18;
                      local_b0 = local_b8;
                      uVar32 = (uVar32 & 0xffffffff) * (ulong)uVar25 >> 0x20;
                      local_b8 = uVar18;
                    }
                  }
                  *(char *)(param_1 + 0x26f4 + uVar34 * 8) = (char)uVar32;
                  local_a0 = PTR_DAT_04bb2020 + 0x10;
                  pcStack_98 = "ClosetUIPoseType";
                  if (((plVar35[0x227] != 0) &&
                      (lVar29 = *(long *)(plVar35[0x227] + 0x78), lVar29 != 0)) &&
                     (plVar35 = *(long **)(lVar29 + 0x48), plVar35 != (long *)0x0)) {
                    (**(code **)(*plVar35 + 0x28))(plVar35,&local_a0,(int)(char)uVar32);
                  }
                  uVar30 = uVar30 + 1;
                  bVar14 = (bool)(bVar14 ^ 1);
                  uVar18 = uVar25;
                }
              }
            }
          }
        }
      }
    }
    uVar34 = uVar34 + 1;
  } while (uVar34 != 7);
  if (*(int *)(param_1 + 0x26f0) == 3) {
    uVar34 = 0;
    uVar15 = 0;
    local_a8 = uVar30 >> 1 & 0x7f;
    puVar33 = (undefined4 *)(param_1 + 0x26f8);
    puVar5 = PTR_DAT_04bb3750 + 0x10;
    puVar6 = PTR_DAT_04bb3070 + 0x10;
    puVar7 = PTR_DAT_04bb2020 + 0x10;
    do {
      if (((1 << (ulong)((uint)uVar34 & 0x1f) & uVar9) != 0) &&
         ((long)uVar34 < (long)(int)*(uint *)(param_1 + 0x278))) {
        if (uVar34 < *(uint *)(param_1 + 0x278)) {
          lVar29 = *(long *)(*(long *)(param_1 + 0x280) + uVar34 * 8);
          lVar27 = *(long *)puVar13;
        }
        else {
          lVar29 = 0;
          lVar27 = *(long *)puVar13;
        }
        if (lVar27 != 0) {
          uVar30 = *(uint *)(lVar29 + 0x40);
          if (((uVar30 == 0) ||
              (plVar35 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                                   ((ulong)(uVar30 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
             (((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar35 + 0x46) != uVar30))))
          {
            plVar35 = (long *)0x0;
          }
          if (*(int *)(lVar27 + 0x288) == 1 || *(int *)(lVar27 + 0x288) == -1) {
            plVar24 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar29 = *(long *)puVar13;
            iVar17 = (**(code **)(*plVar24 + 0x60))();
            if (iVar17 < 0x11) {
              uVar30 = 1;
            }
            else {
              if (4 < *(uint *)(lVar29 + 0x5e8)) goto LAB_03694188;
              uVar30 = 0x1aU >> (ulong)(*(uint *)(lVar29 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_03694188:
            uVar30 = 0;
          }
          if (plVar35 != (long *)0x0) {
            if (((*PTR_DAT_04bb3748 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar17 != 0)) {
              *(undefined **)PTR_DAT_04bb3740 = puVar5;
              __cxa_guard_release(PTR_DAT_04bb3748);
            }
            uVar18 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb3740);
            if ((uVar30 & uVar18) == 1) {
              uVar36 = 1;
              if ((int)local_a8 <= (int)uVar15) {
                uVar36 = 2;
              }
              if (uVar15 == local_a8 && bVar14) {
                uVar36 = 0;
              }
              *puVar33 = uVar36;
              plVar35 = (long *)plVar35[0xc];
              if (plVar35 != (long *)0x0) {
                if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
                   (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar17 != 0)) {
                  *(undefined **)PTR_DAT_04bb37b0 = puVar6;
                  __cxa_guard_release(PTR_DAT_04bb37b8);
                }
                uVar32 = (**(code **)(*plVar35 + 0x10))(plVar35,PTR_DAT_04bb37b0);
                if ((uVar32 & 1) != 0) {
                  pcStack_98 = "ClosetUIPoseDir";
                  local_a0 = puVar7;
                  if (((plVar35[0x227] != 0) &&
                      (lVar29 = *(long *)(plVar35[0x227] + 0x78), lVar29 != 0)) &&
                     (plVar35 = *(long **)(lVar29 + 0x48), plVar35 != (long *)0x0)) {
                    (**(code **)(*plVar35 + 0x28))(plVar35,&local_a0,*puVar33);
                  }
                }
              }
              uVar15 = uVar15 + 1;
            }
          }
        }
      }
      uVar34 = uVar34 + 1;
      puVar33 = puVar33 + 2;
    } while (uVar34 != 7);
  }
  uVar34 = 0;
  puVar5 = PTR_DAT_04bb3750 + 0x10;
  puVar6 = PTR_DAT_04bb2e38 + 0x10;
  puVar7 = PTR_DAT_04bb3070 + 0x10;
  puVar8 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar30 = *(uint *)(param_1 + 0x278);
    if ((long)uVar34 < (long)(int)uVar30) {
      uVar15 = (uint)uVar34;
      if ((1 << (ulong)(uVar15 & 0x1f) & uVar9) == 0) {
        if (uVar34 < uVar30) {
          lVar29 = *(long *)(*(long *)(param_1 + 0x280) + uVar34 * 8);
          lVar27 = *(long *)puVar13;
        }
        else {
          lVar29 = 0;
          lVar27 = *(long *)puVar13;
        }
        if (lVar27 != 0) {
          uVar30 = *(uint *)(lVar29 + 0x40);
          if (((uVar30 == 0) ||
              (plVar35 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                                   ((ulong)(uVar30 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
             (((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar35 + 0x46) != uVar30))))
          {
            plVar35 = (long *)0x0;
          }
          if (*(int *)(lVar27 + 0x288) == 1 || *(int *)(lVar27 + 0x288) == -1) {
            plVar24 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar29 = *(long *)puVar13;
            iVar17 = (**(code **)(*plVar24 + 0x60))();
            if (iVar17 < 0x11) {
              uVar30 = 1;
            }
            else {
              if (4 < *(uint *)(lVar29 + 0x5e8)) goto LAB_036945f8;
              uVar30 = 0x1aU >> (ulong)(*(uint *)(lVar29 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_036945f8:
            uVar30 = 0;
          }
          if (plVar35 != (long *)0x0) {
            if (((*PTR_DAT_04bb3748 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar17 != 0)) {
              *(undefined **)PTR_DAT_04bb3740 = puVar5;
              __cxa_guard_release(PTR_DAT_04bb3748);
            }
            uVar18 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb3740);
            puVar12 = PTR_DAT_04bb2720;
            if ((uVar30 & uVar18) == 1) {
              lVar29 = plVar35[0xd];
              fVar37 = *(float *)(lVar29 + 0x278);
              fVar38 = *(float *)(lVar29 + 0x27c);
              uVar36 = *(undefined4 *)(lVar29 + 0x280);
              uVar30 = *(uint *)(param_1 + 0x278);
              if ((int)uVar30 < 1) {
                iVar17 = 0;
                uVar18 = 0xffffffff;
                uVar32 = 0xffffffff;
LAB_03694884:
                if (uVar15 < uVar30) {
                  lVar27 = *(long *)(*(long *)(param_1 + 0x280) +
                                    (-(uVar34 >> 0x1f & 1) & 0xfffffff800000000 |
                                    (uVar34 & 0xffffffff) << 3));
                  lVar29 = *(long *)PTR_DAT_04bb2720;
                  if (lVar29 != 0) goto LAB_036948b0;
LAB_0369491c:
                  puVar28 = &DAT_055c04a0;
                }
                else {
                  lVar27 = 0;
                  lVar29 = *(long *)PTR_DAT_04bb2720;
                  if (lVar29 == 0) goto LAB_0369491c;
LAB_036948b0:
                  if (*(long *)(lVar29 + 0x330) == 0) goto LAB_0369491c;
                  puVar28 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar29 + 0x338));
                  iVar19 = FUN_006bd550(*puVar28,0);
                  puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar19 != 0x758f7eaf) {
                    puVar28 = &DAT_055c04a0;
                  }
                }
                iVar19 = *(int *)(puVar28 + 7);
                if ((((((DAT_05ac0a90 == iVar19) || (DAT_05ac0aa0 == iVar19)) ||
                      (DAT_05ac0ab0 == iVar19)) ||
                     ((DAT_05ac0ac0 == iVar19 || (DAT_05ac0ad0 == iVar19)))) ||
                    ((DAT_05ac0ae0 == iVar19 ||
                     ((DAT_05ac0af0 == iVar19 || (DAT_05ac0b00 == iVar19)))))) ||
                   ((DAT_05ac0b10 == iVar19 || (DAT_05ac0b20 == iVar19)))) {
                  iVar19 = iVar17;
                  if (*(int *)(lVar27 + 0x44) != 2) {
                    iVar19 = *(int *)(lVar27 + 0x3c);
                  }
                }
                else if ((*(byte *)(lVar27 + 0x48) >> 4 & 1) == 0) {
                  iVar19 = (uint)(*(int *)(lVar27 + 0x44) == 2) << 1;
                }
                else {
                  iVar19 = 1;
                }
                if (uVar18 < *(uint *)(param_1 + 0x278)) {
                  lVar27 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)uVar18 * 8);
                  lVar29 = *(long *)puVar12;
                  if (lVar29 != 0) goto LAB_03694a14;
LAB_03694ab8:
                  puVar28 = &DAT_055c04a0;
                }
                else {
                  lVar27 = 0;
                  lVar29 = *(long *)puVar12;
                  if (lVar29 == 0) goto LAB_03694ab8;
LAB_03694a14:
                  if (*(long *)(lVar29 + 0x330) == 0) goto LAB_03694ab8;
                  puVar28 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar29 + 0x338));
                  iVar20 = FUN_006bd550(*puVar28,0);
                  puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar20 != 0x758f7eaf) {
                    puVar28 = &DAT_055c04a0;
                  }
                }
                iVar20 = *(int *)(puVar28 + 7);
                if ((((((DAT_05ac0a90 == iVar20) || (DAT_05ac0aa0 == iVar20)) ||
                      (DAT_05ac0ab0 == iVar20)) ||
                     (((DAT_05ac0ac0 == iVar20 || (DAT_05ac0ad0 == iVar20)) ||
                      ((DAT_05ac0ae0 == iVar20 ||
                       ((DAT_05ac0af0 == iVar20 || (DAT_05ac0b00 == iVar20)))))))) ||
                    (DAT_05ac0b10 == iVar20)) || (DAT_05ac0b20 == iVar20)) {
                  iVar20 = iVar17;
                  if (*(int *)(lVar27 + 0x44) != 2) {
                    iVar20 = *(int *)(lVar27 + 0x3c);
                  }
                }
                else if ((*(byte *)(lVar27 + 0x48) >> 4 & 1) == 0) {
                  iVar20 = (uint)(*(int *)(lVar27 + 0x44) == 2) << 1;
                }
                else {
                  iVar20 = 1;
                }
                if ((uint)uVar32 < *(uint *)(param_1 + 0x278)) {
                  lVar27 = *(long *)(*(long *)(param_1 + 0x280) + uVar32 * 8);
                  lVar29 = *(long *)puVar12;
                  if (lVar29 != 0) goto LAB_03694b78;
LAB_03694c04:
                  puVar28 = &DAT_055c04a0;
                }
                else {
                  lVar27 = 0;
                  lVar29 = *(long *)puVar12;
                  if (lVar29 == 0) goto LAB_03694c04;
LAB_03694b78:
                  if (*(long *)(lVar29 + 0x330) == 0) goto LAB_03694c04;
                  puVar28 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar29 + 0x338));
                  iVar21 = FUN_006bd550(*puVar28,0);
                  puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar21 != 0x758f7eaf) {
                    puVar28 = &DAT_055c04a0;
                  }
                }
                iVar21 = *(int *)(puVar28 + 7);
                if (((((DAT_05ac0a90 == iVar21) || (DAT_05ac0aa0 == iVar21)) ||
                     (DAT_05ac0ab0 == iVar21)) ||
                    (((DAT_05ac0ac0 == iVar21 || (DAT_05ac0ad0 == iVar21)) ||
                     (((DAT_05ac0ae0 == iVar21 ||
                       ((DAT_05ac0af0 == iVar21 || (DAT_05ac0b00 == iVar21)))) ||
                      (DAT_05ac0b10 == iVar21)))))) || (DAT_05ac0b20 == iVar21)) {
                  if (*(int *)(lVar27 + 0x44) != 2) {
                    iVar17 = *(int *)(lVar27 + 0x3c);
                  }
                }
                else if ((*(byte *)(lVar27 + 0x48) >> 4 & 1) == 0) {
                  iVar17 = (uint)(*(int *)(lVar27 + 0x44) == 2) << 1;
                }
                else {
                  iVar17 = 1;
                }
                uVar15 = iVar20 - iVar19;
                uVar30 = -uVar15;
                if (-1 < (int)uVar15) {
                  uVar30 = uVar15;
                }
                uVar18 = iVar17 - iVar19;
                uVar15 = -uVar18;
                if (-1 < (int)uVar18) {
                  uVar15 = uVar18;
                }
                bVar14 = uVar30 <= uVar15;
              }
              else {
                if ((param_2 & 1) == 0) {
                  uVar31 = 7;
                  uVar32 = 0xffffffff;
                  uVar18 = 0xffffffff;
                  uVar16 = 7;
                }
                else {
                  uVar18 = -uVar15;
                  if (-1 < (int)uVar15) {
                    uVar18 = uVar15;
                  }
                  uVar25 = uVar18;
                  if (6 < (int)uVar18) {
                    uVar25 = 7;
                  }
                  uVar16 = uVar25;
                  uVar31 = 7;
                  if ((int)uVar15 < 1) {
                    uVar16 = 7;
                    uVar31 = uVar25;
                  }
                  uVar18 = -(uint)(6 < uVar18);
                  uVar25 = uVar18;
                  if (0 < (int)uVar15) {
                    uVar25 = 0xffffffff;
                  }
                  uVar32 = (ulong)uVar25;
                  if ((int)uVar15 < 1) {
                    uVar18 = 0xffffffff;
                  }
                }
                if (uVar30 < 2) {
                  iVar17 = 1;
                }
                else {
                  if ((uVar9 >> 1 & 1) != 0) {
                    uVar26 = 1 - uVar15;
                    uVar25 = -uVar26;
                    if (-1 < (int)uVar26) {
                      uVar25 = uVar26;
                    }
                    if ((int)uVar15 < 2) {
                      uVar26 = (uint)uVar32;
                      if (uVar25 < uVar31) {
                        uVar26 = 1;
                      }
                      uVar32 = (ulong)uVar26;
                      if ((int)uVar31 <= (int)uVar25) {
                        uVar25 = uVar31;
                      }
                      uVar31 = uVar25;
                    }
                    else {
                      if (uVar25 < uVar16) {
                        uVar18 = 1;
                      }
                      if ((int)uVar16 <= (int)uVar25) {
                        uVar25 = uVar16;
                      }
                      uVar16 = uVar25;
                    }
                  }
                  if (uVar30 < 3) {
                    iVar17 = 2;
                  }
                  else {
                    uVar25 = uVar31;
                    uVar26 = uVar16;
                    if ((uVar9 >> 2 & 1) != 0) {
                      uVar11 = 2 - uVar15;
                      uVar1 = -uVar11;
                      if (-1 < (int)uVar11) {
                        uVar1 = uVar11;
                      }
                      if ((int)uVar15 < 3) {
                        uVar25 = 2;
                        if (uVar31 <= uVar1) {
                          uVar25 = (uint)uVar32;
                        }
                        uVar32 = (ulong)uVar25;
                        uVar25 = uVar1;
                        if ((int)uVar31 <= (int)uVar1) {
                          uVar25 = uVar31;
                        }
                      }
                      else {
                        uVar31 = 2;
                        if (uVar16 <= uVar1) {
                          uVar31 = uVar18;
                        }
                        uVar18 = uVar31;
                        uVar26 = uVar1;
                        if ((int)uVar16 <= (int)uVar1) {
                          uVar26 = uVar16;
                        }
                      }
                    }
                    uVar16 = uVar26;
                    uVar31 = uVar25;
                    if (uVar30 < 4) {
                      iVar17 = 3;
                    }
                    else {
                      uVar25 = uVar31;
                      uVar26 = uVar16;
                      if ((uVar9 >> 3 & 1) != 0) {
                        uVar11 = 3 - uVar15;
                        uVar1 = -uVar11;
                        if (-1 < (int)uVar11) {
                          uVar1 = uVar11;
                        }
                        if ((int)uVar15 < 4) {
                          uVar25 = 3;
                          if (uVar31 <= uVar1) {
                            uVar25 = (uint)uVar32;
                          }
                          uVar32 = (ulong)uVar25;
                          uVar25 = uVar1;
                          if ((int)uVar31 <= (int)uVar1) {
                            uVar25 = uVar31;
                          }
                        }
                        else {
                          uVar31 = 3;
                          if (uVar16 <= uVar1) {
                            uVar31 = uVar18;
                          }
                          uVar18 = uVar31;
                          uVar26 = uVar1;
                          if ((int)uVar16 <= (int)uVar1) {
                            uVar26 = uVar16;
                          }
                        }
                      }
                      uVar16 = uVar26;
                      uVar31 = uVar25;
                      if (uVar30 < 5) {
                        iVar17 = 4;
                      }
                      else {
                        if ((uVar9 >> 4 & 1) != 0) {
                          uVar26 = 4 - uVar15;
                          uVar25 = -uVar26;
                          if (-1 < (int)uVar26) {
                            uVar25 = uVar26;
                          }
                          if ((int)uVar15 < 5) {
                            uVar26 = 4;
                            if (uVar31 <= uVar25) {
                              uVar26 = (uint)uVar32;
                            }
                            uVar32 = (ulong)uVar26;
                            if ((int)uVar31 <= (int)uVar25) {
                              uVar25 = uVar31;
                            }
                            uVar31 = uVar25;
                          }
                          else {
                            uVar26 = 4;
                            if (uVar16 <= uVar25) {
                              uVar26 = uVar18;
                            }
                            if ((int)uVar16 <= (int)uVar25) {
                              uVar25 = uVar16;
                            }
                            uVar18 = uVar26;
                            uVar16 = uVar25;
                          }
                        }
                        if (uVar30 < 6) {
                          iVar17 = 5;
                        }
                        else {
                          if ((uVar9 >> 5 & 1) != 0) {
                            uVar26 = 5 - uVar15;
                            uVar25 = -uVar26;
                            if (-1 < (int)uVar26) {
                              uVar25 = uVar26;
                            }
                            if ((int)uVar15 < 6) {
                              uVar26 = 5;
                              if (uVar31 <= uVar25) {
                                uVar26 = (uint)uVar32;
                              }
                              uVar32 = (ulong)uVar26;
                              if ((int)uVar31 <= (int)uVar25) {
                                uVar25 = uVar31;
                              }
                              uVar31 = uVar25;
                            }
                            else {
                              uVar26 = 5;
                              if (uVar16 <= uVar25) {
                                uVar26 = uVar18;
                              }
                              if ((int)uVar16 <= (int)uVar25) {
                                uVar25 = uVar16;
                              }
                              uVar18 = uVar26;
                              uVar16 = uVar25;
                            }
                          }
                          if (uVar30 < 7) {
                            iVar17 = 6;
                          }
                          else {
                            if ((uVar9 >> 6 & 1) != 0) {
                              uVar26 = 6 - uVar15;
                              uVar25 = -uVar26;
                              if (-1 < (int)uVar26) {
                                uVar25 = uVar26;
                              }
                              if ((int)uVar15 < 7) {
                                uVar26 = 6;
                                if (uVar31 <= uVar25) {
                                  uVar26 = (uint)uVar32;
                                }
                                uVar32 = (ulong)uVar26;
                                if ((int)uVar31 <= (int)uVar25) {
                                  uVar25 = uVar31;
                                }
                                uVar31 = uVar25;
                              }
                              else {
                                uVar26 = 6;
                                if (uVar16 <= uVar25) {
                                  uVar26 = uVar18;
                                }
                                if ((int)uVar16 <= (int)uVar25) {
                                  uVar25 = uVar16;
                                }
                                uVar18 = uVar26;
                                uVar16 = uVar25;
                              }
                            }
                            iVar17 = 7;
                          }
                        }
                      }
                    }
                  }
                }
                if (uVar16 == uVar31) goto LAB_03694884;
                bVar14 = uVar16 <= uVar31;
              }
              fVar39 = 10.0;
              if (bVar14) {
                fVar39 = -10.0;
              }
              if ((long *)plVar35[0x16] != plVar35 + 0x15) {
                lVar29 = (long)*(int *)((long)plVar35 + 0xbc);
                plVar24 = (long *)(plVar35[0x16] - lVar29);
                do {
                  if (((*PTR_DAT_04bb34e8 & 1) == 0) &&
                     (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb34e8), iVar17 != 0)) {
                    *(undefined **)PTR_DAT_04bb34e0 = puVar6;
                    __cxa_guard_release(PTR_DAT_04bb34e8);
                  }
                  if ((plVar24 != (long *)0x0) &&
                     (uVar32 = (**(code **)(*plVar24 + 0x10))(plVar24,PTR_DAT_04bb34e0),
                     (uVar32 & 1) != 0)) {
                    plVar24[0x6d] = 0x1040000000;
                    break;
                  }
                  plVar24 = (long *)(*(long *)((long)plVar24 + lVar29 + 8) - lVar29);
                } while (plVar24 != (long *)((long)(plVar35 + 0x15) - lVar29));
              }
              *(undefined4 *)(plVar35 + 0x87) = uVar36;
              *(float *)(plVar35 + 0x86) = fVar37 + fVar39;
              *(float *)((long)plVar35 + 0x434) = fVar38 + 10.0;
              puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar15 = puVar23[3];
              uVar30 = *puVar23 ^ *puVar23 << 0xb;
              *puVar23 = puVar23[1];
              puVar23[1] = puVar23[2];
              uVar30 = uVar30 >> 8 ^ uVar15 >> 0x13 ^ uVar30 ^ uVar15;
              puVar23[2] = uVar15;
              puVar23[3] = uVar30;
              plVar35[0x83] = 0;
              *(undefined2 *)((long)plVar35 + 0x424) = 0x100;
              *(int *)(plVar35 + 0x84) = (int)((ulong)uVar30 * 0xf >> 0x20) + 0x1e;
            }
          }
        }
      }
      else {
        if (uVar34 < uVar30) {
          lVar29 = *(long *)(*(long *)(param_1 + 0x280) + uVar34 * 8);
          lVar27 = *(long *)puVar13;
        }
        else {
          lVar29 = 0;
          lVar27 = *(long *)puVar13;
        }
        if (lVar27 != 0) {
          uVar30 = *(uint *)(lVar29 + 0x40);
          if ((((uVar30 == 0) ||
               (plVar35 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                                    ((ulong)(uVar30 >> 0x11) & 0x7ff8)), plVar35 == (long *)0x0)) ||
              ((*(uint *)(plVar35 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar35 + 0x46) != uVar30))
          {
            plVar35 = (long *)0x0;
          }
          if (*(int *)(lVar27 + 0x288) == 1 || *(int *)(lVar27 + 0x288) == -1) {
            plVar24 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar29 = *(long *)puVar13;
            iVar17 = (**(code **)(*plVar24 + 0x60))();
            if (iVar17 < 0x11) {
              uVar30 = 1;
            }
            else {
              if (4 < *(uint *)(lVar29 + 0x5e8)) goto LAB_036944a0;
              uVar30 = 0x1aU >> (ulong)(*(uint *)(lVar29 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_036944a0:
            uVar30 = 0;
          }
          if (plVar35 != (long *)0x0) {
            if (((*PTR_DAT_04bb3748 & 1) == 0) &&
               (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar17 != 0)) {
              *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb3748);
            }
            uVar15 = (**(code **)(*plVar35 + 0x20))(plVar35,PTR_DAT_04bb3740);
            if (((uVar30 & uVar15) == 1) && (plVar35 = (long *)plVar35[0xc], plVar35 != (long *)0x0)
               ) {
              if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar17 != 0)) {
                *(undefined **)PTR_DAT_04bb37b0 = puVar7;
                __cxa_guard_release(PTR_DAT_04bb37b8);
              }
              uVar32 = (**(code **)(*plVar35 + 0x10))(plVar35,PTR_DAT_04bb37b0);
              if ((uVar32 & 1) != 0) {
                pcStack_98 = &UNK_04198e50 +
                             *(int *)(&UNK_04198e50 + (long)*(int *)(param_1 + 0x26f0) * 4);
                local_a0 = puVar8;
                FUN_017081d0(plVar35,&local_a0,6,0,0);
              }
            }
          }
        }
      }
    }
    uVar34 = uVar34 + 1;
    if (uVar34 == 7) {
      return;
    }
  } while( true );
}

