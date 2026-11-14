
undefined4 FUN_01628598(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = (uint *)PTR_DAT_04bbd6a0;
  if ((*PTR_DAT_04bbd6a8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04bbd6a8);
    if (iVar4 != 0) {
      *puVar6 = 0;
      *(undefined8 *)((long)puVar6 + 8) = 0;
      lVar5 = FUN_038cd998();
      nn::os::LockMutex((MutexType *)(lVar5 + 0x20));
      puVar3 = PTR_DAT_04bbd6b0;
      if (*(long *)((long)puVar6 + 8) == 0) {
        if (((*PTR_DAT_04bbd6b8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbd6b8), iVar4 != 0)) {
          *(undefined8 *)puVar3 = 0x200000001;
          *(undefined8 *)(puVar3 + 8) = 0x800000004;
          *(undefined8 *)(puVar3 + 0x10) = 0x2000000010;
          *(undefined8 *)(puVar3 + 0x18) = 0x4000000020000000;
          __cxa_guard_release(PTR_DAT_04bbd6b8);
        }
        puVar2 = PTR_DAT_04bbd6a0;
        *(undefined4 *)PTR_DAT_04bbd6a0 = 8;
        *(undefined **)(puVar2 + 8) = puVar3;
      }
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      __cxa_guard_release(PTR_DAT_04bbd6a8);
      puVar6 = (uint *)PTR_DAT_04bbd6a0;
    }
  }
  uVar1 = *param_1;
  if (*puVar6 <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined4 *)(*(long *)(puVar6 + 2) + (long)(int)uVar1 * 4);
}

