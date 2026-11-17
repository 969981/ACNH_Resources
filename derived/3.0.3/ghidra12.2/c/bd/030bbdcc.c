
undefined * FUN_030bbdcc(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc54f0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc54f0), puVar1 = PTR_DAT_04bc54e8, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc54e8 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "AppLocatorCtrl";
    __cxa_guard_release(PTR_DAT_04bc54f0);
  }
  return PTR_DAT_04bc54e8;
}

