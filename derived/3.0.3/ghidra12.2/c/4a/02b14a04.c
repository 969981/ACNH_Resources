
void FUN_02b14a04(long *param_1,long param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *param_3;
  fVar7 = param_3[2];
  *param_1 = (long)(PTR_DAT_04bb2018 + 0x10);
  iVar3 = (int)((float)(int)fVar6 / 10.0) - (uint)(fVar6 < 0.0);
  iVar4 = (int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0);
  uVar2 = *(uint *)(param_2 + 0x10);
  *(int *)(param_1 + 1) = iVar3;
  *(int *)((long)param_1 + 0xc) = iVar4;
  if (uVar2 < 4) {
    lVar5 = (long)(int)uVar2 * 4;
    iVar1 = *(int *)(&DAT_04102270 + lVar5);
    *(int *)(param_1 + 1) = iVar3 + *(int *)(&DAT_041029c0 + lVar5);
    *(int *)((long)param_1 + 0xc) = iVar4 + iVar1;
  }
  return;
}

