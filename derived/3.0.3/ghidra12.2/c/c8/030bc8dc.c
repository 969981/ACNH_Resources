
undefined * FUN_030bc8dc(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5328 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5328), puVar1 = PTR_DAT_04bc5320, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5320 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "AppScrollBarCtrl";
    __cxa_guard_release(PTR_DAT_04bc5328);
  }
  return PTR_DAT_04bc5320;
}

