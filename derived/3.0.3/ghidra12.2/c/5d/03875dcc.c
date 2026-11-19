
undefined8 FUN_03875dcc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((DAT_05ae67f8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05ae67f8);
    if (iVar1 != 0) {
      DAT_05ae67f0 = &PTR_LAB_04b60238;
      __cxa_guard_release(&DAT_05ae67f8,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03875e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*DAT_05ae67f0)(&DAT_05ae67f0,param_2);
  return uVar2;
}

