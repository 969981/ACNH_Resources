
bool FUN_01a18a90(int *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined **local_70;
  int **ppiStack_68;
  undefined8 local_60;
  int *local_38;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (param_1 == (int *)0x0) {
    return false;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return false;
  }
  uVar9 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar9 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar9)) {
    plVar7 = (long *)0x0;
  }
  local_38 = param_1;
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x01a18c44;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01a18c44;
    }
  }
  uVar9 = 0;
joined_r0x01a18c44:
  if (plVar7 == (long *)0x0) {
    return false;
  }
  lVar5 = plVar7[0x2a];
  if (((*PTR_DAT_04bb4b78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4b78);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb4b70);
  uVar10 = 0;
  if ((int)lVar5 == 1) {
    uVar10 = uVar9;
  }
  if ((uVar4 & 1) == 0) {
    return false;
  }
  if (uVar10 == 0) {
    return false;
  }
  ppiStack_68 = &local_38;
  local_70 = &PTR_FUN_049fa5a0;
  lVar5 = plVar7[0x54];
  if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x288), iVar2 != 0)) {
    lVar5 = *(long *)(lVar5 + 0x290);
    iVar8 = 0;
    local_60 = param_2;
    do {
      lVar6 = lVar5 + (long)iVar8 * 0x30;
      uVar9 = *(uint *)(lVar6 + 0x10);
      if (uVar9 != 0) {
        lVar6 = *(long *)(lVar6 + 0x18);
        uVar10 = 0;
        do {
          (*(code *)*local_70)(&local_70,lVar6 + ((long)((ulong)uVar10 << 0x20) >> 0x1e));
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  return *local_38 != 0;
}

