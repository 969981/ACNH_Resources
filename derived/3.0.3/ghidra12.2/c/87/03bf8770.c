
undefined8 FUN_03bf8770(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  
  puVar8 = PTR_DAT_04bcb7d8;
  iVar5 = *(int *)(param_1 + 0x26028);
  if (iVar5 != 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
    pMVar1 = (MutexType *)(lVar13 + 0x330);
    nn::os::LockMutex(pMVar1);
    iVar7 = *(int *)(lVar13 + 0x128);
    puVar10 = *(uint **)(*(long *)(lVar13 + 0x110) + (long)iVar7 * 8);
    uVar6 = *puVar10;
    if (0 < (int)uVar6) {
      puVar11 = *(undefined8 **)(puVar10 + 2);
      lVar12 = (ulong)uVar6 << 3;
      do {
        if (*(int *)*puVar11 == iVar5) goto LAB_03bf88d4;
        puVar11 = puVar11 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    uVar6 = iVar7 + 1U & 1;
    uVar2 = -uVar6;
    if (-2 < iVar7) {
      uVar2 = uVar6;
    }
    puVar10 = *(uint **)(*(long *)(lVar13 + 0x110) + (ulong)uVar2 * 8);
    uVar6 = *puVar10;
    if (0 < (int)uVar6) {
      puVar11 = *(undefined8 **)(puVar10 + 2);
      lVar12 = (ulong)uVar6 << 3;
      do {
        if (*(int *)*puVar11 == iVar5) goto LAB_03bf88d4;
        puVar11 = puVar11 + 1;
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    if ((0 < *(int *)(lVar13 + 0x140)) &&
       (lVar12 = *(long *)(lVar13 + 0x138), lVar12 != lVar13 + 0x130)) {
      do {
        if (*(int *)(lVar12 + -8) == iVar5) {
LAB_03bf88d4:
          nn::os::UnlockMutex(pMVar1);
          return 0;
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 + -8 != lVar13 + 0x128);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  uVar9 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[3];
  *(undefined8 *)(param_1 + 0x26040) = param_2[2];
  *(undefined8 *)(param_1 + 0x26048) = uVar4;
  *(undefined8 *)(param_1 + 0x26030) = uVar9;
  *(undefined8 *)(param_1 + 0x26038) = uVar3;
  local_60 = &LAB_03bf8900;
  uStack_58 = 0;
  local_70 = &PTR_LAB_04b7c018;
  lStack_68 = param_1;
  uVar9 = FUN_03bf7994(*(undefined8 *)(*(long *)puVar8 + 0x88),&local_70,param_1 + 0x1c,0);
  *(int *)(param_1 + 0x26028) = (int)uVar9;
  return uVar9;
}

