
void FUN_015109a8(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  
  puVar2 = PTR_DAT_04bb7d58;
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  iVar7 = (int)param_2;
  if (lVar6 == 0) {
    plVar8 = (long *)0x0;
    uVar10 = 0;
    goto LAB_01510abc;
  }
  if ((((iVar7 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8)
       , plVar8 == (long *)0x0)) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     ((int)plVar8[0x46] != iVar7)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_01510a7c;
      uVar10 = 0x101000100 >> (((ulong)*(uint *)(lVar6 + 0x5e8) & 7) << 3);
      uVar9 = (uint)uVar10;
    }
  }
  else {
LAB_01510a7c:
    uVar10 = 0;
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar10 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb7d50);
    if ((uVar10 & 1) == 0) {
      uVar9 = 0;
    }
    uVar10 = (ulong)uVar9;
  }
LAB_01510abc:
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7d58);
  }
  if ((plVar8 == (long *)0x0) ||
     (uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb7d50), (uVar5 & 1) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if ((uVar10 & 0xff) != 0) {
      iVar3 = iVar7;
    }
  }
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}

