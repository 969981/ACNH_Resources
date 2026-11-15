
void FUN_021b5250(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  ushort uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  char *pcVar18;
  char cVar19;
  undefined8 uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  ulong uVar24;
  int *piVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 local_64;
  
  puVar2 = PTR_DAT_04bb2020;
  lVar15 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar15 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar4 = (byte *)(lVar15 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar4 = (byte *)(lVar15 + 0x48);
    }
    if (((*pbVar4 >> 3 & 1) != 0) && (*(byte *)(lVar15 + 0x472) != bVar6)) {
      return;
    }
  }
  if ((*(long *)PTR_DAT_04bb32f0 == 0) || (iVar10 = FUN_00883634(), iVar10 < 0)) {
    uVar20 = 0;
  }
  else {
    piVar25 = (int *)(param_1 + 0x55df4);
    local_78 = puVar2 + 0x10;
    pcStack_70 = "SetFireworksEarlyAggregator";
    iVar10 = FUN_02743000(&local_78);
    lVar15 = *(long *)PTR_DAT_04bb32e8;
    uVar20 = *(undefined8 *)(lVar15 + 0x4060);
    if ('\x04' < (char)((ulong)uVar20 >> 0x20)) {
      uVar13 = (uint)((ulong)uVar20 >> 0x20) & 0xff;
      if (uVar13 == 0x12) {
        cVar19 = (char)((ulong)uVar20 >> 0x28);
        if (iVar10 == 0) {
          if (cVar19 < '2') {
            if (cVar19 < '\x1e') {
              return;
            }
            local_78 = puVar2 + 0x10;
            pcStack_70 = "SetFireworksEarlyAggregator";
            FUN_02743234(&local_78,1);
            puVar9 = PTR_DAT_04bb6380;
            puVar7 = PTR_DAT_04bb2208;
            uVar13 = 0;
            lVar15 = 0;
            uVar30 = 0;
            do {
              if (*(char *)(param_1 + lVar15 * 0xba0 + 0xaf9) != '\0') {
                lVar17 = *(long *)puVar7;
                uVar11 = FUN_006bd550("FireworksFieldNpc",0);
                local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
                puVar12 = (uint *)FUN_021cb820(lVar17 + 0x660,&local_78);
                if (puVar12 != (uint *)0x0) {
                  pcVar18 = (char *)(param_1 + lVar15 * 0xba0 + 0x818);
                  if (*puVar12 != 0) {
                    cVar19 = *PTR_DAT_04bb6378;
                    do {
                      if (cVar19 == '\0') {
                        cVar19 = '\x01';
                        *PTR_DAT_04bb6378 = 1;
                        *(undefined8 *)puVar9 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                        uVar22 = *puVar12;
                      }
                      else {
                        uVar22 = *(uint *)(puVar9 + 8);
                        if (-1 < (int)uVar22) {
                          if (((ushort *)((ulong)uVar22 + (long)puVar12) != (ushort *)0x0) &&
                             (uVar5 = *(ushort *)((ulong)uVar22 + (long)puVar12), uVar5 < 0x80)) {
                            pcVar18 = pcVar18 + uVar5;
                          }
                          break;
                        }
                        if (uVar22 != 0xffffffff) break;
                        uVar22 = *puVar12;
                      }
                      if ((uVar22 == 0) || (puVar23 = (uint *)(ulong)uVar22, puVar12 == puVar23))
                      break;
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar12 + (10 - (long)puVar23)) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar12 + (lVar17 - (long)puVar23);
                      if (lVar17 == 0) break;
                      uVar26 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar23));
                      *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                      if (uVar26 == 0) break;
                      piVar25 = (int *)(lVar17 + 4);
                      while (piVar25[-1] != 0x54706054) {
                        piVar25 = piVar25 + 2;
                        uVar26 = uVar26 - 1;
                        if (uVar26 == 0) goto LAB_021b56a8;
                      }
                      iVar10 = 0;
                      if (*piVar25 != -1) {
                        iVar10 = *piVar25;
                      }
                      *(int *)(puVar9 + 8) = iVar10;
                      if (*puVar12 == 0) break;
                    } while( true );
                  }
LAB_021b56a8:
                  uVar22 = 1 << (ulong)((uint)lVar15 & 0x1f) | uVar30;
                  if (*pcVar18 != '\0') {
                    uVar30 = uVar22;
                    uVar13 = uVar22;
                  }
                }
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != 10);
            uVar30 = uVar13 - (uVar13 >> 1 & 0x55555555);
            uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
            uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
            uVar30 = uVar30 + (uVar30 >> 8);
            uVar30 = uVar30 + (uVar30 >> 0x10) & 0x3f;
            uVar29 = *(uint *)(param_1 + 0x55f88);
            uVar22 = 2;
            if (uVar30 != 7) {
              uVar22 = (uint)(3 < uVar30);
            }
            uVar28 = 3;
            if (uVar30 < 8) {
              uVar28 = uVar22;
            }
            uVar22 = uVar29 - (uVar29 >> 1 & 0x55555555);
            uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
            uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
            uVar22 = uVar22 + (uVar22 >> 8);
            uVar30 = (uint)((float)uVar30 * 0.6 + 0.5);
            if ((uVar22 + (uVar22 >> 0x10) & 0x3f) != 0) {
              if ((((uVar29 & 1) != 0) && ((uVar13 & 1) != 0)) &&
                 (*(char *)(param_1 + 0xaf9) != '\0')) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(0,1);
                FUN_020ef374(0,1);
                uVar13 = uVar13 & 0xfffffffe;
              }
              if ((((uVar13 >> 1 & 1) != 0) && (*(char *)(param_1 + 0x1699) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f88) >> 1 & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(1,1);
                FUN_020ef374(1,1);
                uVar13 = uVar13 & 0xfffffffd;
              }
              if ((((uVar13 >> 2 & 1) != 0) && (*(char *)(param_1 + 0x2239) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f88) >> 2 & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(2,1);
                FUN_020ef374(2,1);
                uVar13 = uVar13 & 0xfffffffb;
              }
              if ((((uVar13 >> 3 & 1) != 0) && (*(char *)(param_1 + 0x2dd9) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f88) >> 3 & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(3,1);
                FUN_020ef374(3,1);
                uVar13 = uVar13 & 0xfffffff7;
              }
              if ((((uVar13 >> 4 & 1) != 0) && (*(char *)(param_1 + 0x3979) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f88) >> 4 & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(4,1);
                FUN_020ef374(4,1);
                uVar13 = uVar13 & 0xffffffef;
              }
              if ((((uVar13 >> 5 & 1) != 0) && (*(char *)(param_1 + 0x4519) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f88) >> 5 & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(5,1);
                FUN_020ef374(5,1);
                uVar13 = uVar13 & 0xffffffdf;
              }
              if ((((uVar13 >> 6 & 1) != 0) && (*(char *)(param_1 + 0x50b9) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f88) >> 6 & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(6,1);
                FUN_020ef374(6,1);
                uVar13 = uVar13 & 0xffffffbf;
              }
              if ((((uVar13 >> 7 & 1) != 0) && (*(char *)(param_1 + 0x5c59) != '\0')) &&
                 (*(char *)(param_1 + 0x55f88) < '\0')) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(7,1);
                FUN_020ef374(7,1);
                uVar13 = uVar13 & 0xffffff7f;
              }
              if ((((uVar13 >> 8 & 1) != 0) && (*(char *)(param_1 + 0x67f9) != '\0')) &&
                 ((*(byte *)(param_1 + 0x55f89) & 1) != 0)) {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(8,1);
                FUN_020ef374(8,1);
                uVar13 = uVar13 & 0xfffffeff;
              }
              if ((((uVar13 >> 9 & 1) == 0) || (*(char *)(param_1 + 0x7399) == '\0')) ||
                 ((*(byte *)(param_1 + 0x55f89) >> 1 & 1) == 0)) {
                uVar28 = 0;
              }
              else {
                uVar30 = uVar30 - (0 < (int)uVar30);
                FUN_020ef1ec(9,1);
                FUN_020ef374(9,1);
                uVar28 = 0;
                uVar13 = uVar13 & 0xfffffdff;
              }
            }
            if ((int)uVar30 < 1) {
              return;
            }
            uVar26 = (ulong)uVar30;
            do {
              puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar30 = *puVar12 ^ *puVar12 << 0xb;
              uVar29 = puVar12[3];
              *puVar12 = puVar12[1];
              puVar12[1] = puVar12[2];
              uVar22 = uVar30 >> 8 ^ uVar29 >> 0x13 ^ uVar30 ^ uVar29;
              puVar12[2] = uVar29;
              puVar12[3] = uVar22;
              uVar30 = uVar13 - (uVar13 >> 1 & 0x55555555);
              uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
              uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
              uVar30 = uVar30 + (uVar30 >> 8);
              iVar10 = (int)(uVar26 * uVar22 >> 0x20);
              if (iVar10 < (int)(uVar30 + (uVar30 >> 0x10) & 0x3f)) {
                if (uVar13 != 0) {
                  iVar10 = iVar10 + 2;
                  uVar30 = uVar13;
                  do {
                    iVar10 = iVar10 + -1;
                    if (iVar10 < 2) {
                      uVar30 = uVar30 - 1 & (uVar30 ^ 0xffffffff);
                      uVar30 = uVar30 - (uVar30 >> 1 & 0x55555555);
                      uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
                      uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
                      uVar30 = uVar30 + (uVar30 >> 8);
                      uVar30 = uVar30 + (uVar30 >> 0x10) & 0x3f;
                      goto LAB_021b6a48;
                    }
                    uVar30 = uVar30 - 1 & uVar30;
                  } while (uVar30 != 0);
                }
                uVar30 = 0xffffffff;
LAB_021b6a48:
                pcStack_70 = "GotoEventPlazaForCountdown";
                local_78 = puVar2 + 0x10;
                local_64 = uVar30;
                FUN_021be8c0(&local_64,&local_78,1);
                local_64._0_2_ = CONCAT11(1,(char)uVar30);
                local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
                local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
                if (-1 < DAT_053d0e90) {
                  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,
                               2,0);
                }
                if (uVar30 < 10) {
                  bVar1 = true;
                  uVar13 = uVar13 & (1 << (ulong)(uVar30 & 0x1f) ^ 0xffffffffU);
                }
                else {
                  bVar1 = false;
                }
              }
              else {
                local_78 = puVar2 + 0x10;
                local_64 = 0xffffffff;
                pcStack_70 = "GotoEventPlazaForCountdown";
                FUN_021be8c0(&local_64,&local_78,1);
                local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
                local_64 = CONCAT22(local_64._2_2_,0x1ff);
                local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
                if (-1 < DAT_053d0e90) {
                  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,
                               2,0);
                }
                bVar1 = false;
                uVar30 = 0xffffffff;
              }
              uVar22 = uVar28 - 1;
              if ((int)uVar28 < 1) {
                uVar28 = 0;
              }
              else {
                local_78 = puVar2 + 0x10;
                pcStack_70 = "FireworksAroundWater";
                local_64 = uVar30;
                FUN_021be8c0(&local_64,&local_78,1);
                local_64._0_2_ = CONCAT11(1,(char)uVar30);
                local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
                local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
                if (-1 < DAT_053d1250) {
                  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1250,&local_78,&local_64,
                               2,0);
                }
                uVar28 = uVar22;
                if (bVar1) {
                  *(uint *)(param_1 + 0x55f88) =
                       *(uint *)(param_1 + 0x55f88) | 1 << (ulong)(uVar30 & 0x1f);
                }
              }
              bVar1 = uVar26 < 2;
              uVar26 = uVar26 - 1;
              if (bVar1) {
                return;
              }
            } while( true );
          }
        }
        else {
          if (iVar10 != 1) {
            return;
          }
          if (cVar19 < '2') {
            return;
          }
        }
      }
      else {
        if (1 < iVar10) {
          return;
        }
        if (uVar13 < 0x13) {
          return;
        }
      }
LAB_021b5838:
      local_78 = puVar2 + 0x10;
      pcStack_70 = "SetFireworksEarlyAggregator";
      FUN_02743234(&local_78,2);
      iVar27 = 0;
      iVar14 = 0;
      uVar13 = 0;
      uVar30 = 0;
      iVar10 = 0;
      do {
        if (*(char *)(param_1 + (long)iVar10 * 0xba0 + 0xaf9) != '\0') {
          pcVar18 = (char *)(param_1 + (long)iVar10 * 0xba0 + 0x818);
          lVar15 = *(long *)PTR_DAT_04bb2208;
          uVar11 = FUN_006bd550("FireworksFieldNpc",0);
          local_78._0_4_ = uVar11;
          puVar12 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_78);
          if (puVar12 != (uint *)0x0) {
            pcVar16 = pcVar18;
            if (*puVar12 != 0) {
              cVar19 = *PTR_DAT_04bb6378;
              do {
                if (cVar19 == '\0') {
                  cVar19 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  puVar7 = PTR_DAT_04bb6380;
                  *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  uVar22 = *puVar12;
                }
                else {
                  uVar22 = *(uint *)(PTR_DAT_04bb6380 + 8);
                  if (-1 < (int)uVar22) {
                    if (((ushort *)((ulong)uVar22 + (long)puVar12) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar22 + (long)puVar12), uVar5 < 0x80)) {
                      pcVar16 = pcVar18 + uVar5;
                    }
                    break;
                  }
                  if (uVar22 != 0xffffffff) break;
                  uVar22 = *puVar12;
                }
                if ((uVar22 == 0) || (puVar23 = (uint *)(ulong)uVar22, puVar12 == puVar23)) break;
                lVar15 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar23)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar12 + (lVar15 - (long)puVar23);
                if (lVar15 == 0) break;
                uVar26 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar23));
                *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                if (uVar26 == 0) break;
                piVar25 = (int *)(lVar15 + 4);
                while (piVar25[-1] != 0x54706054) {
                  piVar25 = piVar25 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_021b59d4;
                }
                iVar3 = 0;
                if (*piVar25 != -1) {
                  iVar3 = *piVar25;
                }
                *(int *)(PTR_DAT_04bb6380 + 8) = iVar3;
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_021b59d4:
            if (*pcVar16 != '\0') {
              lVar15 = *(long *)PTR_DAT_04bb2208;
              iVar14 = iVar14 + 1;
              local_78._0_4_ = FUN_006bd550("GotoEventPlazaForCountdown",0);
              puVar12 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_78);
              if (puVar12 != (uint *)0x0) {
                pcVar16 = pcVar18;
                if (*puVar12 != 0) {
                  cVar19 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar19 == '\0') {
                      cVar19 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      puVar7 = PTR_DAT_04bb6380;
                      *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      uVar22 = *puVar12;
                    }
                    else {
                      uVar22 = *(uint *)(PTR_DAT_04bb6380 + 8);
                      if (-1 < (int)uVar22) {
                        if (((ushort *)((ulong)uVar22 + (long)puVar12) != (ushort *)0x0) &&
                           (uVar5 = *(ushort *)((ulong)uVar22 + (long)puVar12), uVar5 < 0x80)) {
                          pcVar16 = pcVar18 + uVar5;
                        }
                        break;
                      }
                      if (uVar22 != 0xffffffff) break;
                      uVar22 = *puVar12;
                    }
                    if ((uVar22 == 0) || (puVar23 = (uint *)(ulong)uVar22, puVar12 == puVar23))
                    break;
                    lVar15 = 0xc;
                    if (*(char *)((long)puVar12 + (10 - (long)puVar23)) != '\0') {
                      lVar15 = 0x1c;
                    }
                    lVar15 = (long)puVar12 + (lVar15 - (long)puVar23);
                    if (lVar15 == 0) break;
                    uVar26 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar23));
                    *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                    if (uVar26 == 0) break;
                    piVar25 = (int *)(lVar15 + 4);
                    while (piVar25[-1] != 0x54706054) {
                      piVar25 = piVar25 + 2;
                      uVar26 = uVar26 - 1;
                      if (uVar26 == 0) goto LAB_021b5b04;
                    }
                    iVar3 = 0;
                    if (*piVar25 != -1) {
                      iVar3 = *piVar25;
                    }
                    *(int *)(PTR_DAT_04bb6380 + 8) = iVar3;
                    if (*puVar12 == 0) break;
                  } while( true );
                }
