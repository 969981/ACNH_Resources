
undefined8 FUN_01f84f50(float param_1,long param_2)

{
  byte bVar1;
  float *pfVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  byte local_4c [12];
  
  lVar5 = *(long *)(*(long *)(param_2 + 8) + 0x68);
  FUN_02507c6c(local_4c,7,1,1,0);
  if (7 < local_4c[0]) {
    return 0;
  }
  while( true ) {
    pfVar2 = (float *)FUN_0251b3b0(local_4c,0);
    bVar1 = local_4c[0];
    if ((pfVar2 != (float *)0x0) &&
       (fVar7 = *pfVar2 - *(float *)(lVar5 + 0x278), fVar8 = pfVar2[2] - *(float *)(lVar5 + 0x280),
       fVar8 * fVar8 + fVar7 * fVar7 <= param_1 * 30.0 * param_1 * 30.0)) {
      return 1;
    }
    uVar6 = (ulong)local_4c[0];
    if (7 < local_4c[0]) {
      return 0;
    }
    if (uVar6 == 7) break;
    pbVar4 = &DAT_0548e169 + uVar6;
    uVar3 = FUN_02507924(local_4c,pbVar4);
    if ((uVar3 & 1) == 0) {
      if (uVar6 == 6) {
        return 0;
      }
      pbVar4 = &DAT_0548e16a + uVar6;
      uVar3 = FUN_02507924(local_4c,pbVar4);
      if ((uVar3 & 1) == 0) {
        if (uVar6 == 5) {
          return 0;
        }
        pbVar4 = &DAT_0548e16b + uVar6;
        uVar3 = FUN_02507924(local_4c,pbVar4);
        if ((uVar3 & 1) == 0) {
          if (uVar6 == 4) {
            return 0;
          }
          pbVar4 = &DAT_0548e16c + uVar6;
          uVar3 = FUN_02507924(local_4c,pbVar4);
          if ((uVar3 & 1) == 0) {
            if (uVar6 == 3) {
              return 0;
            }
            pbVar4 = &DAT_0548e16d + uVar6;
            uVar3 = FUN_02507924(local_4c,pbVar4);
            if ((uVar3 & 1) == 0) {
              if (uVar6 == 2) {
                return 0;
              }
              pbVar4 = &DAT_0548e16e + uVar6;
              uVar3 = FUN_02507924(local_4c,pbVar4);
              if ((uVar3 & 1) == 0) {
                if (uVar6 == 1) {
                  return 0;
                }
                pbVar4 = &DAT_0548e16f + uVar6;
                uVar3 = FUN_02507924(local_4c,pbVar4);
                if ((uVar3 & 1) == 0) {
                  if (bVar1 == 0) {
                    return 0;
                  }
                  pbVar4 = &DAT_0548e170 + uVar6;
                  FUN_02507924(local_4c,pbVar4);
                }
              }
            }
          }
        }
      }
    }
    local_4c[0] = *pbVar4;
    if (7 < local_4c[0]) {
      return 0;
    }
  }
  return 0;
}

