
void FUN_007a9614(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  if (((DAT_05ae76b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05ae76b0), iVar2 != 0)) {
    FUN_038e18e4(&DAT_05ae7670);
    FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7670,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ae76b0);
  }
  nn::os::LockMutex((MutexType *)&DAT_05ae7690);
  puVar1 = PTR_DAT_04bb4278;
  if (*(long *)(param_1 + 2) == 0) {
    if (((*PTR_DAT_04bb4280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4280), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0x100000000;
      *(undefined8 *)(puVar1 + 8) = 0x300000002;
      *(undefined8 *)(puVar1 + 0x10) = 0x500000004;
      *(undefined8 *)(puVar1 + 0x18) = 0x700000006;
      *(undefined8 *)(puVar1 + 0x20) = 0x900000008;
      *(undefined8 *)(puVar1 + 0x28) = 0xb0000000a;
      __cxa_guard_release(PTR_DAT_04bb4280);
    }
    *(undefined **)(param_1 + 2) = puVar1;
    *param_1 = 0xc;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

