
void FUN_00c14c9c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  uVar3 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_1,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  if ((((uVar3 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8),
       plVar8 == (long *)0x0)) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar3)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x00c14d6c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00c14d6c;
    }
  }
  uVar3 = 0;
joined_r0x00c14d6c:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar3;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar9 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb4120 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4120), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb4118 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4120);
      }
      if (((puVar9 != (undefined8 *)0x0) &&
          (uVar6 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb4118), (uVar6 & 1) != 0)) &&
         (puVar9[0x1549] != 0)) {
        FUN_0215d38c();
        return;
      }
    }
  }
  return;
}

