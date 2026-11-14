
void FUN_016e23f8(long *param_1,float param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_2 = param_2 * 0.97;
  fVar7 = *param_3 - param_2;
  fVar6 = param_2 + *param_3;
  fVar8 = param_3[2] - param_2;
  param_2 = param_2 + param_3[2];
  iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar4 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  *param_1 = (long)(PTR_DAT_04bbc1a0 + 0x10);
  param_1[1] = (long)&DAT_048f9750;
  param_1[3] = (long)&DAT_048f9750;
  iVar5 = (int)((float)(int)param_2 / 5.0) - (uint)(param_2 < 0.0);
  iVar1 = iVar2;
  if (iVar4 <= iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = iVar3;
  if (iVar5 <= iVar3) {
    iVar4 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 2) = iVar1;
  *(int *)((long)param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 4) = iVar2;
  *(int *)((long)param_1 + 0x24) = iVar3;
  return;
}

