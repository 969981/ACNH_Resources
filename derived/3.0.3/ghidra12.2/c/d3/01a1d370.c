
bool FUN_01a1d370(long param_1)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined **local_60;
  long lStack_58;
  byte *local_50;
  byte local_34 [4];
  
  FUN_02507c6c(&local_60,7,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  local_34[0] = (byte)local_60;
  if (7 < (byte)local_60) {
LAB_01a1d3b0:
    local_60 = &PTR_FUN_049fa618;
    local_50 = local_34;
    local_34[0] = 0;
    iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar1 == 0) {
      bVar4 = false;
    }
    else {
      lVar8 = (long)iVar1 << 3;
      puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      lStack_58 = param_1;
      do {
        (*(code *)*local_60)(&local_60,*puVar7);
        lVar8 = lVar8 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
      bVar4 = local_34[0] != 0;
    }
    return bVar4;
  }
  do {
    pfVar5 = (float *)FUN_0251b3b0(local_34,0);
    if (pfVar5 != (float *)0x0) {
      fVar12 = *pfVar5;
      fVar11 = (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0;
      bVar4 = false;
      if (((float)*(int *)(param_1 + 0x10) * 5.0 <= fVar12) &&
         (bVar4 = false, !NAN(fVar12) && !NAN(fVar11))) {
        bVar4 = fVar12 < fVar11;
      }
      if (bVar4) {
        fVar12 = pfVar5[2];
        fVar11 = (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0;
        bVar4 = false;
        if (((float)*(int *)(param_1 + 0x14) * 5.0 <= fVar12) &&
           (bVar4 = false, !NAN(fVar12) && !NAN(fVar11))) {
          bVar4 = fVar12 < fVar11;
        }
        if (bVar4) {
          return true;
        }
      }
    }
    bVar3 = (byte)local_60;
    uVar10 = (ulong)local_60 & 0xff;
    if ((7 < (byte)local_60) || (uVar10 + 1 == 8)) goto LAB_01a1d3b0;
    pbVar9 = puVar2 + uVar10 + 1;
    uVar6 = FUN_02507924(&local_60,pbVar9);
    if ((uVar6 & 1) == 0) {
      if (uVar10 + 2 == 8) goto LAB_01a1d3b0;
      pbVar9 = puVar2 + uVar10 + 2;
      uVar6 = FUN_02507924(&local_60,pbVar9);
      if ((uVar6 & 1) == 0) {
        if (uVar10 + 3 == 8) goto LAB_01a1d3b0;
        pbVar9 = puVar2 + uVar10 + 3;
        uVar6 = FUN_02507924(&local_60,pbVar9);
        if ((uVar6 & 1) == 0) {
          if (uVar10 + 4 == 8) goto LAB_01a1d3b0;
          pbVar9 = puVar2 + uVar10 + 4;
          uVar6 = FUN_02507924(&local_60,pbVar9);
          if ((uVar6 & 1) == 0) {
            if (uVar10 + 5 == 8) goto LAB_01a1d3b0;
            pbVar9 = puVar2 + uVar10 + 5;
            uVar6 = FUN_02507924(&local_60,pbVar9);
            if ((uVar6 & 1) == 0) {
              if (uVar10 + 6 == 8) goto LAB_01a1d3b0;
              pbVar9 = puVar2 + uVar10 + 6;
              uVar6 = FUN_02507924(&local_60,pbVar9);
              if ((uVar6 & 1) == 0) {
                if (uVar10 + 7 == 8) goto LAB_01a1d3b0;
                pbVar9 = puVar2 + uVar10 + 7;
                uVar6 = FUN_02507924(&local_60,pbVar9);
                if ((uVar6 & 1) == 0) {
                  if (bVar3 == 0) goto LAB_01a1d3b0;
                  pbVar9 = puVar2 + uVar10 + 8;
                  FUN_02507924(&local_60,pbVar9);
                }
              }
            }
          }
        }
      }
    }
    local_34[0] = *pbVar9;
    if (7 < local_34[0]) goto LAB_01a1d3b0;
    local_60 = (undefined **)CONCAT71(local_60._1_7_,local_34[0]);
  } while( true );
}

