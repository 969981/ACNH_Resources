
void FUN_011d0e00(void)

{
  int iVar1;
  
  DAT_050de7f8 = 0;
  DAT_050de800 = (undefined8 *)0x0;
  if (((DAT_05ae76b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae76b0), iVar1 != 0)) {
    FUN_038e18e4(&DAT_05ae7670);
    FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7670,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ae76b0);
  }
  nn::os::LockMutex((MutexType *)&DAT_05ae7690);
  if (DAT_050de800 == (undefined8 *)0x0) {
    if (((DAT_050de868 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050de868), iVar1 != 0)) {
      DAT_050de810 = 0x100000000;
      DAT_050de818 = 0x300000002;
      DAT_050de820 = 0x500000004;
      DAT_050de828 = 0x700000006;
      DAT_050de830 = 0x900000008;
      DAT_050de838 = 0xb0000000a;
      DAT_050de840 = 0xd0000000c;
      DAT_050de848 = 0xf0000000e;
      DAT_050de850 = 0x1100000010;
      DAT_050de858 = 0x1300000012;
      DAT_050de860 = 0x14;
      __cxa_guard_release(&DAT_050de868);
    }
    DAT_050de800 = &DAT_050de810;
    DAT_050de7f8 = 1;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

