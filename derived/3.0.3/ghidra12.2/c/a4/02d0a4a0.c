
void FUN_02d0a4a0(long param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auStack_44 [2];
  undefined1 auStack_42 [2];
  
  if (*(long *)PTR_DAT_04bb4e28 == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0x927f8);
  FUN_037327a0(*(long *)PTR_DAT_04bb4e28,puVar1,param_2,1);
  uVar6 = FUN_02665700(param_2);
  if ((((uVar6 & 1) != 0) &&
      (uVar6 = FUN_02ce1534(param_1 + 0x926e8,0), puVar4 = PTR_DAT_04bb27c0, (uVar6 & 1) != 0)) &&
     (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 != 0)) {
    uVar10 = *puVar1;
    if (((uVar10 == 0) ||
        (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
       (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
      plVar9 = (long *)0x0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar4;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02d0a5b0;
        uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02d0a5b0:
      uVar10 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
      uVar3 = 0;
      if ((int)lVar8 == 1) {
        uVar3 = uVar10;
      }
      if (((uVar6 & 1) != 0) && (uVar3 != 0)) {
        FUN_03719b70(auStack_42,plVar9 + 0x7c,0);
        FUN_02cdc870(auStack_42,param_2);
      }
    }
  }
  param_2 = param_2 + 0x18;
  uVar6 = FUN_02665700(param_2);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar6 = FUN_02cd92f0(param_2);
  uVar2 = 3;
  if ((uVar6 & 1) == 0) {
    uVar2 = 4;
  }
  uVar6 = FUN_02ce1534(param_1 + 0x926e8,uVar2);
  puVar4 = PTR_DAT_04bb27c0;
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *puVar1;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02d0a70c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02d0a70c;
    }
  }
  uVar10 = 0;
joined_r0x02d0a70c:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar3 = 0;
    if ((int)lVar8 == 1) {
      uVar3 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar3 != 0)) {
      FUN_03719b70(auStack_44,plVar9 + 0x7c,1);
      FUN_02cdc870(auStack_44,param_2);
    }
  }
  return;
}

