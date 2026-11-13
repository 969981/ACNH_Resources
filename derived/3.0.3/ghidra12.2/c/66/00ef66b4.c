
int FUN_00ef66b4(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 uVar11;
  byte bVar12;
  float fVar13;
  long *local_60;
  undefined1 local_58;
  byte local_57;
  undefined1 local_56;
  undefined1 local_55;
  
  uVar9 = *(undefined8 *)PTR_DAT_04bb30a0;
  fVar13 = (float)FUN_00a8c6ac(uVar9);
  puVar1 = PTR_DAT_04bb27c0;
  if (0.0 < fVar13) {
    return 6;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    uVar11 = 0;
    bVar12 = 0;
    bVar3 = false;
    plVar10 = (long *)0x0;
    goto LAB_00ef67e8;
  }
  uVar5 = *param_1;
  if ((((uVar5 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar5)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_00ef67b8;
      uVar11 = (undefined1)(0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3));
    }
  }
  else {
LAB_00ef67b8:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    bVar12 = 0;
    bVar3 = false;
  }
  else {
    bVar3 = (int)plVar10[0x2a] == 1;
    bVar12 = (byte)(*(uint *)(plVar10 + 0x49) >> 4) & 1;
  }
LAB_00ef67e8:
  puVar1 = PTR_DAT_04bb37d8;
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  puVar2 = PTR_DAT_04bb37d0;
  if ((plVar10 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0), (uVar7 & 1) != 0)) {
    local_55 = 0;
    local_60 = plVar10;
    local_58 = bVar3;
    local_57 = bVar12;
    local_56 = uVar11;
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)puVar2 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    if ((uVar7 & 1) == 0) {
      local_56 = 0;
    }
    if (((int)local_60[0xa0] == 0) && (iVar4 = FUN_021df120(&local_60), iVar4 - 1U < 4)) {
      return iVar4 + 1;
    }
  }
  uVar5 = FUN_00a86724(uVar9);
  if ((uVar5 & 0xfffffffc) == 4) {
    iVar4 = uVar5 - 2;
  }
  else if ((*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) == 0) ||
          (*(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x108) < 0.35)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  return iVar4;
}

