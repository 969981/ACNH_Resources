
void FUN_00706e58(undefined4 *param_1)

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
  puVar1 = PTR_DAT_04bb3130;
  if (*(long *)(param_1 + 2) == 0) {
    if (((*PTR_DAT_04bb3138 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3138), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0x100000000;
      *(undefined8 *)(puVar1 + 8) = 0x300000002;
      *(undefined8 *)(puVar1 + 0x10) = 0x500000004;
      *(undefined8 *)(puVar1 + 0x18) = 0x700000006;
      *(undefined8 *)(puVar1 + 0x20) = 0x900000008;
      *(undefined8 *)(puVar1 + 0x28) = 0xb0000000a;
      *(undefined8 *)(puVar1 + 0x30) = 0xd0000000c;
      *(undefined8 *)(puVar1 + 0x38) = 0xf0000000e;
      *(undefined8 *)(puVar1 + 0x40) = 0x1100000010;
      *(undefined8 *)(puVar1 + 0x48) = 0x1300000012;
      *(undefined8 *)(puVar1 + 0x50) = 0x1500000014;
      *(undefined8 *)(puVar1 + 0x58) = 0x1700000016;
      *(undefined8 *)(puVar1 + 0x60) = 0x1900000018;
      *(undefined8 *)(puVar1 + 0x68) = 0x1b0000001a;
      *(undefined8 *)(puVar1 + 0x70) = 0x1d0000001c;
      *(undefined8 *)(puVar1 + 0x78) = 0x1f0000001e;
      __cxa_guard_release(PTR_DAT_04bb3138);
    }
    *(undefined **)(param_1 + 2) = puVar1;
    *param_1 = 0x20;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

