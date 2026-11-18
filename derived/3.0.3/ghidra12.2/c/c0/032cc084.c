
undefined * FUN_032cc084(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_04bc9480 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9480), puVar3 = PTR_DAT_04bc9478,
     puVar2 = PTR_DAT_04bc9468, iVar4 != 0)) {
    if (((*PTR_DAT_04bc9470 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9470), puVar1 = PTR_DAT_04bc8f30, iVar4 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar2 = puVar1;
      __cxa_guard_release(PTR_DAT_04bc9470);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc9480);
  }
  return PTR_DAT_04bc9478;
}