LAB_021b5b04:
                if (*pcVar16 != '\0') goto LAB_021b5b18;
              }
              uVar30 = 1 << (ulong)(uVar13 & 0x1f) | uVar30;
            }
          }
LAB_021b5b18:
          lVar15 = *(long *)PTR_DAT_04bb2208;
          uVar11 = FUN_006bd550("FireworksAroundWater",0);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
          puVar12 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_78);
          if (puVar12 != (uint *)0x0) {
            if (*puVar12 != 0) {
              cVar19 = *PTR_DAT_04bb6378;
              do {
                if (cVar19 == '\0') {
                  cVar19 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  puVar7 = PTR_DAT_04bb6380;
                  *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  uVar22 = *puVar12;
                }
                else {
                  uVar22 = *(uint *)(PTR_DAT_04bb6380 + 8);
                  if (-1 < (int)uVar22) {
                    if (((ushort *)((ulong)uVar22 + (long)puVar12) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar22 + (long)puVar12), uVar5 < 0x80)) {
                      pcVar18 = pcVar18 + uVar5;
                    }
                    break;
                  }
                  if (uVar22 != 0xffffffff) break;
                  uVar22 = *puVar12;
                }
                if ((uVar22 == 0) || (puVar23 = (uint *)(ulong)uVar22, puVar12 == puVar23)) break;
                lVar15 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar23)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar12 + (lVar15 - (long)puVar23);
                if (lVar15 == 0) break;
                uVar26 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar23));
                *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                if (uVar26 == 0) break;
                piVar25 = (int *)(lVar15 + 4);
                while (piVar25[-1] != 0x54706054) {
                  piVar25 = piVar25 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_021b5c90;
                }
                iVar3 = 0;
                if (*piVar25 != -1) {
                  iVar3 = *piVar25;
                }
                *(int *)(PTR_DAT_04bb6380 + 8) = iVar3;
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_021b5c90:
            if (*pcVar18 != '\0') {
              iVar27 = iVar27 + 1;
            }
          }
        }
        uVar13 = uVar13 + 1;
        iVar10 = iVar10 + 1;
      } while (uVar13 != 10);
      if (iVar14 < 8) {
        if (iVar14 == 7) {
          iVar10 = 2 - iVar27;
        }
        else {
          iVar10 = 1 - iVar27;
          if (iVar14 < 4) {
            iVar10 = iVar27;
          }
        }
      }
      else {
        iVar10 = 3 - iVar27;
      }
      puVar12 = (uint *)(param_1 + 0x55f88);
      uVar13 = *(uint *)(param_1 + 0x55f88) - (*(uint *)(param_1 + 0x55f88) >> 1 & 0x55555555);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      uVar13 = uVar13 + (uVar13 >> 8);
      if ((uVar13 + (uVar13 >> 0x10) & 0x3f) != 0) {
        uVar26 = 0;
        do {
          if (*(char *)(param_1 + uVar26 * 0xba0 + 0xaf9) != '\0') {
            lVar15 = *(long *)PTR_DAT_04bb2208;
            uVar11 = FUN_006bd550("FireworksFieldNpc",0);
            local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
            puVar23 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_78);
            if (puVar23 != (uint *)0x0) {
              pcVar16 = (char *)(param_1 + uVar26 * 0xba0 + 0x818);
              pcVar18 = pcVar16;
              if (*puVar23 != 0) {
                cVar19 = *PTR_DAT_04bb6378;
                do {
                  if (cVar19 == '\0') {
                    cVar19 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    puVar7 = PTR_DAT_04bb6380;
                    *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    uVar13 = *puVar23;
                  }
                  else {
                    uVar13 = *(uint *)(PTR_DAT_04bb6380 + 8);
                    if (-1 < (int)uVar13) {
                      if (((ushort *)((ulong)uVar13 + (long)puVar23) != (ushort *)0x0) &&
                         (uVar5 = *(ushort *)((ulong)uVar13 + (long)puVar23), uVar5 < 0x80)) {
                        pcVar18 = pcVar16 + uVar5;
                      }
                      break;
                    }
                    if (uVar13 != 0xffffffff) break;
                    uVar13 = *puVar23;
                  }
                  if ((uVar13 == 0) || (puVar21 = (uint *)(ulong)uVar13, puVar23 == puVar21)) break;
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar21)) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar23 + (lVar15 - (long)puVar21);
                  if (lVar15 == 0) break;
                  uVar24 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar21));
                  *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                  if (uVar24 == 0) break;
                  piVar25 = (int *)(lVar15 + 4);
                  while (piVar25[-1] != 0x54706054) {
                    piVar25 = piVar25 + 2;
                    uVar24 = uVar24 - 1;
                    if (uVar24 == 0) goto LAB_021b5eb4;
                  }
                  iVar10 = 0;
                  if (*piVar25 != -1) {
                    iVar10 = *piVar25;
                  }
                  *(int *)(PTR_DAT_04bb6380 + 8) = iVar10;
                  if (*puVar23 == 0) break;
                } while( true );
              }
