
undefined * FUN_03c9686c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_04bd4268 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd4268), puVar5 = PTR_DAT_04bd4260,
     puVar4 = PTR_DAT_04bd1cd0, iVar6 != 0)) {
    if (((*PTR_DAT_04bd1cd8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1cd8), puVar3 = PTR_DAT_04bd1bf8, iVar6 != 0)) {
      if (((*PTR_DAT_04bd1c00 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd1c00), puVar2 = PTR_DAT_04bc9540, iVar6 != 0)) {
        if (((*PTR_DAT_04bc9548 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc9548), puVar1 = PTR_DAT_04bc8f30, iVar6 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar6 != 0)) {
            *(undefined8 *)puVar1 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(PTR_DAT_04bc9548);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_04bd1c00);
      }
      *(undefined **)puVar4 = puVar3;
      __cxa_guard_release(PTR_DAT_04bd1cd8);
    }
    *(undefined **)puVar5 = puVar4;
    __cxa_guard_release(PTR_DAT_04bd4268);
  }
  return PTR_DAT_04bd4260;
}

