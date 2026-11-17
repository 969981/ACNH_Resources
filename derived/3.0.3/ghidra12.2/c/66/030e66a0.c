
undefined * FUN_030e66a0(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc5390 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5390), puVar1 = PTR_DAT_04bc5388, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc5388 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "ItemColorWindowCtrl";
    __cxa_guard_release(PTR_DAT_04bc5390);
  }
  return PTR_DAT_04bc5388;
}

