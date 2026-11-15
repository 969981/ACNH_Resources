
void FUN_0227ce38(long param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  
  *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) & 0xfe;
  local_50 = CONCAT44(local_50._4_4_,3);
  if ((*(byte *)(param_1 + 0x29c) >> 3 & 1) == 0) {
    local_60 = CONCAT44(local_60._4_4_,4);
    if ((*(byte *)(param_1 + 0x29c) >> 4 & 1) == 0) {
      puVar1 = (undefined8 *)(param_1 + 0x2dc);
      lVar8 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      if (0.25 < SQRT(*(float *)(param_1 + 0x32c) * *(float *)(param_1 + 0x32c) +
                      *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x324))) {
LAB_0227cfa4:
        if (SQRT(*(float *)(param_1 + 0x32c) * *(float *)(param_1 + 0x32c) +
                 *(float *)(param_1 + 0x324) * *(float *)(param_1 + 0x324)) <= 0.25) {
          local_60 = *puVar1;
          local_68 = 0;
          local_48 = *(float *)(param_1 + 0x2e4) + 1.9;
          local_50 = *puVar1;
          local_58 = *(float *)(param_1 + 0x2e4) + -1.9;
          fVar9 = (float)FUN_0093a950(lVar8,&local_50,(long)&local_68 + 4);
          fVar10 = (float)FUN_0093a950(lVar8,&local_60,&local_68);
          if (((0x2b < local_68._4_4_) ||
              ((1L << ((ulong)local_68._4_4_ & 0x3f) & 0x80000001022U) == 0)) &&
             ((0x2b < (uint)local_68 || ((1L << (local_68 & 0x3f) & 0x80000001022U) == 0)))) {
            if (fVar9 != fVar10) {
              *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) | 1;
            }
            if ((*(byte *)(param_1 + 0x29e) >> 4 & 1) == 0) {
              fVar13 = -fVar9;
              if (0.0 <= fVar9) {
                fVar13 = fVar9;
              }
              fVar11 = -fVar10;
              if (0.0 <= fVar10) {
                fVar11 = fVar10;
              }
              fVar13 = fVar13 - fVar11;
              fVar11 = -fVar13;
              if (0.0 <= fVar13) {
                fVar11 = fVar13;
              }
              if (0.5 <= fVar11) {
                if (fVar10 < fVar9) goto LAB_0227d2f0;
                if (fVar9 < fVar10) goto LAB_0227d6c0;
              }
            }
          }
        }
      }
      else {
        local_50._0_4_ = (float)*puVar1;
        local_68 = 0;
        local_60._0_4_ = (float)*puVar1;
        local_50._4_4_ = (float)((ulong)*puVar1 >> 0x20);
        local_50 = CONCAT44(local_50._4_4_,(float)local_50 + 1.9);
        local_48 = *(float *)(param_1 + 0x2e4);
        local_58 = *(float *)(param_1 + 0x2e4);
        local_60._4_4_ = (float)((ulong)*puVar1 >> 0x20);
        local_60 = CONCAT44(local_60._4_4_,(float)local_60 + -1.9);
        fVar9 = (float)FUN_0093a950(lVar8,&local_50,(long)&local_68 + 4);
        fVar10 = (float)FUN_0093a950(lVar8,&local_60,&local_68);
        if (((local_68._4_4_ < 0x2c) &&
            ((1L << ((ulong)local_68._4_4_ & 0x3f) & 0x80000001022U) != 0)) ||
           (((uint)local_68 < 0x2c && ((1L << (local_68 & 0x3f) & 0x80000001022U) != 0))))
        goto LAB_0227cfa4;
        if (fVar9 != fVar10) {
          *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) | 1;
        }
        if ((*(byte *)(param_1 + 0x29e) >> 4 & 1) != 0) goto LAB_0227cfa4;
        fVar13 = -fVar9;
        if (0.0 <= fVar9) {
          fVar13 = fVar9;
        }
        fVar11 = -fVar10;
        if (0.0 <= fVar10) {
          fVar11 = fVar10;
        }
        fVar13 = fVar13 - fVar11;
        fVar11 = -fVar13;
        if (0.0 <= fVar13) {
          fVar11 = fVar13;
        }
        if (fVar11 < 0.5) goto LAB_0227cfa4;
        if (fVar10 < fVar9) {
LAB_0227d2f0:
          fVar11 = local_60._4_4_ - local_50._4_4_;
          fVar13 = (float)local_60 - (float)local_50;
          fVar9 = local_58;
          fVar10 = local_48;
        }
        else {
          if (fVar10 <= fVar9) goto LAB_0227cfa4;
LAB_0227d6c0:
          fVar11 = local_50._4_4_ - local_60._4_4_;
          fVar13 = (float)local_50 - (float)local_60;
          fVar9 = local_48;
          fVar10 = local_58;
        }
        fVar9 = fVar9 - fVar10;
        fVar10 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar9 * fVar9);
        if (0.0 < fVar10) {
          fVar10 = 0.02 / fVar10;
          fVar13 = fVar13 * fVar10;
          fVar11 = fVar11 * fVar10;
          fVar9 = fVar9 * fVar10;
        }
        *(float *)(param_1 + 0x324) = fVar13 + *(float *)(param_1 + 0x324);
        *(float *)(param_1 + 0x328) = fVar11 + *(float *)(param_1 + 0x328);
        *(float *)(param_1 + 0x32c) = fVar9 + *(float *)(param_1 + 0x32c);
      }
    }
  }
  if (*(int *)(param_1 + 0x700) < 2) {
    *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + 1;
  }
  else {
    local_50 = CONCAT44(local_50._4_4_,0x14);
    *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) & 0xef;
  }
  fVar9 = *(float *)(param_1 + 0x33c);
  if ((*(float *)(param_1 + 0x288) < fVar9) ||
     (((fVar9 <= 0.05 && (fVar9 != 0.0)) &&
      (iVar5 = *(int *)(param_1 + 0x660), *(int *)(param_1 + 0x660) = iVar5 + 1, 9 < iVar5)))) {
    *(undefined4 *)(param_1 + 0x32c) = 0;
    *(undefined8 *)(param_1 + 0x324) = 0;
    return;
  }
  if (((*(float *)(param_1 + 0x324) == 0.0) && (*(float *)(param_1 + 0x328) == 0.0)) &&
     (*(float *)(param_1 + 0x32c) == 0.0)) {
    return;
  }
  fVar9 = *(float *)(param_1 + 0x6e4) - *(float *)(param_1 + 0x2e0);
  switch(*(int *)(param_1 + 0x2d8)) {
  case 1:
    fVar12 = 1.1;
    fVar13 = *(float *)(param_1 + 0x298);
    fVar10 = 0.931;
    fVar11 = 0.4;
    goto LAB_0227d3d0;
  case 2:
    fVar13 = *(float *)(param_1 + 0x298);
    fVar10 = 0.90650004;
    fVar11 = 0.5;
    break;
  case 3:
    fVar13 = *(float *)(param_1 + 0x298);
    fVar10 = 0.90650004;
    fVar11 = 0.65;
    break;
  case 4:
    fVar12 = 0.9;
    fVar13 = *(float *)(param_1 + 0x298);
    fVar10 = 0.90650004;
    fVar11 = 0.8;
    goto LAB_0227d3d0;
  case 5:
    fVar12 = 0.85;
    fVar13 = *(float *)(param_1 + 0x298);
    fVar10 = 0.88199997;
    fVar11 = 0.9;
LAB_0227d3d0:
    fVar13 = fVar13 * fVar12;
    break;
  case 6:
    fVar10 = 0.88199997;
    fVar13 = *(float *)(param_1 + 0x298) * 0.8;
    fVar11 = 1.0;
    break;
  default:
    fVar13 = *(float *)(param_1 + 0x298) * 1.2;
    fVar10 = 0.931;
    if (*(int *)(param_1 + 0x2d8) != 0) {
      fVar13 = *(float *)(param_1 + 0x298);
      fVar10 = 0.98;
    }
    fVar11 = 0.25;
  }
  if ((fVar9 < -0.1) || (0.1 < fVar9)) {
    if (fVar9 < 0.0) {
      fVar9 = *(float *)(param_1 + 0x6ec);
      if (fVar13 < fVar9) {
        fVar13 = -0.01;
        fVar10 = -0.02;
LAB_0227d510:
        if (fVar11 <= 0.6) {
          fVar10 = fVar13;
        }
        *(float *)(param_1 + 0x6ec) = fVar10 + fVar9;
      }
    }
    else {
      if (fVar9 <= 0.0) goto LAB_0227d5b0;
      fVar9 = *(float *)(param_1 + 0x6ec);
      if (fVar9 < fVar10) {
        fVar13 = 0.02;
        fVar10 = 0.04;
        goto LAB_0227d510;
      }
    }
    bVar7 = *(byte *)(param_1 + 0x29d) | 4;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x6ec);
    if ((fVar9 + -0.8 < -0.005) || (0.005 < fVar9 + -0.8)) {
      if (0.8 < fVar9) {
        fVar10 = -0.005;
LAB_0227d570:
        fVar9 = fVar9 + fVar10;
        goto LAB_0227d57c;
      }
      if (fVar9 < 0.8) {
        fVar10 = 0.005;
        goto LAB_0227d570;
      }
    }
    else {
      fVar9 = 0.8;
LAB_0227d57c:
      *(float *)(param_1 + 0x6ec) = fVar9;
    }
    bVar7 = *(byte *)(param_1 + 0x29d) & 0xfb;
  }
  local_50 = CONCAT44(local_50._4_4_,10);
  *(byte *)(param_1 + 0x29d) = bVar7;
