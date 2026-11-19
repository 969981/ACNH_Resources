
void FUN_039dbfa0(long param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  
  pMVar1 = (MutexType *)(param_1 + 0x5d18);
  nn::os::LockMutex(pMVar1);
  lVar5 = 0;
  do {
    lVar6 = 0;
    do {
      piVar7 = *(int **)(param_1 + 0x4190 + lVar5 * 0x100 + lVar6 * 8);
      if (piVar7 != (int *)0x0) {
        piVar8 = piVar7;
        do {
          if ((piVar8 == (int *)0x0) || ((*piVar8 != -0x52fff2e2 && (*piVar8 != -0x2ea54e13)))) {
            nn::os::LockMutex(pMVar1);
            nn::os::UnlockMutex(pMVar1);
            FUN_039db950(param_1,extraout_x1_01,0);
          }
          iVar4 = piVar8[5];
          piVar2 = (int *)0x0;
          if (iVar4 != 0) {
            piVar2 = (int *)((long)iVar4 + (long)(piVar8 + 5));
          }
          if (piVar2 == (int *)0x0) {
LAB_039dc074:
            nn::os::LockMutex(pMVar1);
            nn::os::UnlockMutex(pMVar1);
            FUN_039db950(param_1,extraout_x1_00,0);
          }
          else {
            piVar3 = (int *)0x0;
            if (piVar2[6] != 0) {
              piVar3 = (int *)((long)piVar2 + (long)piVar2[6] + 0x14);
            }
            if ((piVar3 != piVar8) || ((*piVar2 != -0x52fff2e2 && (*piVar2 != -0x2ea54e13))))
            goto LAB_039dc074;
          }
          piVar8 = piVar2;
        } while (piVar2 != piVar7);
        piVar8 = (int *)0x0;
        if (piVar7[6] != 0) {
          piVar8 = (int *)((long)piVar7 + (long)piVar7[6] + 0x14);
        }
        if ((piVar8 == (int *)0x0) ||
           ((iVar4 = *piVar8, iVar4 != -0x52fff2e2 && (iVar4 != -0x2ea54e13)))) {
          nn::os::LockMutex(pMVar1);
          nn::os::UnlockMutex(pMVar1);
          FUN_039db950(param_1,extraout_x1_02,0);
          iVar4 = *piVar8;
        }
        if ((iVar4 != -0x52fff2e2) && (iVar4 != -0x2ea54e13)) {
          nn::os::LockMutex(pMVar1);
          nn::os::UnlockMutex(pMVar1);
          FUN_039db950(param_1,extraout_x1_03,0);
        }
        iVar4 = piVar8[5];
        piVar2 = (int *)0x0;
        if (iVar4 != 0) {
          piVar2 = (int *)((long)iVar4 + (long)(piVar8 + 5));
        }
        if ((piVar2 != piVar7) || ((*piVar8 != -0x52fff2e2 && (*piVar8 != -0x2ea54e13)))) {
          nn::os::LockMutex(pMVar1);
          nn::os::UnlockMutex(pMVar1);
          FUN_039db950(param_1,extraout_x1,0);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x20);
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x1b) {
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  } while( true );
}

