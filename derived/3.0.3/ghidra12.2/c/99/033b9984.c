
undefined8 FUN_033b9984(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_2 + 0x70) == 3) {
    lVar6 = *(long *)PTR_DAT_04bb27c0;
    if (lVar6 == 0) {
      return 0;
    }
    uVar9 = *(uint *)(param_2 + 0x6c);
    if ((((uVar9 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 0;
        goto joined_r0x033b9b9c;
      }
      if (*(uint *)(lVar6 + 0x5e8) < 5) {
        uVar9 = 5U >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
        goto joined_r0x033b9b9c;
      }
    }
    uVar9 = 1;
joined_r0x033b9b9c:
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc99b8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc99b0);
    if ((int)lVar6 != 1) {
      uVar9 = 1;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar9 == 0) {
      FUN_0368de40(param_1,plVar8);
      return 1;
    }
    return 0;
  }
  if (*(int *)(param_2 + 0x70) != 1) {
    lVar6 = *(long *)PTR_DAT_04bb27c0;
    if (lVar6 == 0) {
      return 0;
    }
    uVar9 = *(uint *)(param_2 + 0x6c);
    if ((((uVar9 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 0;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_033b9ba4;
        uVar9 = 5U >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_033b9ba4:
      uVar9 = 1;
    }
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2e60);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb2e58);
    if ((int)lVar6 != 1) {
      uVar9 = 1;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar9 != 0) {
      return 0;
    }
    plVar8 = (long *)plVar8[0xd];
    pcVar7 = *(code **)(*plVar8 + 0x178);
    goto LAB_033b9d00;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_2 + 0x6c);
  if (((uVar9 == 0) ||
      (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                          ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
     (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_033b9b8c;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_033b9b8c:
    uVar9 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar8[0x2a];
  if (((*PTR_DAT_04bb2e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2e60);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb2e58);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar9;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  plVar8 = (long *)plVar8[0xc];
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  if (((*PTR_DAT_04bb37b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37b8);
  }
  uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37b0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  pcVar7 = *(code **)(*plVar8 + 0x4e0);
LAB_033b9d00:
  (*pcVar7)(param_1,plVar8);
  return 1;
}

