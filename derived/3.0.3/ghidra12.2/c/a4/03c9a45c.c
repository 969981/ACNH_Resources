
undefined * FUN_03c9a45c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_04bd4448 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd4448), puVar4 = PTR_DAT_04bd4440,
     puVar3 = PTR_DAT_04bd1b80, iVar5 != 0)) {
    if (((*PTR_DAT_04bd1b88 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd1b88), puVar2 = PTR_DAT_04bc9000, iVar5 != 0)) {
      if (((*PTR_DAT_04bc9008 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar1 = PTR_DAT_04bc8f30, iVar5 != 0)) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
          *(undefined8 *)puVar1 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(PTR_DAT_04bc9008);
      }
      *(undefined **)puVar3 = puVar2;
      __cxa_guard_release(PTR_DAT_04bd1b88);
    }
    *(undefined **)puVar4 = puVar3;
    __cxa_guard_release(PTR_DAT_04bd4448);
  }
  return PTR_DAT_04bd4440;
}

