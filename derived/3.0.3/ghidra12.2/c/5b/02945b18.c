
void FUN_02945b18(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar9 = *(float *)(param_1 + 0x2b4);
  fVar10 = *(float *)(param_1 + 0x310);
  lVar3 = FUN_02945728();
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
  bVar1 = fVar9 <= fVar10 + *pfVar4;
  if (bVar1) {
    fVar9 = *(float *)(param_1 + 0x310) + *(float *)(param_1 + 0x284);
    *(float *)(param_1 + 0x2b4) = fVar9;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x2b4);
  }
  uVar7 = (uint)bVar1;
  fVar10 = *(float *)(param_1 + 0x314);
  lVar3 = FUN_02945728(param_1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
  if (fVar10 - *pfVar4 <= fVar9) {
    uVar7 = uVar7 | 2;
    *(float *)(param_1 + 0x2b4) = *(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x284);
  }
  fVar9 = *(float *)(param_1 + 700);
  fVar10 = *(float *)(param_1 + 0x31c);
  lVar3 = FUN_02945728(param_1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
  if (fVar10 - *pfVar4 <= fVar9) {
    uVar7 = uVar7 | 4;
    fVar9 = *(float *)(param_1 + 0x31c) - *(float *)(param_1 + 0x284);
    *(float *)(param_1 + 700) = fVar9;
  }
  else {
    fVar9 = *(float *)(param_1 + 700);
  }
  fVar10 = *(float *)(param_1 + 0x318);
  lVar3 = FUN_02945728(param_1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
  if (fVar9 <= fVar10 + *pfVar4) {
    uVar7 = uVar7 | 8;
    *(float *)(param_1 + 700) = *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x284);
  }
  fVar9 = *(float *)(param_1 + 0x2b4);
  fVar10 = *(float *)(param_1 + 800);
  lVar3 = FUN_02945728(param_1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
  if (fVar10 - *pfVar4 <= fVar9) {
    fVar9 = *(float *)(param_1 + 0x2b4);
    fVar10 = *(float *)(param_1 + 0x324);
    lVar3 = FUN_02945728(param_1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
    if (fVar9 <= fVar10 + *pfVar4) {
      fVar9 = *(float *)(param_1 + 700);
      fVar10 = *(float *)(param_1 + 0x32c);
      lVar3 = FUN_02945728(param_1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
      if (fVar9 <= fVar10 + *pfVar4) {
        fVar9 = *(float *)(param_1 + 700);
        fVar10 = *(float *)(param_1 + 0x328);
        lVar3 = FUN_02945728(param_1);
        pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
        if (fVar10 - *pfVar4 <= fVar9) {
          fVar9 = *(float *)(param_1 + 0x2b4);
          fVar11 = *(float *)(param_1 + 800);
          lVar3 = FUN_02945728(param_1);
          pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
          fVar10 = *(float *)(param_1 + 0x2b4);
          fVar14 = *(float *)(param_1 + 0x324);
          fVar9 = fVar9 - (fVar11 - *pfVar4);
          fVar11 = SQRT(fVar9 * fVar9 + 0.0);
          lVar3 = FUN_02945728(param_1);
          pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
          fVar10 = fVar10 - (fVar14 + *pfVar4);
          fVar14 = *(float *)(param_1 + 0x32c);
          fVar10 = SQRT(fVar10 * fVar10 + 0.0);
          fVar9 = fVar11;
          if (fVar10 <= fVar11) {
            fVar9 = fVar10;
          }
          fVar12 = *(float *)(param_1 + 700);
          uVar6 = 0x10;
          if (fVar10 <= fVar11) {
            uVar6 = 0x20;
          }
          lVar3 = FUN_02945728(param_1);
          pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
          fVar13 = *(float *)(param_1 + 0x328);
          fVar12 = fVar12 - (fVar14 + *pfVar4);
          fVar11 = *(float *)(param_1 + 700);
          fVar10 = SQRT(fVar12 * fVar12);
          uVar6 = uVar7 | uVar6;
          if (fVar10 <= fVar9) {
            fVar9 = fVar10;
            uVar6 = uVar7 | 0x40;
          }
          lVar3 = FUN_02945728(param_1);
          pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x3a0) + 0xf0))(lVar3 + 0x3a0);
          fVar11 = fVar11 - (fVar13 - *pfVar4);
          uVar7 = uVar6;
          if (SQRT(fVar11 * fVar11) <= fVar9) {
            uVar7 = uVar6 & 0xf | 0xffffff80;
          }
          if ((uVar7 >> 4 & 1) == 0) {
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                if ((uVar7 >> 7 & 1) == 0) goto LAB_02945ea4;
                fVar9 = *(float *)(param_1 + 0x328) - *(float *)(param_1 + 0x284);
              }
              else {
                fVar9 = *(float *)(param_1 + 0x32c) + *(float *)(param_1 + 0x284);
              }
              *(float *)(param_1 + 700) = fVar9;
            }
            else {
              *(float *)(param_1 + 0x2b4) =
                   *(float *)(param_1 + 0x324) + *(float *)(param_1 + 0x284);
            }
          }
          else {
            *(float *)(param_1 + 0x2b4) = *(float *)(param_1 + 800) - *(float *)(param_1 + 0x284);
          }
        }
      }
    }
  }
