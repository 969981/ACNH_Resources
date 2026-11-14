
undefined4 FUN_014e8b30(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    uVar9 = *(uint *)(param_1 + 0x8c);
    if ((uVar9 == 0) ||
       (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
         ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014e8bfc;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar8 != (long *)0x0) goto LAB_014e8c10;
      goto LAB_014e8c5c;
    }
LAB_014e8bfc:
    uVar9 = 0;
    if (plVar8 == (long *)0x0) goto LAB_014e8c5c;
LAB_014e8c10:
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
    if ((((int)lVar7 != 1) || ((uVar4 & uVar9) == 0)) || ((uVar1 >> 4 & 1) == 0)) goto LAB_014e8c5c;
    lVar7 = plVar8[0xd];
  }
  else {
LAB_014e8c5c:
    if ((*(int *)(param_1 + 0x98) != 0) &&
       (plVar8 = (long *)FUN_014ba988(param_1 + 0x90), plVar8 != (long *)0x0)) {
      puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0x20))();
      goto LAB_014e8dac;
    }
    puVar2 = PTR_DAT_04bb27c0;
    if (*(int *)(param_1 + 0x18) != 3) {
      return 0;
    }
    lVar7 = *(long *)PTR_DAT_04bb27c0;
    if (lVar7 == 0) {
      return 0;
    }
    uVar9 = *(uint *)(param_1 + 0x8c);
    if ((((uVar9 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014e8d3c;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014e8d3c:
      uVar9 = 0;
    }
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if ((int)lVar7 != 1) {
      return 0;
    }
    if ((uVar4 & uVar9) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    lVar7 = plVar8[0xd];
  }
  puVar6 = (undefined4 *)(lVar7 + 0x278);
LAB_014e8dac:
  return *puVar6;
}

