
bool FUN_01872e80(long param_1)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  byte *pbVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s14;
  float unaff_s15;
  byte local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined *puStack_b8;
  int local_b0;
  int iStack_ac;
  char local_a8 [8];
  undefined *local_a0;
  int local_98;
  int iStack_94;
  
  lVar8 = *(long *)(param_1 + 0x3d0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x2d8) + 0x28))(lVar8 + 0x2d8);
    plVar13 = *(long **)PTR_DAT_04bb27d0;
    uVar5 = FUN_01d3e29c(*plVar13 + 8);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_01d692e8(plVar13[2]), (uVar5 & 1) == 0)) {
      return false;
    }
  }
  local_c4 = *(undefined4 *)(param_1 + 0x4a8);
  puStack_b8 = PTR_DAT_04bb2010 + 0x10;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_c8[0] = *(byte *)(param_1 + 0x494) ^ 1;
  local_c0 = *(undefined8 *)(param_1 + 0x498);
  local_b0 = *(int *)(PTR_DAT_04bb5d40 + 8);
  iStack_ac = *(int *)(PTR_DAT_04bb5d40 + 0xc);
  local_98 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  iStack_94 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  local_a0 = puStack_b8;
  FUN_01947010(*(undefined4 *)(param_1 + 0x338),&local_c0,&local_a0,local_c8,0);
  puVar3 = PTR_DAT_04bb5038;
  lVar8 = 0;
  fVar17 = -1.0;
  uVar11 = 8;
  do {
    uVar12 = uVar11;
    if (local_a8[lVar8] != '\0') {
      uVar12 = (uint)lVar8;
      if ((int)uVar12 < 8) {
        lVar1 = lVar8;
        if (7 < uVar12) {
          lVar1 = 0;
        }
        fVar15 = (float)(local_b0 + (&DAT_04177458)[lVar1 * 2]) * 0.5;
        uVar9 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar9 = (uint)(fVar15 < 0.0);
        }
        fVar16 = (float)(iStack_ac + (&DAT_0417745c)[lVar1 * 2]) * 0.5;
        uVar10 = 0;
        if (fVar16 != (float)(int)fVar16) {
          uVar10 = (uint)(fVar16 < 0.0);
        }
        unaff_s14 = (float)(int)((int)fVar15 - uVar9) * 10.0 + 5.0;
        unaff_s15 = (float)(int)((int)fVar16 - uVar10) * 10.0 + 5.0;
      }
      FUN_02507c6c(&local_a0,7,1,1,0);
      fVar15 = -1.0;
      if ((byte)local_a0 < 8) {
        fVar15 = -1.0;
        bVar2 = (byte)local_a0;
        do {
          local_c8[0] = bVar2;
          pfVar6 = (float *)FUN_0251b3b0(local_c8,0);
          fVar16 = fVar15;
          if (pfVar6 != (float *)0x0) {
            fVar16 = (unaff_s15 - pfVar6[2]) * (unaff_s15 - pfVar6[2]) +
                     (unaff_s14 - *pfVar6) * (unaff_s14 - *pfVar6);
            bVar4 = true;
            if ((fVar15 <= fVar16) && (bVar4 = false, !NAN(fVar15))) {
              bVar4 = fVar15 < 0.0;
            }
            if (!bVar4) {
              fVar16 = fVar15;
            }
          }
          fVar15 = fVar16;
          bVar2 = (byte)local_a0;
          uVar5 = (ulong)local_a0 & 0xff;
          if ((7 < (byte)local_a0) || (uVar5 + 1 == 8)) break;
          pbVar14 = puVar3 + uVar5 + 1;
          uVar7 = FUN_02507924(&local_a0,pbVar14);
          if ((uVar7 & 1) == 0) {
            if (uVar5 + 2 == 8) break;
            pbVar14 = puVar3 + uVar5 + 2;
            uVar7 = FUN_02507924(&local_a0,pbVar14);
            if ((uVar7 & 1) == 0) {
              if (uVar5 + 3 == 8) break;
              pbVar14 = puVar3 + uVar5 + 3;
              uVar7 = FUN_02507924(&local_a0,pbVar14);
              if ((uVar7 & 1) == 0) {
                if (uVar5 + 4 == 8) break;
                pbVar14 = puVar3 + uVar5 + 4;
                uVar7 = FUN_02507924(&local_a0,pbVar14);
                if ((uVar7 & 1) == 0) {
                  if (uVar5 + 5 == 8) break;
                  pbVar14 = puVar3 + uVar5 + 5;
                  uVar7 = FUN_02507924(&local_a0,pbVar14);
                  if ((uVar7 & 1) == 0) {
                    if (uVar5 + 6 == 8) break;
                    pbVar14 = puVar3 + uVar5 + 6;
                    uVar7 = FUN_02507924(&local_a0,pbVar14);
                    if ((uVar7 & 1) == 0) {
                      if (uVar5 + 7 == 8) break;
                      pbVar14 = puVar3 + uVar5 + 7;
                      uVar7 = FUN_02507924(&local_a0,pbVar14);
                      if ((uVar7 & 1) == 0) {
                        if (bVar2 == 0) break;
                        pbVar14 = puVar3 + uVar5 + 8;
                        FUN_02507924(&local_a0,pbVar14);
                      }
                    }
                  }
                }
              }
            }
          }
          bVar2 = *pbVar14;
          if (7 < bVar2) break;
          local_a0 = (undefined *)CONCAT71(local_a0._1_7_,bVar2);
        } while( true );
      }
      if (fVar15 <= fVar17 && 0.0 <= fVar17) {
        uVar12 = uVar11;
        fVar15 = fVar17;
      }
      fVar17 = fVar15;
    }
    lVar8 = lVar8 + 1;
    uVar11 = uVar12;
    if (lVar8 == 8) {
      bVar4 = (int)uVar12 < 8;
      if ((int)uVar12 < 8) {
        if (7 < uVar12) {
          uVar12 = 0;
        }
        fVar17 = (float)(local_b0 + (&DAT_04177458)[(ulong)uVar12 * 2]) * 0.5;
        uVar11 = 0;
        if (fVar17 != (float)(int)fVar17) {
          uVar11 = (uint)(fVar17 < 0.0);
        }
        fVar15 = (float)(iStack_ac + (&DAT_0417745c)[(ulong)uVar12 * 2]) * 0.5;
        uVar12 = 0;
        if (fVar15 != (float)(int)fVar15) {
          uVar12 = (uint)(fVar15 < 0.0);
        }
        *(float *)(param_1 + 0x328) = (float)(int)((int)fVar17 - uVar11) * 10.0 + 5.0;
        *(float *)(param_1 + 0x330) = (float)(int)((int)fVar15 - uVar12) * 10.0 + 5.0;
      }
      return bVar4;
    }
  } while( true );
}

