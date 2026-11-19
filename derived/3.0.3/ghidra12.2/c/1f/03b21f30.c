
bool FUN_03b21f30(long param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    fVar8 = *(float *)(lVar5 + 0x50) * *(float *)(lVar5 + 0x70);
    bVar1 = *(byte *)(lVar5 + 0x5b) & 3;
    bVar2 = *(byte *)(lVar5 + 0x5b) >> 2 & 3;
    fVar9 = -(*(float *)(lVar5 + 0x50) * *(float *)(lVar5 + 0x70));
    if (0.0 <= fVar8) {
      fVar9 = fVar8;
    }
    fVar9 = fVar9 * 0.5;
    fVar10 = *(float *)(lVar5 + 0x54) * *(float *)(lVar5 + 0x84);
    fVar7 = *(float *)(lVar5 + 0x8c);
    fVar8 = -(*(float *)(lVar5 + 0x54) * *(float *)(lVar5 + 0x84));
    if (0.0 <= fVar10) {
      fVar8 = fVar10;
    }
    fVar8 = fVar8 * 0.5;
    fVar6 = *(float *)(lVar5 + 0x7c);
    fVar10 = fVar6;
    if (bVar1 == 1) {
      fVar10 = fVar6 + fVar9;
    }
    fVar6 = fVar6 - fVar9;
    if (bVar1 != 2) {
      fVar6 = fVar10;
    }
    fVar10 = fVar7;
    if (bVar2 == 1) {
      fVar10 = fVar7 - fVar8;
    }
    fVar11 = *param_2;
    fVar7 = fVar7 + fVar8;
    if (bVar2 != 2) {
      fVar7 = fVar10;
    }
    fVar10 = fVar9 + fVar6;
    bVar3 = false;
    bVar4 = true;
    if (fVar6 - fVar9 <= fVar11) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar11) && !NAN(fVar10)) {
        bVar3 = fVar11 == fVar10;
        bVar4 = fVar10 <= fVar11;
      }
    }
    if (!bVar4 || bVar3) {
      fVar10 = param_2[1];
      fVar9 = fVar8 + fVar7;
      bVar3 = false;
      bVar4 = true;
      if (fVar7 - fVar8 <= fVar10) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar10) && !NAN(fVar9)) {
          bVar3 = fVar10 == fVar9;
          bVar4 = fVar9 <= fVar10;
        }
      }
      if (((!bVar4 || bVar3) && ((*(byte *)(lVar5 + 0x58) & 1) != 0)) &&
         (*(char *)(lVar5 + 0x59) != '\0')) {
        while( true ) {
          lVar5 = *(long *)(lVar5 + 0x18);
          if (lVar5 == 0) {
            return true;
          }
          if ((*(byte *)(lVar5 + 0x58) & 1) == 0) break;
          if (((*(byte *)(lVar5 + 0x58) >> 1 & 1) != 0) && (*(char *)(lVar5 + 0x59) == '\0')) {
            return lVar5 == 0;
          }
        }
        return lVar5 == 0;
      }
    }
  }
  return false;
}

