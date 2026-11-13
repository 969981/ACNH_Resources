
long FUN_014ba988(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
  case 4:
  case 5:
    return param_1 + 0x10;
  case 2:
    lVar6 = *(long *)PTR_DAT_04bb27c0;
    if (lVar6 == 0) {
      return 0;
    }
    uVar8 = *(uint *)(param_1 + 0x10);
    if (((uVar8 == 0) ||
        (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                            ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
       (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar5 + 0x60))();
      if (iVar2 < 0x11) {
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar6 + 0x5e8);
        if (4 < uVar8) goto LAB_014bab10;
        uVar8 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
      }
    }
    else {
LAB_014bab10:
      uVar8 = 0;
    }
    if (plVar7 == (long *)0x0) {
switchD_014ba9bc_default:
      return 0;
    }
    iVar2 = (int)plVar7[0x2a];
    uVar9 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb59a0 & 1) != 0) ||
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar4 == 0)) goto LAB_014bab98;
    *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
    break;
  case 3:
    lVar6 = *(long *)PTR_DAT_04bb27c0;
    if (lVar6 == 0) {
      return 0;
    }
    uVar8 = *(uint *)(param_1 + 0x10);
    if ((((uVar8 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar5 + 0x60))();
      if (iVar2 < 0x11) {
        uVar8 = 1;
      }
      else {
        uVar8 = *(uint *)(lVar6 + 0x5e8);
        if (4 < uVar8) goto LAB_014bab1c;
        uVar8 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
      }
    }
    else {
LAB_014bab1c:
      uVar8 = 0;
    }
    if (plVar7 == (long *)0x0) {
      return 0;
    }
    iVar2 = (int)plVar7[0x2a];
    uVar9 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bb59a0 & 1) != 0) ||
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb59a0), iVar4 == 0)) goto LAB_014bab98;
    *(undefined **)PTR_DAT_04bb5998 = PTR_DAT_04bb2e50 + 0x10;
    break;
  default:
    goto switchD_014ba9bc_default;
  }
  __cxa_guard_release(PTR_DAT_04bb59a0);
LAB_014bab98:
  uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5998);
  if (iVar2 != 1) {
    return 0;
  }
  if ((uVar3 & uVar8) == 0) {
    return 0;
  }
  if ((uVar9 >> 4 & 1) == 0) {
    return 0;
  }
  return plVar7[0x193];
}

