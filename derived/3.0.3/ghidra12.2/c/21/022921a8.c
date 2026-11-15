
undefined8 FUN_022921a8(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (1 < param_3) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1ba) == '\0') {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *(uint *)PTR_DAT_04bba4b8;
  if ((((uVar9 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar9)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_02292290;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02292290:
    uVar9 = 0;
  }
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar7[0x2a];
  uVar8 = *(uint *)(plVar7 + 0x49);
  if (((*PTR_DAT_04bba4a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bba4a8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bba4a0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bba4a8);
  }
  uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bba4a0);
  if ((int)lVar6 != 1) {
    return 0;
  }
  if ((uVar3 & uVar9) == 0) {
    return 0;
  }
  if ((uVar8 >> 4 & 1) == 0) {
    return 0;
  }
  uVar9 = *(uint *)(plVar7 + (ulong)param_3 * 7 + 0x61);
  if (uVar9 == 0) {
    return 0;
  }
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    return 0;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar9)) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto LAB_022923a0;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto LAB_022923a0;
    }
  }
  uVar8 = 0;
LAB_022923a0:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    uVar3 = *(uint *)(plVar7 + 0x49);
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbe9d8);
    if ((int)lVar6 != 1) {
      return 0;
    }
    if ((uVar4 & uVar8) == 0) {
      return 0;
    }
    if ((uVar3 >> 4 & 1) == 0) {
      return 0;
    }
    if (*(int *)((long)plVar7 + 0x2a4) == 0) {
      lVar6 = plVar7[0xd];
      *param_2 = *(undefined4 *)(lVar6 + 0x278);
      param_2[1] = *(undefined4 *)(lVar6 + 0x27c);
      param_2[2] = *(undefined4 *)(lVar6 + 0x280);
      uVar10 = *(undefined4 *)((long)plVar7 + 0x2cc);
      param_2[4] = uVar9;
      param_2[3] = uVar10;
      return 1;
    }
  }
  return 0;
}

