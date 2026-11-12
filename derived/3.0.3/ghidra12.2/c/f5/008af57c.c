
void FUN_008af57c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = FUN_008eca0c(6);
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = iVar1;
  }
  *param_1 = iVar2;
  if (DAT_05292338 == 0) {
    fVar8 = 0.0;
    fVar6 = 0.0;
  }
  else {
    if (*(int *)(DAT_05292338 + 0xe48) == 0x14) {
      iVar2 = *(int *)(DAT_05292338 + 0xf64) * 2 + 4;
      iVar1 = *(int *)(DAT_05292338 + 0xf68) * 2 + 4;
      goto LAB_008af6bc;
    }
    fVar8 = (float)*(int *)(DAT_05292338 + 0xd88) * 0.5;
    fVar6 = (float)*(int *)(DAT_05292338 + 0xd8c) * 0.5;
  }
  uVar4 = 0;
  if (fVar8 != (float)(int)fVar8) {
    uVar4 = (uint)(fVar8 < 0.0);
  }
  uVar5 = 0;
  if (fVar6 != (float)(int)fVar6) {
    uVar5 = (uint)(fVar6 < 0.0);
  }
  if (DAT_05292338 == 0) {
    fVar7 = 8.0;
    fVar9 = 8.0;
  }
  else {
    fVar7 = (float)*(int *)(DAT_05292338 + 0xd98) * 0.5;
    fVar9 = (float)*(int *)(DAT_05292338 + 0xd9c) * 0.5;
  }
  uVar3 = 0;
  if (fVar7 != (float)(int)fVar7) {
    uVar3 = (uint)(fVar7 < 0.0);
  }
  iVar2 = ((int)fVar7 + ~((int)fVar8 - uVar4)) - uVar3;
  uVar4 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar4 = (uint)(fVar9 < 0.0);
  }
  iVar1 = ((int)fVar9 + ~((int)fVar6 - uVar5)) - uVar4;
LAB_008af6bc:
  if (iVar2 <= iVar1) {
    iVar2 = iVar1;
  }
  iVar2 = FUN_008eca0c(iVar2);
  if (-1 < iVar2) {
    *param_1 = iVar2;
  }
  return;
}

