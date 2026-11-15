
bool FUN_01f85bd0(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  float *pfVar3;
  ulong uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  byte local_5c [12];
  
  FUN_02507c6c(local_5c,7,1,1,0);
  puVar1 = PTR_DAT_04bb5038;
  iVar6 = 0;
  iVar7 = 0;
  if (local_5c[0] < 8) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      pfVar3 = (float *)FUN_0251b3b0(local_5c,0);
      bVar2 = local_5c[0];
      if (pfVar3 != (float *)0x0) {
        fVar9 = *pfVar3 - *(float *)(param_1 + 0x278);
        fVar10 = pfVar3[2] - *(float *)(param_1 + 0x280);
        if (fVar10 * fVar10 + fVar9 * fVar9 <= 9216.0) {
          if (10.0 <= *(float *)(param_1 + 0x280) - pfVar3[2]) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar6 = iVar6 + 1;
          }
        }
      }
      uVar8 = (ulong)local_5c[0];
      if ((7 < local_5c[0]) || (uVar8 + 1 == 8)) break;
      pbVar5 = puVar1 + uVar8 + 1;
      uVar4 = FUN_02507924(local_5c,pbVar5);
      if ((uVar4 & 1) == 0) {
        if (uVar8 + 2 == 8) break;
        pbVar5 = puVar1 + uVar8 + 2;
        uVar4 = FUN_02507924(local_5c,pbVar5);
        if ((uVar4 & 1) == 0) {
          if (uVar8 + 3 == 8) break;
          pbVar5 = puVar1 + uVar8 + 3;
          uVar4 = FUN_02507924(local_5c,pbVar5);
          if ((uVar4 & 1) == 0) {
            if (uVar8 + 4 == 8) break;
            pbVar5 = puVar1 + uVar8 + 4;
            uVar4 = FUN_02507924(local_5c,pbVar5);
            if ((uVar4 & 1) == 0) {
              if (uVar8 + 5 == 8) break;
              pbVar5 = puVar1 + uVar8 + 5;
              uVar4 = FUN_02507924(local_5c,pbVar5);
              if ((uVar4 & 1) == 0) {
                if (uVar8 + 6 == 8) break;
                pbVar5 = puVar1 + uVar8 + 6;
                uVar4 = FUN_02507924(local_5c,pbVar5);
                if ((uVar4 & 1) == 0) {
                  if (uVar8 + 7 == 8) break;
                  pbVar5 = puVar1 + uVar8 + 7;
                  uVar4 = FUN_02507924(local_5c,pbVar5);
                  if ((uVar4 & 1) == 0) {
                    if (bVar2 == 0) break;
                    pbVar5 = puVar1 + uVar8 + 8;
                    FUN_02507924(local_5c,pbVar5);
                  }
                }
              }
            }
          }
        }
      }
      local_5c[0] = *pbVar5;
    } while (local_5c[0] < 8);
  }
  return iVar7 != 0 && iVar6 == 0;
}

