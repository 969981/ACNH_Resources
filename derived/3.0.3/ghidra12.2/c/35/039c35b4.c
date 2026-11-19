
int FUN_039c35b4(long param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = *param_2;
  fVar7 = *(float *)(param_1 + 0x70);
  bVar1 = false;
  bVar2 = true;
  if (*(float *)(param_1 + 0x48) <= fVar10) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar10) && !NAN(fVar7)) {
      bVar1 = fVar10 == fVar7;
      bVar2 = fVar7 <= fVar10;
    }
  }
  if (!bVar2 || bVar1) {
    fVar7 = param_2[2];
    fVar8 = *(float *)(param_1 + 0x78);
    bVar1 = false;
    bVar2 = true;
    if (*(float *)(param_1 + 0x50) <= fVar7) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar7) && !NAN(fVar8)) {
        bVar1 = fVar7 == fVar8;
        bVar2 = fVar8 <= fVar7;
      }
    }
    if (bVar2 && !bVar1) {
      return -1;
    }
    iVar3 = -1;
    fVar8 = param_2[1];
    if ((*(float *)(param_1 + 0x4c) <= fVar8) && (fVar8 <= *(float *)(param_1 + 0x74))) {
      fVar9 = (fVar10 - *(float *)(param_1 + 0x48)) / *(float *)(param_1 + 0x98);
      fVar10 = (fVar8 - *(float *)(param_1 + 0x4c)) / *(float *)(param_1 + 0x9c);
      fVar7 = (fVar7 - *(float *)(param_1 + 0x50)) / *(float *)(param_1 + 0xa0);
      uVar4 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar4 = (uint)(fVar9 < 0.0);
      }
      uVar5 = 0;
      if (fVar10 != (float)(int)fVar10) {
        uVar5 = (uint)(fVar10 < 0.0);
      }
      uVar6 = 0;
      if (fVar7 != (float)(int)fVar7) {
        uVar6 = (uint)(fVar7 < 0.0);
      }
      iVar3 = (int)(*(float *)(param_1 + 0xa8) * (float)(int)((int)fVar7 - uVar6) +
                    (float)(int)((int)fVar10 - uVar5) *
                    *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xb0) +
                   (float)(int)((int)fVar9 - uVar4));
    }
    return iVar3;
  }
  return -1;
}

