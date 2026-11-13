
undefined8 FUN_012ee6e0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  uint uVar15;
  undefined *puVar16;
  bool bVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined **ppuVar21;
  bool bVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  undefined *local_198;
  undefined1 *local_190;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [127];
  undefined1 local_f5;
  undefined **local_f0;
  undefined **local_e8;
  undefined *local_e0;
  int local_d8;
  int local_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  
  puVar16 = PTR_DAT_04bb27a8;
  lVar27 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar27 == 0) || (lVar26 = param_2[3], lVar26 == 0)) || (lVar28 = *param_2, lVar28 == 0)) {
    uVar18 = 0;
  }
  else {
    sVar11 = *(short *)(lVar26 + 4);
    sVar12 = *(short *)(lVar26 + 8);
    sVar13 = *(short *)(lVar26 + 6);
    sVar14 = *(short *)(lVar26 + 10);
    iVar6 = (int)sVar11;
    if (sVar12 <= sVar11) {
      iVar6 = (int)sVar12;
    }
    local_b0 = (int)sVar11;
    if (sVar11 <= sVar12) {
      local_b0 = (int)sVar12;
    }
    local_d0 = PTR_DAT_04bbc5d8 + 0x10;
    local_e0 = PTR_DAT_04bb2018 + 0x10;
    local_d4 = (int)sVar13;
    if (sVar14 <= sVar13) {
      local_d4 = (int)sVar14;
    }
    iVar7 = (int)sVar13;
    if (sVar13 <= sVar14) {
      iVar7 = (int)sVar14;
    }
    iStack_ac = iVar7;
    local_f0 = &puStack_c8;
    ppuVar21 = &local_b8;
    if (iVar7 + 1 != local_d4) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      local_e8 = ppuVar21;
      local_d8 = iVar6;
      puStack_c8 = local_e0;
      local_c0 = iVar6;
      iStack_bc = local_d4;
      local_b8 = local_e0;
      do {
        if (((*(int *)(lVar28 + 0x18) <= local_d8 && local_d8 <= *(int *)(lVar28 + 0x28)) &&
            (*(int *)(lVar28 + 0x1c) <= local_d4)) && (local_d4 <= *(int *)(lVar28 + 0x2c))) {
          lVar23 = param_2[2];
          if (lVar23 != 0) {
            uVar24 = local_d8 - *(int *)(lVar23 + 0x28);
            if ((uVar24 < *(uint *)(lVar23 + 0x18)) &&
               (uVar15 = local_d4 - *(int *)(lVar23 + 0x2c), uVar15 < *(uint *)(lVar23 + 0x1c))) {
              uVar24 = uVar24 + *(uint *)(lVar23 + 0x18) * uVar15;
LAB_012ee90c:
              if (*(uint *)(lVar23 + 0x30) <= uVar24) {
                uVar24 = 0;
              }
              puVar25 = (undefined8 *)(*(long *)(lVar23 + 0x38) + (long)(int)uVar24 * 0x68);
            }
            else {
              if (*(char *)(lVar23 + 0x88) != '\0') {
                uVar24 = local_d8 - *(int *)(lVar23 + 0x98);
                if (uVar24 < *(uint *)(lVar23 + 0xa0)) {
                  uVar15 = local_d4 - *(int *)(lVar23 + 0x9c);
                  puVar25 = &DAT_051a50f0;
                  if (uVar15 < *(uint *)(lVar23 + 0xa4)) {
                    uVar24 = uVar24 + *(uint *)(lVar23 + 0xa0) * uVar15 + *(int *)(lVar23 + 0x8c);
                    goto LAB_012ee90c;
                  }
                  goto LAB_012ee930;
                }
              }
              puVar25 = &DAT_051a50f0;
            }
LAB_012ee930:
            uVar24 = *(uint *)((long)puVar25 + 0xc);
            if ((((uVar24 & 0x2100) != 0x100) && ((uVar24 & 0x300) != 0x100)) &&
               ((uVar24 & 0x900) != 0x100)) goto LAB_012eeb90;
          }
          uVar24 = 0;
          sVar11 = *(short *)(lVar26 + 4);
          if (*(short *)(lVar26 + 8) <= *(short *)(lVar26 + 4)) {
            sVar11 = *(short *)(lVar26 + 8);
          }
          sVar12 = *(short *)(lVar26 + 6);
          if (*(short *)(lVar26 + 10) <= *(short *)(lVar26 + 6)) {
            sVar12 = *(short *)(lVar26 + 10);
          }
          puVar8 = (ushort *)
                   (lVar26 + 0xc +
                   (ulong)(uint)((local_d4 - sVar12) * 3 + (local_d8 - sVar11)) * 0xe);
          if (2 < (uint)(local_d4 - sVar12) || 2 < (uint)(local_d8 - sVar11)) {
            puVar8 = (ushort *)PTR_DAT_04bbc2f8;
          }
          bVar17 = true;
          do {
            bVar22 = bVar17;
            lVar23 = *(long *)puVar16;
            puVar9 = puVar8 + (ulong)uVar24 * 3;
            if (1 < uVar24) {
              puVar9 = puVar8;
            }
            uVar15 = (uint)*puVar9 - (uint)*(ushort *)(lVar23 + 0x408);
            if ((uVar15 < *(uint *)(lVar23 + 1000)) &&
               (*(long *)(*(long *)(lVar23 + 0x3f0) + (long)(int)uVar15 * 8) != 0)) {
              if ((uVar24 & *puVar9 == 0) != 0) break;
              local_f5 = 0;
              local_174[0] = 0;
              local_178 = 0x80;
              local_188 = PTR_DAT_04bb2d88 + 0x10;
              uVar24 = (uint)*puVar9 - (uint)*(ushort *)(lVar23 + 0x408);
              local_180 = local_174;
              if ((uVar24 < *(uint *)(lVar23 + 1000)) &&
                 (lVar23 = *(long *)(*(long *)(lVar23 + 0x3f0) + (long)(int)uVar24 * 8), lVar23 != 0
                 )) {
                lVar19 = FUN_012763b0(lVar23,0x29,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc338);
                lVar23 = *(long *)PTR_PTR_04bbc340;
                if (lVar19 != 0) {
                  lVar23 = lVar19;
                }
                FUN_038d1270(&local_188,"%s_%d",lVar23,puVar9[1]);
              }
              (**(code **)(local_188 + 0x18))(&local_188);
              local_190 = local_180;
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(uint)(byte)puVar9[2]);
              cVar10 = *(char *)((long)param_2 + 0x24);
              local_80 = 0;
              fVar29 = 0.0;
              if ((byte)puVar8[6] != 4) {
                fVar29 = (float)(byte)puVar8[6] * 15.0;
              }
              local_198 = puVar1;
              uVar20 = FUN_00945160(fVar29,(float)((uint)(byte)puVar9[2] << 0x1e) * 1.4629181e-09,
                                    lVar27 + 0x28,&local_198,&local_e0,(long)&local_80 + 4,&local_80
                                    ,cVar10);
              if ((uVar20 & 1) != 0) {
                local_88 = local_d8 * 2;
                iStack_84 = local_d4 * 2;
                iVar4 = local_80._4_4_ + local_88;
                iVar5 = (int)local_80 + iStack_84;
                local_98 = local_88;
                if (iVar4 <= local_88) {
                  local_98 = iVar4;
                }
                if (local_88 <= iVar4) {
                  local_88 = iVar4;
                }
                iStack_94 = iStack_84;
                if (iVar5 <= iStack_84) {
                  iStack_94 = iVar5;
                }
                if (iStack_84 <= iVar5) {
                  iStack_84 = iVar5;
                }
                puVar25 = (undefined8 *)(lVar27 + 0x90);
                if (cVar10 == '\0') {
                  puVar25 = (undefined8 *)(lVar27 + 0xa8);
                }
                local_a8 = puVar2;
                puStack_a0 = puVar3;
                local_90 = puVar3;
                FUN_0096e9e0(*puVar25,&local_a8);
              }
            }
            uVar24 = 1;
            bVar17 = false;
          } while (bVar22);
          ppuVar21 = local_e8;
        }
LAB_012eeb90:
        if (local_d8 < *(int *)(ppuVar21 + 1)) {
          local_d8 = local_d8 + 1;
        }
        else {
          local_d8 = *(int *)(local_f0 + 1);
          local_d4 = local_d4 + 1;
        }
      } while (iVar6 != local_d8 || iVar7 + 1 != local_d4);
    }
    uVar18 = 1;
  }
  return uVar18;
}

