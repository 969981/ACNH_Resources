
void FUN_0277d2c4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  if (((DAT_05ae76b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05ae76b0), iVar1 != 0)) {
    FUN_038e18e4(&DAT_05ae7670);
    FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7670,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ae76b0);
  }
  nn::os::LockMutex((MutexType *)&DAT_05ae7690);
  if (*(long *)(param_1 + 2) == 0) {
    if (((DAT_05585528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05585528), iVar1 != 0)) {
      DAT_055854c8 = 0x1e0000001b;
      DAT_055854d0 = 0x2d00000027;
      DAT_055854d8 = 0x3900000036;
      DAT_055854e0 = 0x4e0000004b;
      DAT_055854e8 = 0x6c00000063;
      DAT_055854f0 = 0x7800000072;
      DAT_055854f8 = 0x8d00000087;
      DAT_05585500 = 0x9c00000093;
      DAT_05585508 = 0xb4000000b1;
      DAT_05585510 = 0xc9000000c6;
      DAT_05585518 = 0xd8000000d2;
      DAT_05585520 = 0xe4000000e1;
      __cxa_guard_release(&DAT_05585528);
    }
    *(undefined8 **)(param_1 + 2) = &DAT_055854c8;
    *param_1 = 0x18;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

