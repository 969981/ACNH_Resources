
undefined8 FUN_008ce460(long *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_55;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(char *)param_1[1] == '\0') {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar6 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar6 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar6)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_008ce544;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008ce544:
    uVar6 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar11[0x2a];
  uVar2 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3278);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar6) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  local_90 = 0;
  local_98 = 0x3a63704e00000040;
  lVar10 = 0;
  lVar9 = (long)&local_98 + 4;
  local_55 = 0;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    if (*(char *)((long)&local_98 + lVar10 + 4) == '\0') goto LAB_008ce61c;
    if (*(char *)((long)&local_98 + lVar10 + 5) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_008ce61c;
    }
    if (*(char *)((long)&local_98 + lVar10 + 6) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_008ce61c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_008ce61c:
  uVar6 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  lStack_a0 = lVar9;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar10 = 0;
  do {
    if (*(char *)(param_1[1] + lVar10) == '\0') goto LAB_008ce67c;
    lVar1 = param_1[1] + lVar10;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_008ce67c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_008ce67c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_008ce67c:
  uVar2 = (uint)lVar10;
  if ((int)((int)local_98 - uVar6) <= (int)(uint)lVar10) {
    uVar2 = (int)local_98 + ~uVar6;
  }
  if (0 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy((void *)(lVar9 + (ulong)uVar6),(void *)param_1[1],(ulong)uVar2);
    *(undefined1 *)(lVar9 + (int)(uVar2 + uVar6)) = 0;
  }
  uVar8 = FUN_008fa0e0(plVar11,&local_a8,0,*(undefined4 *)PTR_DAT_04bb3238,
                       *(undefined4 *)PTR_DAT_04bb3238);
  uVar6 = (uint)uVar8;
  if (uVar6 == 0) {
    return uVar8;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return 0;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar6 >> 0x14) * 8);
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar6)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
      goto LAB_008ce788;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_008ce788;
    }
  }
  uVar6 = 0;
LAB_008ce788:
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar11[0x2a];
  uVar2 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar6) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  lVar9 = plVar11[0xd];
  *param_2 = *(undefined4 *)(lVar9 + 0x278);
  param_2[1] = *(undefined4 *)(lVar9 + 0x27c);
  param_2[2] = *(undefined4 *)(lVar9 + 0x280);
  return 1;
}

