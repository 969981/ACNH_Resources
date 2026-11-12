
undefined4 FUN_00831a94(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = (uint *)PTR_DAT_04bb5150;
  if ((*PTR_DAT_04bb5158 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5158);
    if (iVar4 != 0) {
      *puVar6 = 0;
      *(undefined8 *)((long)puVar6 + 8) = 0;
      lVar5 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar5 + 0x20));
      puVar3 = PTR_DAT_04bb5160;
      if (*(long *)((long)puVar6 + 8) == 0) {
        if (((*PTR_DAT_04bb5168 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5168), iVar4 != 0)) {
          *(undefined8 *)puVar3 = 0xffffffff;
          *(undefined8 *)(puVar3 + 8) = 0x200000001;
          __cxa_guard_release(PTR_DAT_04bb5168);
        }
        puVar2 = PTR_DAT_04bb5150;
        *(undefined4 *)PTR_DAT_04bb5150 = 4;
        *(undefined **)(puVar2 + 8) = puVar3;
      }
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      __cxa_guard_release(PTR_DAT_04bb5158);
      puVar6 = (uint *)PTR_DAT_04bb5150;
    }
  }
  uVar1 = *param_1;
  if (*puVar6 <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(*(long *)(puVar6 + 2) + (long)(int)uVar1 * 4);
}

