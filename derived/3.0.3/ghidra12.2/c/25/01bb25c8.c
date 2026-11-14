
void FUN_01bb25c8(undefined4 *param_1)

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
  puVar1 = PTR_DAT_04bc0a90;
  if (*(long *)(param_1 + 2) == 0) {
    if (((*PTR_DAT_04bc0a98 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a98), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0xa00000000;
      *(undefined8 *)(puVar1 + 8) = 0x2800000014;
      *(undefined8 *)(puVar1 + 0x10) = 0x320000002d;
      *(undefined8 *)(puVar1 + 0x18) = 0x460000003c;
      *(undefined8 *)(puVar1 + 0x20) = 0x5500000050;
      *(undefined8 *)(puVar1 + 0x28) = 0x640000005a;
      *(undefined8 *)(puVar1 + 0x30) = 0x730000006e;
      *(undefined8 *)(puVar1 + 0x38) = 0x7d00000078;
      *(undefined8 *)(puVar1 + 0x40) = 0x8700000082;
      *(undefined8 *)(puVar1 + 0x48) = 0x960000008c;
      *(undefined8 *)(puVar1 + 0x50) = 0xc7000000c6;
      __cxa_guard_release(PTR_DAT_04bc0a98);
    }
    *(undefined **)(param_1 + 2) = puVar1;
    *param_1 = 0x16;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

