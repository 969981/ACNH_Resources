
void FUN_012e1cb8(undefined8 *param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  
  puVar3 = PTR_DAT_04bb2010;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0498d548;
  param_1[1] = puVar3 + 0x10;
  param_1[3] = puVar3 + 0x10;
  param_1[4] = 0;
  fVar4 = *param_2 - ((float)param_3 * 0.5 * 5.0 + -2.5);
  fVar5 = param_2[2] - ((float)param_4 * 0.5 * 5.0 + -2.5);
  iVar1 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  iVar2 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  *(int *)(param_1 + 2) = iVar1;
  *(int *)((long)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 4) = param_3 + iVar1 + -1;
  *(int *)((long)param_1 + 0x24) = param_4 + iVar2 + -1;
  return;
}

