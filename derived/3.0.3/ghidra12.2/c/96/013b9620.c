
float FUN_013b9620(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  byte local_8c [12];
  
  FUN_02507c6c(local_8c,7,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  puVar1 = PTR_DAT_04bb2d00;
  if (7 < local_8c[0]) {
    return unaff_s8;
  }
  fVar11 = 0.0;
  do {
    pfVar5 = (float *)FUN_0251b3b0(local_8c,0);
    if (pfVar5 == (float *)0x0) {
      unaff_s8 = *(float *)(param_1 + 0x318);
    }
    else {
      fVar9 = *(float *)(param_1 + 0x38c) - *pfVar5;
      fVar10 = *(float *)(param_1 + 0x394) - pfVar5[2];
      fVar9 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
      if ((fVar11 == 0.0) || (fVar9 < fVar11)) {
        uVar4 = FUN_006f0400();
        unaff_s8 = *(float *)(param_1 + 0x38c) +
                   (*(float *)(puVar1 + (ulong)(uVar4 >> 0x18) * 0x10) +
                   (float)(uVar4 & 0xffffff) * 5.9604645e-08 *
                   *(float *)((long)(puVar1 + (ulong)(uVar4 >> 0x18) * 0x10) + 4)) * 5.0;
        fVar11 = fVar9;
      }
    }
    bVar3 = local_8c[0];
    uVar8 = (ulong)local_8c[0];
    if (7 < local_8c[0]) {
      return unaff_s8;
    }
    if (uVar8 + 1 == 8) {
      return unaff_s8;
    }
    pbVar7 = puVar2 + uVar8 + 1;
    uVar6 = FUN_02507924(local_8c,pbVar7);
    if ((uVar6 & 1) == 0) {
      if (uVar8 + 2 == 8) {
        return unaff_s8;
      }
      pbVar7 = puVar2 + uVar8 + 2;
      uVar6 = FUN_02507924(local_8c,pbVar7);
      if ((uVar6 & 1) == 0) {
        if (uVar8 + 3 == 8) {
          return unaff_s8;
        }
        pbVar7 = puVar2 + uVar8 + 3;
        uVar6 = FUN_02507924(local_8c,pbVar7);
        if ((uVar6 & 1) == 0) {
          if (uVar8 + 4 == 8) {
            return unaff_s8;
          }
          pbVar7 = puVar2 + uVar8 + 4;
          uVar6 = FUN_02507924(local_8c,pbVar7);
          if ((uVar6 & 1) == 0) {
            if (uVar8 + 5 == 8) {
              return unaff_s8;
            }
            pbVar7 = puVar2 + uVar8 + 5;
            uVar6 = FUN_02507924(local_8c,pbVar7);
            if ((uVar6 & 1) == 0) {
              if (uVar8 + 6 == 8) {
                return unaff_s8;
              }
              pbVar7 = puVar2 + uVar8 + 6;
              uVar6 = FUN_02507924(local_8c,pbVar7);
              if ((uVar6 & 1) == 0) {
                if (uVar8 + 7 == 8) {
                  return unaff_s8;
                }
                pbVar7 = puVar2 + uVar8 + 7;
                uVar6 = FUN_02507924(local_8c,pbVar7);
                if ((uVar6 & 1) == 0) {
                  if (bVar3 == 0) {
                    return unaff_s8;
                  }
                  pbVar7 = puVar2 + uVar8 + 8;
                  FUN_02507924(local_8c,pbVar7);
                }
              }
            }
          }
        }
      }
    }
    local_8c[0] = *pbVar7;
  } while (local_8c[0] < 8);
  return unaff_s8;
}

