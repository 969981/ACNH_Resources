
undefined4 FUN_03152eac(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(int *)(param_1 + 0x288) - 6U < 3) {
    return 2;
  }
  if ((*(long *)PTR_DAT_04bb39b0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    return 3;
  }
  if (*(char *)(param_1 + 0x230) == '\0') {
    return 3;
  }
  if (*(int *)(param_1 + 0x234) != 1) {
    return 3;
  }
  param_1 = param_1 + 0x1f8;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MainmenuCamera1stPersonView";
  iVar2 = FUN_0274bce0(param_1,&local_40);
  puVar1 = PTR_DAT_04bb27c0;
  if (iVar2 == 0) {
    return 4;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 5;
  }
  uVar9 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x03153008;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03153008;
    }
  }
  uVar9 = 0;
joined_r0x03153008:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    if (((uVar9 & uVar3) == 1) && (uVar5 = FUN_008fda58(plVar8), (uVar5 & 1) != 0)) {
      uVar5 = FUN_00901910(plVar8);
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_0252f180(param_1);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar5 = FUN_02544fa4(param_1);
        if ((uVar5 & 1) == 0) {
          return 9;
        }
        uVar5 = FUN_02553884(10,param_1,0,1);
        if ((uVar5 & 1) == 0) {
          return 8;
        }
      }
      uVar5 = FUN_00a738a0(param_1,0);
      uVar6 = 7;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
  return 5;
}

