
undefined8 FUN_0084d204(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar8 = *(uint *)(param_1 + 0x234);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0084d2c0;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0084d2c0;
    }
  }
  uVar8 = 0;
joined_r0x0084d2c0:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb55f0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb55f0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb55e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb55f0);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb55e8);
    if ((uVar4 & 1) != 0) {
      uVar8 = uVar8 ^ 1;
      if ((int)lVar6 != 1) {
        uVar8 = 1;
      }
      if ((uVar8 == 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b)) {
        uVar5 = FUN_00859f60(plVar7,*(undefined4 *)(param_1 + 0x178),
                             *(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x230));
        return uVar5;
      }
    }
  }
  return 0;
}

