
ulong FUN_0252cc58(uint *param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  byte local_54 [4];
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0xffffffff;
  }
  uVar11 = *param_1;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    pbVar2 = PTR_DAT_04bb3760;
    if (iVar5 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0252cd1c;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0252cd1c:
    uVar11 = 0;
    pbVar2 = PTR_DAT_04bb3760;
  }
  if (plVar10 == (long *)0x0) {
    PTR_DAT_04bb3760 = pbVar2;
    return 0xffffffff;
  }
  lVar9 = plVar10[0x2a];
  uVar1 = *(uint *)(plVar10 + 0x49);
  PTR_DAT_04bb3760 = pbVar2;
  if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar2), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3760);
  }
  puVar4 = PTR_DAT_04bb3758;
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3758);
  if ((int)lVar9 != 1) {
    return 0xffffffff;
  }
  if ((uVar6 & uVar11) == 0) {
    return 0xffffffff;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0xffffffff;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return 0xffffffff;
  }
  uVar11 = *param_1;
  if (((uVar11 == 0) ||
      (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
     (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar10 + 0x46) != uVar11)))) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0252ce30;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252ce30;
    }
  }
  uVar11 = 0;
joined_r0x0252ce30:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar5 != 0)) {
      *(undefined **)puVar4 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3758);
    if ((int)lVar9 != 1) {
      return 0xffffffff;
    }
    if ((uVar6 & uVar11) == 0) {
      return 0xffffffff;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0xffffffff;
    }
    lVar9 = plVar10[0x53];
    if (lVar9 == 0) {
      return 0xffffffff;
    }
    if (*(int *)(lVar9 + 0x5f40) - 2U < 2) {
      return (ulong)*(uint *)(lVar9 + 0x5f48);
    }
    if (*(int *)(lVar9 + 0x5f40) == 1) {
      local_54[0] = *(byte *)(lVar9 + 0x5f44);
      if (7 < local_54[0]) {
        local_54[0] = 0xff;
      }
      uVar8 = FUN_02582fe0(local_54);
      if ((int)uVar8 != -1) {
        return uVar8;
      }
    }
  }
  return 0xffffffff;
}

