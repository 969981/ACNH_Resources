
void FUN_00bffcc0(byte *param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined *puVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte local_67c [4];
  undefined4 local_678;
  undefined2 local_674;
  byte local_670 [4];
  undefined4 local_66c;
  undefined2 local_668;
  uint local_664;
  float local_660;
  float local_65c;
  float local_658 [382];
  
  FUN_02507c6c(local_670,7,1,0,0);
  local_678 = local_66c;
  bVar7 = *PTR_DAT_04bb32e0;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *param_1 = bVar7;
  puVar3 = PTR_DAT_04bb5038;
  local_67c[0] = 0xff;
  if (local_670[0] < 8) {
    local_67c[0] = local_670[0];
  }
  local_674 = local_668;
  if (7 < local_670[0]) {
    return;
  }
  do {
    pfVar4 = (float *)FUN_0251b3b0(local_67c,0);
    if (((pfVar4 != (float *)0x0) &&
        (uVar5 = FUN_0291e130(&local_660,&local_664,0), (uVar5 & 1) != 0)) && (local_664 != 0)) {
      uVar5 = 0;
      pfVar8 = &local_660;
      fVar12 = 999999.9;
      iVar9 = -1;
      do {
        pfVar1 = pfVar8;
        if (0x7f < uVar5) {
          pfVar1 = &local_660;
        }
        iVar10 = (int)uVar5;
        if (*pfVar1 == *pfVar4) {
          pfVar2 = pfVar8 + 1;
          if (0x7f < uVar5) {
            pfVar2 = &local_65c;
          }
          if (*pfVar2 == pfVar4[1]) {
            pfVar2 = pfVar8 + 2;
            if (0x7f < uVar5) {
              pfVar2 = local_658;
            }
            if (*pfVar2 == pfVar4[2]) break;
          }
        }
        fVar13 = *pfVar1 - *pfVar4;
        pfVar1 = pfVar8 + 2;
        if (0x7f < uVar5) {
          pfVar1 = local_658;
        }
        pfVar8 = pfVar8 + 3;
        fVar14 = *pfVar1 - pfVar4[2];
        fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13);
        if (fVar12 <= fVar13) {
          iVar10 = iVar9;
          fVar13 = fVar12;
        }
        fVar12 = fVar13;
        uVar5 = uVar5 + 1;
        iVar9 = iVar10;
      } while (local_664 != uVar5);
      if (iVar10 == 9) {
        if (7 < local_67c[0]) {
          local_67c[0] = 0xff;
        }
        *param_1 = local_67c[0];
        return;
      }
    }
    bVar7 = local_67c[0];
    uVar5 = (ulong)local_67c[0];
    if (7 < local_67c[0]) {
      return;
    }
    if (uVar5 + 1 == 8) {
      return;
    }
    pbVar11 = puVar3 + uVar5 + 1;
    uVar6 = FUN_02507924(local_67c,pbVar11);
    if ((uVar6 & 1) == 0) {
      if (uVar5 + 2 == 8) {
        return;
      }
      pbVar11 = puVar3 + uVar5 + 2;
      uVar6 = FUN_02507924(local_67c,pbVar11);
      if ((uVar6 & 1) == 0) {
        if (uVar5 + 3 == 8) {
          return;
        }
        pbVar11 = puVar3 + uVar5 + 3;
        uVar6 = FUN_02507924(local_67c,pbVar11);
        if ((uVar6 & 1) == 0) {
          if (uVar5 + 4 == 8) {
            return;
          }
          pbVar11 = puVar3 + uVar5 + 4;
          uVar6 = FUN_02507924(local_67c,pbVar11);
          if ((uVar6 & 1) == 0) {
            if (uVar5 + 5 == 8) {
              return;
            }
            pbVar11 = puVar3 + uVar5 + 5;
            uVar6 = FUN_02507924(local_67c,pbVar11);
            if ((uVar6 & 1) == 0) {
              if (uVar5 + 6 == 8) {
                return;
              }
              pbVar11 = puVar3 + uVar5 + 6;
              uVar6 = FUN_02507924(local_67c,pbVar11);
              if ((uVar6 & 1) == 0) {
                if (uVar5 + 7 == 8) {
                  return;
                }
                pbVar11 = puVar3 + uVar5 + 7;
                uVar6 = FUN_02507924(local_67c,pbVar11);
                if ((uVar6 & 1) == 0) {
                  if (bVar7 == 0) {
                    return;
                  }
                  pbVar11 = puVar3 + uVar5 + 8;
                  FUN_02507924(local_67c,pbVar11);
                }
              }
            }
          }
        }
      }
    }
    local_67c[0] = *pbVar11;
    if (7 < local_67c[0]) {
      return;
    }
  } while( true );
}

