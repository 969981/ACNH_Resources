
bool FUN_01377ce0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar5 = (float *)FUN_0252d9bc(0);
  if ((param_1 != 0) && (pfVar5 != (float *)0x0)) {
    fVar9 = (float)(int)*pfVar5;
    uVar7 = (uint)(*pfVar5 < 0.0);
    iVar1 = (int)(fVar9 / 10.0) - uVar7;
    bVar4 = ((int)(fVar9 / 5.0) - uVar7 & 0x80000001) == 1;
    iVar8 = 4;
    if (bVar4) {
      iVar8 = 5;
    }
    iVar6 = -5;
    if (bVar4) {
      iVar6 = -4;
    }
    iVar2 = (int)((float)(int)pfVar5[2] / 10.0) - (uint)(pfVar5[2] < 0.0);
    fVar11 = (float)(iVar6 + iVar1) * 10.0 + 2.5;
    fVar12 = (float)(iVar2 + -10) * 10.0 + 2.5;
    fVar9 = (float)(iVar8 + iVar1) * 10.0 + 10.0 + -2.5;
    fVar10 = (float)(iVar2 + -1) * 10.0 + 10.0 + -2.5;
    iVar1 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
    iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    iVar2 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar3 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
    iVar8 = iVar1;
    if (iVar2 <= iVar1) {
      iVar8 = iVar2;
    }
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar6;
    if (iVar3 <= iVar6) {
      iVar2 = iVar3;
    }
    *(int *)(param_1 + 0x10) = iVar8;
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar6 <= iVar3) {
      iVar6 = iVar3;
    }
    *(int *)(param_1 + 0x20) = iVar1;
    *(int *)(param_1 + 0x24) = iVar6;
  }
  return pfVar5 != (float *)0x0;
}

