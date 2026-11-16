
undefined8 FUN_029512f0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return 0;
  }
  uVar15 = *(uint *)PTR_DAT_04bc3ab8;
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)PTR_DAT_04bb27c0;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar15 = 1;
      goto joined_r0x029513d4;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x029513d4;
    }
  }
  uVar15 = 0;
joined_r0x029513d4:
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0x2a];
    uVar3 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bc3a98 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3a98), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc3a90 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3a98);
    }
    uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bc3a90);
    puVar6 = PTR_DAT_04bc3b60;
    puVar5 = PTR_DAT_04bc3b58;
    puVar4 = PTR_DAT_04bb3238;
    if ((int)lVar12 != 1) {
      return 0;
    }
    if ((uVar8 & uVar15) == 0) {
      return 0;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      return 0;
    }
    lVar12 = 0;
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    puVar2 = PTR_DAT_04bbca00 + 0x10;
    do {
      puVar13 = (uint *)puVar4;
      if ((long *)plVar14[0x16] != plVar14 + 0x15) {
        lVar16 = (long)*(int *)((long)plVar14 + 0xbc);
        plVar9 = (long *)(plVar14[0x16] - lVar16);
        do {
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar2;
            __cxa_guard_release(puVar6);
          }
          if ((plVar9 != (long *)0x0) &&
             (uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar5), (uVar10 & 1) != 0)) {
            if (((int)lVar12 < (int)(uint)*(byte *)((long)plVar9 + 0x59a)) ||
               ((int)lVar12 <
                (int)((uint)*(byte *)((long)plVar9 + 0x59b) + (uint)*(byte *)((long)plVar9 + 0x59a))
               )) {
              puVar13 = (uint *)(plVar9 + lVar12 + 0x9f);
            }
            break;
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar16 + 8) - lVar16);
        } while (plVar9 != (long *)((long)(plVar14 + 0x15) - lVar16));
      }
      uVar15 = *puVar13;
      if ((uVar15 != 0) && (lVar16 = *(long *)PTR_DAT_04bb27c0, lVar16 != 0)) {
        plVar9 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                           ((ulong)(uVar15 >> 0x11) & 0x7ff8));
        if ((plVar9 == (long *)0x0) ||
           (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar15)))) {
          plVar9 = (long *)0x0;
        }
        if (*(int *)(lVar16 + 0x288) == 1 || *(int *)(lVar16 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar16 = *(long *)PTR_DAT_04bb27c0;
          iVar7 = (**(code **)(*plVar11 + 0x60))();
          if (iVar7 < 0x11) {
            uVar15 = 1;
          }
          else {
            if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_029515fc;
            uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_029515fc:
          uVar15 = 0;
        }
        if (plVar9 != (long *)0x0) {
          lVar16 = plVar9[0x2a];
          if (((*PTR_DAT_04bc3ab0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3ab0), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bc3aa8 = puVar1;
            __cxa_guard_release(PTR_DAT_04bc3ab0);
          }
          uVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bc3aa8);
          uVar3 = 0;
          if ((int)lVar16 == 1) {
            uVar3 = uVar15;
          }
          if ((((uVar10 & 1) != 0) && (uVar3 != 0)) &&
             (uVar10 = FUN_029466d8(plVar9,param_2 + 4,param_2 + 0x10,
                                    *(undefined1 *)(param_2 + 0x14)), (uVar10 & 1) != 0)) {
            return 1;
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x14);
  }
  return 0;
}

