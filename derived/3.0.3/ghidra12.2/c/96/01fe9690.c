
undefined8 FUN_01fe9690(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return 0;
  }
  uVar13 = *param_2;
  if ((((uVar13 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar13)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar13 = 1;
      goto joined_r0x01fe9750;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fe9750;
    }
  }
  uVar13 = 0;
joined_r0x01fe9750:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      plVar7 = plVar11 + 0x7c;
      plVar14 = *(long **)(param_1 + 8);
      (**(code **)(plVar11[0x7c] + 0x18))(plVar7);
      (**(code **)(plVar11[0x7c] + 0x18))(plVar7);
      lVar10 = plVar11[0x7d];
      (**(code **)(*plVar14 + 0x18))(plVar14);
      if (lVar10 != plVar14[1]) {
        uVar8 = 0;
        bVar3 = true;
        do {
          if (*(char *)(plVar11[0x7d] + uVar8) != *(char *)(plVar14[1] + uVar8)) break;
          if (*(char *)(plVar11[0x7d] + uVar8) == '\0') {
            if (bVar3) {
              return 0;
            }
            break;
          }
          bVar3 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
        puVar12 = (undefined8 *)plVar11[0x77];
        if (((*PTR_DAT_04bb7480 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7480);
        }
        if ((puVar12 != (undefined8 *)0x0) &&
           (uVar8 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb7478), (uVar8 & 1) != 0)) {
          uVar5 = FUN_0376baa0(*(undefined8 *)(param_1 + 8));
          uVar6 = FUN_0376baa0(plVar7);
          uVar9 = FUN_03770130(uVar5,uVar6);
          return uVar9;
        }
      }
    }
  }
  return 0;
}

