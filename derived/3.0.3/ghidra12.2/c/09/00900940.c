
void FUN_00900940(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  puVar3 = PTR_DAT_04bb32c0;
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *(uint *)(param_2 + 0x274), uVar1 != 0)) &&
      (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar6 + 0x46) == uVar1)))) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    puVar2 = PTR_DAT_04bb32b8;
    uVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
    if ((uVar5 & 1) != 0) {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar4 != 0)) {
        *(undefined **)puVar2 = PTR_DAT_04bb32c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32c0);
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb32b8);
                    /* WARNING: Could not recover jumptable at 0x00900a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x100))(param_1,plVar6);
      return;
    }
  }
  *param_1 = 0;
  return;
}

