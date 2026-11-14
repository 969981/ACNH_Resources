
void FUN_014ee818(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  lVar6 = param_2;
  if (((DAT_051f0ee0 & 1) == 0) && (lVar6 = __cxa_guard_acquire(&DAT_051f0ee0), (int)lVar6 != 0)) {
    DAT_051f0ed0 = PTR_DAT_04bb2e18 + 0x10;
    DAT_051f0ed8 = 0x100000001;
    lVar6 = __cxa_guard_release(&DAT_051f0ee0);
  }
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_2 + 0x18) != 1) || (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 == 0))
  goto LAB_014ee968;
  uVar9 = *(uint *)(param_2 + 0x8c);
  if ((uVar9 == 0) ||
     (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
       ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    lVar6 = (**(code **)(*plVar5 + 0x60))();
    if ((int)lVar6 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_014ee8f4;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014ee8f4:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb5920);
    if ((((int)lVar7 == 1) && (((uint)lVar6 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      FUN_01473944(param_1,plVar8);
      return;
    }
  }
LAB_014ee968:
  if (*(int *)(param_2 + 0x98) != 0) {
    plVar8 = (long *)FUN_014ba988(param_2 + 0x90);
    lVar6 = 0;
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014ee998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x38))(param_1);
      return;
    }
  }
  if ((*(int *)(param_2 + 0x18) == 3) &&
     (lVar6 = FUN_014e7558(lVar6,*(undefined4 *)(param_2 + 0x8c)), lVar6 != 0)) {
    *param_1 = (long)(PTR_DAT_04bb2e18 + 0x10);
    param_1[1] = 0x200000002;
  }
  else {
    *param_1 = (long)(PTR_DAT_04bb2e18 + 0x10);
    uVar3 = DAT_051f0ed8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)DAT_051f0ed8;
    *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  }
  return;
}

