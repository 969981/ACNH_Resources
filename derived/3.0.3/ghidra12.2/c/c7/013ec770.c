
undefined4 FUN_013ec770(uint *param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  uVar10 = *param_1;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    pbVar2 = PTR_DAT_04bbc7b8;
    if (iVar5 < 0x11) {
      uVar10 = 0;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_013ec830;
      uVar10 = 5U >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013ec830:
    uVar10 = 1;
    pbVar2 = PTR_DAT_04bbc7b8;
  }
  if (plVar9 == (long *)0x0) {
    PTR_DAT_04bbc7b8 = pbVar2;
    return 0;
  }
  lVar8 = plVar9[0x2a];
  PTR_DAT_04bbc7b8 = pbVar2;
  if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar2), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc7b8);
  }
  puVar4 = PTR_DAT_04bbc7b0;
  uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbc7b0);
  if ((int)lVar8 != 1) {
    uVar10 = 1;
  }
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (uVar10 != 0) {
    return 0;
  }
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    return 0;
  }
  uVar10 = *param_1;
  if (((uVar10 == 0) ||
      (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                          ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
     (((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
    plVar9 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x013ec928;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013ec928;
    }
  }
  uVar10 = 0;
joined_r0x013ec928:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar8 = plVar9[0x2a];
  if (((*pbVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc7b8);
  }
  uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bbc7b0);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)((long)plVar9 + 0x294);
}

