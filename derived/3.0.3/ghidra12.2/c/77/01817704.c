
undefined8 FUN_01817704(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bbe5d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe5d8);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbe5d0 = &PTR_LAB_049c5928;
      __cxa_guard_release(PTR_DAT_04bbe5d8,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01817740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bbe5d0)(PTR_DAT_04bbe5d0,param_2);
  return uVar2;
}

