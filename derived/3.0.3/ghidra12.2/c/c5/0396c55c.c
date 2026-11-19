
void FUN_0396c55c(long param_1,float *param_2,int *param_3)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  lVar2 = *(long *)(param_1 + 0x680);
  fVar6 = *param_2;
  fVar3 = param_2[1];
  if ((fVar6 != *(float *)(lVar2 + 0x18) - *(float *)(lVar2 + 0x10)) ||
     (fVar3 != *(float *)(lVar2 + 0x1c) - *(float *)(lVar2 + 0x14))) {
    fVar5 = fVar6;
    fVar8 = 0.0;
    if (fVar6 <= 0.0) {
      fVar5 = 0.0;
      fVar8 = fVar6;
    }
    fVar6 = fVar3;
    if (fVar3 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar4 = 0.0;
    if (fVar3 <= 0.0) {
      fVar4 = fVar3;
    }
    *(float *)(lVar2 + 0x18) = fVar5;
    *(float *)(lVar2 + 0x1c) = fVar6;
    *(float *)(lVar2 + 0x10) = fVar8;
    *(float *)(lVar2 + 0x14) = fVar4;
    *(float *)(param_1 + 0x658) = *param_2;
    fVar3 = param_2[1];
    *(uint *)(param_1 + 0x6b0) = *(uint *)(param_1 + 0x6b0) | 0x80;
    lVar2 = *(long *)(param_1 + 0x680);
    *(float *)(param_1 + 0x65c) = fVar3;
  }
  fVar3 = (float)param_3[1];
  fVar6 = *(float *)(lVar2 + 8);
  fVar8 = *(float *)(lVar2 + 0xc);
  bVar1 = false;
  if ((fVar6 == (float)*param_3) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar3))) {
    bVar1 = fVar8 == fVar3;
  }
  if (!bVar1) {
    if (fVar6 * fVar8 <= 0.0) {
      fVar3 = 1.0;
      *(undefined4 *)(param_1 + 0x670) = 0x3f800000;
    }
    else {
      *(float *)(param_1 + 0x670) = (float)*param_3 / fVar6;
      fVar3 = fVar3 / *(float *)(lVar2 + 0xc);
    }
    *(float *)(param_1 + 0x674) = fVar3;
    *(int *)(param_1 + 0x660) = *param_3;
    *(int *)(param_1 + 0x664) = param_3[1];
    *(uint *)(param_1 + 0x6b0) = *(uint *)(param_1 + 0x6b0) | 0x100;
    iVar7 = param_3[1];
    *(float *)(lVar2 + 8) = (float)*param_3;
    *(float *)(lVar2 + 0xc) = (float)iVar7;
    lVar2 = *(long *)(param_1 + 0x680);
  }
  if (*(uint *)(param_1 + 0x6a0) < 6) {
    if ((1 << (ulong)(*(uint *)(param_1 + 0x6a0) & 0x1f) & 0x39U) == 0) {
      fVar6 = *(float *)(lVar2 + 8);
      fVar3 = *(float *)(lVar2 + 0xc);
    }
    else {
      fVar3 = *(float *)(lVar2 + 8);
      fVar6 = *(float *)(lVar2 + 0xc);
    }
    fVar5 = fVar3;
    fVar8 = 0.0;
    if (fVar3 <= 0.0) {
      fVar5 = 0.0;
      fVar8 = fVar3;
    }
    *(float *)(param_1 + 0x690) = fVar8;
    *(float *)(param_1 + 0x698) = fVar5;
    fVar8 = fVar6;
    fVar3 = 0.0;
    if (fVar6 <= 0.0) {
      fVar8 = 0.0;
      fVar3 = fVar6;
    }
    *(float *)(param_1 + 0x694) = fVar3;
    *(float *)(param_1 + 0x69c) = fVar8;
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar2 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar2 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar2 + 0x1c);
  return;
}

