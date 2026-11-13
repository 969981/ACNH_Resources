
undefined8 FUN_00cc4cf0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bb7c40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb7c40);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bb7c38 = &PTR_LAB_04947bb0;
      __cxa_guard_release(PTR_DAT_04bb7c40,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cc4d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bb7c38)(PTR_DAT_04bb7c38,param_2);
  return uVar2;
}

