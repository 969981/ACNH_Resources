
undefined * FUN_030e55d0(void)

{
  int iVar1;
  
  if (((*PTR_DAT_04bc7628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7628), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc7620 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7628);
  }
  return PTR_DAT_04bc7620;
}

