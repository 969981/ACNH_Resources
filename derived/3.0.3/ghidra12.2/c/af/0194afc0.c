
long * FUN_0194afc0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  lVar10 = *param_1;
  if (lVar10 != 0) {
    iVar6 = (int)param_1[2];
    if (iVar6 < 1) {
      uVar12 = *(uint *)((long)param_1 + 0x14);
      if ((uVar12 & 1) == 0) {
        uVar15 = *(uint *)(param_1 + 1);
        uVar11 = *(uint *)(lVar10 + 0x288);
        if ((int)uVar15 < (int)uVar11) {
          uVar12 = *(int *)((long)param_1 + 0xc) + 1;
          puVar1 = PTR_DAT_04bb2e50 + 0x10;
          do {
            lVar13 = *(long *)(lVar10 + 0x290);
            uVar2 = uVar15;
            if (uVar11 <= uVar15) {
              uVar2 = 0;
            }
            puVar17 = (uint *)(lVar13 + (long)(int)uVar2 * 0x30 + 0x10);
            uVar11 = *puVar17;
            if ((int)uVar12 < (int)uVar11) {
              uVar16 = uVar12;
              do {
                uVar3 = uVar16;
                if (uVar11 <= uVar16) {
                  uVar3 = 0;
                }
                uVar11 = *(uint *)(*(long *)(lVar13 + (long)(int)uVar2 * 0x30 + 0x18) +
                                  (long)(int)uVar3 * 4);
                if ((uVar11 != 0) && (lVar10 = *(long *)puVar4, lVar10 != 0)) {
                  plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                      ((ulong)(uVar11 >> 0x11) & 0x7ff8));
                  if ((plVar14 == (long *)0x0) ||
                     (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 ||
                      (*(uint *)(plVar14 + 0x46) != uVar11)))) {
                    plVar14 = (long *)0x0;
                  }
                  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
                    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
                    lVar10 = *(long *)puVar4;
                    iVar6 = (**(code **)(*plVar7 + 0x60))();
                    if (iVar6 < 0x11) {
                      uVar11 = 0;
                    }
                    else {
                      uVar11 = *(uint *)(lVar10 + 0x5e8);
                      if (4 < uVar11) goto LAB_0194b148;
                      uVar11 = 5U >> (ulong)(uVar11 & 0x1f) & 1;
                    }
                  }
                  else {
LAB_0194b148:
                    uVar11 = 1;
                  }
                  if (plVar14 != (long *)0x0) {
                    lVar10 = plVar14[0x2a];
                    if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
                       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
                      *(undefined **)PTR_DAT_04bb3fd8 = puVar1;
                      __cxa_guard_release(PTR_DAT_04bb3fe0);
                    }
                    uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3fd8);
                    if ((int)lVar10 != 1) {
                      uVar11 = 1;
                    }
                    if (((uVar8 & 1) != 0) && (uVar11 == 0)) {
                      *(uint *)(param_1 + 1) = uVar15;
                      *(uint *)((long)param_1 + 0xc) = uVar16;
                      *(undefined4 *)(param_1 + 2) = 0;
                      return param_1;
                    }
                  }
                }
                uVar11 = *puVar17;
                uVar16 = uVar16 + 1;
              } while ((int)uVar16 < (int)uVar11);
              lVar10 = *param_1;
            }
            uVar11 = *(uint *)(lVar10 + 0x288);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)uVar11);
          iVar6 = (int)param_1[2];
          if (0 < iVar6) goto LAB_0194b2f0;
          uVar12 = *(uint *)((long)param_1 + 0x14);
        }
      }
      puVar4 = PTR_DAT_04bb27c0;
      if ((((uVar12 >> 1 & 1) == 0) && (uVar12 = *(uint *)(lVar10 + 2000), uVar12 != 0)) &&
         (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
        plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8));
        if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar14 + 0x46) != uVar12)) {
          plVar14 = (long *)0x0;
        }
        if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
          plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar10 = *(long *)puVar4;
          iVar6 = (**(code **)(*plVar7 + 0x60))();
          if (iVar6 < 0x11) {
            uVar12 = 0;
          }
          else {
            if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0194b294;
            uVar12 = 5U >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0194b294:
          uVar12 = 1;
        }
        if (plVar14 != (long *)0x0) {
          lVar10 = plVar14[0x2a];
          if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3fe0);
          }
          uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3fd8);
          if ((int)lVar10 != 1) {
            uVar12 = 1;
          }
          if (((uVar8 & 1) != 0) && (uVar12 == 0)) {
            uVar9 = 1;
            goto LAB_0194b644;
          }
        }
      }
      iVar6 = (int)param_1[2];
    }
