
void FUN_03a245d0(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint *puVar5;
  byte *pbVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  uVar14 = *(uint *)(param_1 + 0xb90);
  if ((uVar14 & 1) == 0) {
    iVar11 = *(int *)(param_1 + 0x308);
    plVar16 = (long *)PTR_DAT_04bd14f8;
    pbVar6 = PTR_DAT_04bd1500;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x308);
    *(undefined4 *)(param_1 + 0xb98) = 0;
    puVar10 = PTR_DAT_04bd1500;
    puVar3 = PTR_DAT_04bd14f8;
    if (0 < iVar11) {
      uVar18 = 0;
      puVar2 = PTR_DAT_04bb2000 + 0x10;
      do {
        uVar4 = uVar18;
        if (0x7f < uVar18) {
          uVar4 = 0;
        }
        if (0 < *(int *)(param_1 + 0x714 + uVar4 * 4)) {
          lVar19 = 0;
          puVar1 = (uint *)(param_1 + 0x314) + uVar18;
          if (0x7f < uVar18) {
            puVar1 = (uint *)(param_1 + 0x314);
          }
          do {
            lVar17 = *(long *)(param_1 + 0x300);
            uVar14 = *puVar1;
            if (*(uint *)(lVar17 + 0x18) <= uVar14) {
              uVar14 = 0;
            }
            if ((uint)lVar19 <
                (uint)*(ushort *)(*(long *)(lVar17 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
              plVar16 = *(long **)(*(long *)(lVar17 + 0x30) +
                                  (lVar19 + (ulong)*(ushort *)
                                                    (*(long *)(lVar17 + 0x20) +
                                                    (long)(int)uVar14 * 4)) * 8);
            }
            else {
              plVar16 = (long *)0x0;
            }
            if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
              *(undefined **)puVar3 = puVar2;
              __cxa_guard_release(puVar10);
            }
            if (plVar16 == (long *)0x0) {
              plVar16 = (long *)0x0;
              cVar7 = cRam0000000000000058;
            }
            else {
              uVar12 = (**(code **)(*plVar16 + 0x48))(plVar16,puVar3);
              if ((uVar12 & 1) == 0) {
                plVar16 = (long *)0x0;
              }
              cVar7 = (char)plVar16[0xb];
            }
            if ((cVar7 != '\0') && (*(int *)(param_1 + 0xb98) < *(int *)(param_1 + 0xb9c))) {
              *(long **)(*(long *)(param_1 + 0xba0) + (long)*(int *)(param_1 + 0xb98) * 8) = plVar16
              ;
              *(int *)(param_1 + 0xb98) = *(int *)(param_1 + 0xb98) + 1;
            }
            lVar19 = lVar19 + 1;
          } while ((int)lVar19 < *(int *)(param_1 + 0x714 + uVar4 * 4));
          iVar11 = *(int *)(param_1 + 0x308);
        }
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)iVar11);
      uVar14 = *(uint *)(param_1 + 0xb90);
    }
    uVar14 = uVar14 & 0xfffffffe;
    *(uint *)(param_1 + 0xb90) = uVar14;
    plVar16 = (long *)PTR_DAT_04bd14f8;
    pbVar6 = PTR_DAT_04bd1500;
  }
  PTR_DAT_04bd14f8 = (undefined *)plVar16;
  PTR_DAT_04bd1500 = pbVar6;
  if (0 < iVar11) {
    uVar18 = 0;
    puVar3 = PTR_DAT_04bb2000 + 0x10;
    do {
      uVar4 = uVar18;
      if (0x7f < uVar18) {
        uVar4 = 0;
      }
      if (0 < *(int *)(param_1 + 0x714 + uVar4 * 4)) {
        lVar19 = 0;
        puVar1 = (uint *)(param_1 + 0x314) + uVar18;
        if (0x7f < uVar18) {
          puVar1 = (uint *)(param_1 + 0x314);
        }
        do {
          lVar17 = *(long *)(param_1 + 0x300);
          uVar14 = *puVar1;
          if (*(uint *)(lVar17 + 0x18) <= uVar14) {
            uVar14 = 0;
          }
          if ((uint)lVar19 < (uint)*(ushort *)(*(long *)(lVar17 + 0x20) + (long)(int)uVar14 * 4 + 2)
             ) {
            plVar15 = *(long **)(*(long *)(lVar17 + 0x30) +
                                (lVar19 + (ulong)*(ushort *)
                                                  (*(long *)(lVar17 + 0x20) + (long)(int)uVar14 * 4)
                                ) * 8);
          }
          else {
            plVar15 = (long *)0x0;
          }
          if (((*pbVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(pbVar6), iVar11 != 0)) {
            *plVar16 = (long)puVar3;
            __cxa_guard_release(pbVar6);
          }
          uVar12 = (**(code **)(*plVar15 + 0x48))(plVar15,plVar16);
          if ((uVar12 & 1) == 0) {
            plVar15 = (long *)0x0;
          }
          FUN_03a180dc(plVar15);
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < *(int *)(param_1 + 0x714 + uVar4 * 4));
        iVar11 = *(int *)(param_1 + 0x308);
      }
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)iVar11);
    uVar14 = *(uint *)(param_1 + 0xb90);
  }
  puVar10 = PTR_DAT_04bd1500;
  puVar3 = PTR_DAT_04bd14f8;
  if ((uVar14 >> 1 & 1) != 0) {
    if (0 < iVar11) {
      uVar18 = 0;
      lVar19 = param_1 + 0x714;
      puVar1 = (uint *)(param_1 + 0x314);
      puVar2 = PTR_DAT_04bb2000 + 0x10;
      do {
        uVar4 = uVar18;
        if (0x7f < uVar18) {
          uVar4 = 0;
        }
        if (0 < *(int *)(lVar19 + uVar4 * 4)) {
          lVar17 = 0;
          puVar5 = puVar1 + uVar18;
          if (0x7f < uVar18) {
            puVar5 = puVar1;
          }
          do {
            lVar13 = *(long *)(param_1 + 0x300);
            uVar14 = *puVar5;
            if (*(uint *)(lVar13 + 0x18) <= uVar14) {
              uVar14 = 0;
            }
            if ((uint)lVar17 <
                (uint)*(ushort *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
              plVar16 = *(long **)(*(long *)(lVar13 + 0x30) +
                                  (lVar17 + (ulong)*(ushort *)
                                                    (*(long *)(lVar13 + 0x20) +
                                                    (long)(int)uVar14 * 4)) * 8);
            }
            else {
              plVar16 = (long *)0x0;
            }
            if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
              *(undefined **)puVar3 = puVar2;
              __cxa_guard_release(puVar10);
            }
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x48))(plVar16,puVar3);
            }
            lVar17 = lVar17 + 1;
          } while ((int)lVar17 < *(int *)(lVar19 + uVar4 * 4));
          iVar11 = *(int *)(param_1 + 0x308);
        }
        uVar18 = uVar18 + 1;
      } while ((long)uVar18 < (long)iVar11);
      if (0 < iVar11) {
        uVar18 = 0;
        puVar2 = PTR_DAT_04bb2000 + 0x10;
        do {
          uVar4 = uVar18;
          if (0x7f < uVar18) {
            uVar4 = 0;
          }
          if (0 < *(int *)(lVar19 + uVar4 * 4)) {
            lVar17 = 0;
            puVar5 = puVar1 + uVar18;
            if (0x7f < uVar18) {
              puVar5 = puVar1;
            }
            do {
              lVar13 = *(long *)(param_1 + 0x300);
              uVar14 = *puVar5;
              if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                uVar14 = 0;
              }
              if ((uint)lVar17 <
                  (uint)*(ushort *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
                plVar16 = *(long **)(*(long *)(lVar13 + 0x30) +
                                    (lVar17 + (ulong)*(ushort *)
                                                      (*(long *)(lVar13 + 0x20) +
                                                      (long)(int)uVar14 * 4)) * 8);
              }
              else {
                plVar16 = (long *)0x0;
              }
              if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
                *(undefined **)puVar3 = puVar2;
                __cxa_guard_release(puVar10);
              }
              if (plVar16 != (long *)0x0) {
                (**(code **)(*plVar16 + 0x48))(plVar16,puVar3);
              }
              lVar17 = lVar17 + 1;
            } while ((int)lVar17 < *(int *)(lVar19 + uVar4 * 4));
            iVar11 = *(int *)(param_1 + 0x308);
          }
          puVar9 = PTR_DAT_04bd14f0;
          puVar8 = PTR_DAT_04bd14e8;
          uVar18 = uVar18 + 1;
        } while ((long)uVar18 < (long)iVar11);
        if (0 < iVar11) {
          uVar18 = 0;
          lVar19 = param_1 + 0x914;
          puVar1 = (uint *)(param_1 + 0x514);
          puVar3 = PTR_DAT_04bb2000 + 0x10;
          do {
            uVar4 = uVar18;
            if (0x7f < uVar18) {
              uVar4 = 0;
            }
            if (0 < *(int *)(lVar19 + uVar4 * 4)) {
              lVar17 = 0;
              puVar5 = puVar1 + uVar18;
              if (0x7f < uVar18) {
                puVar5 = puVar1;
              }
              do {
                lVar13 = *(long *)(param_1 + 0x300);
                uVar14 = *puVar5;
                if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                  uVar14 = 0;
                }
                if ((uint)lVar17 <
                    (uint)*(ushort *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
                  plVar16 = *(long **)(*(long *)(lVar13 + 0x30) +
                                      (lVar17 + (ulong)*(ushort *)
                                                        (*(long *)(lVar13 + 0x20) +
                                                        (long)(int)uVar14 * 4)) * 8);
                }
                else {
                  plVar16 = (long *)0x0;
                }
                if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
                  *(undefined **)puVar8 = puVar3;
                  __cxa_guard_release(puVar9);
                }
                if (plVar16 != (long *)0x0) {
                  (**(code **)(*plVar16 + 0x48))(plVar16,puVar8);
                }
                lVar17 = lVar17 + 1;
              } while ((int)lVar17 < *(int *)(lVar19 + uVar4 * 4));
              iVar11 = *(int *)(param_1 + 0x308);
            }
            uVar18 = uVar18 + 1;
          } while ((long)uVar18 < (long)iVar11);
          if (0 < iVar11) {
            uVar18 = 0;
            puVar3 = PTR_DAT_04bb2000 + 0x10;
            do {
              uVar4 = uVar18;
              if (0x7f < uVar18) {
                uVar4 = 0;
              }
              if (0 < *(int *)(lVar19 + uVar4 * 4)) {
                lVar17 = 0;
                puVar5 = puVar1 + uVar18;
                if (0x7f < uVar18) {
                  puVar5 = puVar1;
                }
                do {
                  lVar13 = *(long *)(param_1 + 0x300);
                  uVar14 = *puVar5;
                  if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                    uVar14 = 0;
                  }
                  if ((uint)lVar17 <
                      (uint)*(ushort *)(*(long *)(lVar13 + 0x20) + (long)(int)uVar14 * 4 + 2)) {
                    plVar16 = *(long **)(*(long *)(lVar13 + 0x30) +
                                        (lVar17 + (ulong)*(ushort *)
                                                          (*(long *)(lVar13 + 0x20) +
                                                          (long)(int)uVar14 * 4)) * 8);
                  }
                  else {
                    plVar16 = (long *)0x0;
                  }
                  if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
                    *(undefined **)puVar8 = puVar3;
                    __cxa_guard_release(puVar9);
                  }
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 0x48))(plVar16,puVar8);
                  }
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < *(int *)(lVar19 + uVar4 * 4));
                iVar11 = *(int *)(param_1 + 0x308);
              }
              uVar18 = uVar18 + 1;
            } while ((long)uVar18 < (long)iVar11);
          }
        }
      }
    }
    *(uint *)(param_1 + 0xb90) = *(uint *)(param_1 + 0xb90) & 0xfffffffd;
  }
  return;
}

