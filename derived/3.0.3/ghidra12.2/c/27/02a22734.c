
void FUN_02a22734(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x89660));
  *param_1 = *(undefined8 *)(lVar3 + 0x895e0);
  uVar1 = *(undefined8 *)(lVar3 + 0x895e8);
  uVar2 = *(undefined8 *)(lVar3 + 0x895f0);
  uVar4 = *(undefined8 *)(lVar3 + 0x89600);
  param_1[3] = *(undefined8 *)(lVar3 + 0x895f8);
  param_1[4] = uVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar4 = *(undefined8 *)(lVar3 + 0x89618);
  uVar1 = *(undefined8 *)(lVar3 + 0x89608);
  uVar2 = *(undefined8 *)(lVar3 + 0x89610);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar3 + 0x89620);
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  param_1[5] = uVar1;
  *(undefined2 *)((long)param_1 + 0x44) = *(undefined2 *)(lVar3 + 0x89624);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar3 + 0x89628);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(lVar3 + 0x8962c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar3 + 0x89630);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)(lVar3 + 0x89634);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(lVar3 + 0x8963c);
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x89660));
  return;
}

