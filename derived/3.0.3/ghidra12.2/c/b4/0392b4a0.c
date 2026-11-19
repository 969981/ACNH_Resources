
void FUN_0392b4a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  byte bVar15;
  ushort uVar16;
  int iVar17;
  char cVar18;
  bool bVar19;
  float fVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  float local_468;
  float fStack_464;
  undefined8 uStack_460;
  undefined *local_458;
  undefined8 local_450;
  undefined8 local_448;
  uint local_440;
  undefined8 local_43c;
  undefined2 local_430 [2];
  undefined4 local_42c;
  int local_3bc [2];
  undefined8 local_3b4 [23];
  undefined1 local_2fc [8];
  undefined8 uStack_2f4;
  undefined1 local_2ec [8];
  undefined8 local_2e4;
  undefined1 local_2bc [8];
  undefined8 uStack_2b4;
  undefined1 local_28c [8];
  undefined8 local_284;
  int local_7c;
  
  if ((*(char *)(param_1 + 0x218) != '\0') && ((*(byte *)(param_1 + 0x2338) & 6) != 0)) {
    lVar27 = *(long *)PTR_DAT_04bbd510;
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar22 == 0) {
      local_3bc[0] = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_3bc[0] = (int)lVar22 + -1;
    }
    if ((*(uint *)(lVar27 + (long)local_3bc[0] * 0x290 + 0x298) & 1) == 0) {
      local_7c = 0;
      iVar26 = 0;
      iVar33 = 0;
      uVar29 = 0;
      *(uint *)(param_1 + 0x2338) = *(uint *)(param_1 + 0x2338) & 0xfffffffd;
      puVar21 = PTR_PTR_04bb4f80;
      lVar22 = param_1 + 0x3c0;
      lVar27 = param_1 + 0x960;
      do {
        iVar17 = *(int *)(param_1 + ((long)((ulong)uVar29 << 0x20) >> 0x1b) + 600);
        if (iVar17 != -1) {
          puVar28 = (uint *)(lVar22 + (long)iVar17 * 0x78 + 0x68);
          uVar24 = *puVar28;
          uVar25 = (ulong)uVar24;
          if (uVar24 != 0xffffffff) {
            lVar35 = (long)iVar26;
            local_3b4[lVar35 * 2] = 0;
            iVar26 = *(int *)(lVar22 + (long)iVar17 * 0x78 + 0x48);
            local_3bc[lVar35 * 4] = iVar26;
            local_3bc[lVar35 * 4 + 1] = iVar33;
            iVar32 = iVar33;
            switch(iVar26) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 9:
              iVar32 = iVar33 + 1;
              lVar35 = lVar27 + uVar25 * 0x28;
              if (0x27 < uVar24) {
                lVar35 = lVar27;
              }
              lVar5 = (long)iVar33 * 0x10;
              uVar37 = *(undefined4 *)(lVar35 + 0x18);
              *(undefined8 *)(local_2fc + lVar5 + 4) = *(undefined8 *)(lVar35 + 0x1c);
              *(undefined4 *)(local_2fc + lVar5) = uVar37;
              *(undefined4 *)(local_2ec + lVar5 + -4) = *(undefined4 *)(lVar35 + 0x24);
              break;
            case 6:
              lVar35 = 0;
              do {
                fVar38 = (float)(int)lVar35 / 7.0;
                uVar24 = *puVar28;
                lVar5 = param_1 + 4000 + (ulong)uVar24 * 0x280;
                if (3 < uVar24) {
                  lVar5 = param_1 + 4000;
                }
                lVar1 = (ulong)(uint)(iVar33 + (int)lVar35) * 0x10;
                uVar37 = (**(code **)(puVar21 + (ulong)*(byte *)(lVar5 + 0x28) * 8))
                                   (fVar38,(byte *)(lVar5 + 0x28),*(undefined8 *)(lVar5 + 0x20));
                uVar30 = *(undefined8 *)(lVar5 + 0x38);
                *(undefined4 *)(local_2fc + lVar1) = uVar37;
                uVar37 = (**(code **)(puVar21 + (ulong)*(byte *)(lVar5 + 0x40) * 8))
                                   (fVar38,(byte *)(lVar5 + 0x40),uVar30);
                uVar30 = *(undefined8 *)(lVar5 + 0x50);
                *(undefined4 *)(local_2fc + lVar1 + 4) = uVar37;
                uVar37 = (**(code **)(puVar21 + (ulong)*(byte *)(lVar5 + 0x58) * 8))
                                   (fVar38,(byte *)(lVar5 + 0x58),uVar30);
                bVar15 = *(byte *)(lVar5 + 0x70);
                *(undefined4 *)(local_2fc + lVar1 + 8) = uVar37;
                uVar37 = (**(code **)(puVar21 + (ulong)bVar15 * 8))
                                   (fVar38,(byte *)(lVar5 + 0x70),*(undefined8 *)(lVar5 + 0x68));
                lVar35 = lVar35 + 1;
                *(undefined4 *)(local_2ec + lVar1 + -4) = uVar37;
              } while (lVar35 != 8);
              lVar35 = (ulong)(iVar33 + 7) * 0x10;
              lVar5 = (ulong)(iVar33 + 8) * 0x10;
              uVar37 = *(undefined4 *)(local_2fc + lVar35);
              iVar32 = iVar33 + 9;
              *(undefined8 *)(local_2fc + lVar5 + 4) = *(undefined8 *)(local_2fc + lVar35 + 4);
              *(undefined4 *)(local_2fc + lVar5) = uVar37;
              *(undefined4 *)(local_2ec + lVar5 + -4) = *(undefined4 *)(local_2ec + lVar35 + -4);
              break;
            case 7:
              lVar35 = (long)iVar33 * 0x10;
              lVar5 = lVar27 + (ulong)uVar24 * 0x28;
              if (0x27 < uVar24) {
                lVar5 = lVar27;
              }
              uVar37 = *(undefined4 *)(lVar5 + 0x18);
              *(undefined8 *)(local_2fc + lVar35 + 4) = *(undefined8 *)(lVar5 + 0x1c);
              *(undefined4 *)(local_2fc + lVar35) = uVar37;
              bVar15 = *(byte *)(lVar22 + (long)iVar17 * 0x78 + 0x70);
              *(undefined4 *)(local_2ec + lVar35 + -4) = *(undefined4 *)(lVar5 + 0x24);
              uVar13 = -(bVar15 & 1) & (uint)(bVar15 >> 1);
              lVar35 = (long)(iVar33 + 1);
              if ((uVar13 & 1) == 0) {
                uVar37 = 0;
                lVar5 = lVar35 * 0x10;
                lVar1 = (lVar35 + 2) * 0x10;
                *(undefined8 *)(local_2fc + lVar1) = 0x3f0000003f800000;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
                *(undefined8 *)(local_2ec + lVar5) = 0;
                *(undefined8 *)(local_2ec + lVar5 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (ulong)uVar24 * 0x28 + 0x28;
                if (0x26 < uVar24) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = lVar27 + (ulong)(uVar24 + 2) * 0x28;
                if (0x27 < uVar24 + 2) {
                  lVar1 = lVar27;
                }
                lVar3 = lVar35 * 0x10;
                lVar4 = (lVar35 + 2) * 0x10;
                lVar14 = lVar27 + (ulong)(uVar24 + 3) * 0x28;
                if (0x27 < uVar24 + 3) {
                  lVar14 = lVar27;
                }
                *(undefined8 *)(local_2fc + lVar3 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar3) = uVar37;
                *(undefined4 *)(local_2ec + lVar3 + -4) = uVar39;
                uVar37 = *(undefined4 *)(lVar1 + 0x18);
                uVar39 = *(undefined4 *)(lVar1 + 0x24);
                *(undefined8 *)(local_2ec + lVar3 + 4) = *(undefined8 *)(lVar1 + 0x1c);
                *(undefined4 *)(local_2ec + lVar3) = uVar37;
                *(undefined4 *)(local_2ec + lVar3 + 0xc) = uVar39;
                uVar39 = *(undefined4 *)(lVar14 + 0x20);
                uVar37 = *(undefined4 *)(lVar14 + 0x24);
                *(undefined8 *)(local_2fc + lVar4) = *(undefined8 *)(lVar14 + 0x18);
                *(undefined4 *)(local_2fc + lVar4 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 2) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 1 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 3) * 0x10;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                lVar5 = (lVar35 + 5) * 0x10;
                *(undefined8 *)(local_2fc + lVar5) = 0x3f0000003f800000;
                *(undefined8 *)(local_2bc + lVar35 * 0x10) = 0;
                *(undefined8 *)(local_2bc + lVar35 * 0x10 + 8) = 0;
                *(undefined4 *)(local_2fc + lVar5 + 8) = 0;
              }
              else {
                lVar5 = (lVar35 + 3) * 0x10;
                lVar1 = lVar27 + (ulong)(uVar24 + 4) * 0x28;
                if (0x27 < uVar24 + 4) {
                  lVar1 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar1 + 0x18);
                uVar39 = *(undefined4 *)(lVar1 + 0x24);
                lVar3 = lVar27 + (ulong)(uVar24 + 5) * 0x28;
                if (0x27 < uVar24 + 5) {
                  lVar3 = lVar27;
                }
                lVar4 = lVar35 * 0x10;
                lVar14 = lVar27 + (ulong)(uVar24 + 6) * 0x28;
                if (0x27 < uVar24 + 6) {
                  lVar14 = lVar27;
                }
                lVar2 = (lVar35 + 5) * 0x10;
                *(undefined8 *)(local_2fc + lVar5 + 4) = *(undefined8 *)(lVar1 + 0x1c);
                *(undefined4 *)(local_2fc + lVar5) = uVar37;
                *(undefined4 *)(local_2ec + lVar5 + -4) = uVar39;
                uVar37 = *(undefined4 *)(lVar3 + 0x18);
                uVar39 = *(undefined4 *)(lVar3 + 0x24);
                *(undefined8 *)(local_2bc + lVar4 + 4) = *(undefined8 *)(lVar3 + 0x1c);
                uVar30 = *(undefined8 *)(lVar14 + 0x18);
                *(undefined4 *)(local_2bc + lVar4) = uVar37;
                *(undefined4 *)(local_2bc + lVar4 + 0xc) = uVar39;
                uVar39 = *(undefined4 *)(lVar14 + 0x20);
                uVar37 = *(undefined4 *)(lVar14 + 0x24);
                *(undefined8 *)(local_2fc + lVar2) = uVar30;
                *(undefined4 *)(local_2fc + lVar2 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 5) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 2 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 6) * 0x10;
                lVar1 = (lVar35 + 8) * 0x10;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined8 *)(local_2fc + lVar1) = 0x3f0000003f800000;
                *(undefined8 *)(local_28c + lVar35 * 0x10) = 0;
                *(undefined8 *)(local_28c + lVar35 * 0x10 + 8) = 0;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (ulong)(uVar24 + 7) * 0x28;
                if (0x27 < uVar24 + 7) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = (lVar35 + 6) * 0x10;
                lVar3 = lVar27 + (ulong)(uVar24 + 8) * 0x28;
                if (0x27 < uVar24 + 8) {
                  lVar3 = lVar27;
                }
                lVar4 = lVar35 * 0x10;
                lVar14 = lVar27 + (ulong)(uVar24 + 9) * 0x28;
                if (0x27 < uVar24 + 9) {
                  lVar14 = lVar27;
                }
                lVar2 = (lVar35 + 8) * 0x10;
                *(undefined8 *)(local_2fc + lVar1 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar1) = uVar37;
                *(undefined4 *)(local_2ec + lVar1 + -4) = uVar39;
                uVar37 = *(undefined4 *)(lVar3 + 0x18);
                uVar39 = *(undefined4 *)(lVar3 + 0x24);
                *(undefined8 *)(local_28c + lVar4 + 4) = *(undefined8 *)(lVar3 + 0x1c);
                *(undefined4 *)(local_28c + lVar4) = uVar37;
                *(undefined4 *)(local_28c + lVar4 + 0xc) = uVar39;
                uVar39 = *(undefined4 *)(lVar14 + 0x20);
                uVar37 = *(undefined4 *)(lVar14 + 0x24);
                *(undefined8 *)(local_2fc + lVar2) = *(undefined8 *)(lVar14 + 0x18);
                *(undefined4 *)(local_2fc + lVar2 + 8) = uVar39;
              }
              iVar32 = iVar33 + 10;
              *(undefined4 *)(local_2ec + (lVar35 + 8) * 0x10 + -4) = uVar37;
              break;
            case 8:
              bVar15 = *(byte *)(lVar22 + (long)iVar17 * 0x78 + 0x70);
              uVar13 = -(bVar15 & 1) & (uint)(bVar15 >> 1);
              lVar35 = (long)iVar33;
              if ((uVar13 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 1) * 0x10;
                *(undefined8 *)(local_2fc + lVar5) = 0;
                *(undefined1 **)(local_2fc + lVar35 * 0x10) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar35 * 0x10 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar5 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (ulong)uVar24 * 0x28;
                if (0x27 < uVar24) {
                  lVar5 = lVar27;
                }
                lVar1 = lVar35 * 0x10;
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar3 = lVar27 + (ulong)uVar24 * 0x28 + 0x28;
                if (0x26 < uVar24) {
                  lVar3 = lVar27;
                }
                lVar4 = (lVar35 + 1) * 0x10;
                *(undefined8 *)(local_2fc + lVar1 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar1) = uVar37;
                *(undefined4 *)(local_2ec + lVar1 + -4) = uVar39;
                uVar39 = *(undefined4 *)(lVar3 + 0x20);
                uVar37 = *(undefined4 *)(lVar3 + 0x24);
                *(undefined8 *)(local_2fc + lVar4) = *(undefined8 *)(lVar3 + 0x18);
                *(undefined4 *)(local_2fc + lVar4 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 1) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 1 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 2) * 0x10;
                lVar1 = (lVar35 + 3) * 0x10;
                *(undefined8 *)(local_2fc + lVar1) = 0;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (uVar25 + 2 & 0xffffffff) * 0x28;
                if (0x27 < (uint)(uVar25 + 2)) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = lVar27 + (ulong)(uVar24 + 3) * 0x28;
                if (0x27 < uVar24 + 3) {
                  lVar1 = lVar27;
                }
                lVar3 = (lVar35 + 2) * 0x10;
                lVar4 = (lVar35 + 3) * 0x10;
                *(undefined8 *)(local_2fc + lVar3 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar3) = uVar37;
                *(undefined4 *)(local_2ec + lVar3 + -4) = uVar39;
                uVar39 = *(undefined4 *)(lVar1 + 0x20);
                uVar37 = *(undefined4 *)(lVar1 + 0x24);
                *(undefined8 *)(local_2fc + lVar4) = *(undefined8 *)(lVar1 + 0x18);
                *(undefined4 *)(local_2fc + lVar4 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 3) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 2 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 4) * 0x10;
                lVar1 = (lVar35 + 5) * 0x10;
                *(undefined8 *)(local_2fc + lVar1) = 0;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (uVar25 + 4 & 0xffffffff) * 0x28;
                if (0x27 < (uint)(uVar25 + 4)) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = lVar27 + (ulong)(uVar24 + 5) * 0x28;
                if (0x27 < uVar24 + 5) {
                  lVar1 = lVar27;
                }
                lVar3 = (lVar35 + 4) * 0x10;
                lVar4 = (lVar35 + 5) * 0x10;
                *(undefined8 *)(local_2fc + lVar3 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar3) = uVar37;
                *(undefined4 *)(local_2ec + lVar3 + -4) = uVar39;
                uVar39 = *(undefined4 *)(lVar1 + 0x20);
                uVar37 = *(undefined4 *)(lVar1 + 0x24);
                *(undefined8 *)(local_2fc + lVar4) = *(undefined8 *)(lVar1 + 0x18);
                *(undefined4 *)(local_2fc + lVar4 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 5) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 3 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 6) * 0x10;
                lVar1 = (lVar35 + 7) * 0x10;
                *(undefined8 *)(local_2fc + lVar1) = 0;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (uVar25 + 6 & 0xffffffff) * 0x28;
                if (0x27 < (uint)(uVar25 + 6)) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = lVar27 + (ulong)(uVar24 + 7) * 0x28;
                if (0x27 < uVar24 + 7) {
                  lVar1 = lVar27;
                }
                lVar3 = (lVar35 + 6) * 0x10;
                lVar4 = (lVar35 + 7) * 0x10;
                *(undefined8 *)(local_2fc + lVar3 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar3) = uVar37;
                *(undefined4 *)(local_2ec + lVar3 + -4) = uVar39;
                uVar39 = *(undefined4 *)(lVar1 + 0x20);
                uVar37 = *(undefined4 *)(lVar1 + 0x24);
                *(undefined8 *)(local_2fc + lVar4) = *(undefined8 *)(lVar1 + 0x18);
                *(undefined4 *)(local_2fc + lVar4 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 7) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 4 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 8) * 0x10;
                lVar1 = (lVar35 + 9) * 0x10;
                *(undefined8 *)(local_2fc + lVar1) = 0;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (uVar25 + 8 & 0xffffffff) * 0x28;
                if (0x27 < (uint)(uVar25 + 8)) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = lVar27 + (ulong)(uVar24 + 9) * 0x28;
                if (0x27 < uVar24 + 9) {
                  lVar1 = lVar27;
                }
                lVar3 = (lVar35 + 8) * 0x10;
                lVar4 = (lVar35 + 9) * 0x10;
                *(undefined8 *)(local_2fc + lVar3 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                *(undefined4 *)(local_2fc + lVar3) = uVar37;
                *(undefined4 *)(local_2ec + lVar3 + -4) = uVar39;
                uVar39 = *(undefined4 *)(lVar1 + 0x20);
                uVar37 = *(undefined4 *)(lVar1 + 0x24);
                *(undefined8 *)(local_2fc + lVar4) = *(undefined8 *)(lVar1 + 0x18);
                *(undefined4 *)(local_2fc + lVar4 + 8) = uVar39;
              }
              *(undefined4 *)(local_2ec + (lVar35 + 9) * 0x10 + -4) = uVar37;
              if ((uVar13 >> 5 & 1) == 0) {
                uVar37 = 0;
                lVar5 = (lVar35 + 10) * 0x10;
                lVar1 = (lVar35 + 0xb) * 0x10;
                *(undefined8 *)(local_2fc + lVar1) = 0;
                *(undefined1 **)(local_2fc + lVar5) = &DAT_3f8000003f800000;
                *(undefined1 **)(local_2fc + lVar5 + 8) = &DAT_3f8000003f800000;
                *(undefined4 *)(local_2fc + lVar1 + 8) = 0;
              }
              else {
                lVar5 = lVar27 + (uVar25 + 10 & 0xffffffff) * 0x28;
                if (0x27 < (uint)(uVar25 + 10)) {
                  lVar5 = lVar27;
                }
                uVar37 = *(undefined4 *)(lVar5 + 0x18);
                uVar39 = *(undefined4 *)(lVar5 + 0x24);
                lVar1 = (lVar35 + 10) * 0x10;
                lVar3 = lVar27 + (ulong)(uVar24 + 0xb) * 0x28;
                if (0x27 < uVar24 + 0xb) {
                  lVar3 = lVar27;
                }
                lVar4 = (lVar35 + 0xb) * 0x10;
                *(undefined8 *)(local_2fc + lVar1 + 4) = *(undefined8 *)(lVar5 + 0x1c);
                uVar30 = *(undefined8 *)(lVar3 + 0x18);
                *(undefined4 *)(local_2fc + lVar1) = uVar37;
                *(undefined4 *)(local_2ec + lVar1 + -4) = uVar39;
                *(undefined8 *)(local_2fc + lVar4) = uVar30;
                uVar37 = *(undefined4 *)(lVar3 + 0x24);
                *(undefined4 *)(local_2fc + lVar4 + 8) = *(undefined4 *)(lVar3 + 0x20);
              }
              iVar32 = iVar33 + 0xc;
              *(undefined4 *)(local_2ec + (lVar35 + 0xb) * 0x10 + -4) = uVar37;
            }
            iVar26 = local_7c + 1;
            iVar33 = iVar32;
            local_7c = iVar26;
          }
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != 0xc);
      FUN_038e4cec(local_430);
      local_42c = 0;
      local_430[0] = 0;
      FUN_038e4d90(local_430,param_2);
      local_448 = 0xff7fffffff7fffff;
      lVar22 = param_1 + 0x1a20;
      local_458 = PTR_DAT_04bd0f08 + 0x10;
      local_450 = 0x7f7fffff7f7fffff;
      local_440 = *(uint *)PTR_DAT_04bd0ea8;
      local_43c = 0x3f80000000000000;
      if (local_440 < 6) {
        if ((1 << (ulong)(local_440 & 0x1f) & 0x39U) == 0) {
          fVar38 = *(float *)(param_1 + 0x1a2c);
          fVar40 = *(float *)(param_1 + 0x1a28);
        }
        else {
          fVar38 = *(float *)(param_1 + 0x1a28);
          fVar40 = *(float *)(param_1 + 0x1a2c);
        }
        fVar42 = fVar38;
        fVar20 = 0.0;
        if (fVar38 <= 0.0) {
          fVar42 = 0.0;
          fVar20 = fVar38;
        }
        fVar41 = fVar40;
        fVar38 = 0.0;
        if (fVar40 <= 0.0) {
          fVar41 = 0.0;
          fVar38 = fVar40;
        }
        local_450 = CONCAT44(fVar38,fVar20);
        local_448 = CONCAT44(fVar41,fVar42);
      }
      FUN_038e77e4(&local_458,param_2,lVar22);
      if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0xc) {
        uVar30 = 0;
      }
      else {
        uVar30 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x58);
      }
      FUN_03907810(uVar30,param_2);
      local_478 = FUN_03900ad0(*(undefined8 *)PTR_DAT_04bd1128,local_3bc,0x344);
      FUN_0391e640(uVar30,param_2,1,&local_478,0);
      uStack_460 = 0;
      uVar16 = *(ushort *)(param_1 + 0x21b8);
      local_478 = 0;
      local_470 = 0;
      if (uVar16 < 2) {
        uVar16 = 1;
      }
      _local_468 = CONCAT44(1.0 / ((float)uVar16 + -1.0),(float)uVar16);
      if ((*(ushort *)(param_1 + 0x21c2) < 10) &&
         ((1 << (ulong)(*(ushort *)(param_1 + 0x21c2) & 0x1f) & 0x350U) != 0)) {
        uVar24 = (uint)*(ushort *)(param_1 + 0x21bc);
        uVar29 = uVar24;
      }
      else {
        uVar24 = (uint)*(ushort *)(param_1 + 0x21bc);
        uVar29 = 1;
      }
      if (uVar29 <= uVar24) {
        uVar29 = uVar24;
      }
      if (uVar29 != 0) {
        uVar25 = 0;
        puVar28 = (uint *)(param_1 + 0x1b40);
        puVar6 = (uint *)(param_1 + 0x1c20);
        puVar7 = (uint *)(param_1 + 0x1d00);
        puVar8 = (uint *)(param_1 + 0x1de0);
        puVar9 = (uint *)(param_1 + 0x1ec0);
        puVar10 = (uint *)(param_1 + 0x1fa0);
        puVar11 = (uint *)(param_1 + 0x2080);
        puVar12 = (uint *)(param_1 + 0x2160);
        do {
          local_470 = CONCAT44(local_470._4_4_,(float)(uVar25 & 0xffffffff));
          if (uVar25 != *(ushort *)(param_1 + 0x1b44)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar28,0x10);
              if (bVar19) {
                *puVar28 = *puVar28 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x1b44) = (short)uVar25;
          }
          if (*(char *)(param_1 + 0x1b46) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar28,0x10);
              if (bVar19) {
                *puVar28 = *puVar28 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(char *)(param_1 + 0x1b46) = '\0';
          }
          *(long *)(param_1 + 0x1a40) = param_1 + 0x1a88;
          if ((uVar25 | 1) != (ulong)*(ushort *)(param_1 + 0x1c24)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar19) {
                *puVar6 = *puVar6 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x1c24) = (short)(uVar25 | 1);
          }
          if (*(char *)(param_1 + 0x1c26) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar19) {
                *puVar6 = *puVar6 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x1c26) = 0;
          }
          *(long *)(param_1 + 0x1a48) = param_1 + 0x1b68;
          if ((uVar25 | 2) != (ulong)*(ushort *)(param_1 + 0x1d04)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar19) {
                *puVar7 = *puVar7 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x1d04) = (short)(uVar25 | 2);
          }
          if (*(char *)(param_1 + 0x1d06) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar19) {
                *puVar7 = *puVar7 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x1d06) = 0;
          }
          *(long *)(param_1 + 0x1a50) = param_1 + 0x1c48;
          if ((uVar25 | 3) != (ulong)*(ushort *)(param_1 + 0x1de4)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar19) {
                *puVar8 = *puVar8 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x1de4) = (short)(uVar25 | 3);
          }
          if (*(char *)(param_1 + 0x1de6) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar8,0x10);
              if (bVar19) {
                *puVar8 = *puVar8 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x1de6) = 0;
          }
          *(long *)(param_1 + 0x1a58) = param_1 + 0x1d28;
          if ((uVar25 | 4) != (ulong)*(ushort *)(param_1 + 0x1ec4)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar9,0x10);
              if (bVar19) {
                *puVar9 = *puVar9 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x1ec4) = (short)(uVar25 | 4);
          }
          if (*(char *)(param_1 + 0x1ec6) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar9,0x10);
              if (bVar19) {
                *puVar9 = *puVar9 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x1ec6) = 0;
          }
          *(long *)(param_1 + 0x1a60) = param_1 + 0x1e08;
          if ((uVar25 | 5) != (ulong)*(ushort *)(param_1 + 0x1fa4)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar19) {
                *puVar10 = *puVar10 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x1fa4) = (short)(uVar25 | 5);
          }
          if (*(char *)(param_1 + 0x1fa6) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar10,0x10);
              if (bVar19) {
                *puVar10 = *puVar10 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x1fa6) = 0;
          }
          *(long *)(param_1 + 0x1a68) = param_1 + 0x1ee8;
          if ((uVar25 | 6) != (ulong)*(ushort *)(param_1 + 0x2084)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar11,0x10);
              if (bVar19) {
                *puVar11 = *puVar11 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x2084) = (short)(uVar25 | 6);
          }
          if (*(char *)(param_1 + 0x2086) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar11,0x10);
              if (bVar19) {
                *puVar11 = *puVar11 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x2086) = 0;
          }
          *(long *)(param_1 + 0x1a70) = param_1 + 0x1fc8;
          if ((uVar25 | 7) != (ulong)*(ushort *)(param_1 + 0x2164)) {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar12,0x10);
              if (bVar19) {
                *puVar12 = *puVar12 & 0xfffffffd | 2;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(short *)(param_1 + 0x2164) = (short)(uVar25 | 7);
          }
          if (*(char *)(param_1 + 0x2166) != '\0') {
            do {
              cVar18 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(puVar12,0x10);
              if (bVar19) {
                *puVar12 = *puVar12 | 1;
                cVar18 = ExclusiveMonitorsStatus();
              }
            } while (cVar18 != '\0');
            *(undefined1 *)(param_1 + 0x2166) = 0;
          }
          *(long *)(param_1 + 0x1a78) = param_1 + 0x20a8;
          (**(code **)(*(long *)(param_1 + 0x1a20) + 0x38))(lVar22,param_2);
          local_480 = 0;
          local_480 = FUN_03900ad0(*(undefined8 *)PTR_DAT_04bd1128,&local_478,0x20);
          FUN_0391e640(uVar30,param_2,0,&local_480,0);
          uVar31 = *(undefined8 *)(param_2 + 0xb8);
          lVar27 = *(long *)PTR_DAT_04bbd7e0;
          (**(code **)PTR_DAT_04bcf1a8)(uVar31,0x10,lVar27 + 0xe44);
          (**(code **)PTR_DAT_04bcf1b0)(uVar31,0x10,lVar27 + 0xe88);
          iVar26 = *(int *)(lVar27 + 0xe30);
          if (iVar26 != 0) {
            lVar27 = *(long *)(lVar27 + 0xe38);
            uVar34 = 0;
            uVar36 = 0;
            do {
              lVar35 = *(long *)(lVar27 + (-(uVar36 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3));
              if (lVar35 != 0) {
                uVar23 = (**(code **)PTR_DAT_04bbd560)(lVar35 + 8);
                (**(code **)PTR_DAT_04bcf1e8)
                          (uVar31,uVar34 & 0xffffffff,uVar23,*(undefined4 *)(lVar35 + 0x118));
              }
              uVar34 = uVar36 + 1;
              uVar36 = uVar34 & 0xffffffff;
            } while (iVar26 != (int)uVar34);
          }
          lVar27 = *(long *)PTR_DAT_04bbd7e8;
          iVar26 = *(int *)(lVar27 + 0x1f8);
          if (iVar26 != 0) {
            uVar37 = *(undefined4 *)(lVar27 + 0x1dc);
            uVar23 = *(undefined8 *)(param_2 + 0xb8);
            uVar31 = (**(code **)PTR_DAT_04bbd560)(lVar27 + 0x200);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar23,uVar37,*(undefined4 *)(lVar27 + 0x1d8),iVar26,uVar31);
          }
          uVar25 = uVar25 + 8;
        } while (uVar25 < uVar29);
      }
      FUN_03901694(lVar22,param_2);
    }
  }
  return;
}

