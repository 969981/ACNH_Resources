
undefined * FUN_030c315c(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5400 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5400), puVar1 = PTR_DAT_04bc53f8, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc53f8 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "BoardToolPalletCtrl";
    __cxa_guard_release(PTR_DAT_04bc5400);
  }
  return PTR_DAT_04bc53f8;
}

