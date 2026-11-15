
undefined4 FUN_01f5ea70(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined *local_40;
  char *pcStack_38;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    uVar2 = *(uint *)(param_1 + 0x136e4);
    if ((((uVar2 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar2)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        if (*(uint *)(lVar8 + 0x5e8) < 5) {
          uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fe0);
      }
      uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fd8);
      uVar1 = 0;
      if ((int)lVar8 == 1) {
        uVar1 = uVar2;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        iVar4 = (int)plVar9[0x57];
        if (iVar4 == 0x280) {
          return 0;
        }
        if (iVar4 == 0x286) {
          return 0;
        }
        if (iVar4 == 0x283) {
          return 1;
        }
      }
    }
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "ReserveWarningBee";
    iVar4 = FUN_021991a0(&DAT_053fe348 + (ulong)uVar2 * 0xba0,&local_40);
    uVar7 = 1;
    if (iVar4 == 0) {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 2;
  }
  return uVar7;
}

