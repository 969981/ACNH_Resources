
undefined * FUN_03125e30(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5278 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5278), puVar1 = PTR_DAT_04bc5270, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5270 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "SimpleNumCounterCtrl";
    __cxa_guard_release(PTR_DAT_04bc5278);
  }
  return PTR_DAT_04bc5270;
}

