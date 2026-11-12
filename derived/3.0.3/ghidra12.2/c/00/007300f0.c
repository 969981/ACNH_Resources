
void FUN_007300f0(void)

{
  int iVar1;
  
  DAT_04c92d90 = 0;
  DAT_04c92d98 = (undefined8 *)0x0;
  if (((DAT_05ae76b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae76b0), iVar1 != 0)) {
    FUN_038e18e4(&DAT_05ae7670);
    FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7670,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ae76b0);
  }
  nn::os::LockMutex((MutexType *)&DAT_05ae7690);
  if (DAT_04c92d98 == (undefined8 *)0x0) {
    if (((DAT_04c92de8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92de8), iVar1 != 0)) {
      DAT_04c92da8 = 0x100000000;
      DAT_04c92db0 = 0x300000002;
      DAT_04c92db8 = 0x500000004;
      DAT_04c92dc0 = 0x700000006;
      DAT_04c92dc8 = 0x900000008;
      DAT_04c92dd0 = 0xb0000000a;
      DAT_04c92dd8 = 0xd0000000c;
      DAT_04c92de0 = 0xf0000000e;
      __cxa_guard_release(&DAT_04c92de8);
    }
    DAT_04c92d98 = &DAT_04c92da8;
    DAT_04c92d90 = 1;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

