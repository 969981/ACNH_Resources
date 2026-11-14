
void FUN_018a2b70(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar2 = *(uint *)(param_1 + 0x288);
  lVar8 = *(long *)(param_1 + 0x290);
  iVar5 = 0;
  uVar6 = 0;
  uVar11 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  while (uVar11 != uVar6) {
    uVar1 = uVar6;
    if (uVar2 <= uVar6) {
      uVar1 = 0;
    }
    iVar5 = *(int *)(lVar8 + (ulong)uVar1 * 0x30 + 0x10) + iVar5;
    if ((int)param_2 < iVar5) {
      uVar11 = uVar6;
      break;
    }
    uVar6 = uVar6 + 1;
    if (uVar2 == uVar6) {
      return;
    }
  }
  if (uVar11 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 == 0) {
      return;
    }
    uVar6 = param_2;
    if (*(uint *)(lVar8 + 0x10) <= param_2) {
      uVar6 = 0;
    }
    uVar6 = *(uint *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar6 * 4);
    if ((((uVar6 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar6)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        bVar4 = false;
      }
      else {
        uVar6 = *(uint *)(lVar8 + 0x5e8);
        if (4 < uVar6) goto LAB_018a2dec;
        bVar4 = (0x1aU >> (ulong)(uVar6 & 0x1f) & 1) == 0;
      }
    }
    else {
LAB_018a2dec:
      bVar4 = true;
    }
    if (plVar10 == (long *)0x0) {
      return;
    }
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
    if (bVar4 || ((uVar6 ^ 0xffffffff) & 1) != 0) {
      return;
    }
    FUN_006fb3d0(plVar10);
    lVar8 = *(long *)(param_1 + 0x290);
    if (*(uint *)(lVar8 + 0x10) <= param_2) {
      param_2 = 0;
    }
    goto LAB_018a2e50;
  }
  uVar6 = uVar11;
  if (uVar2 <= uVar11) {
    uVar6 = 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar8 + (ulong)uVar6 * 0x30 + 0x10);
  param_2 = (uVar1 - iVar5) + param_2;
  uVar2 = param_2;
  if (uVar1 <= param_2) {
    uVar2 = 0;
  }
  uVar6 = *(uint *)(*(long *)(lVar8 + (ulong)uVar6 * 0x30 + 0x18) + (long)(int)uVar2 * 4);
  if (((uVar6 == 0) ||
      (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                           ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
     (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar10 + 0x46) != uVar6)))) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      bVar4 = false;
    }
    else {
      uVar6 = *(uint *)(lVar8 + 0x5e8);
      if (4 < uVar6) goto LAB_018a2d70;
      bVar4 = (0x1aU >> (ulong)(uVar6 & 0x1f) & 1) == 0;
    }
  }
  else {
LAB_018a2d70:
    bVar4 = true;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bb3ff0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3ff0);
  }
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
  if (bVar4 || ((uVar6 ^ 0xffffffff) & 1) != 0) {
    return;
  }
  FUN_006fb3d0(plVar10);
  if (*(uint *)(param_1 + 0x288) <= uVar11) {
    uVar11 = 0;
  }
  lVar8 = *(long *)(param_1 + 0x290) + (ulong)uVar11 * 0x30;
  if (*(uint *)(lVar8 + 0x10) <= param_2) {
    param_2 = 0;
  }
LAB_018a2e50:
  *(undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)param_2 * 4) =
       *(undefined4 *)PTR_DAT_04bb3238;
  return;
}

