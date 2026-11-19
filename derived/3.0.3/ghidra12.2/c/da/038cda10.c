
void _INIT_8590(void)

{
  int iVar1;
  
  if (((DAT_05ae7668 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae7668), iVar1 != 0)) {
    FUN_038e18e4(&DAT_05ae7628);
    FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7628,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ae7668);
  }
  if (((DAT_05ae76b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae76b0), iVar1 != 0)) {
    FUN_038e18e4(&DAT_05ae7670);
    FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7670,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ae76b0);
    return;
  }
  return;
}

