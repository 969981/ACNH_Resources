
undefined8 FUN_033ba354(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(param_1 + 0x6c);
  if (uVar8 == 0) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 0;
      goto joined_r0x033ba414;
    }
    uVar8 = *(uint *)(lVar6 + 0x5e8);
    if (uVar8 < 5) {
      uVar8 = 5U >> (ulong)(uVar8 & 0x1f) & 1;
      goto joined_r0x033ba414;
    }
  }
  uVar8 = 1;
joined_r0x033ba414:
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bb2e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2e60);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb2e58);
  if ((int)lVar6 != 1) {
    uVar8 = 1;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (uVar8 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x70) == 4) {
    lVar6 = *(long *)puVar1;
    uVar8 = *(uint *)(param_1 + 0x6c);
    if (((uVar8 == 0) ||
        (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
       (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    iVar2 = *(int *)(lVar6 + 0x288);
    if ((iVar2 == 1) || (iVar2 == -1)) {
      plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar3 + 0x60))();
    }
    if (((*PTR_DAT_04bbfcf8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbfcf8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bbfcf0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfcf8);
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbfcf0);
    uVar4 = FUN_01a2da60(plVar7);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x70) - 5U < 4) {
    uVar5 = FUN_02b40868(*(long *)PTR_DAT_04bb5008 + 0x2680);
    return uVar5;
  }
  return 1;
}

