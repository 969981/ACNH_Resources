
undefined * FUN_03d66de4(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bd4600 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd4600), puVar1 = PTR_DAT_04bd45f8, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bd45f8 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "PartsCtrl";
    __cxa_guard_release(PTR_DAT_04bd4600);
  }
  return PTR_DAT_04bd45f8;
}

