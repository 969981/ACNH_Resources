
undefined8 FUN_006cdaa8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bb2868 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bb2860 = &PTR_LAB_048fa0b0;
      __cxa_guard_release(PTR_DAT_04bb2868,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x006cdae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bb2860)(PTR_DAT_04bb2860,param_2);
  return uVar2;
}

