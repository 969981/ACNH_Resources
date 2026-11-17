
undefined * FUN_030e5630(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc52a8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc52a8), puVar1 = PTR_DAT_04bc52a0, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc52a0 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "IndicatorCtrl";
    __cxa_guard_release(PTR_DAT_04bc52a8);
  }
  return PTR_DAT_04bc52a0;
}

