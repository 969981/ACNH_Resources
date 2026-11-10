
undefined * FUN_00361b8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bc93b8 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc93b8), puVar2 = PTR_DAT_04bc93c0,
     puVar1 = PTR_DAT_04bc93b0, iVar4 == 0)) {
    return PTR_DAT_04bc93b0;
  }
  if (((*PTR_DAT_04bc93c8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc93c8), puVar3 = PTR_DAT_04bc93d0, iVar4 != 0)) {
    if (((*PTR_DAT_04bc93d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc93d8), iVar4 != 0)) {
      *(undefined8 *)puVar3 = 0;
      __cxa_guard_release(PTR_DAT_04bc93d8);
    }
    *(undefined **)puVar2 = puVar3;
    __cxa_guard_release(PTR_DAT_04bc93c8);
  }
  *(undefined **)puVar1 = puVar2;
  __cxa_guard_release(PTR_DAT_04bc93b8);
  return PTR_DAT_04bc93b0;
}

