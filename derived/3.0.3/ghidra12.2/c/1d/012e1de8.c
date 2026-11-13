
void FUN_012e1de8(float param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar6 = PTR_DAT_04bb2010;
  param_2[2] = 0;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  param_2[3] = puVar6 + 0x10;
  param_2[4] = 0;
  *param_2 = &PTR_FUN_0498d548;
  param_2[1] = puVar6 + 0x10;
  fVar7 = *param_3 - param_1;
  fVar8 = param_1 + *param_3;
  fVar9 = param_3[2] - param_1;
  param_1 = param_1 + param_3[2];
  iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar4 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar5 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
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
  *(int *)(param_2 + 2) = iVar1;
  *(int *)((long)param_2 + 0x14) = iVar4;
  *(int *)(param_2 + 4) = iVar2;
  *(int *)((long)param_2 + 0x24) = iVar3;
  return;
}

