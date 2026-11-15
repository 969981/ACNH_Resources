
undefined8 FUN_020e4178(int *param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar9)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x020e4234;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020e4234;
    }
  }
  uVar9 = 0;
joined_r0x020e4234:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    if ((uVar9 & uVar3) == 1) {
      puVar8 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb70b8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb70b8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb70b0 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb70b8);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb70b0), (uVar5 & 1) != 0)) &&
         (*(int *)(puVar8 + 0x15e7) == *param_1)) {
        return 1;
      }
    }
  }
  return 0;
}

