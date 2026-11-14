
void FUN_01815590(void)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_04bb27c0;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    return;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
  if (0xff < (uint)(int)sVar2) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x1a & 1) == 0) {
    return;
  }
  if ((*puVar1 >> 1 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 0;
      goto LAB_018156d0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto LAB_018156d0;
    }
  }
  uVar9 = 1;
LAB_018156d0:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb4b70);
    if ((int)lVar7 != 1) {
      uVar9 = 1;
    }
    if ((((uVar6 & 1) != 0) && (uVar9 == 0)) && (plVar8[0x54] != 0)) {
      *(undefined4 *)(plVar8[0x54] + 0x298) = 0;
    }
  }
  return;
}

