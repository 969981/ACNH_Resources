
void FUN_011eb5f0(undefined4 *param_1)

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
  puVar1 = PTR_DAT_04bbbba8;
  if (*(long *)(param_1 + 2) == 0) {
    if (((*PTR_DAT_04bbbbb0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbbb0), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0x1500000014;
      *(undefined8 *)(puVar1 + 8) = 0x1700000016;
      *(undefined8 *)(puVar1 + 0x10) = 0x1b0000001a;
      *(undefined8 *)(puVar1 + 0x18) = 0x1d0000001c;
      *(undefined8 *)(puVar1 + 0x20) = 0x1f0000001e;
      *(undefined8 *)(puVar1 + 0x28) = 0x2100000020;
      *(undefined8 *)(puVar1 + 0x30) = 0x2600000025;
      __cxa_guard_release(PTR_DAT_04bbbbb0);
    }
    *(undefined **)(param_1 + 2) = puVar1;
    *param_1 = 0xe;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

