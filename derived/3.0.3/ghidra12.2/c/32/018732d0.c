
bool FUN_018732d0(long param_1,float *param_2)

{
  byte bVar1;
  float *pfVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte local_50 [4];
  byte local_4c [12];
  
  FUN_02507c6c(local_4c,7,1,1,0);
  fVar8 = -1.0;
  if (local_4c[0] < 8) {
    do {
      local_50[0] = local_4c[0];
      pfVar2 = (float *)FUN_0251b3b0(local_50,0);
      bVar1 = local_4c[0];
      if (pfVar2 != (float *)0x0) {
        fVar6 = *(float *)(param_1 + 0x334) - *pfVar2;
        fVar7 = *(float *)(param_1 + 0x33c) - pfVar2[2];
        fVar6 = fVar7 * fVar7 + fVar6 * fVar6;
        if ((fVar8 < 0.0) || (fVar6 < fVar8)) {
          *param_2 = *pfVar2;
          param_2[1] = pfVar2[1];
          param_2[2] = pfVar2[2];
          fVar8 = fVar6;
        }
      }
      uVar5 = (ulong)local_4c[0];
      if ((7 < local_4c[0]) || (uVar5 == 7)) break;
      pbVar4 = &DAT_0548e169 + uVar5;
      uVar3 = FUN_02507924(local_4c,pbVar4);
      if ((uVar3 & 1) == 0) {
        if (uVar5 == 6) break;
        pbVar4 = &DAT_0548e16a + uVar5;
        uVar3 = FUN_02507924(local_4c,pbVar4);
        if ((uVar3 & 1) == 0) {
          if (uVar5 == 5) break;
          pbVar4 = &DAT_0548e16b + uVar5;
          uVar3 = FUN_02507924(local_4c,pbVar4);
          if ((uVar3 & 1) == 0) {
            if (uVar5 == 4) break;
            pbVar4 = &DAT_0548e16c + uVar5;
            uVar3 = FUN_02507924(local_4c,pbVar4);
            if ((uVar3 & 1) == 0) {
              if (uVar5 == 3) break;
              pbVar4 = &DAT_0548e16d + uVar5;
              uVar3 = FUN_02507924(local_4c,pbVar4);
              if ((uVar3 & 1) == 0) {
                if (uVar5 == 2) break;
                pbVar4 = &DAT_0548e16e + uVar5;
                uVar3 = FUN_02507924(local_4c,pbVar4);
                if ((uVar3 & 1) == 0) {
                  if (uVar5 == 1) break;
                  pbVar4 = &DAT_0548e16f + uVar5;
                  uVar3 = FUN_02507924(local_4c,pbVar4);
                  if ((uVar3 & 1) == 0) {
                    if (bVar1 == 0) break;
                    pbVar4 = &DAT_0548e170 + uVar5;
                    FUN_02507924(local_4c,pbVar4);
                  }
                }
              }
            }
          }
        }
      }
      local_4c[0] = *pbVar4;
    } while (local_4c[0] < 8);
  }
  return 0.0 <= fVar8;
}

