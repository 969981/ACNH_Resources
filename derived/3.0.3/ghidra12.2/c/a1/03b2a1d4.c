
undefined * FUN_03b2a1d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_04bd1a68 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a68), puVar5 = PTR_DAT_04bd1a60,
     puVar4 = PTR_DAT_04bd1a48, iVar6 != 0)) {
    if (((*PTR_DAT_04bd1a50 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a50), puVar1 = PTR_DAT_04bd19e8, iVar6 != 0)) {
      if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd19f0), puVar2 = PTR_DAT_04bd19f8, iVar6 != 0)) {
        if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a00), puVar3 = PTR_DAT_04bd1a08, iVar6 != 0)) {
          if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar6 != 0)) {
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
      __cxa_guard_release(PTR_DAT_04bd1a50);
    }
    *(undefined **)puVar5 = puVar4;
    __cxa_guard_release(PTR_DAT_04bd1a68);
  }
  return PTR_DAT_04bd1a60;
}

