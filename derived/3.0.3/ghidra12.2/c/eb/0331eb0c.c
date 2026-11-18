
undefined4 FUN_0331eb0c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = (uint *)PTR_DAT_04bc9268;
  if ((*PTR_DAT_04bc9270 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9270);
    if (iVar4 != 0) {
      *puVar6 = 0;
      *(undefined8 *)((long)puVar6 + 8) = 0;
      lVar5 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar5 + 0x20));
      puVar3 = PTR_DAT_04bc9278;
      if (*(long *)((long)puVar6 + 8) == 0) {
        if (((*PTR_DAT_04bc9280 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9280), iVar4 != 0)) {
          *(undefined8 *)puVar3 = 0x100000000;
          *(undefined8 *)(puVar3 + 8) = 0x300000002;
          *(undefined8 *)(puVar3 + 0x10) = 0x500000004;
          *(undefined8 *)(puVar3 + 0x18) = 0x700000006;
          __cxa_guard_release(PTR_DAT_04bc9280);
        }
        puVar2 = PTR_DAT_04bc9268;
        *(undefined4 *)PTR_DAT_04bc9268 = 8;
        *(undefined **)(puVar2 + 8) = puVar3;
      }
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      __cxa_guard_release(PTR_DAT_04bc9270);
      puVar6 = (uint *)PTR_DAT_04bc9268;
    }
  }
  uVar1 = *param_1;
  if (*puVar6 <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(*(long *)(puVar6 + 2) + (long)(int)uVar1 * 4);
}

