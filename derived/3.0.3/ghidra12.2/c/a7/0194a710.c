
void FUN_0194a710(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  long *local_78;
  char local_70;
  char local_6e;
  ulong local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 5;
  *(undefined4 *)((long)param_1 + 0x14) = param_2;
  plVar19 = (long *)PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar17 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar17 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
      ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar17)) {
    plVar16 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *plVar19;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar17 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0194a7ec;
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0194a7ec:
    uVar17 = 0;
  }
  if (plVar16 == (long *)0x0) {
    return;
  }
  lVar12 = plVar16[0x2a];
  if (((*PTR_DAT_04bb4b78 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4b78);
  }
  uVar9 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb4b70);
  uVar7 = 0;
  if ((int)lVar12 == 1) {
    uVar7 = uVar17;
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (uVar7 == 0) {
    return;
  }
  local_78 = (long *)0x0;
  local_68 = 0;
  nn::os::GetCurrentStackInfo((ulong *)&local_78,&local_68);
  puVar4 = PTR_DAT_04bbecb0;
  puVar2 = PTR_DAT_04bbeca8;
  if (param_1 < local_78) {
    return;
  }
  if ((long *)(local_68 + (long)local_78) <= param_1) {
    return;
  }
  if ((long *)plVar16[0x16] != plVar16 + 0x15) {
    lVar12 = (long)*(int *)((long)plVar16 + 0xbc);
    plVar8 = (long *)(plVar16[0x16] - lVar12);
    puVar1 = PTR_DAT_04bbecb8 + 0x10;
    do {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((plVar8 != (long *)0x0) &&
         (uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar2), (uVar9 & 1) != 0))
      goto LAB_0194a90c;
      plVar8 = (long *)(*(long *)((long)plVar8 + lVar12 + 8) - lVar12);
    } while (plVar8 != (long *)((long)(plVar16 + 0x15) - lVar12));
  }
  plVar8 = (long *)0x0;
