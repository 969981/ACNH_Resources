
undefined8 FUN_03c5f224(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bd3928 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bd3928);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bd3920 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd3928,param_2);
    }
  }
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bd3920)(PTR_DAT_04bd3920,param_2);
  return uVar2;
}

