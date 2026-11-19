
undefined * FUN_03b2bc2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_04bd1ad0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1ad0), puVar4 = PTR_DAT_04bd1ac8,
     puVar1 = PTR_DAT_04bd19e8, iVar5 != 0)) {
    if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd19f0), puVar2 = PTR_DAT_04bd19f8, iVar5 != 0)) {
      if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1a00), puVar3 = PTR_DAT_04bd1a08, iVar5 != 0)) {
        if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar5 != 0)) {
          *(undefined8 *)puVar3 = 0;
          __cxa_guard_release(PTR_DAT_04bd1a10);
        }
        *(undefined **)puVar2 = puVar3;
        __cxa_guard_release(PTR_DAT_04bd1a00);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_04bd19f0);
    }
    *(undefined **)puVar4 = puVar1;
    __cxa_guard_release(PTR_DAT_04bd1ad0);
  }
  return PTR_DAT_04bd1ac8;
}

