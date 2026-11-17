
undefined * FUN_030d9050(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5258 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5258), puVar1 = PTR_DAT_04bc5250, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5250 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "CompareNumCtrl";
    __cxa_guard_release(PTR_DAT_04bc5258);
  }
  return PTR_DAT_04bc5250;
}

