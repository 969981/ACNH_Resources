
undefined8 FUN_02bb2808(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bc4dc8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4dc8);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bc4dc0 = &PTR_FUN_04aa7358;
      __cxa_guard_release(PTR_DAT_04bc4dc8,param_2);
    }
  }
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bc4dc0)(PTR_DAT_04bc4dc0,param_2);
  return uVar2;
}

