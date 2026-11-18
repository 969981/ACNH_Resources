
void FUN_0345b880(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if ((param_3 == 0) || (*(uint *)(param_3 + 0x298) < 2)) {
    iVar2 = 0;
    iVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x2e8);
    iVar2 = *(int *)(param_3 + 0x444) + iVar1 * *(int *)(param_3 + 0x440);
    iVar4 = *(int *)(param_3 + 0x430);
    if ((*(int *)(param_3 + 0x418) != 2) &&
       (fVar5 = *(float *)(param_3 + 0x424) - *(float *)(param_3 + 0x428),
       iVar4 = *(int *)(param_3 + 0x420), fVar5 <= 0.0001 && -0.0001 <= fVar5)) {
      iVar4 = *(int *)(param_3 + 0x430);
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar2 / iVar1;
    }
    iVar3 = iVar3 - iVar4;
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    else {
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = *(int *)(param_3 + 0x2f0) / iVar1;
      }
      if (iVar4 < iVar3) {
        iVar3 = -1;
      }
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar2;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  return;
}

