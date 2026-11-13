
undefined8 * FUN_00f32a68(void)

{
  int iVar1;
  
  if (((DAT_04fd4940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04fd4940), iVar1 != 0)) {
    DAT_04fd4938 = PTR_DAT_04bb98f8 + 0x10;
    __cxa_guard_release(&DAT_04fd4940);
  }
  return &DAT_04fd4938;
}

