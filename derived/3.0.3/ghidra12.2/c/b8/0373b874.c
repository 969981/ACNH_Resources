
void FUN_0373b874(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((param_5 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar8 = *param_2;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0373b93c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0373b93c;
    }
  }
  uVar8 = 0;
joined_r0x0373b93c:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar9 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb6728 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6728);
      }
      if (((puVar9 != (undefined8 *)0x0) &&
          (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6720), (uVar5 & 1) != 0)) &&
         ((0x3b < *(int *)(puVar9 + 0xef6) - 0x10U ||
          ((1L << ((ulong)(*(int *)(puVar9 + 0xef6) - 0x10U) & 0x3f) & 0x800100000000001U) == 0))))
      {
        local_24 = *param_4;
        FUN_01e39778(plVar7,param_3,&local_24,0);
      }
    }
  }
  return;
}

