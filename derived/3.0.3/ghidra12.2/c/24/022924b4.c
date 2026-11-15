
undefined8 FUN_022924b4(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (3 < param_3) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1ba) == '\0') {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar12 = *(uint *)PTR_DAT_04bba4b8;
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar8 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_022925a0;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_022925a0:
    uVar12 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  uVar11 = *(uint *)(plVar10 + 0x49);
  if (((*PTR_DAT_04bba4a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bba4a8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bba4a0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bba4a8);
  }
  uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bba4a0);
  puVar2 = PTR_DAT_04bb3350;
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar12) == 0) {
    return 0;
  }
  if ((uVar11 >> 4 & 1) == 0) {
    return 0;
  }
  uVar12 = *(uint *)((long)plVar10 + (ulong)param_3 * 0x18 + 0x364);
  if (uVar12 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(plVar10 + (ulong)param_3 * 3 + 0x6d);
  if (uVar11 == 0) {
    return 0;
  }
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return 1;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar8 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_022926cc;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_022926cc:
    uVar5 = 0;
  }
  puVar3 = PTR_DAT_04bbe9e0;
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar7 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe9d8);
    if ((((int)lVar9 == 1) && ((uVar6 & uVar5) != 0)) && ((uVar7 >> 4 & 1) != 0)) {
      lVar9 = plVar10[0xd];
      *param_2 = *(undefined4 *)(lVar9 + 0x278);
      param_2[1] = *(undefined4 *)(lVar9 + 0x27c);
      param_2[2] = *(undefined4 *)(lVar9 + 0x280);
      uVar13 = *(undefined4 *)((long)plVar10 + 0x2cc);
      param_2[5] = uVar11;
      param_2[3] = uVar13;
    }
  }
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return 1;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar9 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar8 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto LAB_022927e0;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_022927e0;
    }
  }
  uVar11 = 0;
LAB_022927e0:
  if (plVar10 == (long *)0x0) {
    return 1;
  }
  lVar9 = plVar10[0x2a];
  uVar5 = *(uint *)(plVar10 + 0x49);
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar4 != 0)) {
    *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe9e0);
  }
  uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbe9d8);
  if ((int)lVar9 != 1) {
    return 1;
  }
  if ((uVar7 & uVar11) == 0) {
    return 1;
  }
  if ((uVar5 >> 4 & 1) == 0) {
    return 1;
  }
  if ((float)param_2[3] < *(float *)((long)plVar10 + 0x2cc)) {
    param_2[3] = *(float *)((long)plVar10 + 0x2cc);
  }
  param_2[4] = uVar12;
  return 1;
}

