
undefined * FUN_032a9eec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((*PTR_DAT_04bc92b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc92b8), puVar2 = PTR_DAT_04bc92b0,
     puVar1 = PTR_DAT_04bc8e18, iVar3 != 0)) {
    if (((*PTR_DAT_04bc8e20 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8e20), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8e20);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc92b8);
  }
  return PTR_DAT_04bc92b0;
}

