
void FUN_016a8004(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  int local_18;
  int iStack_14;
  
  uVar13 = (ulong)param_1;
  uVar5 = FUN_016cf9f0();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb9a68 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar9 == 0) {
      iVar4 = 0;
      iVar7 = 0;
      iVar8 = 0x10;
      iVar10 = 0x10;
    }
    else {
      iVar4 = *(int *)(lVar9 + 0xd88);
      iVar7 = *(int *)(lVar9 + 0xd8c);
      iVar10 = *(int *)(lVar9 + 0xd98);
      iVar8 = *(int *)(lVar9 + 0xd9c);
    }
    iVar1 = iVar4;
    if (iVar10 <= iVar4) {
      iVar1 = iVar10;
    }
    if (iVar4 <= iVar10) {
      iVar4 = iVar10;
    }
    iVar10 = iVar7;
    if (iVar8 <= iVar7) {
      iVar10 = iVar8;
    }
    if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
    if (3 < param_1) {
      uVar13 = 0;
    }
    uVar5 = (ulong)param_2;
    if (3 < param_2) {
      uVar5 = 0;
    }
    local_18 = ((iVar4 - iVar1) - (&DAT_04102850)[uVar13]) + 1;
    iStack_14 = ((iVar7 - iVar10) - (&DAT_04102850)[uVar5]) + 1;
    FUN_016b6040(*(long *)PTR_DAT_04bb9a68,&local_18);
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar12 = *(uint *)PTR_DAT_04bb3958;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x016a817c;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x016a817c;
    }
  }
  uVar12 = 0;
joined_r0x016a817c:
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar13 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3928);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar12;
    }
    if (((uVar13 & 1) != 0) && (uVar2 != 0)) {
      FUN_020475d0(plVar11);
    }
  }
  return;
}

