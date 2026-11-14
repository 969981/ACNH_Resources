
undefined8 * FUN_015d09c8(void)

{
  int iVar1;
  
  if (((DAT_05226ed0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05226ed0), iVar1 != 0)) {
    DAT_05226ec8 = PTR_DAT_04bbd480 + 0x10;
    __cxa_guard_release(&DAT_05226ed0);
  }
  return &DAT_05226ec8;
}

