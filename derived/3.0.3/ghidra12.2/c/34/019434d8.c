
uint FUN_019434d8(long param_1)

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
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar11 = *(uint *)(param_1 + 8);
  if (uVar11 == 0) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    pbVar2 = PTR_DAT_04bb3fc8;
    if (iVar5 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_019435a0;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_019435a0:
    uVar11 = 0;
    pbVar2 = PTR_DAT_04bb3fc8;
  }
  if (plVar10 == (long *)0x0) {
    PTR_DAT_04bb3fc8 = pbVar2;
    return 0;
  }
  lVar9 = plVar10[0x2a];
  PTR_DAT_04bb3fc8 = pbVar2;
  if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar2), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3fc8);
  }
  puVar4 = PTR_DAT_04bb3fc0;
  uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fc0);
  uVar1 = 0;
  if ((int)lVar9 == 1) {
    uVar1 = uVar11;
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  if (uVar11 == 0) {
    return 0;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto LAB_019436a8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_019436a8;
    }
  }
  uVar11 = 0;
LAB_019436a8:
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3fc8);
  }
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fc0);
  uVar1 = 0;
  if ((int)lVar9 == 1) {
    uVar1 = uVar11;
  }
  return uVar6 & uVar1;
}

