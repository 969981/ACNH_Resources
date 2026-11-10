
undefined * FUN_0035b978(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bd0630 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0630), puVar3 = PTR_DAT_04bd0648,
     puVar2 = PTR_DAT_04bd0638, iVar4 == 0)) {
    return PTR_DAT_04bd0638;
  }
  if (((*PTR_DAT_04bd0640 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd0640), puVar1 = PTR_DAT_04bc0898, iVar4 != 0)) {
    if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar4 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc08a0);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_04bd0640);
  }
  *(undefined **)puVar2 = puVar3;
  __cxa_guard_release(PTR_DAT_04bd0630);
  return PTR_DAT_04bd0638;
}