LAB_021b5eb4:
              if (*pcVar18 != '\0') {
                lVar15 = *(long *)PTR_DAT_04bb2208;
                uVar11 = FUN_006bd550("FireworksAroundWater",0);
                local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
                puVar23 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_78);
                if (puVar23 != (uint *)0x0) {
                  if (*puVar23 != 0) {
                    cVar19 = *PTR_DAT_04bb6378;
                    do {
                      if (cVar19 == '\0') {
                        cVar19 = '\x01';
                        *PTR_DAT_04bb6378 = 1;
                        puVar7 = PTR_DAT_04bb6380;
                        *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        uVar13 = *puVar23;
                      }
                      else {
                        uVar13 = *(uint *)(PTR_DAT_04bb6380 + 8);
                        if (-1 < (int)uVar13) {
                          if (((ushort *)((ulong)uVar13 + (long)puVar23) != (ushort *)0x0) &&
                             (uVar5 = *(ushort *)((ulong)uVar13 + (long)puVar23), uVar5 < 0x80)) {
                            pcVar16 = pcVar16 + uVar5;
                          }
                          break;
                        }
                        if (uVar13 != 0xffffffff) break;
                        uVar13 = *puVar23;
                      }
                      if ((uVar13 == 0) || (puVar21 = (uint *)(ulong)uVar13, puVar23 == puVar21))
                      break;
                      lVar15 = 0xc;
                      if (*(char *)((long)puVar23 + (10 - (long)puVar21)) != '\0') {
                        lVar15 = 0x1c;
                      }
                      lVar15 = (long)puVar23 + (lVar15 - (long)puVar21);
                      if (lVar15 == 0) break;
                      uVar24 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar21));
                      *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                      if (uVar24 == 0) break;
                      piVar25 = (int *)(lVar15 + 4);
                      while (piVar25[-1] != 0x54706054) {
                        piVar25 = piVar25 + 2;
                        uVar24 = uVar24 - 1;
                        if (uVar24 == 0) goto LAB_021b5d68;
                      }
                      iVar10 = 0;
                      if (*piVar25 != -1) {
                        iVar10 = *piVar25;
                      }
                      *(int *)(PTR_DAT_04bb6380 + 8) = iVar10;
                      if (*puVar23 == 0) break;
                    } while( true );
                  }
