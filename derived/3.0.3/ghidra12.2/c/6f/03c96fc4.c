
undefined * FUN_03c96fc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  if (((*PTR_DAT_04bd4298 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd4298), puVar6 = PTR_DAT_04bd4290,
     puVar5 = PTR_DAT_04bd1d08, iVar7 != 0)) {
    if (((*PTR_DAT_04bd1d10 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1d10), puVar3 = PTR_DAT_04bd1b50, iVar7 != 0)) {
      if (((*PTR_DAT_04bd1b58 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1b58), puVar4 = PTR_DAT_04bd1b60, iVar7 != 0)) {
        if (((*PTR_DAT_04bd1b68 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1b68), puVar2 = PTR_DAT_04bc8f50, iVar7 != 0)) {
          if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar1 = PTR_DAT_04bc8f30, iVar7 != 0))
          {
            if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
              *(undefined8 *)puVar1 = 0;
              __cxa_guard_release(PTR_DAT_04bc8f38);
            }
            *(undefined **)puVar2 = puVar1;
            __cxa_guard_release(PTR_DAT_04bc8f58);
          }
          *(undefined **)puVar4 = puVar2;
          __cxa_guard_release(PTR_DAT_04bd1b68);
        }
        *(undefined **)puVar3 = puVar4;
        __cxa_guard_release(PTR_DAT_04bd1b58);
      }
      *(undefined **)puVar5 = puVar3;
      __cxa_guard_release(PTR_DAT_04bd1d10);
    }
    *(undefined **)puVar6 = puVar5;
    __cxa_guard_release(PTR_DAT_04bd4298);
  }
  return PTR_DAT_04bd4290;
}

