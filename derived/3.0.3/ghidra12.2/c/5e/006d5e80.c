
undefined8 FUN_006d5e80(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
    pMVar1 = (MutexType *)(lVar9 + 0x330);
    nn::os::LockMutex(pMVar1);
    iVar5 = *(int *)(lVar9 + 0x128);
    puVar6 = *(uint **)(*(long *)(lVar9 + 0x110) + (long)iVar5 * 8);
    uVar4 = *puVar6;
    if (0 < (int)uVar4) {
      puVar7 = *(undefined8 **)(puVar6 + 2);
      lVar8 = (ulong)uVar4 << 3;
      do {
        if (*(int *)*puVar7 == iVar3) goto LAB_006d5f8c;
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar4 = iVar5 + 1U & 1;
    uVar2 = -uVar4;
    if (-2 < iVar5) {
      uVar2 = uVar4;
    }
    puVar6 = *(uint **)(*(long *)(lVar9 + 0x110) + (ulong)uVar2 * 8);
    uVar4 = *puVar6;
    if (0 < (int)uVar4) {
      puVar7 = *(undefined8 **)(puVar6 + 2);
      lVar8 = (ulong)uVar4 << 3;
      do {
        if (*(int *)*puVar7 == iVar3) goto LAB_006d5f8c;
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    if ((0 < *(int *)(lVar9 + 0x140)) && (lVar8 = *(long *)(lVar9 + 0x138), lVar8 != lVar9 + 0x130))
    {
      do {
        if (*(int *)(lVar8 + -8) == iVar3) {
LAB_006d5f8c:
          nn::os::UnlockMutex(pMVar1);
          *(undefined1 *)(param_1 + 0x4d) = 1;
          return 1;
        }
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 + -8 != lVar9 + 0x128);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return 0;
}

