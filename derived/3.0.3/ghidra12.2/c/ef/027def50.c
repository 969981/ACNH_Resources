
void FUN_027def50(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  byte *pbVar17;
  int iVar18;
  uint *puVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  int *piVar24;
  undefined *local_240;
  char *pcStack_238;
  byte local_22c [4];
  byte local_228 [4];
  long alStack_224 [2];
  int local_214 [3];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  int aiStack_1f8 [102];
  
  puVar11 = PTR_DAT_04bc1220;
  puVar10 = PTR_DAT_04bb5038;
  puVar9 = PTR_DAT_04bb4f78;
  puVar3 = PTR_DAT_04bb32e0;
  puVar2 = PTR_DAT_04bb27d0;
  pbVar17 = local_228;
  local_228[0] = 0;
  local_228[1] = 0;
  local_228[2] = 0;
  local_228[3] = 0;
  aiStack_1f8[0x39] = 0;
  aiStack_1f8[0x3a] = 0;
  aiStack_1f8[0x37] = 0;
  aiStack_1f8[0x38] = 0;
  aiStack_1f8[0x35] = 0;
  aiStack_1f8[0x36] = 0;
  bVar20 = 0;
  alStack_224[0] = 0;
  lVar23 = 0x48;
  alStack_224[1] = 0;
  local_214[0] = 0;
  stack0xfffffffffffffdf4 = 0;
  stack0xfffffffffffffdfc = 0;
  stack0xfffffffffffffe04 = 0;
  aiStack_1f8[1] = 0;
  aiStack_1f8[2] = 0;
  aiStack_1f8[3] = 0;
  aiStack_1f8[4] = 0;
  aiStack_1f8[5] = 0;
  aiStack_1f8[6] = 0;
  aiStack_1f8[7] = 0;
  aiStack_1f8[9] = 0;
  aiStack_1f8[10] = 0;
  aiStack_1f8[0xb] = 0;
  aiStack_1f8[0xc] = 0;
  aiStack_1f8[0xd] = 0;
  aiStack_1f8[0xe] = 0;
  aiStack_1f8[0xf] = 0;
  aiStack_1f8[0x10] = 0;
  aiStack_1f8[0x11] = 0;
  aiStack_1f8[0x12] = 0;
  aiStack_1f8[0x13] = 0;
  aiStack_1f8[0x14] = 0;
  aiStack_1f8[0x1d] = 0;
  aiStack_1f8[0x1e] = 0;
  aiStack_1f8[0x1b] = 0;
  aiStack_1f8[0x1c] = 0;
  aiStack_1f8[0x19] = 0;
  aiStack_1f8[0x1a] = 0;
  aiStack_1f8[0x17] = 0;
  aiStack_1f8[0x18] = 0;
  aiStack_1f8[0x15] = 0;
  aiStack_1f8[0x23] = 0;
  aiStack_1f8[0x21] = 0;
  aiStack_1f8[0x22] = 0;
  aiStack_1f8[0x1f] = 0;
  aiStack_1f8[0x20] = 0;
  aiStack_1f8[0x2b] = 0;
  aiStack_1f8[0x2c] = 0;
  aiStack_1f8[0x29] = 0;
  aiStack_1f8[0x2a] = 0;
  aiStack_1f8[0x27] = 0;
  aiStack_1f8[0x28] = 0;
  aiStack_1f8[0x25] = 0;
  aiStack_1f8[0x26] = 0;
  aiStack_1f8[0x2f] = 0;
  aiStack_1f8[0x30] = 0;
  aiStack_1f8[0x2d] = 0;
  aiStack_1f8[0x2e] = 0;
  aiStack_1f8[0x33] = 0;
  aiStack_1f8[0x34] = 0;
  aiStack_1f8[0x3d] = 0;
  aiStack_1f8[0x3e] = 0;
  aiStack_1f8[0x3b] = 0;
  aiStack_1f8[0x3c] = 0;
  aiStack_1f8[0x31] = 0;
  aiStack_1f8[0x3f] = 0;
  aiStack_1f8[0x47] = 0;
  aiStack_1f8[0x48] = 0;
  aiStack_1f8[0x45] = 0;
  aiStack_1f8[0x46] = 0;
  aiStack_1f8[0x43] = 0;
  aiStack_1f8[0x44] = 0;
  aiStack_1f8[0x41] = 0;
  aiStack_1f8[0x42] = 0;
  aiStack_1f8[0x4b] = 0;
  aiStack_1f8[0x4c] = 0;
  aiStack_1f8[0x49] = 0;
  aiStack_1f8[0x4a] = 0;
  aiStack_1f8[0x4d] = 0;
  aiStack_1f8[0x55] = 0;
  aiStack_1f8[0x56] = 0;
  aiStack_1f8[0x53] = 0;
  aiStack_1f8[0x54] = 0;
  aiStack_1f8[0x51] = 0;
  aiStack_1f8[0x52] = 0;
  aiStack_1f8[0x4f] = 0;
  aiStack_1f8[0x50] = 0;
  aiStack_1f8[0x59] = 0;
  aiStack_1f8[0x5a] = 0;
  aiStack_1f8[0x57] = 0;
  aiStack_1f8[0x58] = 0;
  aiStack_1f8[0x5b] = 0;
  aiStack_1f8[0x61] = 0;
  aiStack_1f8[0x62] = 0;
  aiStack_1f8[0x5f] = 0;
  aiStack_1f8[0x60] = 0;
  aiStack_1f8[0x5d] = 0;
  aiStack_1f8[0x5e] = 0;
  aiStack_1f8[99] = 0;
  do {
    plVar15 = *(long **)puVar2;
    pbVar17[0x20] = 0;
    pbVar17[0x21] = 0;
    pbVar17[0x22] = 0;
    pbVar17[0x23] = 0;
    pbVar17[0x24] = 0;
    pbVar17[0x25] = 0;
    pbVar17[0x26] = 0;
    pbVar17[0x27] = 0;
    pbVar17[0] = 0;
    pbVar17[1] = 0;
    pbVar17[2] = 0;
    pbVar17[3] = 0;
    pbVar17[4] = 0;
    pbVar17[5] = 0;
    pbVar17[6] = 0;
    pbVar17[7] = 0;
    pbVar17[8] = 0;
    pbVar17[9] = 0;
    pbVar17[10] = 0;
    pbVar17[0xb] = 0;
    pbVar17[0xc] = 0;
    pbVar17[0xd] = 0;
    pbVar17[0xe] = 0;
    pbVar17[0xf] = 0;
    lVar16 = *plVar15;
    pbVar17[0x10] = 0;
    pbVar17[0x11] = 0;
    pbVar17[0x12] = 0;
    pbVar17[0x13] = 0;
    pbVar17[0x14] = 0;
    pbVar17[0x15] = 0;
    pbVar17[0x16] = 0;
    pbVar17[0x17] = 0;
    pbVar17[0x18] = 0;
    pbVar17[0x19] = 0;
    pbVar17[0x1a] = 0;
    pbVar17[0x1b] = 0;
    pbVar17[0x1c] = 0;
    pbVar17[0x1d] = 0;
    pbVar17[0x1e] = 0;
    pbVar17[0x1f] = 0;
    bVar6 = *(byte *)(lVar16 + 0x473);
    pbVar17[0x28] = 0;
    pbVar17[0x29] = 0;
    pbVar17[0x2a] = 0;
    pbVar17[0x2b] = 0;
    pbVar17[0x2c] = 0;
    pbVar17[0x2d] = 0;
    pbVar17[0x2e] = 0;
    pbVar17[0x2f] = 0;
    pbVar17[0x30] = 0;
    pbVar17[0x31] = 0;
    pbVar17[0x32] = 0;
    pbVar17[0x33] = 0;
    pbVar17[0x34] = 0;
    pbVar17[0x35] = 0;
    pbVar17[0x36] = 0;
    pbVar17[0x37] = 0;
    pbVar17[0x18] = 2;
    pbVar17[4] = 0;
    pbVar17[5] = 0;
    pbVar17[6] = 0;
    pbVar17[7] = 0;
    pbVar17[8] = 0;
    pbVar17[9] = 0;
    pbVar17[10] = 0;
    pbVar17[0xb] = 0;
    pbVar17[0xc] = 0;
    pbVar17[0xd] = 0;
    pbVar17[0xe] = 0;
    pbVar17[0xf] = 0;
    pbVar17[0x10] = 0;
    pbVar17[0x11] = 0;
    pbVar17[0x12] = 0;
    pbVar17[0x13] = 0;
    pbVar17[0x14] = 0;
    pbVar17[0x15] = 0;
    pbVar17[0x16] = 0;
    pbVar17[0x17] = 0;
    pbVar17[0x2c] = 0;
    pbVar17[0x2d] = 0;
    pbVar17[0x2e] = 0;
    pbVar17[0x2f] = 0;
    pbVar17[0x30] = 0;
    pbVar17[0x31] = 0;
    pbVar17[0x32] = 0;
    pbVar17[0x33] = 0;
    pbVar17[0x24] = 0;
    pbVar17[0x25] = 0;
    pbVar17[0x26] = 0;
    pbVar17[0x27] = 0;
    pbVar17[0x28] = 0;
    pbVar17[0x29] = 0;
    pbVar17[0x2a] = 0;
    pbVar17[0x2b] = 0;
    pbVar17[0x1c] = 0;
    pbVar17[0x1d] = 0;
    pbVar17[0x1e] = 0;
    pbVar17[0x1f] = 0;
    pbVar17[0x20] = 0;
    pbVar17[0x21] = 0;
    pbVar17[0x22] = 0;
    pbVar17[0x23] = 0;
    pbVar17[0x20] = 0;
    pbVar17[0x21] = 0;
    pbVar17[0x22] = 0;
    pbVar17[0x23] = 0;
    pbVar17[0x24] = 0;
    pbVar17[0x25] = 0;
    pbVar17[0x26] = 0;
    pbVar17[0x27] = 0;
    pbVar17[0x28] = 0;
    pbVar17[0x29] = 0;
    pbVar17[0x2a] = 0;
    pbVar17[0x2b] = 0;
    pbVar17[0x2c] = 0;
    pbVar17[0x2d] = 0;
    pbVar17[0x2e] = 0;
    pbVar17[0x2f] = 0;
    pbVar17[0x30] = 0;
    pbVar17[0x31] = 0;
    pbVar17[0x32] = 0;
    pbVar17[0x33] = 0;
    pbVar17[0x34] = 0;
    pbVar17[0x35] = 0;
    pbVar17[0x36] = 0;
    pbVar17[0x37] = 0;
    puVar19 = (uint *)puVar3;
    if ((long)(char)bVar6 == 0xffffffffffffffff) {
LAB_027df14c:
      puVar19 = (uint *)puVar10;
      if (*puVar11 != bVar20) {
        puVar19 = (uint *)puVar3;
      }
    }
    else {
      puVar1 = (uint *)(lVar16 + 0x48);
      puVar4 = puVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar4 = puVar1;
      }
      if ((*puVar4 >> 3 & 1) == 0) goto LAB_027df14c;
      if (bVar20 != 0xff) {
        puVar4 = (uint *)(lVar16 + lVar23);
        if (7 < bVar20) {
          puVar4 = puVar1;
        }
        if ((*puVar4 & 1) != 0) {
          puVar19 = puVar4 + 0x1e;
        }
      }
    }
    if ((byte)*puVar19 < 8) {
      local_22c[0] = (byte)*puVar19;
      lVar16 = FUN_025830c0(*(undefined8 *)puVar9,local_22c,1);
      if (lVar16 != 0) {
        if ((*(long **)(lVar16 + 0x17bb0) == (long *)0x0) ||
           (puVar13 = (undefined8 *)**(long **)(lVar16 + 0x17bb0), puVar13 == (undefined8 *)0x0)) {
          puVar13 = (undefined8 *)(*(long *)(lVar16 + 0x17b98) + *(long *)(lVar16 + 0x17b90));
          uVar5 = puVar13[5];
          *(undefined8 *)(pbVar17 + 0x20) = puVar13[4];
          *(undefined8 *)(pbVar17 + 0x28) = uVar5;
          *(undefined8 *)(pbVar17 + 0x30) = puVar13[6];
          uVar5 = puVar13[1];
          *(undefined8 *)pbVar17 = *puVar13;
          *(undefined8 *)(pbVar17 + 8) = uVar5;
          uVar5 = puVar13[3];
          *(undefined8 *)(pbVar17 + 0x10) = puVar13[2];
          *(undefined8 *)(pbVar17 + 0x18) = uVar5;
        }
        else {
          uVar14 = (**(code **)*puVar13)();
          puVar13 = (undefined8 *)(*(long *)(lVar16 + 0x17b98) + *(long *)(lVar16 + 0x17b90));
          uVar5 = puVar13[5];
          *(undefined8 *)(pbVar17 + 0x20) = puVar13[4];
          *(undefined8 *)(pbVar17 + 0x28) = uVar5;
          *(undefined8 *)(pbVar17 + 0x30) = puVar13[6];
          uVar5 = puVar13[1];
          *(undefined8 *)pbVar17 = *puVar13;
          *(undefined8 *)(pbVar17 + 8) = uVar5;
          uVar5 = puVar13[3];
          *(undefined8 *)(pbVar17 + 0x10) = puVar13[2];
          *(undefined8 *)(pbVar17 + 0x18) = uVar5;
          if ((((uVar14 & 1) != 0) && (*(long *)(lVar16 + 0x17bb0) != 0)) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0x17bb0) + 8),
             puVar13 != (undefined8 *)0x0)) {
            (**(code **)*puVar13)();
          }
        }
      }
    }
    lVar23 = lVar23 + 0x80;
    bVar20 = bVar20 + 1;
    pbVar17 = pbVar17 + 0x38;
    if (lVar23 == 0x448) {
      iVar21 = 0;
      iVar22 = 0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        pbVar17 = (byte *)(param_1 + (long)iVar22 * 0x13230);
        uVar14 = (ulong)*pbVar17;
        if (((uVar14 < 0x23) && (bVar20 = pbVar17[1], bVar20 <= (byte)PTR_DAT_04bc27f0[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar20 & 0x1f) & 1) != 0)) {
          lVar23 = param_1 + (long)iVar22 * 0x13230 + 0x1267c;
          pcStack_238 = "AbandonedHouse";
          local_240 = puVar2;
          iVar12 = FUN_02749340(lVar23,&local_240);
          if (iVar12 < 2) {
            lVar16 = 0;
            do {
              piVar24 = (int *)(param_1 + (long)iVar22 * 0x13230 + 0x2f84 + lVar16 * 0x158);
              local_240 = PTR_DAT_04bb2020 + 0x10;
              pcStack_238 = "InducementAtMovingDay";
              iVar12 = FUN_02746e10(piVar24 + 0xe,&local_240);
              if (iVar12 != 0) {
                iVar12 = 0;
                do {
                  lVar7 = (long)iVar12;
                  if ((local_214[lVar7 * 0xe + 2] == piVar24[7]) &&
                     (lVar8 = (long)iVar12 * 0x38,
                     (*(long *)(piVar24 + 8) == *(long *)(auStack_208 + lVar8) &&
                     *(long *)(piVar24 + 10) == *(long *)(auStack_200 + lVar8)) &&
                     piVar24[0xc] == aiStack_1f8[(long)iVar12 * 0xe])) {
                    if ((short)alStack_224[lVar7 * 7] == 0) {
                      iVar18 = *piVar24;
                    }
                    else {
                      iVar18 = *piVar24;
                      if ((short)piVar24[1] != 0) {
                        if ((*(int *)(local_22c + lVar7 * 0x38 + 4) != iVar18) ||
                           ((*(long *)(piVar24 + 1) != alStack_224[lVar7 * 7] ||
                            *(long *)(piVar24 + 3) != alStack_224[lVar7 * 7 + 1]) ||
                            piVar24[5] != local_214[lVar7 * 0xe])) goto LAB_027df3a0;
                        goto LAB_027df344;
                      }
                    }
                    if (*(int *)(local_22c + lVar7 * 0x38 + 4) == iVar18) goto LAB_027df344;
                  }
LAB_027df3a0:
                  iVar12 = iVar12 + 1;
                } while (iVar12 != 8);
                puVar3 = PTR_DAT_04bb2020 + 0x10;
                pcStack_238 = "InducementAtMovingDay";
                local_240 = puVar3;
                FUN_02747170(piVar24 + 0xe,&local_240,0);
                pcStack_238 = "AbandonedHouse";
                local_240 = puVar3;
                FUN_02749650(lVar23,iVar21,&local_240,0,0);
              }
LAB_027df344:
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0xa0);
          }
        }
        iVar21 = iVar21 + 1;
        iVar22 = iVar22 + 1;
        if (iVar21 == 10) {
          return;
        }
      } while( true );
    }
  } while( true );
}

