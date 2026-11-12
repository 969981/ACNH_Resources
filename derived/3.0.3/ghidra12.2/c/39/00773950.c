
void FUN_00773950(undefined4 *param_1)

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
  puVar1 = PTR_DAT_04bb39a0;
  if (*(long *)(param_1 + 2) == 0) {
    if (((*PTR_DAT_04bb39a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb39a8), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0x144f907a2ec94ec5;
      *(undefined8 *)(puVar1 + 8) = 0x5d40c0f308c4b65c;
      *(undefined8 *)(puVar1 + 0x10) = 0xd600762d19eff000;
      *(undefined8 *)(puVar1 + 0x18) = 0xe3aa1a581c02a2c5;
      *(undefined8 *)(puVar1 + 0x20) = 0x52f5f3d93c150efd;
      *(undefined8 *)(puVar1 + 0x28) = 0x9cb384f66524d1b4;
      *(undefined8 *)(puVar1 + 0x30) = 0xc909c22d34f62bdb;
      *(undefined8 *)(puVar1 + 0x38) = 0x9906017a792db6f0;
      *(undefined8 *)(puVar1 + 0x40) = 0x375bf3ebe56d8bfe;
      *(undefined8 *)(puVar1 + 0x48) = 0xbc2663858db7b09d;
      *(undefined8 *)(puVar1 + 0x50) = 0xf5a5a9cb32dbcf09;
      *(undefined8 *)(puVar1 + 0x58) = 0x1d8cdf49e6d928a3;
      *(undefined8 *)(puVar1 + 0x60) = 0x3971ce7478ea5792;
      *(undefined8 *)(puVar1 + 0x68) = 0xc1b60971;
      __cxa_guard_release(PTR_DAT_04bb39a8);
    }
    *(undefined **)(param_1 + 2) = puVar1;
    *param_1 = 0x1c;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae7690);
  return;
}

