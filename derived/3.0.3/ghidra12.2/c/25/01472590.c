
void FUN_01472590(float param_1,long param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = -param_1;
  if (0.0 <= param_1) {
    fVar6 = param_1;
  }
  fVar6 = fVar6 * 0.5;
  fVar8 = *param_3 - fVar6;
  fVar7 = fVar6 + *param_3;
  fVar9 = param_3[2] - fVar6;
  fVar6 = fVar6 + param_3[2];
  iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar4 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar5 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
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
  *(int *)(param_2 + 0x10) = iVar1;
  *(int *)(param_2 + 0x14) = iVar4;
  *(int *)(param_2 + 0x20) = iVar2;
  *(int *)(param_2 + 0x24) = iVar3;
  return;
}

