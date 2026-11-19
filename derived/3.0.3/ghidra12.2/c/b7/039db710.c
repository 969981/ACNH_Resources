
void FUN_039db710(long param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  
  if (*param_2 != -0x52fff2e2) {
    if (*param_2 != -0x2ea54e13) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
      FUN_039db950(param_1,extraout_x1,0);
    }
    piVar8 = param_2 + 5;
    if (((*piVar8 != 0) && ((long)*piVar8 != -(long)piVar8)) ||
       ((*param_2 != -0x52fff2e2 && (*param_2 != -0x2ea54e13)))) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
      FUN_039db950(param_1,extraout_x1_00,0);
    }
    if (((param_2[6] != 0) && ((long)param_2[6] != -(long)piVar8)) ||
       ((*param_2 != -0x52fff2e2 && (*param_2 != -0x2ea54e13)))) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
      FUN_039db950(param_1,extraout_x1_01,0);
    }
    lVar7 = LZCOUNT(param_2[1]);
    lVar5 = -lVar7;
    uVar6 = (uint)(lVar5 + 0x1a);
    uVar4 = (0x80000000U >> (ulong)((uint)lVar7 & 0x1f) ^ param_2[1]) >> (ulong)(uVar6 & 0x1f);
    lVar7 = param_1 + (lVar5 + 0x1a) * 0x100 + 0x4190;
    piVar9 = *(int **)(lVar7 + (long)(int)uVar4 * 8);
    if (piVar9 == (int *)0x0) {
      puVar1 = (uint *)(param_1 + 0x4120);
      param_2[5] = -0x14;
      param_2[6] = -0x14;
      *(int **)(lVar7 + (long)(int)uVar4 * 8) = param_2;
      puVar1[lVar5 + 0x1b] = puVar1[lVar5 + 0x1b] | 1 << (ulong)(uVar4 & 0x1f);
      *puVar1 = *puVar1 | 1 << (ulong)(uVar6 & 0x1f);
    }
    else {
      piVar3 = (int *)0x0;
      if (piVar9[6] != 0) {
        piVar3 = (int *)((long)piVar9[6] + (long)(piVar9 + 5));
      }
      if (*piVar9 != -0x2ea54e13) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
        FUN_039db950(param_1,extraout_x1_02,0);
      }
      if ((piVar3 == (int *)0x0) || (*piVar3 != -0x2ea54e13)) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
        FUN_039db950(param_1,extraout_x1_03,0);
      }
      piVar3[5] = (int)param_2 - ((int)piVar3 + 0x14);
      iVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar2 = (int)piVar3 - (int)piVar8;
      }
      param_2[5] = (int)piVar9 - (int)piVar8;
      param_2[6] = iVar2;
      piVar9[6] = (int)param_2 - (int)(piVar9 + 5);
      *(int **)(lVar7 + (long)(int)uVar4 * 8) = param_2;
    }
  }
  return;
}

