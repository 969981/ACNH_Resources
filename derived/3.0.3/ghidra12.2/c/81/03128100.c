
undefined * FUN_03128100(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc52d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc52d8), puVar1 = PTR_DAT_04bc52d0, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc52d0 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "SonkatsuResultStampCtrl";
    __cxa_guard_release(PTR_DAT_04bc52d8);
  }
  return PTR_DAT_04bc52d0;
}

