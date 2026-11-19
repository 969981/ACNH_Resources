
undefined * FUN_03b1bc98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bd1c78 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1c78), puVar3 = PTR_DAT_04bd1c70,
     puVar1 = PTR_DAT_04bc93c0, iVar4 != 0)) {
    if (((*PTR_DAT_04bc93c8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc93c8), puVar2 = PTR_DAT_04bc93d0, iVar4 != 0)) {
      if (((*PTR_DAT_04bc93d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc93d8), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc93d8);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_04bc93c8);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_04bd1c78);
  }
  return PTR_DAT_04bd1c70;
}