LAB_02945ea4:
  if (*(char *)(param_1 + 0x358) == '\0') {
    fVar10 = *(float *)(param_1 + 0x2b4);
    fVar9 = *(float *)(param_1 + 700);
  }
  else {
    fVar9 = *(float *)(param_1 + 700);
    fVar10 = *(float *)(param_1 + 0x2b4);
    if (((((float)*(int *)(param_1 + 0x340) * 5.0 <= fVar10) &&
         (fVar10 < (float)*(int *)(param_1 + 0x350) * 5.0 + 5.0)) &&
        ((float)*(int *)(param_1 + 0x344) * 5.0 <= fVar9)) &&
       (fVar9 < (float)*(int *)(param_1 + 0x354) * 5.0 + 5.0)) {
      fVar11 = fVar9;
      if (fVar9 <= *(float *)(param_1 + 0x368)) {
        fVar14 = 100.0;
      }
      else {
        fVar13 = *(float *)(param_1 + 0x368) - *(float *)(param_1 + 0x284);
        fVar14 = *(float *)(param_1 + 0x2a8) - fVar10;
        fVar12 = *(float *)(param_1 + 0x2b0) - fVar13;
        fVar12 = SQRT(fVar12 * fVar12 + fVar14 * fVar14);
        fVar14 = 100.0;
        if (fVar12 < 100.0) {
          fVar11 = fVar13;
          fVar14 = fVar12;
        }
      }
      if (fVar9 < *(float *)(param_1 + 0x36c)) {
        fVar12 = *(float *)(param_1 + 0x36c) + *(float *)(param_1 + 0x284);
        fVar13 = *(float *)(param_1 + 0x2a8) - fVar10;
        fVar8 = *(float *)(param_1 + 0x2b0) - fVar12;
        if (SQRT(fVar8 * fVar8 + fVar13 * fVar13) < fVar14) {
          fVar11 = fVar12;
        }
      }
      if (1.1920929e-07 <
          SQRT((fVar11 - fVar9) * (fVar11 - fVar9) + (fVar10 - fVar10) * (fVar10 - fVar10))) {
        *(float *)(param_1 + 700) = fVar11;
        fVar9 = fVar11;
      }
    }
  }
  fVar10 = fVar10 - *(float *)(param_1 + 0x2a8);
  fVar9 = fVar9 - *(float *)(param_1 + 0x2b0);
  if (SQRT(fVar9 * fVar9 + fVar10 * fVar10) <= 10.0) {
    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar2 = puVar5[3];
    uVar6 = *puVar5 ^ *puVar5 << 0xb;
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar6;
    fVar10 = ((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * 10.0 + 20.0;
    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar2 = puVar5[3];
    uVar6 = *puVar5 ^ *puVar5 << 0xb;
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar6;
    fVar9 = -fVar10;
    if ((uVar6 & 1) != 0) {
      fVar9 = fVar10;
    }
    puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    lVar3 = FUN_02945728(param_1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x430) + 0xf0))(lVar3 + 0x430);
    fVar11 = *pfVar4;
    lVar3 = FUN_02945728(param_1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x400) + 0xf0))(lVar3 + 0x400);
    uVar2 = puVar5[3];
    uVar6 = *puVar5 ^ *puVar5 << 0xb;
    fVar10 = *pfVar4;
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar6;
    fVar11 = fVar11 + (fVar10 - fVar11) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0);
    if ((((uVar7 & 3) != 0) && ((uVar7 >> 2 & 1) == 0)) && ((uVar7 >> 3 & 1) == 0)) {
      fVar10 = fVar9 + *(float *)(param_1 + 700);
      *(float *)(param_1 + 700) = fVar10;
      if ((uVar7 & 1) != 0) {
        *(float *)(param_1 + 0x2b4) = fVar11 + *(float *)(param_1 + 0x2b4);
      }
      if ((uVar7 >> 1 & 1) != 0) {
        *(float *)(param_1 + 0x2b4) = *(float *)(param_1 + 0x2b4) - fVar11;
      }
      if (*(float *)(param_1 + 0x31c) <= fVar10) {
        fVar10 = *(float *)(param_1 + 0x31c) - *(float *)(param_1 + 0x284);
        *(float *)(param_1 + 700) = fVar10;
      }
      if (fVar10 <= *(float *)(param_1 + 0x318)) {
        *(float *)(param_1 + 700) = *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x284);
      }
    }
    if ((((uVar7 & 0xc) != 0) && ((uVar7 & 1) == 0)) && ((uVar7 & 2) == 0)) {
      fVar9 = fVar9 + *(float *)(param_1 + 0x2b4);
      *(float *)(param_1 + 0x2b4) = fVar9;
      if ((uVar7 >> 2 & 1) != 0) {
        *(float *)(param_1 + 700) = *(float *)(param_1 + 700) - fVar11;
      }
      if ((uVar7 >> 3 & 1) != 0) {
        *(float *)(param_1 + 700) = fVar11 + *(float *)(param_1 + 700);
      }
      if (fVar9 <= *(float *)(param_1 + 0x310)) {
        fVar9 = *(float *)(param_1 + 0x310) + *(float *)(param_1 + 0x284);
        *(float *)(param_1 + 0x2b4) = fVar9;
      }
      if (*(float *)(param_1 + 0x314) <= fVar9) {
        *(float *)(param_1 + 0x2b4) = *(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x284);
      }
    }
  }
  return;
}

