
void FUN_014edf50(long param_1,byte param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar5 = param_1;
  if ((*(int *)(param_1 + 0x18) == 1) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
    uVar8 = *(uint *)(param_1 + 0x8c);
    if ((uVar8 == 0) ||
       (((plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0 ||
         ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      lVar5 = (**(code **)(*plVar4 + 0x60))();
      if ((int)lVar5 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014ee01c;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014ee01c:
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0x2a];
      uVar1 = *(uint *)(plVar7 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      lVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
      if ((((int)lVar6 == 1) && (((uint)lVar5 & uVar8) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        *(byte *)(plVar7 + 0x14e) = (param_2 ^ 0xff) & 1;
        return;
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar7 = (long *)FUN_014ba988(param_1 + 0x90);
    lVar5 = 0;
    if (plVar7 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0xe8);
      goto LAB_014ee0c4;
    }
  }
  if ((*(int *)(param_1 + 0x18) != 3) ||
     (plVar7 = (long *)FUN_014e7558(lVar5,*(undefined4 *)(param_1 + 0x8c)), plVar7 == (long *)0x0))
  {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x3d8);
LAB_014ee0c4:
                    /* WARNING: Could not recover jumptable at 0x014ee0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar7,param_2 & 1);
  return;
}

