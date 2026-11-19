
undefined * FUN_03c960dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_04bd4238 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd4238), puVar5 = PTR_DAT_04bd4230,
     puVar4 = PTR_DAT_04bd1cb8, iVar6 != 0)) {
    if (((*PTR_DAT_04bd1cc0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1cc0), puVar3 = PTR_DAT_04bd1be8, iVar6 != 0)) {
      if (((*PTR_DAT_04bd1bf0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1bf0), puVar2 = PTR_DAT_04bc91b0, iVar6 != 0)) {
        if (((*PTR_DAT_04bc91b8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc91b8), puVar1 = PTR_DAT_04bc8f30, iVar6 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0)) {
            *(undefined8 *)puVar1 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_04bc91b8);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_04bd1bf0);
      }
      *(undefined **)puVar4 = puVar3;
      __cxa_guard_release(PTR_DAT_04bd1cc0);
    }
    *(undefined **)puVar5 = puVar4;
    __cxa_guard_release(PTR_DAT_04bd4238);
  }
  return PTR_DAT_04bd4230;
}

