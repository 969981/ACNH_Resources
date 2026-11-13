
undefined8 FUN_014e4e14(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 8);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x014e4ed8;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014e4ed8;
    }
  }
  uVar9 = 0;
joined_r0x014e4ed8:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bbcf28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbcf28), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbcf20 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcf28);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbcf20);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      uVar6 = FUN_014cc6b4(plVar8,param_2,param_3);
      return uVar6;
    }
  }
  return 0;
}

