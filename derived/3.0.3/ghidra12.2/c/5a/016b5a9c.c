
void FUN_016b5a9c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  uVar8 = *param_1;
  *(byte *)(param_1 + 0x15) = (byte)param_1[0x15] | 4;
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar8 != 0) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
    plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
    ;
    if ((plVar7 == (long *)0x0) ||
       (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_016b5b78;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016b5b78:
      uVar8 = 0;
    }
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
        plVar7 = (long *)plVar7[0x77];
        if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb9a60);
        }
        if (((plVar7 != (long *)0x0) &&
            (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb9a58), (uVar5 & 1) != 0)) &&
           ((*(ushort *)((long)plVar7 + 0xaf84) >> 1 & 1) != 0)) {
          (**(code **)(*plVar7 + 0x588))(plVar7);
        }
      }
    }
  }
  uVar8 = param_1[7];
  if ((uVar8 != 0) && (lVar6 = *(long *)puVar2, lVar6 != 0)) {
    plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
    ;
    if ((plVar7 == (long *)0x0) ||
       (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_016b5cc8;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016b5cc8:
      uVar8 = 0;
    }
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
        plVar7 = (long *)plVar7[0x77];
        if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb9a60);
        }
        if (((plVar7 != (long *)0x0) &&
            (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb9a58), (uVar5 & 1) != 0)) &&
           ((*(ushort *)((long)plVar7 + 0xaf84) >> 1 & 1) != 0)) {
          (**(code **)(*plVar7 + 0x588))(plVar7);
        }
      }
    }
  }
  uVar8 = param_1[0xe];
  if (uVar8 == 0) {
    return;
  }
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x016b5e1c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x016b5e1c;
    }
  }
  uVar8 = 0;
joined_r0x016b5e1c:
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
      plVar7 = (long *)plVar7[0x77];
      if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb9a60);
      }
      if (((plVar7 != (long *)0x0) &&
          (uVar5 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb9a58), (uVar5 & 1) != 0)) &&
         ((*(ushort *)((long)plVar7 + 0xaf84) >> 1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x016b5ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x588))(plVar7);
        return;
      }
    }
  }
  return;
}

