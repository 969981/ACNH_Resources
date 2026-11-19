
void FUN_039c33f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = *(float *)(param_1 + 0x70);
  fVar4 = *(float *)(param_1 + 0x74);
  fVar9 = *(float *)(param_1 + 0x48);
  fVar7 = *(float *)(param_1 + 0x4c);
  fVar10 = (fVar4 - fVar7) / *(float *)(param_1 + 0x9c);
  fVar11 = (fVar5 - fVar9) / *(float *)(param_1 + 0x98);
  fVar6 = *(float *)(param_1 + 0x78);
  fVar8 = *(float *)(param_1 + 0x50);
  fVar12 = (fVar6 - fVar8) / *(float *)(param_1 + 0xa0);
  uVar1 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar1 = (uint)(0.0 <= fVar11);
  }
  uVar3 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar3 = (uint)(0.0 <= fVar10);
  }
  uVar2 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar2 = (uint)(0.0 <= fVar12);
  }
  *(float *)(param_1 + 0xa8) = (float)(int)(uVar1 + (int)fVar11);
  *(float *)(param_1 + 0xac) = (float)(int)(uVar3 + (int)fVar10);
  *(undefined8 *)(param_1 + 0xbc) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0xb4) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0xc4) = 0xff7fffffff7fffff;
  *(float *)(param_1 + 0xb0) = (float)(int)(uVar2 + (int)fVar12);
  fVar10 = 3.4028235e+38;
  if (fVar9 < 3.4028235e+38) {
    *(float *)(param_1 + 0xb4) = fVar9;
    fVar10 = fVar9;
  }
  fVar11 = 3.4028235e+38;
  if (fVar7 < 3.4028235e+38) {
    *(float *)(param_1 + 0xb8) = fVar7;
    fVar11 = fVar7;
  }
  fVar12 = 3.4028235e+38;
  if (fVar8 < 3.4028235e+38) {
    *(float *)(param_1 + 0xbc) = fVar8;
    fVar12 = fVar8;
  }
  fVar13 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar9) {
    *(float *)(param_1 + 0xc0) = fVar9;
    fVar13 = fVar9;
  }
  fVar9 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar7) {
    *(float *)(param_1 + 0xc4) = fVar7;
    fVar9 = fVar7;
  }
  fVar7 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar8) {
    *(float *)(param_1 + 200) = fVar8;
    fVar7 = fVar8;
  }
  if (fVar5 < fVar10) {
    *(float *)(param_1 + 0xb4) = fVar5;
  }
  if (fVar4 < fVar11) {
    *(float *)(param_1 + 0xb8) = fVar4;
  }
  if (fVar6 < fVar12) {
    *(float *)(param_1 + 0xbc) = fVar6;
  }
  if (fVar13 < fVar5) {
    *(float *)(param_1 + 0xc0) = fVar5;
  }
  if (fVar9 < fVar4) {
    *(float *)(param_1 + 0xc4) = fVar4;
  }
  if (fVar7 < fVar6) {
    *(float *)(param_1 + 200) = fVar6;
    return;
  }
  return;
}

