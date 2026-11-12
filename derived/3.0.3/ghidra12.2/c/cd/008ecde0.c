
void FUN_008ecde0(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *param_2, uVar1 != 0)) &&
      (plVar5 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar5 != (long *)0x0)) &&
     (((*(uint *)(plVar5 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar5 + 0x46) == uVar1)))) {
    lVar2 = plVar5[0x2a];
    if (((*PTR_DAT_04bb3760 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3760);
    }
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3758);
    if (((uVar4 & 1) != 0) && ((int)lVar2 == 1)) {
      if (*(char *)(param_1 + 8) != '\0') {
        uVar4 = (**(code **)(*plVar5 + 0x230))(plVar5);
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar5 + 0x238))(plVar5);
        }
        if (*(char *)(param_1 + 8) != '\0') {
          return;
        }
      }
      uVar4 = (**(code **)(*plVar5 + 0x228))(plVar5);
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x008eced4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x240))(plVar5);
        return;
      }
    }
  }
  return;
}

