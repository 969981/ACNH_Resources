
undefined * FUN_0038bccc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bd0910 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0910), puVar3 = PTR_DAT_04bd0918,
     puVar2 = PTR_DAT_04bc8e28, iVar4 == 0)) {
    return PTR_DAT_04bd0918;
  }
  if (((*PTR_DAT_04bc8e30 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8e30), puVar1 = PTR_DAT_04bc8e18, iVar4 != 0)) {
    if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar4 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8e20);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc8e30);
  }
  *(undefined **)puVar3 = puVar2;
  __cxa_guard_release(PTR_DAT_04bd0910);
  return PTR_DAT_04bd0918;
}

