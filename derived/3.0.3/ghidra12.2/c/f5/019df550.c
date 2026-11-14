
undefined * FUN_019df550(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bbea28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbea28), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbea20 = PTR_DAT_04bbea30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbea28);
  }
  return PTR_DAT_04bbea20;
}

