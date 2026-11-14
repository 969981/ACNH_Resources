
ulong FUN_0158daa0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)PTR_DAT_04bbd6a0;
  if (((*PTR_DAT_04bbd6a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbd6a8), iVar3 != 0))
  {
    *puVar6 = 0;
    *(undefined8 *)((long)puVar6 + 8) = 0;
    lVar4 = FUN_038cd998();
    nn::os::LockMutex((MutexType *)(lVar4 + 0x20));
    puVar2 = PTR_DAT_04bbd6b0;
    if (*(long *)((long)puVar6 + 8) == 0) {
      if (((*PTR_DAT_04bbd6b8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbd6b8), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0x200000001;
        *(undefined8 *)(puVar2 + 8) = 0x800000004;
        *(undefined8 *)(puVar2 + 0x10) = 0x2000000010;
        *(undefined8 *)(puVar2 + 0x18) = 0x4000000020000000;
        __cxa_guard_release(PTR_DAT_04bbd6b8);
      }
      puVar1 = PTR_DAT_04bbd6a0;
      *(undefined4 *)PTR_DAT_04bbd6a0 = 8;
      *(undefined **)(puVar1 + 8) = puVar2;
    }
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    __cxa_guard_release(PTR_DAT_04bbd6a8);
    puVar6 = (uint *)PTR_DAT_04bbd6a0;
  }
  if (0 < (int)*puVar6) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(puVar6 + 2) + uVar5 * 4) == param_1) {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (*puVar6 != uVar5);
  }
  return 0xffffffff;
}

