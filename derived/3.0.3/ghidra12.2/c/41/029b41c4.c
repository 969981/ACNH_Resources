
void FUN_029b41c4(long param_1,undefined4 *param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  MutexType *pMVar1;
  uint *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  pMVar1 = (MutexType *)(param_1 + 0x1af0);
  nn::os::LockMutex(pMVar1);
  if ((int)param_4 < 0x23) {
    nn::os::LockMutex(pMVar1);
    puVar2 = (uint *)(param_1 + 0x10cc) + param_4;
    if (0x67 < param_4) {
      puVar2 = (uint *)(param_1 + 0x10cc);
    }
    uVar8 = *puVar2;
    nn::os::UnlockMutex(pMVar1);
    if (param_2 == (undefined4 *)0x0) goto LAB_029b42b4;
    puVar3 = (undefined4 *)(param_1 + 0x126c) + (ulong)param_5 * 0x18;
    if (7 < param_5) {
      puVar3 = (undefined4 *)(param_1 + 0x126c);
    }
    puVar9 = puVar3 + (ulong)uVar8 * 3;
    if (7 < uVar8) {
      puVar9 = puVar3;
    }
  }
  else {
    if (param_2 == (undefined4 *)0x0) goto LAB_029b42b4;
    puVar9 = (undefined4 *)(param_1 + 0x156c) + (ulong)(param_4 - 0x23) * 3;
    if (0x44 < param_4 - 0x23) {
      puVar9 = (undefined4 *)(param_1 + 0x156c);
    }
  }
  *param_2 = *puVar9;
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(puVar9 + 1);
LAB_029b42b4:
  if (param_3 != (undefined8 *)0x0) {
    if (0x22 < (int)param_4) {
      lVar4 = param_1 + 0x18a8 + (ulong)(param_4 - 0x23) * 8;
      if (0x44 < param_4 - 0x23) {
        lVar4 = param_1 + 0x18a8;
      }
      param_5 = *(uint *)(lVar4 + 4);
    }
    nn::os::LockMutex(pMVar1);
    puVar5 = (undefined8 *)(param_1 + 0x128 + (ulong)param_5 * 0x34);
    if (0x4c < param_5) {
      puVar5 = (undefined8 *)(param_1 + 0x128);
    }
    uVar6 = puVar5[1];
    uVar7 = puVar5[2];
    *param_3 = *puVar5;
    param_3[1] = uVar6;
    param_3[2] = uVar7;
    uVar6 = puVar5[4];
    uVar7 = puVar5[5];
    uVar10 = puVar5[3];
    *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar5 + 6);
    param_3[4] = uVar6;
    param_3[5] = uVar7;
    param_3[3] = uVar10;
    nn::os::UnlockMutex(pMVar1);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

