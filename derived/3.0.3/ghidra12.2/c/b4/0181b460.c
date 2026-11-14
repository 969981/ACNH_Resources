
undefined8 FUN_0181b460(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == param_1) {
    return 1;
  }
  if ((*PTR_DAT_04bbe5c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbe5c0);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbe5b8 = PTR_DAT_04bbe5c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe5c0,param_2);
    }
  }
  uVar2 = (*(code *)**(undefined8 **)PTR_DAT_04bbe5b8)(PTR_DAT_04bbe5b8,param_2);
  return uVar2;
}

