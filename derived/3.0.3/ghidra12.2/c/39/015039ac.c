
undefined8 FUN_015039ac(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    uVar10 = *param_1;
    if ((((uVar10 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar10)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar6 + 0x60))();
    }
  }
  puVar3 = PTR_DAT_04bb5928;
  if (((*PTR_DAT_04bb5928 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  puVar2 = PTR_DAT_04bb5920;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return 0;
  }
  uVar10 = *param_1;
  if (((uVar10 == 0) ||
      (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
     (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar10)))) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01503b30;
    }
    uVar10 = *(uint *)(lVar9 + 0x5e8);
    if (uVar10 < 5) {
      uVar10 = 0x1aU >> (ulong)(uVar10 & 0x1f) & 1;
      goto joined_r0x01503b30;
    }
  }
  uVar10 = 0;
joined_r0x01503b30:
  if (plVar11 != (long *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)puVar2 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar2);
    if ((uVar10 & uVar5) == 1) {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
        *(undefined **)puVar2 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
                    /* WARNING: Could not recover jumptable at 0x01503b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
      return uVar8;
    }
  }
  return 0;
}

