
undefined8 * FUN_020bb360(void)

{
  int iVar1;
  
  if (((DAT_053dfe68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053dfe68), iVar1 != 0)) {
    DAT_053dfe60 = PTR_DAT_04bb3600 + 0x10;
    __cxa_guard_release(&DAT_053dfe68);
  }
  return &DAT_053dfe60;
}

