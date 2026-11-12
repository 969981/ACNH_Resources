
undefined * FUN_006f42ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bb2db0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2db0), puVar2 = PTR_DAT_04bb2db8,
     puVar1 = PTR_DAT_04bb2da8, iVar4 != 0)) {
    if (((*PTR_DAT_04bb2dc0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2dc0), puVar3 = PTR_DAT_04bb2dc8, iVar4 != 0)) {
      if (((*PTR_DAT_04bb2dd0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2dd0), iVar4 != 0)) {
        *(undefined8 *)puVar3 = 0;
        __cxa_guard_release(PTR_DAT_04bb2dd0);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_04bb2dc0);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_04bb2db0);
  }
  return PTR_DAT_04bb2da8;
}

