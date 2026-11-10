
undefined8 * FUN_00228308(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04c602f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c602f8), iVar1 != 0)) {
    lVar2 = nn::os::GetSystemTickFrequency();
    DAT_04c602f0 = lVar2 / 1000000;
    __cxa_guard_release(&DAT_04c602f8);
    return &DAT_04c602f0;
  }
  return &DAT_04c602f0;
}