LAB_021b5d68:
                  if (*pcVar16 != '\0') goto LAB_021b5d70;
                }
                uVar22 = (uint)uVar26;
                uVar13 = 1 << (ulong)(uVar22 & 0x1f);
                if ((puVar12[uVar26 >> 5 & 0x7ffffff] & uVar13) != 0) {
                  pcStack_70 = "GotoEventPlazaForCountdown";
                  local_78 = puVar2 + 0x10;
                  local_64 = uVar22;
                  FUN_021be8c0(&local_64,&local_78,1);
                  local_64._0_2_ = CONCAT11(1,(char)uVar26);
                  local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
                  local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
                  if (-1 < DAT_053d0e90) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,
                                 &local_64,2,0);
                  }
                  local_78 = puVar2 + 0x10;
                  pcStack_70 = "FireworksAroundWater";
                  local_64 = uVar22;
                  FUN_021be8c0(&local_64,&local_78,1);
                  local_64._0_2_ = CONCAT11(1,(char)uVar26);
                  local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
                  local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
                  if (-1 < DAT_053d1250) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1250,&local_78,
                                 &local_64,2,0);
                  }
                  uVar30 = uVar30 & (uVar13 ^ 0xffffffff);
                }
              }
            }
          }
LAB_021b5d70:
          uVar26 = uVar26 + 1;
        } while (uVar26 != 10);
        iVar10 = 0;
      }
      uVar13 = uVar30 - (uVar30 >> 1 & 0x55555555);
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      uVar13 = uVar13 + (uVar13 >> 8);
      uVar13 = uVar13 + (uVar13 >> 0x10) & 0x3f;
      uVar26 = (ulong)uVar13;
      if (uVar13 != 0) {
        uVar13 = 0xffffffff;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          puVar23 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar28 = puVar23[3];
          uVar22 = *puVar23 ^ *puVar23 << 0xb;
          *puVar23 = puVar23[1];
          puVar23[1] = puVar23[2];
          uVar29 = uVar22 >> 8 ^ uVar28 >> 0x13 ^ uVar22 ^ uVar28;
          puVar23[2] = uVar28;
          puVar23[3] = uVar29;
          uVar22 = uVar30 - (uVar30 >> 1 & 0x55555555);
          uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
          iVar14 = (int)(uVar26 * uVar29 >> 0x20);
          uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
          uVar22 = uVar22 + (uVar22 >> 8);
          uVar29 = uVar13;
          if (iVar14 + 1 <= (int)(uVar22 + (uVar22 >> 0x10) & 0x3f) && uVar30 != 0) {
            iVar14 = iVar14 + 2;
            uVar22 = uVar30;
            do {
              iVar14 = iVar14 + -1;
              if (iVar14 < 2) {
                uVar22 = uVar22 - 1 & (uVar22 ^ 0xffffffff);
                uVar22 = uVar22 - (uVar22 >> 1 & 0x55555555);
                uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
                uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
                uVar22 = uVar22 + (uVar22 >> 8);
                uVar29 = uVar22 + (uVar22 >> 0x10) & 0x3f;
                break;
              }
              uVar22 = uVar22 - 1 & uVar22;
            } while (uVar22 != 0);
          }
          lVar15 = param_1 + (ulong)uVar29 * 0xba0;
          if (9 < uVar29) {
            lVar15 = param_1;
          }
          lVar17 = *(long *)PTR_DAT_04bb2208;
          uVar11 = FUN_006bd550("GotoEventPlazaForCountdown",0);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
          puVar23 = (uint *)FUN_021cb820(lVar17 + 0x660,&local_78);
          if (puVar23 == (uint *)0x0) {
            cVar19 = '\0';
          }
          else {
            pcVar18 = (char *)(lVar15 + 0x818);
            if (*puVar23 != 0) {
              cVar19 = *PTR_DAT_04bb6378;
              do {
                if (cVar19 == '\0') {
                  cVar19 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  puVar7 = PTR_DAT_04bb6380;
                  *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                  uVar22 = *puVar23;
                }
                else {
                  uVar22 = *(uint *)(PTR_DAT_04bb6380 + 8);
                  if (-1 < (int)uVar22) {
                    if (((ushort *)((ulong)uVar22 + (long)puVar23) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar22 + (long)puVar23), uVar5 < 0x80)) {
                      pcVar18 = pcVar18 + uVar5;
                    }
                    break;
                  }
                  if (uVar22 != 0xffffffff) break;
                  uVar22 = *puVar23;
                }
                if ((uVar22 == 0) || (puVar21 = (uint *)(ulong)uVar22, puVar23 == puVar21)) break;
                lVar17 = 0xc;
                if (*(char *)((long)puVar23 + (10 - (long)puVar21)) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar23 + (lVar17 - (long)puVar21);
                if (lVar17 == 0) break;
                uVar24 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar21));
                *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                if (uVar24 == 0) break;
                piVar25 = (int *)(lVar17 + 4);
                while (piVar25[-1] != 0x54706054) {
                  piVar25 = piVar25 + 2;
                  uVar24 = uVar24 - 1;
                  if (uVar24 == 0) goto LAB_021b63f0;
                }
                iVar14 = 0;
                if (*piVar25 != -1) {
                  iVar14 = *piVar25;
                }
                *(int *)(PTR_DAT_04bb6380 + 8) = iVar14;
                if (*puVar23 == 0) break;
              } while( true );
            }
