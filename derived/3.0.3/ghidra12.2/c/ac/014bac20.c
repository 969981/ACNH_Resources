
long * FUN_014bac20(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 8) == 3) {
    lVar4 = *(long *)PTR_DAT_04bb27c0;
    if (lVar4 == 0) goto LAB_014bada4;
    uVar6 = *(uint *)(param_1 + 0x10);
    if ((((uVar6 == 0) ||
         (plVar5 = *(long **)(*(long *)(*(long *)(lVar4 + 0x1c0) + 8) +
                             ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar5 == (long *)0x0)) ||
        ((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar5 + 0x46) != uVar6)) {
      plVar5 = (long *)0x0;
    }
    if (*(int *)(lVar4 + 0x288) == 1 || *(int *)(lVar4 + 0x288) == -1) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar4 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      if (iVar2 < 0x11) {
        uVar7 = 1;
        uVar6 = 1;
      }
      else {
        uVar6 = *(uint *)(lVar4 + 0x5e8);
        if (4 < uVar6) goto LAB_014bae08;
        uVar7 = 0x101000100 >> (((ulong)uVar6 & 7) << 3);
        uVar6 = (uint)uVar7;
      }
    }
    else {
LAB_014bae08:
      uVar7 = 0;
      uVar6 = 0;
    }
    if (plVar5 == (long *)0x0) {
      uVar8 = 0;
      uVar9 = 0;
      goto LAB_014bae7c;
    }
    uVar9 = *(uint *)(plVar5 + 0x49);
    uVar8 = (uint)((int)plVar5[0x2a] == 1);
    if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
      goto LAB_014baecc;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 2) {
      return (long *)0x0;
    }
    lVar4 = *(long *)PTR_DAT_04bb27c0;
    if (lVar4 == 0) {
LAB_014bada4:
      uVar9 = 0;
      plVar5 = (long *)0x0;
      uVar8 = 0;
      uVar7 = 0;
      goto LAB_014bae7c;
    }
    uVar6 = *(uint *)(param_1 + 0x10);
    if (((uVar6 == 0) ||
        (plVar5 = *(long **)(*(long *)(*(long *)(lVar4 + 0x1c0) + 8) +
                            ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar5 == (long *)0x0)) ||
       (((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar5 + 0x46) != uVar6)))) {
      plVar5 = (long *)0x0;
    }
    if (*(int *)(lVar4 + 0x288) == 1 || *(int *)(lVar4 + 0x288) == -1) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar4 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      if (iVar2 < 0x11) {
        uVar7 = 1;
        uVar6 = 1;
      }
      else {
        uVar6 = *(uint *)(lVar4 + 0x5e8);
        if (4 < uVar6) goto LAB_014badb4;
        uVar7 = 0x101000100 >> (((ulong)uVar6 & 7) << 3);
        uVar6 = (uint)uVar7;
      }
    }
    else {
LAB_014badb4:
      uVar7 = 0;
      uVar6 = 0;
    }
    if (plVar5 == (long *)0x0) {
      uVar9 = 0;
      uVar8 = 0;
      goto LAB_014bae7c;
    }
    uVar9 = *(uint *)(plVar5 + 0x49);
    uVar8 = (uint)((int)plVar5[0x2a] == 1);
    if (((*PTR_DAT_04bb59a0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
LAB_014baecc:
      __cxa_guard_release(PTR_DAT_04bb59a0);
    }
  }
  uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb5998);
  uVar9 = uVar9 >> 4 & 1;
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  uVar7 = (ulong)uVar6;
LAB_014bae7c:
  uVar6 = 0;
  if (plVar5 != (long *)0x0) {
    uVar6 = uVar8;
  }
  uVar8 = 0;
  if ((uVar7 & 0xff) != 0) {
    uVar8 = uVar6;
  }
  if ((uVar8 & uVar9) == 0) {
    plVar5 = (long *)0x0;
  }
  return plVar5;
}

