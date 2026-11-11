
void FUN_003c3ec0(undefined4 param_1,long *param_2,int param_3,int param_4)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = (**(code **)(*(long *)param_2[0xc] + 8))();
  if (0 < (int)param_2[0x14] && 0 < iVar3) {
    iVar6 = 0;
    pMVar1 = (MutexType *)(param_2 + 0x16);
    do {
      iVar7 = 0;
      do {
        nn::os::LockMutex(pMVar1);
        lVar5 = *(long *)(param_2[0x13] + (long)(iVar6 + (int)param_2[0x14] * param_3) * 8);
        iVar2 = (int)param_2[0x15] * param_4;
        if (iVar6 == iVar7) {
          *(undefined4 *)(lVar5 + (long)(iVar2 + iVar6) * 4) = param_1;
          nn::os::UnlockMutex(pMVar1);
          uVar4 = FUN_003c5b84();
          lVar5 = FUN_003cbb70(uVar4,0x30,1);
          *(undefined4 *)(lVar5 + 8) = 0x4b;
          *(long **)(lVar5 + 0x18) = param_2;
          *(int *)(lVar5 + 0x20) = param_3;
          *(int *)(lVar5 + 0x24) = iVar6;
          *(int *)(lVar5 + 0x28) = param_4;
          *(int *)(lVar5 + 0x2c) = iVar6;
        }
        else {
          *(undefined4 *)(lVar5 + (long)(iVar7 + iVar2) * 4) = 0;
          nn::os::UnlockMutex(pMVar1);
          uVar4 = FUN_003c5b84();
          lVar5 = FUN_003cbb70(uVar4,0x30,1);
          *(undefined4 *)(lVar5 + 8) = 0x4b;
          *(long **)(lVar5 + 0x18) = param_2;
          *(int *)(lVar5 + 0x20) = param_3;
          *(int *)(lVar5 + 0x24) = iVar6;
          *(int *)(lVar5 + 0x28) = param_4;
          *(int *)(lVar5 + 0x2c) = iVar7;
        }
        FUN_003cc15c(uVar4,lVar5);
        (**(code **)(*param_2 + 0x18))(param_2,1);
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_2[0x14]);
  }
  return;
}

