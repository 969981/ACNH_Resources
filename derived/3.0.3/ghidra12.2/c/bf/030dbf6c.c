
undefined * FUN_030dbf6c(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5520 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5520), puVar1 = PTR_DAT_04bc5518, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5518 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "DreamIslandNameBtnCtrl";
    __cxa_guard_release(PTR_DAT_04bc5520);
  }
  return PTR_DAT_04bc5518;
}

