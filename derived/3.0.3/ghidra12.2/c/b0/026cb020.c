
void FUN_026cb020(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ushort *puVar15;
  uint uVar16;
  long *plVar17;
  long lVar18;
  byte bVar19;
  char cVar20;
  undefined2 uVar21;
  int iVar22;
  byte *pbVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  uint local_490;
  uint local_48c;
  long local_470 [16];
  undefined *local_3f0;
  void *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8;
  undefined4 local_3c4;
  undefined1 local_35d;
  undefined4 local_358 [2];
  long local_350;
  undefined *local_348;
  char *pcStack_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined *local_318;
  undefined1 *puStack_310;
  undefined4 local_308;
  undefined1 local_304 [63];
  undefined1 local_2c5;
  undefined *local_2c0;
  undefined1 *local_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac [63];
  undefined1 local_26d;
  char local_268 [512];
  char acStack_68 [8];
  
  puVar1 = PTR_DAT_04bb46b0;
  lVar26 = *(long *)PTR_DAT_04bb46b0;
  if (lVar26 != 0 && DAT_0556be08 != 0) {
    local_470[0xe] = 0;
    local_470[0xf] = 0;
    local_470[0xc] = 0;
    local_470[0xd] = 0;
    local_470[10] = 0;
    local_470[0xb] = 0;
    local_470[8] = 0;
    local_470[9] = 0;
    local_470[6] = 0;
    local_470[7] = 0;
    local_470[4] = 0;
    local_470[5] = 0;
    local_470[2] = 0;
    local_470[3] = 0;
    local_470[0] = 0;
    local_470[1] = 0;
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(lVar26 + 0x10) + 0x30))();
    if (lVar11 != 0) {
      if ((*(long **)(lVar11 + 0x98) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x98), puVar12 == (undefined8 *)0x0)) {
        local_48c = 0;
      }
      else {
        local_48c = (**(code **)*puVar12)();
      }
      if ((*(long **)(lVar11 + 0x276cd8) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x276cd8), puVar12 == (undefined8 *)0x0)) {
        local_490 = 0;
      }
      else {
        local_490 = (**(code **)*puVar12)();
      }
      uVar16 = 0;
      lVar4 = *(long *)(lVar11 + 0x80) + *(long *)(lVar11 + 0x78);
      lVar5 = *(long *)(lVar11 + 0x276cc0) + *(long *)(lVar11 + 0x276cb8);
      lVar18 = lVar4 + 0x1e33b0;
      do {
        do {
        } while (7 < uVar16);
        plVar17 = (long *)(lVar18 + (ulong)uVar16 * 0x48);
        if ((*plVar17 != 0 || plVar17[1] != 0) &&
           (lVar13 = FUN_026eed64(lVar26,uVar16), lVar13 != 0)) {
          uVar24 = (ulong)uVar16;
          if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar12 == (undefined8 *)0x0)) {
            local_470[uVar24 * 2] = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
          }
          else {
            uVar14 = (**(code **)*puVar12)();
            local_470[uVar24 * 2] = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
          }
          lVar27 = lVar13 + 0x194b0;
          if (*(long *)(lVar13 + 0x194b8) == 0) {
            lVar27 = *(long *)(*(long *)puVar1 + 0x20);
            plVar17 = *(long **)(lVar27 + 0x28);
          }
          else {
            plVar17 = *(long **)(lVar13 + 0x194d8);
          }
          if ((plVar17 == (long *)0x0) || ((undefined8 *)*plVar17 == (undefined8 *)0x0)) {
            local_470[uVar24 * 2 + 1] = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          }
          else {
            uVar14 = (*(code *)**(undefined8 **)*plVar17)();
            local_470[uVar24 * 2 + 1] = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
            if (((uVar14 & 1) != 0) &&
               ((*(long *)(lVar27 + 0x28) != 0 &&
                (puVar12 = *(undefined8 **)(*(long *)(lVar27 + 0x28) + 8),
                puVar12 != (undefined8 *)0x0)))) {
              (**(code **)*puVar12)();
            }
          }
        }
        lVar13 = DAT_0556be08;
        uVar16 = uVar16 + 1;
      } while (uVar16 != 8);
      if (((DAT_0556be08 != 0) && (lVar4 != 0)) && (lVar5 != 0)) {
        bVar8 = *(byte *)(lVar5 + 0x3c9bf8);
        local_348 = PTR_DAT_04bb2020 + 0x10;
        bVar19 = bVar8;
        if (7 < bVar8) {
          bVar19 = 0xff;
        }
        pcStack_340 = "ValidateVillageSave";
        uVar24 = FUN_0273f0a0(&local_348);
        if ((uVar24 & 1) != 0) {
          uVar24 = 0;
          do {
            while (7 < uVar24) {
              if (local_470[0] != 0 || local_470[1] != 0) goto LAB_026cbc90;
            }
            plVar17 = (long *)(lVar18 + uVar24 * 0x48);
            if (*plVar17 == 0 && plVar17[1] == 0) {
              if (local_470[uVar24 * 2] != 0 || local_470[uVar24 * 2 + 1] != 0) goto LAB_026cbc90;
            }
            else if ((local_470[uVar24 * 2] == 0) || (local_470[uVar24 * 2 + 1] == 0))
            goto LAB_026cbc90;
            uVar24 = uVar24 + 1;
          } while (uVar24 != 8);
          puVar25 = (undefined8 *)(lVar13 + 1);
          *puVar25 = 0;
          puVar12 = (undefined8 *)(lVar13 + 0x22);
          *(undefined8 *)(lVar13 + 9) = 0;
          *(undefined8 *)(lVar13 + 0x11) = 0;
          *(undefined8 *)(lVar13 + 0x19) = 0;
          *(undefined1 *)(lVar13 + 0x21) = 0xff;
          memset(puVar12,0,0x1d8);
          local_2c5 = 0;
          local_26d = 0;
          local_338 = 0xb;
          local_308 = 0x40;
          local_2b0 = 0x40;
          local_350 = lVar4 + 0x1e382c;
          puStack_310 = local_304;
          local_2b8 = local_2ac;
          local_318 = PTR_DAT_04bb2bc0 + 0x10;
          local_348 = PTR_DAT_04bb5128 + 0x10;
          pcVar6 = local_268 + 0x16;
          if (local_268 + 0x16 <= local_268 + 2) {
            pcVar6 = local_268 + 2;
          }
          local_268[0] = '\0';
          local_268[1] = '\0';
          local_268[2] = '\0';
          local_268[3] = '\0';
          local_268[4] = '\0';
          local_268[5] = '\0';
          local_268[6] = '\0';
          local_268[7] = '\0';
          local_268[8] = '\0';
          local_268[9] = '\0';
          local_268[10] = '\0';
          local_268[0xb] = '\0';
          local_268[0xc] = '\0';
          local_268[0xd] = '\0';
          local_268[0xe] = '\0';
          local_268[0xf] = '\0';
          local_268[0x10] = '\0';
          local_268[0x11] = '\0';
          local_268[0x12] = '\0';
          local_268[0x13] = '\0';
          local_268[0x14] = '\0';
          local_268[0x15] = '\0';
          pcStack_340 = local_268;
          local_2c0 = local_318;
          memset(local_268,0,(ulong)(pcVar6 + (-0xe1 - (long)&local_348)) & 0xfffffffffffffffc | 2);
          local_358[0] = 10;
          memset(local_268,0,(ulong)(pcVar6 + ~(ulong)local_268) & 0xfffffffffffffffc | 2);
          local_334 = 0;
          local_330 = 0xffffffff;
          uStack_328 = 0xffffffff00000000;
          local_320 = 0xffffffff;
          local_304[0] = 0;
          local_2ac[0] = 0;
          local_3e0 = 0;
          local_3c8 = 1;
          local_3c4 = 0;
          local_3d8 = 0;
          uStack_3d0 = 0;
          local_3f0 = PTR_DAT_04bc0cd8 + 0x10;
          local_3e8 = (void *)0x0;
          FUN_02906b00(&local_3f0,&local_348,local_358);
          puVar15 = (ushort *)(**(code **)(local_348 + 0x18))(&local_348);
          uVar16 = 0;
          lVar26 = 0x7fffffff;
          do {
            pbVar23 = (byte *)((long)puVar25 + (ulong)uVar16);
            if (lVar26 == 0) goto LAB_026cb508;
            uVar9 = *puVar15;
            if (uVar9 == 0) goto LAB_026cb508;
            bVar10 = (byte)uVar9;
            if (uVar9 < 0x80) {
              *pbVar23 = bVar10;
              iVar22 = 1;
            }
            else if (uVar9 < 0x800) {
              if (0x1d < uVar16) break;
              *pbVar23 = (byte)(uVar9 >> 6) | 0xc0;
              pbVar23[1] = bVar10 & 0x3f | 0x80;
              iVar22 = 2;
            }
            else {
              if (0x1e < uVar16 + 2) break;
              *pbVar23 = (byte)(uVar9 >> 0xc) | 0xe0;
              pbVar23[1] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
              pbVar23[2] = bVar10 & 0x3f | 0x80;
              iVar22 = 3;
            }
            uVar16 = iVar22 + uVar16;
            lVar26 = lVar26 + -1;
            puVar15 = puVar15 + 1;
          } while (uVar16 < 0x1f);
          pbVar23 = (byte *)((long)puVar25 + (ulong)(uVar16 - 1));
LAB_026cb508:
          *pbVar23 = 0;
          uVar16 = 2;
          if (*(byte *)(lVar4 + 0x1e3840) < 4) {
            uVar16 = (uint)*(byte *)(lVar4 + 0x1e3840);
          }
          local_348 = (undefined *)CONCAT44(local_348._4_4_,uVar16);
          pcVar6 = local_268 + 0x16;
          if (local_268 + 0x16 <= local_268 + 2) {
            pcVar6 = local_268 + 2;
          }
          *(byte *)(lVar13 + 0x21) = bVar19;
          *(char *)(lVar13 + 0x20) = (char)uVar16;
          puVar1 = PTR_DAT_04bb2bc0 + 0x10;
          puVar2 = PTR_DAT_04bb5128 + 0x10;
          puVar3 = PTR_DAT_04bc0cd8 + 0x10;
          uVar24 = 0;
          do {
            if ((uVar24 < 8) &&
               (plVar17 = (long *)(lVar18 + uVar24 * 0x48), *plVar17 != 0 || plVar17[1] != 0)) {
              local_2c5 = 0;
              local_338 = 0xb;
              lVar26 = local_470[uVar24 * 2];
              local_308 = 0x40;
              local_2b0 = 0x40;
              local_26d = 0;
              local_268[0] = '\0';
              local_268[1] = '\0';
              local_268[2] = '\0';
              local_268[3] = '\0';
              local_268[4] = '\0';
              local_268[5] = '\0';
              local_268[6] = '\0';
              local_268[7] = '\0';
              local_268[8] = '\0';
              local_268[9] = '\0';
              local_268[10] = '\0';
              local_268[0xb] = '\0';
              local_268[0xc] = '\0';
              local_268[0xd] = '\0';
              local_268[0xe] = '\0';
              local_268[0xf] = '\0';
              local_268[0x10] = '\0';
              local_268[0x11] = '\0';
              local_268[0x12] = '\0';
              local_268[0x13] = '\0';
              local_268[0x14] = '\0';
              local_268[0x15] = '\0';
              local_348 = puVar2;
              pcStack_340 = local_268;
              local_318 = puVar1;
              puStack_310 = local_304;
              local_2c0 = puVar1;
              local_2b8 = local_2ac;
              memset(local_268,0,
                     (ulong)(pcVar6 + (-0xe1 - (long)&local_348)) & 0xfffffffffffffffc | 2);
              local_358[0] = 10;
              local_350 = lVar26 + 0xc158;
              memset(local_268,0,(ulong)(pcVar6 + ~(ulong)local_268) & 0xfffffffffffffffc | 2);
              local_334 = 0;
              local_330 = 0xffffffff;
              uStack_328 = 0xffffffff00000000;
              local_320 = 0xffffffff;
              local_304[0] = 0;
              local_2ac[0] = 0;
              local_3c4 = 0;
              local_3d8 = 0;
              uStack_3d0 = 0;
              local_3e8 = (void *)0x0;
              local_3e0 = 0;
              local_3c8 = 1;
              local_3f0 = puVar3;
              FUN_02906b00(&local_3f0,&local_348,local_358);
              puVar15 = (ushort *)(**(code **)(local_348 + 0x18))(&local_348);
              uVar16 = 0;
              lVar26 = 0x7fffffff;
              do {
                pbVar23 = (byte *)((long)puVar12 + (ulong)uVar16 + uVar24 * 0x1f);
                if (lVar26 == 0) goto LAB_026cb7a0;
                uVar9 = *puVar15;
                if (uVar9 == 0) goto LAB_026cb7a0;
                bVar10 = (byte)uVar9;
                if (uVar9 < 0x80) {
                  *pbVar23 = bVar10;
                  iVar22 = 1;
                }
                else if (uVar9 < 0x800) {
                  if (0x1d < uVar16) break;
                  *pbVar23 = (byte)(uVar9 >> 6) | 0xc0;
                  pbVar23[1] = bVar10 & 0x3f | 0x80;
                  iVar22 = 2;
                }
                else {
                  if (0x1e < uVar16 + 2) break;
                  *pbVar23 = (byte)(uVar9 >> 0xc) | 0xe0;
                  pbVar23[1] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                  pbVar23[2] = bVar10 & 0x3f | 0x80;
                  iVar22 = 3;
                }
                uVar16 = iVar22 + uVar16;
                lVar26 = lVar26 + -1;
                puVar15 = puVar15 + 1;
              } while (uVar16 < 0x1f);
              pbVar23 = (byte *)((long)puVar12 + (ulong)(uVar16 - 1) + uVar24 * 0x1f);
LAB_026cb7a0:
              *pbVar23 = 0;
            }
            else {
              puVar25 = (undefined8 *)((long)puVar12 + uVar24 * 0x1f);
              if (7 < uVar24) {
                puVar25 = puVar12;
              }
              *(undefined8 *)((long)puVar25 + 0x17) = 0;
              puVar25[1] = 0;
              puVar25[2] = 0;
              *puVar25 = 0;
            }
            uVar14 = 0xffffffff;
            if (uVar24 != 7) {
              uVar14 = uVar24 + 1;
            }
            if (7 < uVar24) {
              uVar14 = uVar24;
            }
            uVar24 = uVar14;
          } while (uVar14 != 0xffffffff);
          if (bVar8 < 8) {
            local_3e8 = (void *)((long)&local_3e0 + 4);
            lVar26 = local_470[((long)(char)bVar19 & 0xffffffffU) * 2];
            iVar22 = *(int *)(lVar26 + 0xc16c);
            local_35d = 0;
            local_3e0 = CONCAT35(local_3e0._5_3_,0x80);
            local_334 = 0;
            local_320 = 0xffffffff;
            local_2c5 = 0;
            local_304[0] = 0;
            puStack_310 = local_304;
            local_3f0 = PTR_DAT_04bb2d88 + 0x10;
            local_338 = 0x100;
            local_308 = 0x40;
            local_330 = 0xffffffff;
            uStack_328 = 0xffffffff00000000;
            local_2b0 = 0x40;
            local_26d = 0;
            local_2ac[0] = 0;
            local_318 = PTR_DAT_04bb2bc0 + 0x10;
            local_2b8 = local_2ac;
            local_348 = PTR_DAT_04bc0bb8 + 0x10;
            pcStack_340 = local_268;
            local_2c0 = local_318;
            memset(local_268,0,0x200);
            pcVar6 = acStack_68;
            if (acStack_68 <= local_268 + 2) {
              pcVar6 = local_268 + 2;
            }
            memset(local_268,0,(size_t)(pcVar6 + (-0xe0 - (long)&local_348)));
            FUN_01be0d10(&local_348,lVar26 + 0x36494,iVar22 != 1);
            FUN_006f4bf4(&local_348,&local_3f0,0);
            (**(code **)(local_3f0 + 0x18))(&local_3f0);
            lVar18 = 0;
            do {
              if (*(char *)((long)local_3e8 + lVar18) == '\0') goto LAB_026cb974;
              if (*(char *)((long)local_3e8 + lVar18 + 1) == '\0') {
                lVar18 = lVar18 + 1;
                goto LAB_026cb974;
              }
              if (*(char *)((long)local_3e8 + lVar18 + 2) == '\0') {
                lVar18 = lVar18 + 2;
                goto LAB_026cb974;
              }
              lVar18 = lVar18 + 3;
            } while (lVar18 != 0x80001);
            lVar18 = 0;
LAB_026cb974:
            uVar16 = (uint)lVar18;
            *(undefined1 *)(lVar13 + 0x192) = 0;
            if (0x77 < (int)uVar16) {
              uVar16 = 0x78;
            }
            *(undefined8 *)(lVar13 + 0x11a) = 0;
            *(undefined8 *)(lVar13 + 0x182) = 0;
            *(undefined8 *)(lVar13 + 0x18a) = 0;
            *(undefined8 *)(lVar13 + 0x172) = 0;
            *(undefined8 *)(lVar13 + 0x17a) = 0;
            *(undefined8 *)(lVar13 + 0x162) = 0;
            *(undefined8 *)(lVar13 + 0x16a) = 0;
            *(undefined8 *)(lVar13 + 0x152) = 0;
            *(undefined8 *)(lVar13 + 0x15a) = 0;
            *(undefined8 *)(lVar13 + 0x142) = 0;
            *(undefined8 *)(lVar13 + 0x14a) = 0;
            *(undefined8 *)(lVar13 + 0x132) = 0;
            *(undefined8 *)(lVar13 + 0x13a) = 0;
            *(undefined8 *)(lVar13 + 0x122) = 0;
            *(undefined8 *)(lVar13 + 0x12a) = 0;
            (**(code **)(local_3f0 + 0x18))(&local_3f0);
            memcpy((undefined8 *)(lVar13 + 0x11a),local_3e8,(ulong)uVar16);
            local_2c5 = 0;
            local_338 = 0x21;
            local_308 = 0x40;
            puStack_310 = local_304;
            local_2b0 = 0x40;
            local_26d = 0;
            local_318 = PTR_DAT_04bb2bc0 + 0x10;
            local_2b8 = local_2ac;
            local_348 = PTR_DAT_04bc11c8 + 0x10;
            local_268[0] = '\0';
            local_268[1] = '\0';
            local_268[2] = '\0';
            local_268[3] = '\0';
            local_268[4] = '\0';
            local_268[5] = '\0';
            local_268[6] = '\0';
            local_268[7] = '\0';
            local_268[8] = '\0';
            local_268[9] = '\0';
            local_268[10] = '\0';
            local_268[0xb] = '\0';
            local_268[0xc] = '\0';
            local_268[0xd] = '\0';
            local_268[0xe] = '\0';
            local_268[0xf] = '\0';
            local_268[0x10] = '\0';
            local_268[0x11] = '\0';
            local_268[0x12] = '\0';
            local_268[0x13] = '\0';
            local_268[0x14] = '\0';
            local_268[0x15] = '\0';
            local_268[0x16] = '\0';
            local_268[0x17] = '\0';
            local_268[0x18] = '\0';
            local_268[0x19] = '\0';
            local_268[0x1a] = '\0';
            local_268[0x1b] = '\0';
            local_268[0x1c] = '\0';
            local_268[0x1d] = '\0';
            local_268[0x1e] = '\0';
            local_268[0x1f] = '\0';
            local_268[0x20] = '\0';
            local_268[0x21] = '\0';
            local_268[0x22] = '\0';
            local_268[0x23] = '\0';
            local_268[0x24] = '\0';
            local_268[0x25] = '\0';
            local_268[0x26] = '\0';
            local_268[0x27] = '\0';
            local_268[0x28] = '\0';
            local_268[0x29] = '\0';
            local_268[0x2a] = '\0';
            local_268[0x2b] = '\0';
            local_268[0x2c] = '\0';
            local_268[0x2d] = '\0';
            local_268[0x2e] = '\0';
            local_268[0x2f] = '\0';
            local_268[0x30] = '\0';
            local_268[0x31] = '\0';
            local_268[0x32] = '\0';
            local_268[0x33] = '\0';
            local_268[0x34] = '\0';
            local_268[0x35] = '\0';
            local_268[0x36] = '\0';
            local_268[0x37] = '\0';
            local_268[0x38] = '\0';
            local_268[0x39] = '\0';
            local_268[0x3a] = '\0';
            local_268[0x3b] = '\0';
            local_268[0x3c] = '\0';
            local_268[0x3d] = '\0';
            local_268[0x3e] = '\0';
            local_268[0x3f] = '\0';
            local_268[0x40] = '\0';
            local_268[0x41] = '\0';
            pcVar6 = local_268 + 0x42;
            if (local_268 + 0x42 <= local_268 + 2) {
              pcVar6 = local_268 + 2;
            }
            pcStack_340 = local_268;
            local_2c0 = local_318;
            memset(local_268,0,(ulong)(pcVar6 + (-0xe1 - (long)&local_348)) & 0xfffffffffffffff8 | 2
                  );
            local_358[0] = 0x20;
            local_350 = lVar26 + 0x3649e;
            memset(local_268,0,(ulong)(pcVar6 + ~(ulong)local_268) & 0xfffffffffffffff8 | 2);
            local_334 = 0;
            local_330 = 0xffffffff;
            uStack_328 = 0xffffffff00000000;
            local_320 = 0xffffffff;
            local_304[0] = 0;
            local_2ac[0] = 0;
            local_3e0 = 0;
            local_3c8 = 1;
            local_3c4 = 0;
            local_3d8 = 0;
            uStack_3d0 = 0;
            local_3f0 = PTR_DAT_04bc0cd8 + 0x10;
            local_3e8 = (void *)0x0;
            FUN_02906b00(&local_3f0,&local_348,local_358);
            puVar15 = (ushort *)(**(code **)(local_348 + 0x18))(&local_348);
            uVar16 = 0;
            lVar18 = 0x7fffffff;
            do {
              pbVar23 = (byte *)(lVar13 + 0x193 + (ulong)uVar16);
              if (lVar18 == 0) goto LAB_026cbba4;
              uVar9 = *puVar15;
              if (uVar9 == 0) goto LAB_026cbba4;
              bVar19 = (byte)uVar9;
              if (uVar9 < 0x80) {
                *pbVar23 = bVar19;
                iVar22 = 1;
              }
              else if (uVar9 < 0x800) {
                if (0x5f < uVar16) break;
                *pbVar23 = (byte)(uVar9 >> 6) | 0xc0;
                pbVar23[1] = bVar19 & 0x3f | 0x80;
                iVar22 = 2;
              }
              else {
                if (0x60 < uVar16 + 2) break;
                *pbVar23 = (byte)(uVar9 >> 0xc) | 0xe0;
                pbVar23[1] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                pbVar23[2] = bVar19 & 0x3f | 0x80;
                iVar22 = 3;
              }
              uVar16 = iVar22 + uVar16;
              lVar18 = lVar18 + -1;
              puVar15 = puVar15 + 1;
            } while (uVar16 < 0x61);
            pbVar23 = (byte *)(lVar13 + 0x193 + (ulong)(uVar16 - 1));
LAB_026cbba4:
            *pbVar23 = 0;
            bVar19 = *(byte *)(lVar26 + 0x1341c);
            if ((0xb < bVar19 - 1) ||
               ((byte)(&DAT_0417b531)[bVar19 - 1] <= (byte)(*(char *)(lVar26 + 0x1341d) - 1U))) {
              bVar19 = 1;
            }
            *(byte *)(lVar13 + 500) = bVar19;
            uVar16 = (uint)*(byte *)(lVar26 + 0x1341c);
            if ((0xb < uVar16 - 1) ||
               (cVar20 = *(char *)(lVar26 + 0x1341d),
               (byte)(&DAT_0417b531)[uVar16 - 1] <= (byte)(cVar20 - 1U))) {
              cVar20 = '\x01';
            }
            *(char *)(lVar13 + 0x1f5) = cVar20;
          }
          else {
            *(undefined4 *)(lVar13 + 0x1f2) = 0;
            *(undefined8 *)(lVar13 + 0x11a) = 0;
            *(undefined8 *)(lVar13 + 0x1e2) = 0;
            *(undefined8 *)(lVar13 + 0x1ea) = 0;
            *(undefined8 *)(lVar13 + 0x1d2) = 0;
            *(undefined8 *)(lVar13 + 0x1da) = 0;
            *(undefined8 *)(lVar13 + 0x1c2) = 0;
            *(undefined8 *)(lVar13 + 0x1ca) = 0;
            *(undefined8 *)(lVar13 + 0x1b2) = 0;
            *(undefined8 *)(lVar13 + 0x1ba) = 0;
            *(undefined8 *)(lVar13 + 0x1a2) = 0;
            *(undefined8 *)(lVar13 + 0x1aa) = 0;
            *(undefined8 *)(lVar13 + 0x192) = 0;
            *(undefined8 *)(lVar13 + 0x19a) = 0;
            *(undefined8 *)(lVar13 + 0x182) = 0;
            *(undefined8 *)(lVar13 + 0x18a) = 0;
            *(undefined8 *)(lVar13 + 0x172) = 0;
            *(undefined8 *)(lVar13 + 0x17a) = 0;
            *(undefined8 *)(lVar13 + 0x162) = 0;
            *(undefined8 *)(lVar13 + 0x16a) = 0;
            *(undefined8 *)(lVar13 + 0x152) = 0;
            *(undefined8 *)(lVar13 + 0x15a) = 0;
            *(undefined8 *)(lVar13 + 0x142) = 0;
            *(undefined8 *)(lVar13 + 0x14a) = 0;
            *(undefined8 *)(lVar13 + 0x132) = 0;
            *(undefined8 *)(lVar13 + 0x13a) = 0;
            *(undefined8 *)(lVar13 + 0x122) = 0;
            *(undefined8 *)(lVar13 + 0x12a) = 0;
          }
          uVar24 = nn::time::IsValidDate
                             ((uint)*(ushort *)(lVar4 + 0x1e3750),(uint)*(byte *)(lVar4 + 0x1e3752),
                              (uint)*(byte *)(lVar4 + 0x1e3753));
          uVar21 = *(undefined2 *)(lVar4 + 0x1e3750);
          if ((uVar24 & 1) == 0) {
            uVar21 = 2000;
          }
          *(undefined2 *)(lVar13 + 0x1f6) = uVar21;
          uVar24 = nn::time::IsValidDate
                             ((uint)*(ushort *)(lVar4 + 0x1e3750),(uint)*(byte *)(lVar4 + 0x1e3752),
                              (uint)*(byte *)(lVar4 + 0x1e3753));
          uVar7 = *(undefined1 *)(lVar4 + 0x1e3752);
          if ((uVar24 & 1) == 0) {
            uVar7 = 1;
          }
          *(undefined1 *)(lVar13 + 0x1f8) = uVar7;
          uVar24 = nn::time::IsValidDate
                             ((uint)*(ushort *)(lVar4 + 0x1e3750),(uint)*(byte *)(lVar4 + 0x1e3752),
                              (uint)*(byte *)(lVar4 + 0x1e3753));
          uVar7 = *(undefined1 *)(lVar4 + 0x1e3753);
          if ((uVar24 & 1) == 0) {
            uVar7 = 1;
          }
          *(undefined1 *)(lVar13 + 0x1f9) = uVar7;
          *(undefined1 *)(lVar13 + 0x1fc) = 1;
        }
      }
LAB_026cbc90:
      if ((((local_490 & 1) != 0) && (*(long *)(lVar11 + 0x276cd8) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x276cd8) + 8), puVar12 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar12)();
      }
      if ((((local_48c & 1) != 0) && (*(long *)(lVar11 + 0x98) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x98) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
    }
  }
  return;
}

