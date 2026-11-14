
undefined8 FUN_014e9718(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar5 = param_1;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    uVar9 = *(uint *)(param_1 + 0x8c);
    if ((uVar9 == 0) ||
       (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
         ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      lVar5 = (**(code **)(*plVar4 + 0x60))();
      if ((int)lVar5 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014e97e0;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014e97e0:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      uVar1 = *(uint *)(plVar8 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      lVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
      if ((((int)lVar7 == 1) && (((uint)lVar5 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        uVar6 = FUN_0147ee58(plVar8);
        return uVar6;
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar8 = (long *)FUN_014ba988(param_1 + 0x90);
    lVar5 = 0;
    if (plVar8 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 0x50);
      goto LAB_014e9890;
    }
  }
  if ((*(int *)(param_1 + 0x18) != 3) ||
     (plVar8 = (long *)FUN_014e7558(lVar5,*(undefined4 *)(param_1 + 0x8c)), plVar8 == (long *)0x0))
  {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 0x350);
LAB_014e9890:
                    /* WARNING: Could not recover jumptable at 0x014e98a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*UNRECOVERED_JUMPTABLE)();
  return uVar6;
}

