
undefined8 * FUN_015a34c0(void)

{
  int iVar1;
  
  if (((DAT_05222f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05222f00), iVar1 != 0)) {
    DAT_05222ef8 = PTR_DAT_04bbd4e8 + 0x10;
    __cxa_guard_release(&DAT_05222f00);
  }
  return &DAT_05222ef8;
}

