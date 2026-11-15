
void FUN_020b3190(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  uint *puVar17;
  undefined **local_80 [4];
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar16 = *(long *)(param_1 + 0x2f50);
  if (lVar16 != param_1 + 0x2f48) {
    lVar13 = lVar16 + -0xe0;
    puVar1 = PTR_DAT_04bb3750 + 0x10;
    puVar2 = PTR_DAT_04bb4100 + 0x10;
    do {
      if (*(long *)(lVar13 + 0xd0) != 0) {
        local_80[0] = &PTR_FUN_04a73170;
        puVar17 = (uint *)(lVar16 + -0xf0);
        lVar11 = lVar13;
        do {
          lVar11 = *(long *)(lVar11 + 8);
          if ((uint *)(lVar11 + -0x10) == puVar17) {
            if (*(int *)(lVar13 + 0x10) == 0) {
              lVar11 = 0;
              lVar8 = *(long *)puVar4;
            }
            else {
              lVar11 = *(long *)(lVar13 + 8);
              lVar8 = *(long *)puVar4;
            }
            if (lVar8 != 0) {
              uVar10 = *(uint *)(lVar11 + -0x10);
              if ((((uVar10 == 0) ||
                   (plVar14 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                        ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)
                   ) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar14 + 0x46) != uVar10)) {
                plVar14 = (long *)0x0;
              }
              if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
                plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar11 = *(long *)puVar4;
                iVar5 = (**(code **)(*plVar7 + 0x60))();
                if (iVar5 < 0x11) {
                  uVar10 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_020b33d8;
                  uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_020b33d8:
                uVar10 = 0;
              }
              if (plVar14 != (long *)0x0) {
                lVar11 = plVar14[0x2a];
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = puVar1;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
                uVar3 = 0;
                if ((int)lVar11 == 1) {
                  uVar3 = uVar10;
                }
                if (((uVar6 & 1) != 0) && (uVar3 != 0)) {
                  puVar15 = (undefined8 *)plVar14[0x77];
                  if (((*PTR_DAT_04bb6860 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar5 != 0)) {
                    *(undefined **)PTR_DAT_04bb6858 = puVar2;
                    __cxa_guard_release(PTR_DAT_04bb6860);
                  }
                  if ((puVar15 != (undefined8 *)0x0) &&
                     (uVar6 = (**(code **)*puVar15)(puVar15,PTR_DAT_04bb6858), (uVar6 & 1) != 0)) {
                    FUN_01e84b84(puVar15,1);
                  }
                }
              }
            }
            break;
          }
          uVar6 = (*(code *)*local_80[0])(local_80);
        } while ((uVar6 & 1) != 0);
        iVar5 = *(int *)(*(long *)(lVar13 + 0xd0) + 8);
        iVar9 = iVar5 + -1;
        if ((0 < iVar5) && (*(int *)(*(long *)(lVar13 + 0xd0) + 8) = iVar9, iVar9 == 0)) {
          if (*(char *)(lVar13 + 0xdc) == '\0') {
            uVar10 = (*(uint **)(lVar13 + 0xd0))[1];
            if (uVar10 == 1) {
              iVar5 = *(int *)(lVar13 + 0x10);
              puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar10 = *puVar12 ^ *puVar12 << 0xb;
              uVar3 = puVar12[3];
              *puVar12 = puVar12[1];
              puVar12[1] = puVar12[2];
              uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar10 ^ uVar3;
              puVar12[2] = uVar3;
              puVar12[3] = uVar10;
              lVar11 = *(long *)(lVar13 + 8);
              puVar12 = (uint *)(lVar11 + -0x10);
              if (puVar12 != puVar17) {
                iVar9 = 0;
                uVar6 = (ulong)uVar10 * (ulong)(iVar5 - 1) >> 0x20;
                do {
                  if (iVar9 == (int)uVar6) {
                    if (*(uint **)(lVar13 + 0xd0) != puVar12) {
                      (*(uint **)(lVar13 + 0xd0))[1] = 2;
                      *(uint **)(lVar13 + 0xd0) = puVar12;
                      puVar12[1] = 0;
                      *(undefined4 *)(*(long *)(lVar13 + 0xd0) + 8) = 0;
                      *(undefined4 *)(lVar13 + 0xd8) = 0;
                      break;
                    }
                    uVar6 = (ulong)(*(int *)(lVar13 + 0x10) - 1);
                  }
                  lVar11 = *(long *)(lVar11 + 8);
                  iVar9 = iVar9 + 1;
                  puVar12 = (uint *)(lVar11 + -0x10);
                } while (puVar12 != puVar17);
              }
            }
            else if (uVar10 == 3) goto LAB_020b3278;
            if ((*(uint **)(lVar13 + 0xd0))[1] == 0) {
              lVar11 = *(long *)puVar4;
              if (lVar11 != 0) {
                uVar10 = **(uint **)(lVar13 + 0xd0);
                if ((((uVar10 == 0) ||
                     (plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                          ((ulong)(uVar10 >> 0x11) & 0x7ff8)),
                     plVar14 == (long *)0x0)) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
                   (*(uint *)(plVar14 + 0x46) != uVar10)) {
                  plVar14 = (long *)0x0;
                }
                if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
                  plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                        (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar11 = *(long *)puVar4;
                  iVar5 = (**(code **)(*plVar7 + 0x60))();
                  if (iVar5 < 0x11) {
                    uVar10 = 1;
                  }
                  else {
                    if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_020b37d0;
                    uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
                  }
                }
                else {
LAB_020b37d0:
                  uVar10 = 0;
                }
                if (plVar14 != (long *)0x0) {
                  lVar11 = plVar14[0x2a];
                  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
                    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                    __cxa_guard_release(PTR_DAT_04bb37d8);
                  }
                  uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
                  uVar3 = 0;
                  if ((int)lVar11 == 1) {
                    uVar3 = uVar10;
                  }
                  if (((uVar6 & 1) != 0) && (uVar3 != 0)) {
                    *(undefined4 *)(plVar14[0x77] + 0xae3c) = 0;
                  }
                }
              }
              for (lVar11 = *(long *)(lVar13 + 8); (uint *)(lVar11 + -0x10) != puVar17;
                  lVar11 = *(long *)(lVar11 + 8)) {
                if (*(uint **)(lVar13 + 0xd0) != (uint *)(lVar11 + -0x10)) {
                  *(undefined4 *)(lVar11 + -0xc) = 2;
                }
              }
            }
          }
          else {
LAB_020b3278:
            lVar11 = *(long *)puVar4;
            if (lVar11 != 0) {
              uVar10 = **(uint **)(lVar13 + 0xd0);
              if ((((uVar10 == 0) ||
                   (plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                        ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)
                   ) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar14 + 0x46) != uVar10)) {
                plVar14 = (long *)0x0;
              }
              if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
                plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar11 = *(long *)puVar4;
                iVar5 = (**(code **)(*plVar7 + 0x60))();
                if (iVar5 < 0x11) {
                  uVar10 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_020b3488;
                  uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_020b3488:
                uVar10 = 0;
              }
              if (plVar14 != (long *)0x0) {
                lVar11 = plVar14[0x2a];
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
                uVar3 = 0;
                if ((int)lVar11 == 1) {
                  uVar3 = uVar10;
                }
                if (((uVar6 & 1) != 0) && (uVar3 != 0)) {
                  *(undefined4 *)(plVar14[0x77] + 0xae3c) = 3;
                }
              }
            }
          }
        }
        for (lVar11 = *(long *)(lVar13 + 8); puVar12 = (uint *)(lVar11 + -0x10), puVar12 != puVar17;
            lVar11 = *(long *)(lVar11 + 8)) {
          if (*(uint **)(lVar13 + 0xd0) != puVar12) {
            iVar5 = *(int *)(lVar11 + -8) + -1;
            if (((0 < *(int *)(lVar11 + -8)) && (*(int *)(lVar11 + -8) = iVar5, iVar5 == 0)) &&
               (lVar8 = *(long *)puVar4, lVar8 != 0)) {
              uVar10 = *puVar12;
              if (((uVar10 == 0) ||
                  (plVar14 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                                       ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0))
                 || (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 ||
                     (*(uint *)(plVar14 + 0x46) != uVar10)))) {
                plVar14 = (long *)0x0;
              }
              if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
                plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar8 = *(long *)puVar4;
                iVar5 = (**(code **)(*plVar7 + 0x60))();
                if (iVar5 < 0x11) {
                  uVar10 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_020b368c;
                  uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_020b368c:
                uVar10 = 0;
              }
              if (plVar14 != (long *)0x0) {
                lVar8 = plVar14[0x2a];
                if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
                  *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb37d8);
                }
                uVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
                uVar3 = 0;
                if ((int)lVar8 == 1) {
                  uVar3 = uVar10;
                }
                if ((((uVar6 & 1) != 0) && (uVar3 != 0)) && (*(int *)(lVar11 + -0xc) != 5)) {
                  *(int *)(plVar14[0x77] + 0xae3c) = *(int *)(lVar11 + -0xc);
                }
              }
            }
          }
        }
      }
      lVar16 = *(long *)(lVar16 + 8);
      lVar13 = lVar16 + -0xe0;
    } while (lVar13 != param_1 + 0x2e68);
  }
  return;
}