LAB_0194b2f0:
    puVar4 = PTR_DAT_04bb27c0;
    if ((((iVar6 < 2) && ((*(byte *)((long)param_1 + 0x14) >> 2 & 1) == 0)) &&
        (uVar12 = *(uint *)(*param_1 + 0x860), uVar12 != 0)) &&
       (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
      plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar14 + 0x46) != uVar12)) {
        plVar14 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar10 = *(long *)puVar4;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar12 = 0;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0194b3ac;
          uVar12 = 5U >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0194b3ac:
        uVar12 = 1;
      }
      if (plVar14 != (long *)0x0) {
        lVar10 = plVar14[0x2a];
        if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fe0);
        }
        uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3fd8);
        if ((int)lVar10 != 1) {
          uVar12 = 1;
        }
        if (((uVar8 & 1) != 0) && (uVar12 == 0)) {
          uVar9 = 2;
          goto LAB_0194b644;
        }
      }
    }
    puVar4 = PTR_DAT_04bb27c0;
    iVar6 = (int)param_1[2];
    if (iVar6 < 3) {
      if ((((*(byte *)((long)param_1 + 0x14) >> 3 & 1) == 0) &&
          (uVar12 = *(uint *)(*param_1 + 0x8c4), uVar12 != 0)) &&
         (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
        plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8));
        if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
           (*(uint *)(plVar14 + 0x46) != uVar12)) {
          plVar14 = (long *)0x0;
        }
        if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
          plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar10 = *(long *)puVar4;
          iVar6 = (**(code **)(*plVar7 + 0x60))();
          if (iVar6 < 0x11) {
            uVar12 = 0;
          }
          else {
            if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0194b4c8;
            uVar12 = 5U >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0194b4c8:
          uVar12 = 1;
        }
        if (plVar14 != (long *)0x0) {
          lVar10 = plVar14[0x2a];
          if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3fe0);
          }
          uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3fd8);
          if ((int)lVar10 != 1) {
            uVar12 = 1;
          }
          if (((uVar8 & 1) != 0) && (uVar12 == 0)) {
            uVar9 = 3;
            goto LAB_0194b644;
          }
        }
      }
      iVar6 = (int)param_1[2];
    }
    puVar4 = PTR_DAT_04bb27c0;
    if ((((iVar6 < 4) && ((*(byte *)((long)param_1 + 0x14) >> 4 & 1) == 0)) &&
        (uVar12 = *(uint *)(*param_1 + 0x8c8), uVar12 != 0)) &&
       (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
      plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar12 >> 0x11) & 0x7ff8));
      if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar14 + 0x46) != uVar12)) {
        plVar14 = (long *)0x0;
      }
      if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar10 = *(long *)puVar4;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar12 = 0;
        }
        else {
          if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0194b5e4;
          uVar12 = 5U >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0194b5e4:
        uVar12 = 1;
      }
      if (plVar14 != (long *)0x0) {
        lVar10 = plVar14[0x2a];
        if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fe0);
        }
        uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3fd8);
        if ((int)lVar10 != 1) {
          uVar12 = 1;
        }
        if (((uVar8 & 1) != 0) && (uVar12 == 0)) {
          uVar9 = 4;
          goto LAB_0194b644;
        }
      }
    }
  }
  uVar9 = 5;
LAB_0194b644:
  *(undefined4 *)(param_1 + 2) = uVar9;
  return param_1;
}

