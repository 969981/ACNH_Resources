
undefined8 FUN_01970940(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  if (param_2 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar9 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar9 = 1;
      goto joined_r0x01970a0c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01970a0c;
    }
  }
  uVar9 = 0;
joined_r0x01970a0c:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb4b70);
    if (((uVar9 & uVar3) == 1) && ((char)plVar8[0x7e] != '\0')) {
      uVar5 = FUN_01a09360(plVar8 + 0x55,param_2,param_3);
      if (((uVar5 & 1) == 0) &&
         (uVar5 = FUN_01a09360(plVar8 + 0x7f,param_2,param_3), (uVar5 & 1) == 0)) {
        uVar6 = FUN_01a09360(plVar8 + 0xa8,param_2,param_3);
        return uVar6;
      }
      return 1;
    }
  }
  return 0;
}

