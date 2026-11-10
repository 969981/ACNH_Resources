
undefined8 * FUN_00228380(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_04c60308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c60308), iVar1 != 0)) {
    lVar2 = nn::os::GetSystemTickFrequency();
    DAT_04c60300 = lVar2 / 1000;
    __cxa_guard_release(&DAT_04c60308);
    return &DAT_04c60300;
  }
  return &DAT_04c60300;
}

