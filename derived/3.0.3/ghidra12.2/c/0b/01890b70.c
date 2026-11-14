
undefined8 FUN_01890b70(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bb5f08 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5f08);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb5f00 = PTR_DAT_04bb2fb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5f08,param_2);
    }
  }
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bb5f00)(PTR_DAT_04bb5f00,param_2);
  return uVar2;
}

