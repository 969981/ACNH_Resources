
undefined8 FUN_03bf8500(long param_1,void *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_04bcb7d8;
  iVar3 = *(int *)(param_1 + 0x25920);
  if (iVar3 != 0) {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
    pMVar1 = (MutexType *)(lVar11 + 0x330);
    nn::os::LockMutex(pMVar1);
    iVar5 = *(int *)(lVar11 + 0x128);
    puVar8 = *(uint **)(*(long *)(lVar11 + 0x110) + (long)iVar5 * 8);
    uVar4 = *puVar8;
    if (0 < (int)uVar4) {
      puVar9 = *(undefined8 **)(puVar8 + 2);
      lVar10 = (ulong)uVar4 << 3;
      do {
        if (*(int *)*puVar9 == iVar3) goto LAB_03bf8660;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    uVar4 = iVar5 + 1U & 1;
    uVar2 = -uVar4;
    if (-2 < iVar5) {
      uVar2 = uVar4;
    }
    puVar8 = *(uint **)(*(long *)(lVar11 + 0x110) + (ulong)uVar2 * 8);
    uVar4 = *puVar8;
    if (0 < (int)uVar4) {
      puVar9 = *(undefined8 **)(puVar8 + 2);
      lVar10 = (ulong)uVar4 << 3;
      do {
        if (*(int *)*puVar9 == iVar3) goto LAB_03bf8660;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    if ((0 < *(int *)(lVar11 + 0x140)) &&
       (lVar10 = *(long *)(lVar11 + 0x138), lVar10 != lVar11 + 0x130)) {
      do {
        if (*(int *)(lVar10 + -8) == iVar3) {
LAB_03bf8660:
          nn::os::UnlockMutex(pMVar1);
          return 0;
        }
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 + -8 != lVar11 + 0x128);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  memcpy((void *)(param_1 + 0x25928),param_2,0x6bc);
  local_60 = &LAB_03bf8690;
  uStack_58 = 0;
  local_70 = &PTR_LAB_04b7c018;
  lStack_68 = param_1;
  uVar7 = FUN_03bf7994(*(undefined8 *)(*(long *)puVar6 + 0x88),&local_70,param_1 + 0x1c,0);
  *(int *)(param_1 + 0x25920) = (int)uVar7;
  return uVar7;
}

