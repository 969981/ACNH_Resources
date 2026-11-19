
int * FUN_039dc8c0(long param_1,uint *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  
  iVar2 = (int)param_3 - *(int *)(param_1 + 0x5ce8);
  uVar1 = iVar2 >> (*(byte *)(param_1 + 8) - 5 & 0x1f) & 0x1f;
  uVar7 = (ulong)uVar1;
  uVar3 = iVar2 >> (*(byte *)(param_1 + 8) - 10 & 0x1f) & 0x1f;
  if (((param_4 & 1) != 0) &&
     (piVar8 = *(int **)(param_2 + uVar7 * 0x40 + (ulong)uVar3 * 2 + 0x22), piVar8 != (int *)0x0)) {
    piVar5 = piVar8;
    do {
      if ((piVar5 == (int *)0x0) || ((*piVar5 != -0x52fff2e2 && (*piVar5 != -0x2ea54e13)))) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
        FUN_039db950(param_1,extraout_x1,0);
      }
      if (param_3 <= piVar5) {
        return piVar5;
      }
      piVar6 = piVar5 + 3;
      iVar2 = *piVar6;
      piVar5 = (int *)0x0;
      if (iVar2 != 0) {
        piVar5 = (int *)((long)iVar2 + (long)piVar6);
      }
    } while (piVar5 != piVar8);
  }
  if (uVar3 == 0x1f) {
    if (uVar1 != 0x1f) {
      uVar3 = 0;
      uVar7 = (ulong)(uVar1 + 1);
      goto LAB_039dc9b4;
    }
LAB_039dcaac:
    piVar8 = (int *)0x0;
  }
  else {
    uVar3 = uVar3 + 1;
LAB_039dc9b4:
    uVar3 = param_2[uVar7 + 1] & -1 << (ulong)(uVar3 & 0x1f);
    if (uVar3 == 0) {
      uVar3 = *param_2 & -2 << (ulong)((uint)uVar7 & 0x1f);
      if (uVar3 == 0) goto LAB_039dcaac;
      uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar7 = (ulong)(uVar3 + (uVar3 >> 0x10) & 0x3f);
      uVar3 = param_2[uVar7 + 1];
    }
    uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
    uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    uVar4 = (ulong)(uVar3 + (uVar3 >> 0x10) & 0x3f);
    piVar8 = *(int **)(param_2 + uVar7 * 0x40 + uVar4 * 2 + 0x22);
    if (*piVar8 != -0x52fff2e2 && *piVar8 != -0x2ea54e13) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x5d18));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x5d18));
      FUN_039db950(param_1,extraout_x1_00,0);
      piVar8 = *(int **)(param_2 + uVar7 * 0x40 + uVar4 * 2 + 0x22);
    }
  }
  return piVar8;
}

