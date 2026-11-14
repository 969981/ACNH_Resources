
undefined8 * FUN_0156b5e8(void)

{
  int iVar1;
  
  if (((DAT_0521d7e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0521d7e0), iVar1 != 0)) {
    DAT_0521d7d8 = PTR_DAT_04bbd4d0 + 0x10;
    __cxa_guard_release(&DAT_0521d7e0);
  }
  return &DAT_0521d7d8;
}

