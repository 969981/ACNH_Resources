
undefined * FUN_030b99c4(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5190 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5190), puVar1 = PTR_DAT_04bc5188, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5188 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "AppBodyCtrl";
    __cxa_guard_release(PTR_DAT_04bc5190);
  }
  return PTR_DAT_04bc5188;
}

