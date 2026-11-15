
void FUN_01ea72c8(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined2 local_34;
  undefined1 local_32;
  
  puVar3 = PTR_DAT_04bb27c0;
  puVar1 = (uint *)(param_1 + 0x7d70);
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_01ea74a8;
  uVar9 = *puVar1;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01ea7388;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01ea7388:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar2 = *(uint *)PTR_DAT_04bb3238;
    *puVar1 = uVar2;
    if ((int)lVar7 != 1) {
      return;
    }
    if ((uVar5 & uVar9) == 0) {
      return;
    }
    *(uint *)(plVar8[0x77] + 0x7d70) = uVar2;
    uVar9 = *(uint *)(plVar8 + 0xa1);
    if (9 < uVar9) {
      return;
    }
    if ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] == '\0') {
      return;
    }
    lVar7 = (ulong)uVar9 * 0xba0;
    (&DAT_053fe830)[(ulong)uVar9 * 0x2e8] = 0;
    *(undefined2 *)(&DAT_053fe834 + lVar7) = 0;
    (&DAT_053fe83a)[lVar7] = 0;
    (&DAT_053fe83c)[lVar7] = 0;
    *(undefined4 *)(&DAT_053febe0 + lVar7) = 0xffffffff;
    *(undefined4 *)(&DAT_053fe836 + lVar7) = 0x101;
    (&DAT_053febe4)[lVar7] = 0xff;
    FUN_0219be30(&DAT_053fe348 + lVar7);
    local_40 = (&DAT_053fee40)[lVar7];
    local_3f = 0;
    local_3c = 0;
    uStack_38 = 0;
    local_32 = 0;
    local_34 = 0xff00;
    if (DAT_053d0d10 < 0) {
      return;
    }
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0d10,&uStack_38,&local_40,8,0);
    return;
  }
LAB_01ea74a8:
  *puVar1 = *(uint *)PTR_DAT_04bb3238;
  return;
}

