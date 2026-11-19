
undefined8 FUN_03850cb0(long param_1,float *param_2,float *param_3,int *param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  float *pfVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  float *pfVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined **local_1d0;
  undefined8 *local_1c8;
  undefined **local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [255];
  undefined1 local_ad;
  
  lVar12 = *(long *)(param_1 + 0x78);
  if (lVar12 == 0) {
    return 0;
  }
  uVar5 = param_4[0x12];
  if (((int)uVar5 < 0) || (*(int *)(lVar12 + 0x18) <= (int)uVar5)) {
    local_ad = 0;
    local_1b0 = 0x100;
    puStack_1b8 = local_1ac;
    local_1ac[0] = 0;
    local_1c0 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar12 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_1c0,"%s.as",lVar12 + *(int *)(lVar12 + 0x24) + (long)*(int *)(lVar12 + 8));
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + (ulong)uVar5 * 0x10);
    lVar21 = *(long *)(lVar12 + 0x98);
    if (((lVar21 != 0) && (uVar5 = *(uint *)(lVar21 + 0xa0), 0 < (int)uVar5)) &&
       (*(long *)(lVar21 + 0x28) != 0)) {
      fVar25 = *(float *)(lVar12 + 0xb4);
      bVar9 = false;
      local_1fc = 0.0;
      fVar27 = 0.0;
      uVar22 = 0;
      ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_204 = 0.0;
      local_200 = 0.0;
      local_20c = 0.0;
      local_208 = 0.0;
      do {
        lVar12 = *(long *)(lVar21 + 0x28);
        uVar4 = uVar22;
        if (*(uint *)(lVar21 + 0x20) <= uVar22) {
          uVar4 = 0;
        }
        if (lVar12 != 0) {
          plVar17 = (long *)(lVar12 + (ulong)uVar4 * 0x28);
          lVar20 = *plVar17;
          if (*(int *)(lVar20 + 4) == *param_4) {
            lVar19 = *(long *)(lVar12 + (ulong)uVar4 * 0x28 + 8);
            if (lVar19 != 0) {
              iVar6 = *(int *)(lVar20 + 8);
              iVar7 = param_4[1];
              if (iVar6 < 0x60000000) {
                lVar20 = *(long *)(*(long *)(lVar12 + (ulong)uVar4 * 0x28 + 0x10) + 8);
                local_1c8 = &DAT_0407ebb1;
                if (iVar7 < *(int *)(lVar20 + iVar6)) {
                  local_1c8 = (undefined8 *)
                              (lVar20 + *(int *)(lVar20 + 0x24) +
                              (long)*(int *)(((ulong)(uint)((int *)(lVar20 + iVar6))
                                                           [(long)iVar7 + 1] & 0xfffffff) + lVar20 +
                                            4));
                }
              }
              else {
                uVar2 = iVar6 + 0xa0000000;
                if (*(uint *)(lVar21 + 0x80) <= uVar2) {
                  uVar2 = 0;
                }
                lVar20 = *(long *)(lVar21 + 0x88) + (ulong)uVar2 * 0x32;
                local_1c8 = *(undefined8 **)(lVar20 + (ulong)*(byte *)(lVar20 + iVar7 + 0x20));
              }
              fVar30 = *(float *)(lVar19 + 0x10);
              fVar28 = *(float *)(lVar19 + 0x14);
              lVar20 = *plVar17;
              local_1d0 = ppuVar1;
              if (lVar20 == 0) {
                local_1b0 = 0x100;
                local_ad = 0;
                local_1ac[0] = 0;
                local_1c0 = &PTR_LAB_048f9a70;
                lVar12 = *(long *)(*(long *)(lVar12 + (ulong)uVar4 * 0x28 + 0x10) + 8);
                puStack_1b8 = local_1ac;
                FUN_038d1270(&local_1c0,"%s.as",
                             lVar12 + *(int *)(lVar12 + 0x24) + (long)*(int *)(lVar12 + 8));
                ppuVar14 = local_1d0;
                pfVar16 = (float *)PTR_DAT_04bb2150;
              }
              else {
                iVar6 = *(int *)(lVar20 + 8);
                iVar7 = param_4[2];
                if (iVar6 < 0x60000000) {
                  lVar12 = *(long *)(*(long *)(lVar12 + (ulong)uVar4 * 0x28 + 0x10) + 8);
                  piVar3 = (int *)(lVar12 + iVar6);
                  if (iVar7 < *piVar3) {
                    pfVar13 = (float *)(((ulong)(uint)piVar3[(long)iVar7 + 1] & 0xfffffff) + lVar12
                                       + 4);
                  }
                  else {
                    pfVar13 = (float *)0x0;
                  }
                  pfVar16 = (float *)PTR_DAT_04bb2150;
                  if (pfVar13 != (float *)0x0) {
                    pfVar16 = pfVar13;
                  }
                }
                else {
                  uVar4 = iVar6 + 0xa0000000;
                  if (*(uint *)(lVar21 + 0x80) <= uVar4) {
                    uVar4 = 0;
                  }
                  lVar12 = *(long *)(lVar21 + 0x88) + (ulong)uVar4 * 0x32;
                  pfVar16 = (float *)(lVar12 + (ulong)*(byte *)(lVar12 + iVar7 + 0x20));
                }
                ppuVar14 = &PTR_LAB_048f9770;
              }
              fVar26 = *pfVar16;
              fVar29 = pfVar16[1];
              fVar31 = pfVar16[2];
              (*(code *)ppuVar14[3])(&local_1d0);
              (*(code *)local_1d0[3])(&local_1d0);
              puVar10 = local_1c8;
              (**(code **)(*(long *)(param_4 + 4) + 0x18))(param_4 + 4);
              puVar15 = *(undefined8 **)(param_4 + 6);
              if (puVar10 == puVar15) {
LAB_03851030:
                if (((char)param_4[0x13] == '\0') || (0.5 <= fVar30)) {
LAB_03851070:
                  fVar23 = fVar28 * fVar29;
                  fVar24 = (float)param_4[0x14];
                  fVar30 = -(fVar28 * fVar29);
                  if (0.0 <= fVar23) {
                    fVar30 = fVar23;
                  }
                  fVar29 = -fVar24;
                  if (0.0 <= fVar24) {
                    fVar29 = fVar24;
                  }
                  if (fVar29 <= fVar30) {
                    local_200 = fVar28 * fVar26;
                    local_1fc = fVar28 * fVar31;
                    bVar9 = true;
                    fVar27 = fVar23;
                  }
                }
                else if (0.1 < fVar25) {
                  fVar30 = fVar25 - fVar30;
                  fVar23 = -fVar30;
                  if (0.0 <= fVar30) {
                    fVar23 = fVar30;
                  }
                  if (fVar23 <= 1.1920929e-07) goto LAB_03851070;
                }
              }
              else {
                uVar18 = 0;
                bVar11 = true;
                do {
                  if (*(char *)((long)local_1c8 + uVar18) != *(char *)((long)puVar15 + uVar18))
                  break;
                  if (*(char *)((long)local_1c8 + uVar18) == '\0') {
                    if (bVar11) goto LAB_03851030;
                    break;
                  }
                  cVar8 = *(char *)((long)local_1c8 + uVar18 + 1);
                  if (cVar8 != *(char *)((long)puVar15 + uVar18 + 1)) break;
                  if (cVar8 == '\0') goto LAB_03851030;
                  cVar8 = *(char *)((long)local_1c8 + uVar18 + 2);
                  if (cVar8 != *(char *)((long)puVar15 + uVar18 + 2)) break;
                  if (cVar8 == '\0') goto LAB_03851030;
                  bVar11 = uVar18 < 0x7fffe;
                  uVar18 = uVar18 + 3;
                } while (uVar18 != 0x80001);
                if (((char)param_4[0x13] == '\0') || (0.5 <= fVar30)) {
LAB_038510f0:
                  fVar23 = fVar28 * fVar29;
                  fVar24 = (float)param_4[0x14];
                  fVar30 = -(fVar28 * fVar29);
                  if (0.0 <= fVar23) {
                    fVar30 = fVar23;
                  }
                  fVar29 = -fVar24;
                  if (0.0 <= fVar24) {
                    fVar29 = fVar24;
                  }
                  if (fVar29 <= fVar30) {
                    local_208 = fVar28 * fVar26;
                    local_204 = fVar28 * fVar31;
                    bVar9 = true;
                    local_20c = fVar23;
                  }
                }
                else if (0.1 < fVar25) {
                  fVar30 = fVar25 - fVar30;
                  fVar23 = -fVar30;
                  if (0.0 <= fVar30) {
                    fVar23 = fVar30;
                  }
                  if (fVar23 <= 1.1920929e-07) goto LAB_038510f0;
                }
              }
            }
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar5);
      if (bVar9) {
        param_2[1] = fVar27;
        *param_2 = local_200;
        param_2[2] = local_1fc;
        *param_3 = local_208;
        param_3[1] = local_20c;
        param_3[2] = local_204;
        return 1;
      }
    }
  }
  return 0;
}

