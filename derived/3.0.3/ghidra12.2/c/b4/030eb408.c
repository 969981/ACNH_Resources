
undefined8 * FUN_030eb408(void)

{
  int iVar1;
  
  if (((DAT_056efea8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_056efea8), iVar1 != 0)) {
    DAT_056efea0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(&DAT_056efea8);
  }
  return &DAT_056efea0;
}

