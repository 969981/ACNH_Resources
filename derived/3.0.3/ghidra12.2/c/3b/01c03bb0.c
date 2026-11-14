
/* WARNING: Removing unreachable block (ram,0x01c03bec) */

void FUN_01c03bb0(long param_1)

{
  MutexType *pMVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x48);
  if (((*PTR_DAT_04bc7828 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7828), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7820 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7828);
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7820);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  lVar6 = puVar5[0x13];
  pMVar1 = (MutexType *)(lVar6 + 0xf0);
  nn::os::LockMutex(pMVar1);
  lVar4 = *(long *)(lVar6 + 0x60);
  if (lVar4 != lVar6 + 0x58) {
    do {
      if (lVar4 == (long)*(int *)(lVar6 + 0x6c) + (long)puVar5) {
        nn::os::UnlockMutex(pMVar1);
        goto LAB_01c03c94;
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != lVar6 + 0x58);
  }
  nn::os::UnlockMutex(pMVar1);
  FUN_0386b090(lVar6,*(undefined8 *)(param_1 + 0x20));
LAB_01c03c94:
  **(undefined8 **)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x22e0) = *(undefined8 *)(param_1 + 0x20);
  **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  return;
}

