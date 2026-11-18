
bool FUN_032c1eb0(long param_1,float *param_2,uint param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (((param_3 & 1) != 0) || ((*(ushort *)(param_1 + 0x50) & 1) != 0)) {
    fVar7 = *param_2;
    fVar6 = param_2[1];
    bVar2 = false;
    if ((fVar7 == -3.4028235e+38) && (bVar2 = false, !NAN(fVar6))) {
      bVar2 = fVar6 == -3.4028235e+38;
    }
    if (!bVar2) {
      if ((*(ushort *)(param_1 + 0x50) >> 5 & 1) != 0) {
        return true;
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if (((lVar5 != 0) && ((*(byte *)(lVar5 + 0x58) & 1) != 0)) &&
         (*(char *)(lVar5 + 0x5a) != '\0')) {
        while (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0) {
          if ((*(byte *)(lVar5 + 0x58) & 1) == 0) {
            return false;
          }
          if (((*(byte *)(lVar5 + 0x58) >> 1 & 1) != 0) && (*(char *)(lVar5 + 0x59) == '\0')) {
            return false;
          }
        }
        fVar8 = *(float *)(param_1 + 0x30);
        fVar9 = *(float *)(param_1 + 0x34);
        fVar10 = *(float *)(param_1 + 0x38);
        fVar11 = *(float *)(param_1 + 0x3c);
        fVar1 = fVar10;
        if (fVar10 <= fVar8) {
          fVar1 = fVar8;
          fVar8 = fVar10;
        }
        fVar10 = fVar11;
        if (fVar11 <= fVar9) {
          fVar10 = fVar9;
          fVar9 = fVar11;
        }
        fVar11 = fVar1;
        fVar15 = fVar10;
        if (*(long *)(param_1 + 0x28) != 0) {
          fVar14 = *(float *)(param_1 + 0x40);
          fVar12 = *(float *)(param_1 + 0x44);
          fVar11 = *(float *)(param_1 + 0x48);
          fVar15 = *(float *)(param_1 + 0x4c);
          fVar13 = fVar12;
          if (fVar15 <= fVar12) {
            fVar13 = fVar15;
            fVar15 = fVar12;
          }
          fVar12 = fVar14;
          if (fVar11 <= fVar14) {
            fVar12 = fVar11;
            fVar11 = fVar14;
          }
          if (fVar12 <= fVar8) {
            fVar12 = fVar8;
          }
          fVar8 = fVar12;
          if (fVar13 <= fVar9) {
            fVar13 = fVar9;
          }
          fVar9 = fVar13;
          if (fVar1 <= fVar11) {
            fVar11 = fVar1;
          }
          if (fVar10 <= fVar15) {
            fVar15 = fVar10;
          }
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
          if (fVar8 <= fVar11) {
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar9) && !NAN(fVar15)) {
              bVar2 = fVar9 < fVar15;
              bVar3 = fVar9 == fVar15;
              bVar4 = false;
            }
          }
          if (!bVar3 && bVar2 == bVar4) {
            fVar8 = 0.0;
            fVar9 = 0.0;
            fVar11 = 0.0;
            fVar15 = 0.0;
          }
        }
        bVar2 = true;
        if ((fVar8 <= fVar7) && (bVar2 = false, !NAN(fVar11) && !NAN(fVar7))) {
          bVar2 = fVar11 < fVar7;
        }
        if (!bVar2) {
          return fVar6 <= fVar15 && fVar9 <= fVar6;
        }
      }
    }
  }
  return false;
}

