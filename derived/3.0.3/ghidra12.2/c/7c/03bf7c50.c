
undefined8 FUN_03bf7c50(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **local_60;
  long lStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  iVar4 = *(int *)(param_1 + 0x258b8);
  if (iVar4 != 0) {
    lVar12 = *(long *)(DAT_05ae6a60 + 0x88);
    pMVar1 = (MutexType *)(lVar12 + 0x330);
    nn::os::LockMutex(pMVar1);
    iVar6 = *(int *)(lVar12 + 0x128);
    puVar8 = *(uint **)(*(long *)(lVar12 + 0x110) + (long)iVar6 * 8);
    uVar5 = *puVar8;
    if (0 < (int)uVar5) {
      puVar9 = *(undefined8 **)(puVar8 + 2);
      lVar10 = (ulong)uVar5 << 3;
      do {
        if (*(int *)*puVar9 == iVar4) goto LAB_03bf7dec;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    uVar5 = iVar6 + 1U & 1;
    uVar2 = -uVar5;
    if (-2 < iVar6) {
      uVar2 = uVar5;
    }
    puVar8 = *(uint **)(*(long *)(lVar12 + 0x110) + (ulong)uVar2 * 8);
    uVar5 = *puVar8;
    if (0 < (int)uVar5) {
      puVar9 = *(undefined8 **)(puVar8 + 2);
      lVar10 = (ulong)uVar5 << 3;
      do {
        if (*(int *)*puVar9 == iVar4) goto LAB_03bf7dec;
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    if ((0 < *(int *)(lVar12 + 0x140)) &&
       (lVar10 = *(long *)(lVar12 + 0x138), lVar10 != lVar12 + 0x130)) {
      do {
        if (*(int *)(lVar10 + -8) == iVar4) {
LAB_03bf7dec:
          nn::os::UnlockMutex(pMVar1);
          return 0;
        }
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 + -8 != lVar12 + 0x128);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  if (*(char *)(param_1 + 0x25908) == '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x258c0) = *param_2;
  uVar7 = param_2[1];
  uVar3 = param_2[2];
  uVar11 = param_2[4];
  lVar12 = *(long *)PTR_DAT_04bcb7d8;
  *(undefined8 *)(param_1 + 0x258d8) = param_2[3];
  *(undefined8 *)(param_1 + 0x258e0) = uVar11;
  *(undefined8 *)(param_1 + 0x258c8) = uVar7;
  *(undefined8 *)(param_1 + 0x258d0) = uVar3;
  uVar11 = param_2[7];
  uVar7 = param_2[5];
  uVar3 = param_2[6];
  local_60 = &PTR_LAB_04b7c018;
  local_50 = FUN_03bf7e10;
  uStack_48 = 0;
  *(undefined8 *)(param_1 + 0x258fd) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)(param_1 + 0x258f0) = uVar3;
  *(undefined8 *)(param_1 + 0x258f8) = uVar11;
  *(undefined8 *)(param_1 + 0x258e8) = uVar7;
  lStack_58 = param_1;
  uVar7 = FUN_03bf7994(*(undefined8 *)(lVar12 + 0x88),&local_60,param_1 + 0x1c,
                       *(char *)((long)param_2 + 0x44) == '\0');
  *(int *)(param_1 + 0x258b8) = (int)uVar7;
  return uVar7;
}

