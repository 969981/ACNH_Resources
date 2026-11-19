
void FUN_039dc518(long param_1,int *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  pMVar1 = (MutexType *)(param_1 + 0x5d18);
  nn::os::LockMutex(pMVar1);
  if (*param_2 != -0x2ea54e13) {
    nn::os::LockMutex(pMVar1);
    nn::os::UnlockMutex(pMVar1);
    FUN_039db950(param_1,extraout_x1,0);
  }
  if (((param_2[5] != 0) && ((long)param_2[5] != -0x14 - (long)param_2)) ||
     ((*param_2 != -0x52fff2e2 && (*param_2 != -0x2ea54e13)))) {
    nn::os::LockMutex(pMVar1);
    nn::os::UnlockMutex(pMVar1);
    FUN_039db950(param_1,extraout_x1_00,0);
  }
  if (((param_2[6] != 0) && ((long)param_2[6] != -0x14 - (long)param_2)) ||
     ((*param_2 != -0x52fff2e2 && (*param_2 != -0x2ea54e13)))) {
    nn::os::LockMutex(pMVar1);
    nn::os::UnlockMutex(pMVar1);
    FUN_039db950(param_1,extraout_x1_01,0);
  }
  iVar4 = param_2[1];
  *param_2 = -0x21523f22;
  lVar2 = 0;
  if (param_2[2] != 0) {
    lVar2 = (long)param_2[2] + (long)param_2;
  }
  lVar3 = 0;
  if (iVar4 != 0) {
    lVar3 = (long)iVar4 + (long)param_2;
  }
  *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + iVar4;
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + param_2[2];
  nn::os::UnlockMutex(pMVar1);
  return;
}

