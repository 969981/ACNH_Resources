
/* WARNING: Removing unreachable block (ram,0x03368f38) */

undefined * FUN_03368ef0(uint *param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x70);
  if (((*PTR_DAT_04bc97d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc97d0), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc97c8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc97d0);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc97c8), (uVar4 & 1) != 0)) {
    lVar7 = puVar6[0x13];
    pMVar1 = (MutexType *)(lVar7 + 0xf0);
    nn::os::LockMutex(pMVar1);
    lVar5 = *(long *)(lVar7 + 0x60);
    if (lVar5 != lVar7 + 0x58) {
      do {
        if (lVar5 == (long)*(int *)(lVar7 + 0x6c) + (long)puVar6) {
          nn::os::UnlockMutex(pMVar1);
          uVar2 = param_2;
          if (*param_1 <= param_2) {
            uVar2 = 0;
          }
          if (*(char *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0xc + 8) == '\0') {
            return PTR_DAT_04bb2f48;
          }
          if (*param_1 <= param_2) {
            param_2 = 0;
          }
          return (undefined *)(*(long *)(param_1 + 2) + (long)(int)param_2 * 0xc);
        }
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != lVar7 + 0x58);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return PTR_DAT_04bb2f48;
}

