
undefined * FUN_030c5e14(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5318 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5318), puVar1 = PTR_DAT_04bc5310, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5310 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "CharaMakeIconCtrl";
    __cxa_guard_release(PTR_DAT_04bc5318);
  }
  return PTR_DAT_04bc5310;
}

