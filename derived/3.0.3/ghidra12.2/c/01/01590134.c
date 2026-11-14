
undefined8 * FUN_01590134(void)

{
  int iVar1;
  
  if (((DAT_052200f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052200f8), iVar1 != 0)) {
    DAT_052200f0 = PTR_DAT_04bbd680 + 0x10;
    __cxa_guard_release(&DAT_052200f8);
  }
  return &DAT_052200f0;
}