LAB_021b63f0:
            cVar19 = *pcVar18;
          }
          pcStack_70 = "GotoEventPlazaForCountdown";
          local_78 = puVar2;
          local_64 = uVar29;
          FUN_021be8c0(&local_64,&local_78,1);
          local_64._0_2_ = CONCAT11(1,(char)uVar29);
          local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
          local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,0);
          }
          uVar28 = 1 << (ulong)(uVar29 & 0x1f);
          uVar22 = uVar13;
          if (uVar29 < 10) {
            uVar22 = ~uVar28;
          }
          if (0 < iVar10) {
            local_78 = PTR_DAT_04bb2020 + 0x10;
            pcStack_70 = "FireworksAroundWater";
            local_64 = uVar29;
            FUN_021be8c0(&local_64,&local_78,1);
            local_64._0_2_ = CONCAT11(1,(char)uVar29);
            local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
            local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
            if (-1 < DAT_053d1250) {
              FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1250,&local_78,&local_64,2,0)
              ;
            }
            if (uVar29 < 10) {
              *puVar12 = *puVar12 | uVar28;
            }
            iVar10 = iVar10 + -1;
          }
          if ((((cVar19 == '\0') &&
               ((*(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) & 0xff00000000) == 0)) &&
              ((char)(*(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x28) < '\x1e')) &&
             ((*(long *)(lVar15 + 0xaa0) != 0 && (*(int *)(*(long *)(lVar15 + 0xaa0) + 4) == 0)))) {
            local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
            if ((uVar29 < 10) && ((&DAT_053fee41)[(ulong)uVar29 * 0xba0] != '\0')) {
              FUN_01e2caf8(*(long *)PTR_DAT_04bb3968 + 0xda0,&DAT_053fe850 + (ulong)uVar29 * 0xba0,1
                           ,&local_78,0,0);
            }
            FUN_021956e0(lVar15);
            *(undefined4 *)(lVar15 + 0x6e0) = 0;
          }
          uVar30 = uVar22 & uVar30;
          uVar26 = uVar26 - 1;
        } while ((int)uVar26 != 0);
      }
      return;
    }
    if (2 < iVar10) {
      return;
    }
    if (*piVar25 != 0) {
      *piVar25 = *piVar25 + -1;
      return;
    }
    *piVar25 = 0x708;
    puVar9 = PTR_DAT_04bb6380;
    puVar7 = PTR_DAT_04bb2208;
    if (iVar10 == 0) {
      uVar26 = *(ulong *)(lVar15 + 0x4060);
      if (((uVar26 & 0xff00000000) == 0) && ((char)(uVar26 >> 0x28) < '\x1e')) goto LAB_021b5838;
      lVar15 = 0;
      do {
        if (*(char *)(param_1 + lVar15 * 0xba0 + 0xaf9) != '\0') {
          lVar17 = *(long *)puVar7;
          uVar11 = FUN_006bd550("FireworksFieldNpc",0);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
          puVar12 = (uint *)FUN_021cb820(lVar17 + 0x660,&local_78);
          if (puVar12 != (uint *)0x0) {
            pcVar18 = (char *)(param_1 + lVar15 * 0xba0 + 0x818);
            if (*puVar12 != 0) {
              cVar19 = *PTR_DAT_04bb6378;
              do {
                puVar8 = PTR_DAT_04bb6378;
                if (cVar19 == '\0') {
                  cVar19 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  uVar13 = *puVar12;
                }
                else {
                  uVar13 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar13) {
                    if (((ushort *)((ulong)uVar13 + (long)puVar12) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar13 + (long)puVar12), uVar5 < 0x80)) {
                      pcVar18 = pcVar18 + uVar5;
                    }
                    break;
                  }
                  if (uVar13 != 0xffffffff) break;
                  uVar13 = *puVar12;
                }
                if ((uVar13 == 0) || (puVar23 = (uint *)(ulong)uVar13, puVar12 == puVar23)) break;
                lVar17 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar23)) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar12 + (lVar17 - (long)puVar23);
                if (lVar17 == 0) break;
                uVar26 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar23));
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar26 == 0) break;
                piVar25 = (int *)(lVar17 + 4);
                while (piVar25[-1] != 0x54706054) {
                  piVar25 = piVar25 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_021b6cc8;
                }
                iVar10 = 0;
                if (*piVar25 != -1) {
                  iVar10 = *piVar25;
                }
                *(int *)(puVar9 + 8) = iVar10;
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_021b6cc8:
            if (*pcVar18 != '\0') {
              local_64 = (uint)lVar15;
              pcStack_70 = "GotoEventPlazaForCountdown";
              local_78 = puVar2 + 0x10;
              FUN_021be8c0(&local_64,&local_78,0);
              local_64._0_2_ = (ushort)(byte)lVar15;
              local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
              local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
              if (-1 < DAT_053d0e90) {
                FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,2,
                             0);
              }
            }
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 10);
    }
    else {
      iVar10 = 0;
      uVar26 = 0;
      do {
        if (*(char *)(param_1 + uVar26 * 0xba0 + 0xaf9) != '\0') {
          lVar15 = *(long *)puVar7;
          uVar11 = FUN_006bd550("GotoEventPlazaForCountdown",0);
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar11);
          puVar12 = (uint *)FUN_021cb820(lVar15 + 0x660,&local_78);
          if (puVar12 != (uint *)0x0) {
            pcVar18 = (char *)(param_1 + uVar26 * 0xba0 + 0x818);
            if (*puVar12 != 0) {
              cVar19 = *PTR_DAT_04bb6378;
              do {
                puVar8 = PTR_DAT_04bb6378;
                if (cVar19 == '\0') {
                  cVar19 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  uVar13 = *puVar12;
                }
                else {
                  uVar13 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar13) {
                    if (((ushort *)((ulong)uVar13 + (long)puVar12) != (ushort *)0x0) &&
                       (uVar5 = *(ushort *)((ulong)uVar13 + (long)puVar12), uVar5 < 0x80)) {
                      pcVar18 = pcVar18 + uVar5;
                    }
                    break;
                  }
                  if (uVar13 != 0xffffffff) break;
                  uVar13 = *puVar12;
                }
                if ((uVar13 == 0) || (puVar23 = (uint *)(ulong)uVar13, puVar12 == puVar23)) break;
                lVar15 = 0xc;
                if (*(char *)((long)puVar12 + (10 - (long)puVar23)) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar12 + (lVar15 - (long)puVar23);
                if (lVar15 == 0) break;
                uVar24 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar23));
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar24 == 0) break;
                piVar25 = (int *)(lVar15 + 4);
                while (piVar25[-1] != 0x54706054) {
                  piVar25 = piVar25 + 2;
                  uVar24 = uVar24 - 1;
                  if (uVar24 == 0) goto LAB_021b5534;
                }
                iVar14 = 0;
                if (*piVar25 != -1) {
                  iVar14 = *piVar25;
                }
                *(int *)(puVar9 + 8) = iVar14;
                if (*puVar12 == 0) break;
              } while( true );
            }