LAB_0227d5b0:
  fVar10 = *(float *)(param_1 + 0x33c);
  fVar9 = *(float *)(param_1 + 0x6ec);
  fVar13 = SQRT(*(float *)(param_1 + 0x334) * *(float *)(param_1 + 0x334) + fVar10 * fVar10);
  if (fVar13 != 0.0) {
    fVar9 = fVar9 * (fVar10 / fVar13);
  }
  lVar8 = *(long *)(param_1 + 0xa0);
  bVar6 = lVar8 != 0;
  pfVar2 = (float *)PTR_DAT_04bb3ea0;
  if (bVar6) {
    pfVar2 = (float *)(lVar8 + 0x4fe0);
  }
  pfVar3 = (float *)(PTR_DAT_04bb3ea0 + 4);
  if (bVar6) {
    pfVar3 = (float *)(lVar8 + 0x4fe4);
  }
  pfVar4 = (float *)(PTR_DAT_04bb3ea0 + 8);
  if (bVar6) {
    pfVar4 = (float *)(lVar8 + 0x4fe8);
  }
  fVar13 = *pfVar2 * 0.1 + fVar9 * *(float *)(param_1 + 0x324);
  fVar10 = *pfVar3 * 0.1 + fVar9 * *(float *)(param_1 + 0x328);
  fVar9 = *pfVar4 * 0.1 + fVar9 * *(float *)(param_1 + 0x32c);
  *(float *)(param_1 + 0x324) = fVar13;
  *(float *)(param_1 + 0x328) = fVar10;
  *(float *)(param_1 + 0x32c) = fVar9;
  *(float *)(param_1 + 0x2dc) = fVar13 + *(float *)(param_1 + 0x2dc);
  *(float *)(param_1 + 0x2e0) = fVar10 + *(float *)(param_1 + 0x2e0);
  *(float *)(param_1 + 0x2e4) = fVar9 + *(float *)(param_1 + 0x2e4);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),param_1 + 0x2dc);
  return;
}

