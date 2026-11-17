
void FUN_0300a334(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_5c [2];
  undefined2 local_54;
  
  fVar8 = *(float *)(param_1 + 0x21c);
  if (fVar8 <= 1.0) {
    fVar10 = fVar8 / 0.06666667;
  }
  else {
    fVar10 = 14.999999;
  }
  fVar9 = *(float *)(param_1 + 0x220);
  fVar12 = 0.0;
  if (0.0 <= fVar8) {
    fVar12 = fVar10;
  }
  fVar8 = 0.5;
  if (fVar12 < 0.0) {
    fVar8 = -0.5;
  }
  if (fVar9 <= 0.95857143) {
    fVar10 = (fVar9 + -0.08) / 0.05857143;
  }
  else {
    fVar10 = 15.0;
  }
  lVar3 = *(long *)(param_1 + 0x210);
  lVar5 = *(long *)(lVar3 + 0x598);
  fVar11 = 0.0;
  if (0.08 <= fVar9) {
    fVar11 = fVar10;
  }
  fVar10 = 0.5;
  if (fVar11 < 0.0) {
    fVar10 = -0.5;
  }
  if (lVar5 != 0) {
    fVar9 = *(float *)(param_1 + 0x218);
    if (fVar9 <= 1.0) {
      fVar6 = fVar9 / 0.033333335;
    }
    else {
      fVar6 = 29.999998;
    }
    local_54 = 0;
    fVar7 = 0.0;
    if (0.0 <= fVar9) {
      fVar7 = fVar6;
    }
    fVar9 = 0.5;
    if (fVar7 < 0.0) {
      fVar9 = -0.5;
    }
    local_5c[1] = 30.0;
    local_5c[0] = (float)(int)(fVar7 + fVar9) * 0.033333335;
    FUN_03126828(lVar5,local_5c);
    uVar2 = 2;
    if (DAT_056d6c5c == '\0') {
      uVar2 = 0;
    }
    uVar4 = 6;
    if (DAT_056d6c60 == '\0') {
      uVar4 = 0;
    }
    *(undefined4 *)(lVar5 + 0x398) = uVar2;
    *(undefined4 *)(lVar5 + 0x39c) = uVar4;
    lVar3 = *(long *)(param_1 + 0x210);
  }
  lVar5 = *(long *)(lVar3 + 0x5a0);
  if (lVar5 != 0) {
    local_5c[1] = 15.0;
    local_54 = 0;
    local_5c[0] = (float)(int)(fVar12 + fVar8) * 0.06666667;
    FUN_03126828(lVar5,local_5c);
    uVar2 = 4;
    if (DAT_056d6c64 == '\0') {
      uVar2 = 0;
    }
    uVar4 = 6;
    if (DAT_056d6c68 == '\0') {
      uVar4 = 0;
    }
    *(undefined4 *)(lVar5 + 0x398) = uVar2;
    *(undefined4 *)(lVar5 + 0x39c) = uVar4;
    lVar3 = *(long *)(param_1 + 0x210);
  }
  lVar3 = *(long *)(lVar3 + 0x5a8);
  if (lVar3 != 0) {
    local_5c[1] = 15.0;
    local_54 = 0;
    local_5c[0] = ((float)(int)(fVar11 + fVar10) * 0.05857143) / 0.87857145;
    FUN_03126828(lVar3,local_5c);
    uVar2 = 4;
    if (DAT_056d6c6c == '\0') {
      uVar2 = 0;
    }
    bVar1 = DAT_056d6c70 == '\0';
    *(undefined4 *)(lVar3 + 0x398) = uVar2;
    uVar2 = 6;
    if (bVar1) {
      uVar2 = 0;
    }
    *(undefined4 *)(lVar3 + 0x39c) = uVar2;
  }
  return;
}

