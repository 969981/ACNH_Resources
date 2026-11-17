
void FUN_02b1cfe4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((param_2 != 0) && (*(char *)(param_4 + 0xa4) != '\0')) {
    fVar8 = (float)*(int *)(param_4 + 0xd4) * 0.5;
    fVar7 = (float)*(int *)(param_4 + 0xd0) * 0.5;
    fVar10 = (float)*(int *)(param_4 + 0xe0) * 0.5;
    fVar9 = (float)*(int *)(param_4 + 0xe4) * 0.5;
    uVar6 = 0;
    if (fVar7 != (float)(int)fVar7) {
      uVar6 = (uint)(fVar7 < 0.0);
    }
    iVar2 = (int)fVar7 - uVar6;
    uVar6 = 0;
    if (fVar8 != (float)(int)fVar8) {
      uVar6 = (uint)(fVar8 < 0.0);
    }
    iVar3 = (int)fVar8 - uVar6;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    iVar4 = (int)fVar10 - uVar6;
    uVar6 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar6 = (uint)(fVar9 < 0.0);
    }
    iVar5 = (int)fVar9 - uVar6;
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
    iVar5 = (int)((float)(int)*(float *)(param_3 + 0xc) / 10.0) -
            (uint)(*(float *)(param_3 + 0xc) < 0.0);
    iVar1 = iVar1 + iVar5;
    iVar2 = iVar2 + iVar5;
    iVar5 = (int)((float)(int)*(float *)(param_3 + 0x14) / 10.0) -
            (uint)(*(float *)(param_3 + 0x14) < 0.0);
    iVar4 = iVar4 + iVar5;
    uVar6 = (iVar2 - iVar1) + 1U >> 1;
    *(uint *)(param_2 + 0x10) = iVar1 - uVar6;
    *(int *)(param_2 + 0x14) = ~(iVar3 + iVar5) + iVar4 * 2;
    *(uint *)(param_2 + 0x20) = iVar2 - uVar6;
    *(int *)(param_2 + 0x24) = iVar4 + -1;
  }
  return;
}

