
int FUN_03865348(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (*(uint *)(param_1 + 0x298) < 2) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x430);
  if ((*(int *)(param_1 + 0x418) != 2) &&
     (fVar4 = *(float *)(param_1 + 0x424) - *(float *)(param_1 + 0x428),
     iVar3 = *(int *)(param_1 + 0x420), fVar4 <= 0.0001 && -0.0001 <= fVar4)) {
    iVar3 = *(int *)(param_1 + 0x430);
  }
  iVar1 = *(int *)(param_1 + 0x2e8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = param_2 / iVar1;
  }
  iVar2 = iVar2 - iVar3;
  if (iVar2 < 0) {
    return -1;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x2f0) / iVar1;
  }
  if (iVar3 < iVar2) {
    iVar2 = -1;
  }
  return iVar2;
}

