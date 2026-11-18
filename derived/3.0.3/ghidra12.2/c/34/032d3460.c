
void FUN_032d3460(long *param_1,float *param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = *param_1;
  fVar6 = *(float *)(lVar3 + 0x30);
  fVar5 = *(float *)(lVar3 + 0x34);
  fVar7 = *(float *)(lVar3 + 0x38);
  if (*(long *)(lVar3 + 0x18) == 0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
    lVar4 = *(long *)(lVar3 + 0x18);
    do {
      bVar2 = *(byte *)(lVar3 + 0x5b) >> 6;
      if (bVar2 == 2) {
        fVar11 = *(float *)(lVar4 + 0x4c) * *(float *)(lVar4 + 0x54) * -0.5;
LAB_032d3500:
        fVar5 = fVar5 + fVar11;
      }
      else if (bVar2 == 1) {
        fVar11 = *(float *)(lVar4 + 0x4c) * *(float *)(lVar4 + 0x54) * 0.5;
        goto LAB_032d3500;
      }
      bVar2 = *(byte *)(lVar3 + 0x5b) >> 4 & 3;
      if (bVar2 == 1) {
        fVar11 = *(float *)(lVar4 + 0x48) * *(float *)(lVar4 + 0x50) * -0.5;
LAB_032d34a0:
        fVar6 = fVar6 + fVar11;
      }
      else if (bVar2 == 2) {
        fVar11 = *(float *)(lVar4 + 0x48) * *(float *)(lVar4 + 0x50) * 0.5;
        goto LAB_032d34a0;
      }
      fVar10 = fVar10 + fVar6;
      fVar9 = fVar9 + fVar5;
      plVar1 = (long *)(lVar4 + 0x18);
      fVar8 = fVar7 + fVar8;
      fVar6 = *(float *)(lVar4 + 0x30);
      fVar5 = *(float *)(lVar4 + 0x34);
      fVar7 = *(float *)(lVar4 + 0x38);
      lVar3 = lVar4;
      lVar4 = *plVar1;
    } while (*plVar1 != 0);
  }
  *param_2 = fVar10 + fVar6;
  param_2[1] = fVar9 + fVar5;
  param_2[2] = fVar8 + fVar7;
  return;
}

