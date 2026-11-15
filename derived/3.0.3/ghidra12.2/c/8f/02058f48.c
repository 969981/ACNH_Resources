
/* WARNING: Type propagation algorithm not settling */

ulong FUN_02058f48(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uVar5 = FUN_02058d30(param_1,&local_40);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,param_2,PTR_DAT_04bb3238,1);
  puVar2 = PTR_DAT_04bb27c0;
  uVar3 = (uint)uVar5;
  if (uVar3 == 0) {
    return uVar5;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8);
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar3)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
      goto joined_r0x02059040;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02059040;
    }
  }
  uVar3 = 0;
joined_r0x02059040:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar3;
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    puVar9 = (undefined8 *)plVar8[0x77];
    if (((*PTR_DAT_04bb6988 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6988), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb6980 = PTR_DAT_04bb6990 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6988);
    }
    if ((puVar9 != (undefined8 *)0x0) &&
       (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6980), (uVar5 & 1) != 0)) {
      return (ulong)(*(int *)(puVar9[2] + 0x360) != 0x21);
    }
  }
  return 0;
}

