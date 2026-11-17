
undefined * FUN_0312f9c0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5268 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5268), puVar1 = PTR_DAT_04bc5260, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5260 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "SortNoticeWindowCtrl";
    __cxa_guard_release(PTR_DAT_04bc5268);
  }
  return PTR_DAT_04bc5260;
}