LAB_021b5534:
            if (*pcVar18 != '\0') {
              puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar13 = *puVar12 ^ *puVar12 << 0xb;
              uVar30 = puVar12[3];
              *puVar12 = puVar12[1];
              puVar12[1] = puVar12[2];
              uVar13 = uVar13 >> 8 ^ uVar30 >> 0x13 ^ uVar13 ^ uVar30;
              puVar12[2] = uVar30;
              puVar12[3] = uVar13;
              if ((uint)((ulong)uVar13 * 100 >> 0x20) < 0x14) {
                local_64 = (uint)uVar26;
                pcStack_70 = "GotoEventPlazaForCountdown";
                local_78 = puVar2 + 0x10;
                FUN_021be8c0(&local_64,&local_78,0);
                local_64._0_2_ = (ushort)(byte)uVar26;
                local_78._6_2_ = (ushort)((ulong)local_78 >> 0x30) & 0xff00;
                local_78 = (undefined *)CONCAT26(local_78._6_2_,0xff0000000000);
                if (-1 < DAT_053d0e90) {
                  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_78,&local_64,
                               2,0);
                }
                FUN_0214f360(param_1 + uVar26 * 0xba0 + 0x8b0,uVar26 & 0xffffffff);
              }
              else {
                iVar10 = iVar10 + 1;
              }
            }
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != 10);
      if (iVar10 != 0) {
        return;
      }
    }
    uVar20 = 3;
  }
  local_78 = puVar2 + 0x10;
  pcStack_70 = "SetFireworksEarlyAggregator";
  FUN_02743234(&local_78,uVar20);
  return;
}

