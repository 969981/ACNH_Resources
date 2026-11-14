
uint FUN_016e946c(float param_1,float *param_2)

{
  undefined *puVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_24;
  
  puVar7 = PTR_DAT_04bb2010;
  fVar11 = *param_2;
  fVar12 = param_2[2];
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
    return 0;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
  uVar8 = 0;
  if ((lVar10 != 0) &&
     (uVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0), -1 < (int)uVar5)) {
    uVar8 = 0;
    uVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    if (-1 < (int)uVar6) {
      uVar3 = *(uint *)(lVar10 + 0x38);
      uVar4 = *(uint *)(lVar10 + 0x3c);
      if (uVar5 < uVar3 && uVar6 < uVar4) {
        uVar5 = uVar5 + uVar3 * uVar6;
        uVar8 = *(uint *)(lVar10 + 0x68);
        lVar10 = *(long *)(lVar10 + 0x70);
        if ((uVar5 < uVar8 && lVar10 != 0) &&
           ((*(uint *)(lVar10 + (long)(int)uVar5 * 4) >> 7 & 1) != 0)) {
          fVar13 = -param_1;
          if (0.0 <= param_1) {
            fVar13 = param_1;
          }
          if (fVar13 < 1.1920929e-07) {
            uVar8 = 1;
            goto LAB_016e9ae0;
          }
          fVar13 = param_1 * 0.0 + fVar11;
          uVar5 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
          if ((((-1 < (int)uVar5) &&
               (uVar6 = (int)((float)(int)(fVar12 + param_1) / 5.0) - (uint)(fVar12 + param_1 < 0.0)
               , -1 < (int)uVar6)) && (uVar5 < uVar3)) &&
             (((uVar6 < uVar4 && (uVar5 = uVar5 + uVar3 * uVar6, uVar5 < uVar8)) &&
              ((*(uint *)(lVar10 + (long)(int)uVar5 * 4) >> 7 & 1) != 0)))) {
            pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(DAT_05240230 >> 0x14) & 0xff0));
            fVar13 = (float)(DAT_05240230 & 0xffffff) * 5.9604645e-08;
            fVar14 = fVar11 + (*pfVar2 + fVar13 * pfVar2[1]) * param_1;
            fVar13 = fVar12 + (pfVar2[2] + fVar13 * pfVar2[3]) * param_1;
            uVar5 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
            if (((-1 < (int)uVar5) &&
                (uVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0), -1 < (int)uVar6))
               && ((uVar5 < uVar3 &&
                   (((uVar6 < uVar4 && (uVar5 = uVar5 + uVar3 * uVar6, uVar5 < uVar8)) &&
                    ((*(uint *)(lVar10 + (long)(int)uVar5 * 4) >> 7 & 1) != 0)))))) {
              pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(DAT_05240230 >> 0x17 & 0xff) * 0x10);
              fVar13 = (float)((DAT_05240230 & 0x7fffff) << 1) * 5.9604645e-08;
              fVar14 = fVar11 + (*pfVar2 + fVar13 * pfVar2[1]) * param_1;
              fVar13 = fVar12 + (pfVar2[2] + fVar13 * pfVar2[3]) * param_1;
              uVar5 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
              if (((-1 < (int)uVar5) &&
                  (uVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0), -1 < (int)uVar6))
                 && ((uVar5 < uVar3 &&
                     (((uVar6 < uVar4 && (uVar5 = uVar5 + uVar3 * uVar6, uVar5 < uVar8)) &&
                      ((*(uint *)(lVar10 + (long)(int)uVar5 * 4) >> 7 & 1) != 0)))))) {
                pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(DAT_05240230 * 3 >> 0x18) * 0x10);
                fVar13 = (float)(DAT_05240230 * 3 & 0xffffff) * 5.9604645e-08;
                fVar14 = fVar11 + (*pfVar2 + fVar13 * pfVar2[1]) * param_1;
                fVar13 = fVar12 + (pfVar2[2] + fVar13 * pfVar2[3]) * param_1;
                uVar5 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
                if (((((-1 < (int)uVar5) &&
                      (uVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
                      -1 < (int)uVar6)) && (uVar5 < uVar3)) &&
                    ((uVar6 < uVar4 && (uVar5 = uVar5 + uVar3 * uVar6, uVar5 < uVar8)))) &&
                   (local_24 = 7, (*(uint *)(lVar10 + (long)(int)uVar5 * 4) >> 7 & 1) != 0)) {
                  pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(DAT_05240230 >> 0x16 & 0xff) * 0x10)
                  ;
                  fVar13 = (float)((DAT_05240230 & 0x3fffff) << 2) * 5.9604645e-08;
                  puVar1 = PTR_DAT_04bb2010 + 0x10;
                  fVar11 = fVar11 + (*pfVar2 + fVar13 * pfVar2[1]) * param_1;
                  fVar12 = fVar12 + (pfVar2[2] + fVar13 * pfVar2[3]) * param_1;
                  local_30 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
                  iStack_2c = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
                  local_38 = puVar1;
                  uVar9 = FUN_00975c90(&local_38);
                  if ((uVar9 & 1) != 0) {
                    pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(DAT_05240230 * 5 >> 0x18) * 0x10);
                    fVar11 = (float)(DAT_05240230 * 5 & 0xffffff) * 5.9604645e-08;
                    fVar12 = *param_2 + (*pfVar2 + fVar11 * pfVar2[1]) * param_1;
                    fVar11 = (pfVar2[2] + fVar11 * pfVar2[3]) * param_1 + param_2[2];
                    local_30 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
                    iStack_2c = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
                    local_38 = puVar1;
                    uVar9 = FUN_00975c90(&local_38);
                    if ((uVar9 & 1) != 0) {
                      pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                                        (ulong)(DAT_05240230 * 3 >> 0x17 & 0xff) * 0x10);
                      fVar11 = (float)(DAT_05240230 * 6 & 0xfffffe) * 5.9604645e-08;
                      fVar12 = *param_2 + (*pfVar2 + fVar11 * pfVar2[1]) * param_1;
                      fVar11 = (pfVar2[2] + fVar11 * pfVar2[3]) * param_1 + param_2[2];
                      local_30 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
                      iStack_2c = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
                      local_38 = puVar7 + 0x10;
                      uVar9 = FUN_00975c90(&local_38);
                      if ((uVar9 & 1) != 0) {
                        pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                                          (ulong)(DAT_05240230 * 7 >> 0x18) * 0x10);
                        fVar11 = (float)(DAT_05240230 * 7 & 0xffffff) * 5.9604645e-08;
                        fVar12 = *param_2 + (*pfVar2 + fVar11 * pfVar2[1]) * param_1;
                        fVar11 = (pfVar2[2] + fVar11 * pfVar2[3]) * param_1 + param_2[2];
                        local_30 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
                        iStack_2c = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
                        local_38 = puVar7 + 0x10;
                        uVar8 = FUN_00975c90(&local_38);
                        goto LAB_016e9ae0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_016e9ae0:
  return uVar8 & 1;
}

