
void FUN_020b4d78(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  puVar5 = PTR_DAT_04bb27c0;
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  puVar11 = (uint *)(*(long *)(param_2 + 8) + -0x10);
  if (puVar11 == (uint *)0x0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return;
  }
  uVar15 = *puVar11;
  if ((((uVar15 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar15)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar15 = 1;
      goto joined_r0x020b4e54;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020b4e54;
    }
  }
  uVar15 = 0;
joined_r0x020b4e54:
  if (plVar13 != (long *)0x0) {
    lVar10 = plVar13[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar10 == 1) {
      uVar2 = uVar15;
    }
    if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
      puVar14 = (undefined8 *)plVar13[0x77];
      if (((*PTR_DAT_04bb6860 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6860);
      }
      if ((puVar14 != (undefined8 *)0x0) &&
         (uVar8 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bb6858), (uVar8 & 1) != 0)) {
        uVar8 = FUN_01e85650(puVar14);
        if ((uVar8 & 1) == 0) {
          FUN_01e84b84(puVar14,0);
          return;
        }
        piVar9 = (int *)(**(code **)(*(long *)(param_1 + 0x1f38) + 0xf0))(param_1 + 0x1f38);
        iVar6 = *piVar9;
        piVar9 = (int *)(**(code **)(*(long *)(param_1 + 0x1f68) + 0xf0))(param_1 + 0x1f68);
        iVar3 = *piVar9;
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar15 = *puVar11 ^ *puVar11 << 0xb;
        uVar2 = puVar11[3];
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        uVar15 = uVar15 >> 8 ^ uVar2 >> 0x13 ^ uVar15 ^ uVar2;
        puVar11[2] = uVar2;
        puVar11[3] = uVar15;
        piVar9 = (int *)(**(code **)(*(long *)(param_1 + 0x1f98) + 0xf0))(param_1 + 0x1f98);
        lVar10 = *(long *)(param_2 + 8);
        if (lVar10 != param_2) {
          lVar12 = lVar10 + -0x10;
          iVar4 = *piVar9;
          do {
            *(undefined4 *)(lVar12 + 4) = 3;
            iVar1 = 0;
            if (*(long *)(param_2 + 0xd0) != lVar12) {
              iVar1 = iVar4;
            }
            *(int *)(lVar12 + 8) =
                 iVar6 + (int)((ulong)uVar15 * (ulong)((iVar3 - iVar6) + 1) >> 0x20) + 1 + iVar1;
            lVar10 = *(long *)(lVar10 + 8);
            lVar12 = lVar10 + -0x10;
          } while (lVar12 != param_2 + -0x10);
        }
      }
    }
  }
  return;
}

