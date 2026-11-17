
undefined * FUN_03103594(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_04bc53e0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc53e0), puVar1 = PTR_DAT_04bc53d8, iVar2 != 0)) {
    *(undefined **)PTR_DAT_04bc53d8 = PTR_DAT_04bb2020 + 0x10;
    *(char **)(puVar1 + 8) = "MsgCardViewCtrl";
    __cxa_guard_release(PTR_DAT_04bc53e0);
  }
  return PTR_DAT_04bc53d8;
}

