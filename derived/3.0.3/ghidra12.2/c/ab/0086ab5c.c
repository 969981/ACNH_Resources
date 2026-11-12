
undefined4 FUN_0086ab5c(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = (uint *)PTR_DAT_04bb5740;
  if ((*PTR_DAT_04bb5748 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5748);
    if (iVar4 != 0) {
      *puVar6 = 0;
      *(undefined8 *)((long)puVar6 + 8) = 0;
      lVar5 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar5 + 0x20));
      puVar3 = PTR_DAT_04bb5750;
      if (*(long *)((long)puVar6 + 8) == 0) {
        if (((*PTR_DAT_04bb5758 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5758), iVar4 != 0)) {
          *(undefined8 *)puVar3 = 0x200000001;
          *(undefined8 *)(puVar3 + 8) = 0x800000004;
          *(undefined8 *)(puVar3 + 0x10) = 0x2000000010;
          __cxa_guard_release(PTR_DAT_04bb5758);
        }
        puVar2 = PTR_DAT_04bb5740;
        *(undefined4 *)PTR_DAT_04bb5740 = 6;
        *(undefined **)(puVar2 + 8) = puVar3;
      }
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      __cxa_guard_release(PTR_DAT_04bb5748);
      puVar6 = (uint *)PTR_DAT_04bb5740;
    }
  }
  uVar1 = *param_1;
  if (*puVar6 <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(*(long *)(puVar6 + 2) + (long)(int)uVar1 * 4);
}

