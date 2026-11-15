
undefined8 FUN_0211efb8(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
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
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0211f07c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211f07c;
    }
  }
  uVar8 = 0;
joined_r0x0211f07c:
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    if ((uVar8 & uVar3) == 1) {
      plVar7 = (long *)plVar7[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bc2278), (uVar5 & 1) != 0)) {
        local_34 = *param_4;
        FUN_01e39778(plVar7[1],param_3,&local_34,0);
        (**(code **)(*plVar7 + 0x38))(plVar7,0x37,0,0);
        return 1;
      }
    }
  }
  return 0;
}

