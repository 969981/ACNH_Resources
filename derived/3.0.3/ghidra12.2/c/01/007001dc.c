
undefined8 FUN_007001dc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bb2fb0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2fb0);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bb2fa8 = &PTR_FUN_048fd9b8;
      __cxa_guard_release(PTR_DAT_04bb2fb0,param_2);
    }
  }
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bb2fa8)(PTR_DAT_04bb2fa8,param_2);
  return uVar2;
}

