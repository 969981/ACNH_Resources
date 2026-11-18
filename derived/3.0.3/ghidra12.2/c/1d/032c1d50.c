
void FUN_032c1d50(float *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = DAT_0572df98;
  if ((*(ushort *)(param_2 + 0x50) & 1) != 0) {
    if ((*(ushort *)(param_2 + 0x50) >> 5 & 1) != 0) {
      *(undefined8 *)param_1 = DAT_0572df90;
      *(undefined8 *)(param_1 + 2) = uVar2;
      return;
    }
    lVar6 = *(long *)(param_2 + 0x20);
    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x58) & 1) != 0)) {
      cVar1 = *(char *)(lVar6 + 0x5a);
      while (cVar1 != '\0') {
        do {
          lVar6 = *(long *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            fVar7 = *(float *)(param_2 + 0x30);
            fVar9 = *(float *)(param_2 + 0x34);
            lVar6 = *(long *)(param_2 + 0x28);
            fVar10 = *(float *)(param_2 + 0x38);
            fVar11 = *(float *)(param_2 + 0x3c);
            fVar8 = fVar10;
            if (fVar10 <= fVar7) {
              fVar8 = fVar7;
              fVar7 = fVar10;
            }
            fVar10 = fVar11;
            if (fVar11 <= fVar9) {
              fVar10 = fVar9;
              fVar9 = fVar11;
            }
            *param_1 = fVar7;
            param_1[1] = fVar9;
            param_1[2] = fVar8;
            param_1[3] = fVar10;
            if (lVar6 == 0) {
              fVar8 = *param_1;
              fVar7 = param_1[2];
            }
            else {
              fVar11 = *(float *)(param_2 + 0x40);
              fVar8 = *(float *)(param_2 + 0x44);
              fVar7 = *(float *)(param_2 + 0x48);
              fVar10 = *(float *)(param_2 + 0x4c);
              fVar9 = fVar8;
              if (fVar10 <= fVar8) {
                fVar9 = fVar10;
                fVar10 = fVar8;
              }
              fVar8 = fVar11;
              if (fVar7 <= fVar11) {
                fVar8 = fVar7;
                fVar7 = fVar11;
              }
              if (fVar8 <= *param_1) {
                fVar8 = *param_1;
              }
              if (fVar9 <= param_1[1]) {
                fVar9 = param_1[1];
              }
              if (param_1[2] <= fVar7) {
                fVar7 = param_1[2];
              }
              if (param_1[3] <= fVar10) {
                fVar10 = param_1[3];
              }
              bVar3 = false;
              bVar4 = false;
              bVar5 = false;
              if (fVar8 <= fVar7) {
                bVar3 = false;
                bVar4 = false;
                bVar5 = true;
                if (!NAN(fVar9) && !NAN(fVar10)) {
                  bVar3 = fVar9 < fVar10;
                  bVar4 = fVar9 == fVar10;
                  bVar5 = false;
                }
              }
              if (!bVar4 && bVar3 == bVar5) {
                fVar7 = 0.0;
                fVar8 = 0.0;
                fVar10 = 0.0;
                fVar9 = 0.0;
              }
            }
            *param_1 = fVar8 + -960.0;
            param_1[1] = 540.0 - fVar10;
            param_1[2] = fVar7 + -960.0;
            param_1[3] = 540.0 - fVar9;
            return;
          }
          if ((*(byte *)(lVar6 + 0x58) & 1) == 0) goto LAB_032c1dcc;
        } while ((*(byte *)(lVar6 + 0x58) >> 1 & 1) == 0);
        cVar1 = *(char *)(lVar6 + 0x59);
      }
    }
  }
LAB_032c1dcc:
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return;
}