LAB_0194a90c:
  *param_1 = (long)plVar8;
  if (((*(byte *)((long)param_1 + 0x14) & 1) == 0) && (lVar12 = plVar8[0x51], (int)lVar12 != 0)) {
    lVar13 = plVar8[0x52];
    iVar5 = 0;
    puVar2 = PTR_DAT_04bb2e50 + 0x10;
    do {
      lVar14 = lVar13 + (long)iVar5 * 0x30;
      iVar3 = *(int *)(lVar14 + 0x10);
      if (iVar3 != 0) {
        lVar14 = *(long *)(lVar14 + 0x18);
        uVar9 = 0;
        uVar18 = 0;
        do {
          uVar17 = *(uint *)(lVar14 + (-(uVar18 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2));
          if ((uVar17 != 0) && (lVar15 = *plVar19, lVar15 != 0)) {
            plVar16 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                ((ulong)(uVar17 >> 0x11) & 0x7ff8));
            if ((plVar16 == (long *)0x0) ||
               (((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar16 + 0x46) != uVar17))
               )) {
              plVar16 = (long *)0x0;
            }
            if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
              plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar15 = *plVar19;
              iVar6 = (**(code **)(*plVar8 + 0x60))();
              plVar19 = (long *)PTR_DAT_04bb27c0;
              if (iVar6 < 0x11) {
                uVar17 = 0;
              }
              else if (*(uint *)(lVar15 + 0x5e8) < 5) {
                uVar17 = 5U >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
              }
              else {
                uVar17 = 1;
              }
            }
            else {
              uVar17 = 1;
            }
            if (plVar16 != (long *)0x0) {
              lVar15 = plVar16[0x2a];
              if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
                *(undefined **)PTR_DAT_04bb3fd8 = puVar2;
                __cxa_guard_release(PTR_DAT_04bb3fe0);
              }
              uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fd8);
              if ((int)lVar15 != 1) {
                uVar17 = 1;
              }
              plVar19 = (long *)PTR_DAT_04bb27c0;
              if (((uVar10 & 1) != 0) && (uVar17 == 0)) {
                *(int *)(param_1 + 1) = iVar5;
                *(int *)((long)param_1 + 0xc) = (int)uVar9;
                *(undefined4 *)(param_1 + 2) = 0;
                return;
              }
            }
          }
          uVar9 = uVar18 + 1;
          uVar18 = uVar9 & 0xffffffff;
        } while (iVar3 != (int)uVar9);
      }
      iVar5 = iVar5 + 1;
    } while ((int)lVar12 != iVar5);
  }
  if ((int)param_1[2] != 5) {
    return;
  }
  if ((((*(byte *)((long)param_1 + 0x14) >> 1 & 1) == 0) &&
      (uVar17 = *(uint *)(*param_1 + 2000), uVar17 != 0)) && (lVar12 = *plVar19, lVar12 != 0)) {
    plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar17 >> 0x11) & 0x7ff8));
    if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar16 + 0x46) != uVar17)) {
      plVar16 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *plVar19;
      iVar5 = (**(code **)(*plVar8 + 0x60))();
      if (iVar5 < 0x11) {
        uVar17 = 0;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0194ab8c;
        uVar17 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0194ab8c:
      uVar17 = 1;
    }
    if (plVar16 != (long *)0x0) {
      lVar12 = plVar16[0x2a];
      if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fe0);
      }
      uVar9 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fd8);
      if ((int)lVar12 != 1) {
        uVar17 = 1;
      }
      if (((uVar9 & 1) != 0) && (uVar17 == 0)) {
        uVar11 = 1;
        goto LAB_0194ae10;
      }
    }
  }
  uVar17 = *(uint *)((long)param_1 + 0x14);
  if (((uVar17 >> 2 & 1) == 0) && (uVar7 = *(uint *)(*param_1 + 0x860), uVar7 != 0)) {
    lVar12 = *plVar19;
    if (lVar12 != 0) {
      plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                          ((ulong)(uVar7 >> 0x11) & 0x7ff8));
      if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar16 + 0x46) != uVar7)) {
        plVar16 = (long *)0x0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar12 = *plVar19;
        iVar5 = (**(code **)(*plVar8 + 0x60))();
        if (iVar5 < 0x11) {
          uVar17 = 1;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0194ac8c;
          uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0194ac8c:
        uVar17 = 0;
      }
      if (plVar16 != (long *)0x0) {
        if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fe0);
        }
        uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fd8);
        if ((uVar17 & uVar7) != 0) {
          uVar11 = 2;
          goto LAB_0194ae10;
        }
      }
    }
    uVar17 = *(uint *)((long)param_1 + 0x14);
  }
  if ((((uVar17 >> 3 & 1) == 0) && (uVar17 = *(uint *)(*param_1 + 0x8c4), uVar17 != 0)) &&
     (lVar12 = *plVar19, lVar12 != 0)) {
    plVar16 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                        ((ulong)(uVar17 >> 0x11) & 0x7ff8));
    if (((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar16 + 0x46) != uVar17)) {
      plVar16 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *plVar19;
      iVar5 = (**(code **)(*plVar8 + 0x60))();
      if (iVar5 < 0x11) {
        uVar17 = 0;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0194ad7c;
        uVar17 = 5U >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0194ad7c:
      uVar17 = 1;
    }
    if (plVar16 != (long *)0x0) {
      lVar12 = plVar16[0x2a];
      if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fe0);
      }
      uVar9 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fd8);
      if ((int)lVar12 != 1) {
        uVar17 = 1;
      }
      if (((uVar9 & 1) != 0) && (uVar17 == 0)) {
        uVar11 = 3;
        goto LAB_0194ae10;
      }
    }
  }
  if ((*(byte *)((long)param_1 + 0x14) >> 4 & 1) != 0) {
    return;
  }
  if (*(int *)(*param_1 + 0x8c8) == 0) {
    return;
  }
  FUN_0194af14(&local_78,*param_1 + 0x8c8);
  if (local_78 == (long *)0x0) {
    return;
  }
  if (local_70 == '\0') {
    return;
  }
  if (local_6e == '\0') {
    return;
  }
  uVar11 = 4;
LAB_0194ae10:
  *(undefined4 *)(param_1 + 2) = uVar11;
  return;
}

