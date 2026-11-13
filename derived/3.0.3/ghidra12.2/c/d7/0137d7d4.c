
void FUN_0137d7d4(long param_1,long param_2)

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
  float fVar10;
  
  if (param_2 != 0) {
    fVar8 = (float)*(int *)(param_1 + 0xc) * 10.0;
    fVar6 = (float)*(int *)(param_1 + 8) * 10.0;
    fVar7 = fVar6 + 2.5;
    fVar9 = fVar8 + 2.5;
    fVar10 = fVar6 + 10.0 + -2.5;
    fVar6 = fVar8 + 10.0 + -2.5;
    iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
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
    *(int *)(param_2 + 0x10) = iVar1;
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar2;
    *(int *)(param_2 + 0x24) = iVar3;
  }
  return;
}

