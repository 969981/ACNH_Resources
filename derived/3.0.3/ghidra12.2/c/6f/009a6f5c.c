
undefined8 FUN_009a6f5c(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (7 < *param_3) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar10 = *(uint *)PTR_DAT_04bb6090;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_009a703c;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_009a703c:
    uVar10 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar8[0x2a];
  if (((*PTR_DAT_04bb6038 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6038), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb6030 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6038);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb6030);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar5 = (ulong)*param_3;
  if (7 < uVar5) {
    return 0;
  }
  plVar4 = plVar8 + uVar5 * 0x34 + 0x4f;
  plVar9 = plVar4 + 0x1d;
  if ((short)*plVar4 == -2) {
    return 0;
  }
  lVar7 = uVar5 * 0x1a0 + 0x374;
  uVar6 = (**(code **)(*plVar9 + 0x28))
                    (plVar9,(long)plVar8 +
                            (ulong)(*(uint *)(plVar8 + uVar5 * 0x34 + 0x6e) & 1) * 0x18 + lVar7,
                     plVar4);
  if ((uVar6 & 1) == 0) {
    (**(code **)(*plVar9 + 0x28))
              (plVar9,(long)plVar8 +
                      (ulong)(*(uint *)(plVar8 + uVar5 * 0x34 + 0x6e) & 1 ^ 1) * 0x18 + lVar7,plVar4
              );
    return 0;
  }
  uVar10 = *(uint *)((long)plVar8 +
                    (ulong)(*(uint *)(plVar8 + uVar5 * 0x34 + 0x6e) & 1) * 0x18 + lVar7 + 0xc);
  if (uVar10 == 0) {
    return 0;
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto LAB_009a71f0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto LAB_009a71f0;
    }
  }
  uVar10 = 0;
LAB_009a71f0:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb4000 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4000), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3ff8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4000);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3ff8);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    lVar7 = plVar8[0xd];
    if (*(float *)(lVar7 + 0x2a0) != 0.0) {
      *(undefined4 *)param_2 = *(undefined4 *)(lVar7 + 0x278);
      *(undefined4 *)((long)param_2 + 4) = *(undefined4 *)(lVar7 + 0x27c);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar7 + 0x280);
      return 1;
    }
  }
  return 0;
}

