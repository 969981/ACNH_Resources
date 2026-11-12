
bool FUN_0093cac0(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = *(uint *)(param_1 + 0xe4);
  if ((int)uVar2 < 1) {
    return false;
  }
  fVar8 = *param_2;
  uVar6 = 0;
  fVar9 = param_2[2];
  bVar5 = true;
  fVar10 = *param_3;
  fVar11 = param_3[2];
  lVar7 = param_1 + 0xe8;
  do {
    lVar1 = lVar7;
    if (0x3f < uVar6) {
      lVar1 = param_1 + 0xe8;
    }
    fVar13 = *(float *)(lVar1 + 0x10) - fVar8;
    fVar12 = -fVar13;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    if (0.1 <= fVar12) {
LAB_0093cb44:
      bVar4 = 0;
    }
    else {
      fVar13 = *(float *)(lVar1 + 0x18) - fVar9;
      fVar12 = -fVar13;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (0.1 <= fVar12) goto LAB_0093cb44;
      bVar4 = 1;
    }
    fVar13 = *(float *)(lVar1 + 0x1c) - fVar8;
    fVar12 = -fVar13;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    if (fVar12 < 0.1) {
      fVar13 = *(float *)(lVar1 + 0x24) - fVar9;
      fVar12 = -fVar13;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar12 < 0.1) {
        bVar4 = 1;
      }
    }
    fVar13 = *(float *)(lVar1 + 0x28) - fVar8;
    fVar12 = -fVar13;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    if (fVar12 < 0.1) {
      fVar13 = *(float *)(lVar1 + 0x30) - fVar9;
      fVar12 = -fVar13;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar12 < 0.1) {
        bVar4 = 1;
      }
    }
    fVar13 = *(float *)(lVar1 + 0x10) - fVar10;
    fVar12 = -fVar13;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    if (0.1 <= fVar12) {
LAB_0093cc14:
      bVar3 = 0;
    }
    else {
      fVar13 = *(float *)(lVar1 + 0x18) - fVar11;
      fVar12 = -fVar13;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (0.1 <= fVar12) goto LAB_0093cc14;
      bVar3 = 1;
    }
    fVar13 = *(float *)(lVar1 + 0x1c) - fVar10;
    fVar12 = -fVar13;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    if (fVar12 < 0.1) {
      fVar13 = *(float *)(lVar1 + 0x24) - fVar11;
      fVar12 = -fVar13;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar12 < 0.1) {
        bVar3 = 1;
      }
    }
    fVar13 = *(float *)(lVar1 + 0x28) - fVar10;
    fVar12 = -fVar13;
    if (0.0 <= fVar13) {
      fVar12 = fVar13;
    }
    if (fVar12 < 0.1) {
      fVar13 = *(float *)(lVar1 + 0x30) - fVar11;
      fVar12 = -fVar13;
      if (0.0 <= fVar13) {
        fVar12 = fVar13;
      }
      if (fVar12 < 0.1) {
        bVar3 = 1;
      }
    }
    if ((bool)(bVar4 & bVar3)) {
      return bVar5;
    }
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x90;
    bVar5 = uVar6 < uVar2;
    if (uVar2 == uVar6) {
      return bVar5;
    }
  } while( true );
}

