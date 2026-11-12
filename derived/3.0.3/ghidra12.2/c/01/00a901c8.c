
undefined4 FUN_00a901c8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  uVar6 = 0;
  if (lVar7 != 0) {
    uVar6 = *(uint *)(param_1 + 0x653e8);
    if ((((uVar6 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar6)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar10 = 1;
        uVar6 = 1;
      }
      else {
        uVar6 = *(uint *)(lVar7 + 0x5e8);
        if (4 < uVar6) goto LAB_00a90298;
        uVar10 = 0x1aU >> (ulong)(uVar6 & 0x1f) & 1;
        uVar6 = (uint)(0x101000100 >> (((ulong)uVar6 & 7) << 3)) & 1;
      }
    }
    else {
LAB_00a90298:
      uVar10 = 0;
      uVar6 = 0;
    }
    if (plVar9 != (long *)0x0) {
      if (((*PTR_DAT_04bb3328 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3328), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3320 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3328);
      }
      uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3320);
      if ((uVar5 & 1) != 0) {
        if (uVar10 == 0) {
          return 0;
        }
        *(undefined1 *)((long)plVar9 + 0x771) = 1;
        return 1;
      }
      uVar6 = 0;
      uVar8 = 1;
      goto LAB_00a90300;
    }
  }
  uVar8 = 0;
LAB_00a90300:
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar8;
  }
  return uVar1;
}

