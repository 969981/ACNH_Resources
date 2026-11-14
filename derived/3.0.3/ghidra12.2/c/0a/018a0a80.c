
undefined8 FUN_018a0a80(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  long *plVar16;
  int local_64;
  
  puVar5 = PTR_DAT_04bb3238;
  puVar4 = PTR_DAT_04bb27c0;
  lVar11 = param_1[0x51];
  if ((int)lVar11 != 0) {
    lVar10 = param_1[0x52];
    iVar13 = 0;
    puVar1 = PTR_DAT_04bb3fd0 + 0x10;
    do {
      piVar14 = (int *)(lVar10 + (long)iVar13 * 0x30);
      if (*piVar14 < 1) {
        local_64 = 0;
      }
      else {
        lVar9 = lVar10 + (long)iVar13 * 0x30;
        uVar15 = 0;
        local_64 = 0;
        puVar2 = (uint *)(lVar9 + 0x10);
        plVar3 = (long *)(lVar9 + 0x18);
        do {
          lVar9 = *(long *)puVar4;
          if (lVar9 == 0) {
LAB_018a0b50:
            uVar12 = uVar15;
            if (*puVar2 <= uVar15) {
              uVar12 = 0;
            }
            *(undefined4 *)(*plVar3 + (ulong)uVar12 * 4) = *(undefined4 *)puVar5;
            (**(code **)(*param_1 + 0x118))(param_1,iVar13,uVar15);
          }
          else {
            uVar12 = uVar15;
            if (*puVar2 <= uVar15) {
              uVar12 = 0;
            }
            uVar12 = *(uint *)(*plVar3 + (ulong)uVar12 * 4);
            if ((((uVar12 == 0) ||
                 (plVar16 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                      ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0))
                || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
               (*(uint *)(plVar16 + 0x46) != uVar12)) {
              plVar16 = (long *)0x0;
            }
            if (*(int *)(lVar9 + 0x288) != 1 && *(int *)(lVar9 + 0x288) != -1) {
LAB_018a0c40:
              uVar12 = 0;
              if (plVar16 != (long *)0x0) goto LAB_018a0c58;
              goto LAB_018a0b50;
            }
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar9 = *(long *)puVar4;
            iVar6 = (**(code **)(*plVar8 + 0x60))();
            if (iVar6 < 0x11) {
              uVar12 = 1;
            }
            else {
              uVar12 = *(uint *)(lVar9 + 0x5e8);
              if (4 < uVar12) goto LAB_018a0c40;
              uVar12 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
            }
            if (plVar16 == (long *)0x0) goto LAB_018a0b50;
LAB_018a0c58:
            if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb3fe8 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb3ff0);
            }
            uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb3fe8);
            if (((uVar12 & uVar7) != 1) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0))
            goto LAB_018a0b50;
            local_64 = local_64 + 1;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < *piVar14);
      }
      *(int *)(lVar10 + (long)iVar13 * 0x30 + 4) = local_64;
      iVar13 = iVar13 + 1;
    } while ((int)lVar11 != iVar13);
    uVar15 = *(uint *)(param_1 + 0x51);
    if (uVar15 != 0) {
      uVar7 = *(uint *)(param_1 + 0x54);
      uVar12 = 0;
      iVar13 = 0;
      if (uVar7 + 1 < uVar15) {
        iVar13 = uVar7 + 1;
      }
      do {
        lVar11 = param_1[0x52] + (long)(int)uVar12 * 0x30;
        if (*(int *)(lVar11 + 4) < *(int *)(lVar11 + 8)) {
          if ((uVar7 != uVar12) || (uVar7 + 1 == uVar15)) {
LAB_018a0d50:
            *(uint *)(param_1 + 0x54) = uVar12;
            return 1;
          }
          if (*(int *)(param_1[0x52] + (long)iVar13 * 0x30 + 8) < 1) {
            uVar12 = uVar7;
            goto LAB_018a0d50;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar15 != uVar12);
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)((long)param_1 + 0x27c) + 1;
  return 0;
}

