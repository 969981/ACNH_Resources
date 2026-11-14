
void FUN_016b6040(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar9 = *param_1;
  if ((uVar9 != 0) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8))
    ;
    if ((plVar8 == (long *)0x0) ||
       (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_016b6100;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016b6100:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = plVar8[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        puVar7 = (undefined8 *)plVar8[0x77];
        if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb9a60);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb9a58), (uVar5 & 1) != 0)) {
          FUN_01f09970(puVar7,param_2);
        }
      }
    }
  }
  uVar9 = param_1[7];
  if ((uVar9 != 0) && (lVar6 = *(long *)puVar2, lVar6 != 0)) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8))
    ;
    if ((plVar8 == (long *)0x0) ||
       (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_016b6230;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016b6230:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar6 = plVar8[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        puVar7 = (undefined8 *)plVar8[0x77];
        if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb9a60);
        }
        if ((puVar7 != (undefined8 *)0x0) &&
           (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb9a58), (uVar5 & 1) != 0)) {
          FUN_01f09970(puVar7,param_2);
        }
      }
    }
  }
  uVar9 = param_1[0xe];
  if (uVar9 == 0) {
    return;
  }
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x016b6364;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x016b6364;
    }
  }
  uVar9 = 0;
joined_r0x016b6364:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar7 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb9a60);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb9a58), (uVar5 & 1) != 0)) {
        FUN_01f09970(puVar7,param_2);
        return;
      }
    }
  }
  return;
}

