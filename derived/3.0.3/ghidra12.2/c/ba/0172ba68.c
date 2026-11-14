
void FUN_0172ba68(long param_1,uint *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  byte local_34 [4];
  
  puVar4 = PTR_DAT_04bb37d8;
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    plVar10 = (long *)0x0;
    uVar12 = 0;
    bVar1 = *PTR_DAT_04bb37d8;
  }
  else {
    uVar11 = *param_2;
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (iVar6 < 0x11) {
        uVar12 = 1;
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0172bb58;
        uVar12 = 0x101000100 >> (((ulong)*(uint *)(lVar9 + 0x5e8) & 7) << 3);
        uVar11 = (uint)uVar12;
      }
    }
    else {
LAB_0172bb58:
      uVar12 = 0;
      uVar11 = 0;
    }
    if (plVar10 != (long *)0x0) {
      bVar5 = (int)plVar10[0x2a] == 1;
      uVar2 = *(uint *)(plVar10 + 0x49) >> 4 & 1;
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar12 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
      if ((uVar12 & 1) == 0) {
        uVar11 = 0;
      }
      uVar12 = (ulong)uVar11;
      bVar1 = *puVar4;
      goto joined_r0x0172bba0;
    }
    bVar1 = *puVar4;
  }
  bVar5 = false;
  uVar2 = 0;
joined_r0x0172bba0:
  if (((bVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((((plVar10 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0), (uVar8 & 1) != 0)) &&
      (bVar5)) && (((uVar12 & 0xff) != 0 && (uVar2 != 0)))) {
    local_34[0] = *(byte *)(param_1 + 0x188);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    FUN_01e3dd94(plVar10,param_3,local_34);
  }
  return;
}

