
void FUN_021bb190(long param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  float *pfVar18;
  ulong uVar19;
  undefined1 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  long lVar28;
  long lVar29;
  char *pcVar30;
  char cVar31;
  uint uVar32;
  byte *pbVar33;
  uint *puVar34;
  int *piVar35;
  long *plVar36;
  long lVar37;
  undefined8 uVar38;
  undefined4 *puVar39;
  float fVar40;
  float fVar41;
  uint local_d4;
  undefined8 local_90;
  char *pcStack_88;
  undefined4 local_80;
  char local_7c [7];
  undefined1 local_75;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar24 = **(long **)PTR_DAT_04bb27d0;
  bVar7 = *(byte *)(lVar24 + 0x473);
  if ((long)(char)bVar7 != 0xffffffffffffffff) {
    pbVar33 = (byte *)(lVar24 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar33 = (byte *)(lVar24 + 0x48);
    }
    if (((*pbVar33 >> 3 & 1) != 0) && (*(byte *)(lVar24 + 0x472) != bVar7)) {
      return;
    }
  }
  uVar15 = FUN_021de700();
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_021e71b0();
    if ((uVar15 & 1) == 0) {
      local_90 = PTR_DAT_04bb2020 + 0x10;
      uVar38 = *(undefined8 *)PTR_DAT_04bb32f0;
      pcStack_88 = "Carnival";
      puVar27 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar27 == 0) {
        local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar24 - 0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        puVar27 = &local_70;
        uVar15 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar15,(undefined6)local_70) & 0xff00ffffffffffff;
      }
      uVar15 = *puVar27;
      uVar15 = FUN_00879dd0(uVar38,&local_90,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
      iVar14 = 3;
      if ((uVar15 & 1) == 0) {
        iVar14 = 0;
      }
    }
    else {
      iVar14 = 2;
    }
  }
  else {
    iVar14 = 1;
  }
  plVar36 = (long *)PTR_DAT_04bb32e8;
  if ((iVar14 != 1) && (iVar14 != 3)) {
    return;
  }
  iVar21 = 300;
  if (iVar14 != 3) {
    iVar21 = 0x4b0;
  }
  lVar24 = *(long *)PTR_DAT_04bb32e8;
  iVar12 = 900;
  if (iVar14 != 3) {
    iVar12 = 600;
  }
  psVar1 = (short *)(param_1 + 0x55e26);
  puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  local_90 = PTR_DAT_04bb2020 + 0x10;
  pcStack_88 = "SeasonEventActivityType";
  iVar8 = FUN_02743000(&local_90);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar8);
  if (iVar8 == 1) {
    iVar12 = *(int *)(param_1 + 0x55e3c);
    *(int *)(param_1 + 0x55e3c) = iVar12 + 1;
    if (0x94 < iVar12) {
      *(undefined4 *)(param_1 + 0x55e3c) = 0;
      lVar37 = *(long *)PTR_DAT_04bb46b0;
      if (lVar37 != 0) {
        puVar25 = *(undefined8 **)(lVar37 + 0x10);
        if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
          lVar37 = (**(code **)(*(long *)*puVar25 + 0x38))();
          if (lVar37 == 0) goto LAB_021bd14c;
          lVar37 = lVar37 + 0x70;
        }
        else if (((puVar25 == (undefined8 *)0x0) || ((long *)puVar25[0x26] == (long *)0x0)) ||
                (lVar37 = (**(code **)(*(long *)puVar25[0x26] + 0x38))(), lVar37 == 0))
        goto LAB_021bd14c;
        if ((*(long **)(lVar37 + 0xd0) == (long *)0x0) ||
           (puVar25 = (undefined8 *)**(long **)(lVar37 + 0xd0), puVar25 == (undefined8 *)0x0)) {
          local_d4 = 0;
        }
        else {
          local_d4 = (**(code **)*puVar25)();
        }
        puVar3 = PTR_DAT_04bc27f0;
        lVar26 = 0;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar29 = *(long *)(lVar37 + 0xb8) + *(long *)(lVar37 + 0xb0);
          pbVar33 = (byte *)(lVar29 + lVar26 * 0x13230);
          uVar15 = (ulong)*pbVar33;
          if (((uVar15 < 0x23) && (bVar7 = pbVar33[1], bVar7 <= (byte)puVar3[uVar15])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(bVar7 & 0x1f) & 1) != 0)) {
            if ((&DAT_053fee41)[lVar26 * 0xba0] == '\0') {
LAB_021bc558:
              iVar12 = *(int *)(lVar29 + lVar26 * 0x13230 + 0x10764);
              local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar12);
              if (iVar12 == 0) goto LAB_021bc3a0;
            }
            else {
              lVar28 = *(long *)PTR_DAT_04bb2208;
              uVar10 = FUN_006bd550("SeasonEventPlace",0);
              local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
              puVar17 = (uint *)FUN_021cb820(lVar28 + 0x660,&local_90);
              if (puVar17 == (uint *)0x0) goto LAB_021bc558;
              uVar9 = *puVar17;
              pcVar30 = &DAT_053feb60 + lVar26 * 0xba0;
              if (uVar9 != 0) {
                cVar31 = *PTR_DAT_04bb6378;
                do {
                  if (cVar31 == '\0') {
                    cVar31 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    puVar4 = PTR_DAT_04bb6380;
                    *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                    uVar9 = *puVar17;
                  }
                  else {
                    uVar13 = *(uint *)(PTR_DAT_04bb6380 + 8);
                    if (-1 < (int)uVar13) {
                      if (((ushort *)((ulong)uVar13 + (long)puVar17) != (ushort *)0x0) &&
                         (uVar6 = *(ushort *)((ulong)uVar13 + (long)puVar17), uVar6 < 0x80)) {
                        pcVar30 = pcVar30 + uVar6;
                      }
                      break;
                    }
                    if (uVar13 != 0xffffffff) break;
                  }
                  puVar34 = (uint *)(ulong)uVar9;
                  if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                  lVar28 = 0xc;
                  if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                    lVar28 = 0x1c;
                  }
                  lVar28 = (long)puVar17 + (lVar28 - (long)puVar34);
                  if (lVar28 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                  *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar35 = (int *)(lVar28 + 4);
                  while (piVar35[-1] != 0x54706054) {
                    piVar35 = piVar35 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021bc54c;
                  }
                  iVar12 = 0;
                  if (*piVar35 != -1) {
                    iVar12 = *piVar35;
                  }
                  *(int *)(PTR_DAT_04bb6380 + 8) = iVar12;
                  uVar9 = *puVar17;
                  if (uVar9 == 0) break;
                } while( true );
              }
LAB_021bc54c:
              if (*pcVar30 != '\x01') goto LAB_021bc558;
            }
            if (iVar14 == 1) {
              if ((&DAT_053fee41)[lVar26 * 0xba0] != '\0') {
                lVar29 = *(long *)PTR_DAT_04bb2208;
                uVar10 = FUN_006bd550("HalloweenReactionEventPlaza",0);
                local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
                puVar17 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_90);
                if (puVar17 != (uint *)0x0) {
                  uVar9 = *puVar17;
                  pcVar30 = &DAT_053feb60 + lVar26 * 0xba0;
                  if (uVar9 != 0) {
                    cVar31 = *PTR_DAT_04bb6378;
                    do {
                      if (cVar31 == '\0') {
                        cVar31 = '\x01';
                        *PTR_DAT_04bb6378 = 1;
                        puVar4 = PTR_DAT_04bb6380;
                        *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                        uVar9 = *puVar17;
                      }
                      else {
                        uVar13 = *(uint *)(PTR_DAT_04bb6380 + 8);
                        if (-1 < (int)uVar13) {
                          if (((ushort *)((ulong)uVar13 + (long)puVar17) != (ushort *)0x0) &&
                             (uVar6 = *(ushort *)((ulong)uVar13 + (long)puVar17), uVar6 < 0x80)) {
                            pcVar30 = pcVar30 + uVar6;
                          }
                          break;
                        }
                        if (uVar13 != 0xffffffff) break;
                      }
                      puVar34 = (uint *)(ulong)uVar9;
                      if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                      lVar29 = 0xc;
                      if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                        lVar29 = 0x1c;
                      }
                      lVar29 = (long)puVar17 + (lVar29 - (long)puVar34);
                      if (lVar29 == 0) break;
                      uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                      *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                      if (uVar15 == 0) break;
                      piVar35 = (int *)(lVar29 + 4);
                      while (piVar35[-1] != 0x54706054) {
                        piVar35 = piVar35 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) goto LAB_021bc810;
                      }
                      iVar12 = 0;
                      if (*piVar35 != -1) {
                        iVar12 = *piVar35;
                      }
                      *(int *)(PTR_DAT_04bb6380 + 8) = iVar12;
                      uVar9 = *puVar17;
                      if (uVar9 == 0) break;
                    } while( true );
                  }
LAB_021bc810:
                  if (*pcVar30 != '\0') goto LAB_021bc844;
                }
              }
            }
            else if ((&DAT_053fee41)[lVar26 * 0xba0] != '\0') {
              lVar29 = *(long *)PTR_DAT_04bb2208;
              uVar10 = FUN_006bd550("SeasonEventPlace",0);
              local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
              puVar17 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_90);
              if (puVar17 != (uint *)0x0) {
                uVar9 = *puVar17;
                pbVar33 = &DAT_053feb60 + lVar26 * 0xba0;
                if (uVar9 != 0) {
                  cVar31 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar31 == '\0') {
                      cVar31 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      puVar4 = PTR_DAT_04bb6380;
                      *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                      uVar9 = *puVar17;
                    }
                    else {
                      uVar13 = *(uint *)(PTR_DAT_04bb6380 + 8);
                      if (-1 < (int)uVar13) {
                        if (((ushort *)((ulong)uVar13 + (long)puVar17) != (ushort *)0x0) &&
                           (uVar6 = *(ushort *)((ulong)uVar13 + (long)puVar17), uVar6 < 0x80)) {
                          pbVar33 = pbVar33 + uVar6;
                        }
                        break;
                      }
                      if (uVar13 != 0xffffffff) break;
                    }
                    puVar34 = (uint *)(ulong)uVar9;
                    if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar17 + (lVar29 - (long)puVar34);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                    *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar35 = (int *)(lVar29 + 4);
                    while (piVar35[-1] != 0x54706054) {
                      piVar35 = piVar35 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021bc838;
                    }
                    iVar12 = 0;
                    if (*piVar35 != -1) {
                      iVar12 = *piVar35;
                    }
                    *(int *)(PTR_DAT_04bb6380 + 8) = iVar12;
                    uVar9 = *puVar17;
                    if (uVar9 == 0) break;
                  } while( true );
                }
LAB_021bc838:
                if (1 < *pbVar33) {
LAB_021bc844:
                  uVar10 = (undefined4)lVar26;
                  local_68 = CONCAT44(local_68._4_4_,uVar10);
                  pcStack_88 = "HalloweenReactionEventPlaza";
                  local_90 = puVar2;
                  FUN_021be8c0(&local_68,&local_90,0);
                  bVar7 = (byte)lVar26;
                  local_68._0_2_ = (ushort)bVar7;
                  local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
                  local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
                  if (-1 < DAT_053d12b0) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12b0,&local_90,
                                 &local_68,2,0);
                  }
                  local_68 = CONCAT44(local_68._4_4_,uVar10);
                  puVar4 = PTR_DAT_04bb2020 + 0x10;
                  pcStack_88 = "GotoEventPlazaForCountdown";
                  local_90 = puVar4;
                  FUN_021be8c0(&local_68,&local_90,0);
                  local_68._0_2_ = (ushort)bVar7;
                  local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
                  local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
                  if (-1 < DAT_053d0e90) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_90,
                                 &local_68,2,0);
                  }
                  local_68 = CONCAT44(local_68._4_4_,uVar10);
                  pcStack_88 = "SeasonEventPlace";
                  local_90 = puVar4;
                  FUN_021be8c0(&local_68,&local_90,0);
                  local_68._0_2_ = (ushort)bVar7;
                  local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
                  local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
                  if (-1 < DAT_053d12e0) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12e0,&local_90,
                                 &local_68,2,0);
                  }
                  local_68 = CONCAT44(local_68._4_4_,uVar10);
                  local_90 = PTR_DAT_04bb2020 + 0x10;
                  pcStack_88 = "ArrivedInEventPlaza";
                  FUN_021be8c0(&local_68,&local_90,0);
                  local_68._0_2_ = (ushort)bVar7;
                  local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
                  local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
                  if (-1 < DAT_053d1340) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1340,&local_90,
                                 &local_68,2,0);
                  }
                  if (*(short *)(param_1 + 0x55e2e) == 0) {
                    *(undefined8 *)(param_1 + 0x55e2e) =
                         *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                  }
                }
              }
            }
          }
LAB_021bc3a0:
          lVar26 = lVar26 + 1;
        } while (lVar26 != 10);
        uVar9 = FUN_02206490();
        if (((iVar14 == 1) && (iVar12 = FUN_02206660(), 1 < (int)uVar9)) && (iVar12 < 1)) {
          uVar13 = nn::os::GetSystemTick();
          uVar5 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
          lVar26 = 0;
          iVar12 = 0;
          uVar13 = uVar5 ^ uVar5 * 0x800;
          uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
          uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
          uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          do {
            if ((&DAT_053fee41)[lVar26 * 0xba0] != '\0') {
              lVar29 = *(long *)PTR_DAT_04bb2208;
              uVar10 = FUN_006bd550("ArrivedInEventPlaza",0);
              local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
              puVar17 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_90);
              if (puVar17 != (uint *)0x0) {
                uVar11 = *puVar17;
                pcVar30 = &DAT_053feb60 + lVar26 * 0xba0;
                if (uVar11 != 0) {
                  cVar31 = *PTR_DAT_04bb6378;
                  do {
                    if (cVar31 == '\0') {
                      cVar31 = '\x01';
                      *PTR_DAT_04bb6378 = 1;
                      puVar3 = PTR_DAT_04bb6380;
                      *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                      uVar11 = *puVar17;
                    }
                    else {
                      uVar23 = *(uint *)(PTR_DAT_04bb6380 + 8);
                      if (-1 < (int)uVar23) {
                        if (((ushort *)((ulong)uVar23 + (long)puVar17) != (ushort *)0x0) &&
                           (uVar6 = *(ushort *)((ulong)uVar23 + (long)puVar17), uVar6 < 0x80)) {
                          pcVar30 = pcVar30 + uVar6;
                        }
                        break;
                      }
                      if (uVar23 != 0xffffffff) break;
                    }
                    puVar34 = (uint *)(ulong)uVar11;
                    if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                    lVar29 = 0xc;
                    if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                      lVar29 = 0x1c;
                    }
                    lVar29 = (long)puVar17 + (lVar29 - (long)puVar34);
                    if (lVar29 == 0) break;
                    uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                    *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                    if (uVar15 == 0) break;
                    piVar35 = (int *)(lVar29 + 4);
                    while (piVar35[-1] != 0x54706054) {
                      piVar35 = piVar35 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_021bcc50;
                    }
                    iVar8 = 0;
                    if (*piVar35 != -1) {
                      iVar8 = *piVar35;
                    }
                    *(int *)(PTR_DAT_04bb6380 + 8) = iVar8;
                    uVar11 = *puVar17;
                    if (uVar11 == 0) break;
                  } while( true );
                }
LAB_021bcc50:
                if (*pcVar30 != '\0') {
                  local_68 = CONCAT44(local_68._4_4_,(int)lVar26);
                  uVar20 = 1;
                  if (iVar12 == (int)((ulong)(uVar13 >> 8 ^ uVar5 >> 0x13 ^ uVar13 ^ uVar5) *
                                      (ulong)uVar9 >> 0x20)) {
                    uVar20 = 2;
                  }
                  pcStack_88 = "HalloweenReactionEventPlaza";
                  local_90 = puVar2;
                  FUN_021be8c0(&local_68,&local_90,uVar20);
                  local_68._0_2_ = CONCAT11(uVar20,(char)lVar26);
                  local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
                  local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
                  if (-1 < DAT_053d12b0) {
                    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12b0,&local_90,
                                 &local_68,2,0);
                  }
                  iVar12 = iVar12 + 1;
                }
              }
            }
            lVar26 = lVar26 + 1;
          } while (lVar26 != 10);
        }
        lVar26 = 0;
        uVar13 = 0;
        do {
          if ((&DAT_053fee41)[lVar26 * 0xba0] != '\0') {
            lVar29 = *(long *)PTR_DAT_04bb2208;
            uVar10 = FUN_006bd550("SeasonEventPlace",0);
            local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
            puVar17 = (uint *)FUN_021cb820(lVar29 + 0x660,&local_90);
            if (puVar17 != (uint *)0x0) {
              uVar5 = *puVar17;
              pbVar33 = &DAT_053feb60 + lVar26 * 0xba0;
              if (uVar5 != 0) {
                cVar31 = *PTR_DAT_04bb6378;
                do {
                  if (cVar31 == '\0') {
                    cVar31 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    puVar2 = PTR_DAT_04bb6380;
                    *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                    uVar5 = *puVar17;
                  }
                  else {
                    uVar11 = *(uint *)(PTR_DAT_04bb6380 + 8);
                    if (-1 < (int)uVar11) {
                      if (((ushort *)((ulong)uVar11 + (long)puVar17) != (ushort *)0x0) &&
                         (uVar6 = *(ushort *)((ulong)uVar11 + (long)puVar17), uVar6 < 0x80)) {
                        pbVar33 = pbVar33 + uVar6;
                      }
                      break;
                    }
                    if (uVar11 != 0xffffffff) break;
                  }
                  puVar34 = (uint *)(ulong)uVar5;
                  if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar17 + (lVar29 - (long)puVar34);
                  if (lVar29 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                  *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar35 = (int *)(lVar29 + 4);
                  while (piVar35[-1] != 0x54706054) {
                    piVar35 = piVar35 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021bcd00;
                  }
                  iVar12 = 0;
                  if (*piVar35 != -1) {
                    iVar12 = *piVar35;
                  }
                  *(int *)(PTR_DAT_04bb6380 + 8) = iVar12;
                  uVar5 = *puVar17;
                  if (uVar5 == 0) break;
                } while( true );
              }
LAB_021bcd00:
              if (1 < *pbVar33) {
                uVar13 = uVar13 + 1;
              }
            }
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 != 10);
        if (uVar9 == uVar13) {
          if (*(short *)(param_1 + 0x55e2e) == 0) {
            lVar26 = *(long *)PTR_DAT_04bb5c90;
            FUN_02507c6c(&local_90,7,1,1,0);
            puVar2 = PTR_DAT_04bb5038;
            if ((byte)local_90 < 8) {
              while ((pfVar18 = (float *)FUN_0251b3b0(&local_90,0), pfVar18 == (float *)0x0 ||
                     (fVar40 = *pfVar18 - *(float *)(lVar26 + 0x40),
                     fVar41 = pfVar18[2] - *(float *)(lVar26 + 0x48),
                     11025.0 < fVar41 * fVar41 + fVar40 * fVar40))) {
                bVar7 = (byte)local_90;
                uVar15 = (ulong)local_90 & 0xff;
                if ((7 < (byte)local_90) || (uVar15 + 1 == 8)) goto LAB_021bceb8;
                pbVar33 = puVar2 + uVar15 + 1;
                uVar19 = FUN_02507924(&local_90,pbVar33);
                if ((uVar19 & 1) == 0) {
                  if (uVar15 + 2 == 8) goto LAB_021bceb8;
                  pbVar33 = puVar2 + uVar15 + 2;
                  uVar19 = FUN_02507924(&local_90,pbVar33);
                  if ((uVar19 & 1) == 0) {
                    if (uVar15 + 3 == 8) goto LAB_021bceb8;
                    pbVar33 = puVar2 + uVar15 + 3;
                    uVar19 = FUN_02507924(&local_90,pbVar33);
                    if ((uVar19 & 1) == 0) {
                      if (uVar15 + 4 == 8) goto LAB_021bceb8;
                      pbVar33 = puVar2 + uVar15 + 4;
                      uVar19 = FUN_02507924(&local_90,pbVar33);
                      if ((uVar19 & 1) == 0) {
                        if (uVar15 + 5 == 8) goto LAB_021bceb8;
                        pbVar33 = puVar2 + uVar15 + 5;
                        uVar19 = FUN_02507924(&local_90,pbVar33);
                        if ((uVar19 & 1) == 0) {
                          if (uVar15 + 6 == 8) goto LAB_021bceb8;
                          pbVar33 = puVar2 + uVar15 + 6;
                          uVar19 = FUN_02507924(&local_90,pbVar33);
                          if ((uVar19 & 1) == 0) {
                            if (uVar15 + 7 == 8) goto LAB_021bceb8;
                            pbVar33 = puVar2 + uVar15 + 7;
                            uVar19 = FUN_02507924(&local_90,pbVar33);
                            if ((uVar19 & 1) == 0) {
                              if (bVar7 == 0) goto LAB_021bceb8;
                              pbVar33 = puVar2 + uVar15 + 8;
                              FUN_02507924(&local_90,pbVar33);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                if (7 < *pbVar33) goto LAB_021bceb8;
                local_90 = (undefined *)CONCAT71(local_90._1_7_,*pbVar33);
              }
              *(undefined8 *)(param_1 + 0x55e2e) =
                   *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
            }
          }
LAB_021bceb8:
          if (iVar14 == 3) {
            uVar9 = *(uint *)(param_1 + 0x55e58);
            if ((int)uVar9 < 1) {
              *(undefined4 *)(param_1 + 0x55e58) = 0x672;
            }
            else {
              *(uint *)(param_1 + 0x55e58) = uVar9 - 0x96;
              if (uVar9 < 0x96 || uVar9 - 0x96 == 0) {
                puVar2 = PTR_DAT_04bb2020 + 0x10;
                pcStack_88 = "CarnivalEventPlazaNpcWander";
                local_90 = puVar2;
                iVar14 = FUN_0273ea30(&local_90);
                pcStack_88 = "CarnivalEventPlazaNpcWander";
                local_90 = puVar2;
                FUN_0273f3c4(&local_90,iVar14 == 0);
              }
            }
          }
        }
        plVar36 = (long *)PTR_DAT_04bb32e8;
        if ((((local_d4 & 1) != 0) && (*(long *)(lVar37 + 0xd0) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar37 + 0xd0) + 8), puVar25 != (undefined8 *)0x0))
        {
          (**(code **)*puVar25)();
        }
      }
    }
LAB_021bd14c:
    if ((*(short *)(param_1 + 0x55e2e) != 0) &&
       (lVar24 = FUN_00a8255c(lVar24 + 0x4060), *(int *)(param_1 + 0x55e38) <= lVar24)) {
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_88 = "SeasonEventActivityType";
      local_90 = puVar2;
      FUN_02743234(&local_90,0);
      local_68 = local_68 & 0xffffffffffffff00;
      local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
      local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
      if (-1 < DAT_053d1310) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1310,&local_90,&local_68,1,0);
      }
      uVar13 = puVar16[3];
      lVar24 = 0;
      uVar9 = *puVar16 ^ *puVar16 << 0xb;
      *puVar16 = puVar16[1];
      puVar16[1] = puVar16[2];
      uVar9 = uVar9 >> 8 ^ uVar13 >> 0x13 ^ uVar9 ^ uVar13;
      puVar16[2] = uVar13;
      puVar16[3] = uVar9;
      *(int *)(param_1 + 0x55e38) = iVar21 + (int)((ulong)uVar9 * 0x1e >> 0x20);
      puVar3 = PTR_DAT_04bb6380;
      uVar38 = *(undefined8 *)(*plVar36 + 0x4060);
      *(undefined2 *)(param_1 + 0x55e2e) = 0;
      *(undefined4 *)(param_1 + 0x55e30) = 0x101;
      *(undefined1 *)(param_1 + 0x55e34) = 0;
      *(undefined8 *)psVar1 = uVar38;
      do {
        if (*(char *)(param_1 + lVar24 * 0xba0 + 0xaf9) != '\0') {
          if ((&DAT_053fee41)[lVar24 * 0xba0] != '\0') {
            lVar37 = *(long *)PTR_DAT_04bb2208;
            uVar10 = FUN_006bd550("SeasonEventPlace",0);
            local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
            puVar16 = (uint *)FUN_021cb820(lVar37 + 0x660,&local_90);
            if (puVar16 != (uint *)0x0) {
              pcVar30 = &DAT_053feb60 + lVar24 * 0xba0;
              if (*puVar16 != 0) {
                cVar31 = *PTR_DAT_04bb6378;
                do {
                  if (cVar31 == '\0') {
                    cVar31 = '\x01';
                    *PTR_DAT_04bb6378 = 1;
                    *(undefined8 *)puVar3 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                    uVar9 = *puVar16;
                  }
                  else {
                    uVar9 = *(uint *)(puVar3 + 8);
                    if (-1 < (int)uVar9) {
                      if (((ushort *)((ulong)uVar9 + (long)puVar16) != (ushort *)0x0) &&
                         (uVar6 = *(ushort *)((ulong)uVar9 + (long)puVar16), uVar6 < 0x80)) {
                        pcVar30 = pcVar30 + uVar6;
                      }
                      break;
                    }
                    if (uVar9 != 0xffffffff) break;
                    uVar9 = *puVar16;
                  }
                  if ((uVar9 == 0) || (puVar17 = (uint *)(ulong)uVar9, puVar16 == puVar17)) break;
                  lVar37 = 0xc;
                  if (*(char *)((long)puVar16 + (10 - (long)puVar17)) != '\0') {
                    lVar37 = 0x1c;
                  }
                  lVar37 = (long)puVar16 + (lVar37 - (long)puVar17);
                  if (lVar37 == 0) break;
                  uVar15 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar17));
                  *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
                  if (uVar15 == 0) break;
                  piVar35 = (int *)(lVar37 + 4);
                  while (piVar35[-1] != 0x54706054) {
                    piVar35 = piVar35 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_021bd3c0;
                  }
                  iVar14 = 0;
                  if (*piVar35 != -1) {
                    iVar14 = *piVar35;
                  }
                  *(int *)(puVar3 + 8) = iVar14;
                  if (*puVar16 == 0) break;
                } while( true );
              }
LAB_021bd3c0:
              if (*pcVar30 == '\x01') goto LAB_021bd260;
            }
          }
          uVar10 = (undefined4)lVar24;
          local_68 = CONCAT44(local_68._4_4_,uVar10);
          pcStack_88 = "SeasonEventPlace";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          bVar7 = (byte)lVar24;
          local_68._0_2_ = (ushort)bVar7;
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d12e0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12e0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,uVar10);
          puVar4 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "GotoEventPlazaForCountdown";
          local_90 = puVar4;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68._0_2_ = (ushort)bVar7;
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d0e90) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,uVar10);
          pcStack_88 = "HalloweenReactionEventPlaza";
          local_90 = puVar4;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68._0_2_ = (ushort)bVar7;
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d12b0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12b0,&local_90,&local_68,2,0);
          }
        }
LAB_021bd260:
        lVar24 = lVar24 + 1;
      } while (lVar24 != 10);
    }
    return;
  }
  if (iVar8 != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x55e38) < 0) || (*psVar1 == 0)) {
    uVar9 = *puVar16 ^ *puVar16 << 0xb;
    uVar13 = puVar16[3];
    *puVar16 = puVar16[1];
    puVar16[1] = puVar16[2];
    uVar9 = uVar9 >> 8 ^ uVar13 >> 0x13 ^ uVar9 ^ uVar13;
    puVar16[2] = uVar13;
    puVar16[3] = uVar9;
    iVar8 = 0;
    if (iVar14 != 3) {
      iVar8 = (int)((ulong)uVar9 + (ulong)uVar9 * 4 >> 0x20) * 0x3c + 300;
    }
    *(int *)(param_1 + 0x55e38) = iVar8;
    *(undefined8 *)psVar1 = *(undefined8 *)(*plVar36 + 0x4060);
  }
  lVar24 = FUN_00a8255c(lVar24 + 0x4060,psVar1);
  if (lVar24 < *(int *)(param_1 + 0x55e38)) {
    return;
  }
  lVar24 = *(long *)PTR_DAT_04bb46b0;
  if (lVar24 != 0) {
    puVar25 = *(undefined8 **)(lVar24 + 0x10);
    if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
      lVar24 = (**(code **)(*(long *)*puVar25 + 0x38))();
      if (lVar24 == 0) goto LAB_021bd8bc;
      lVar24 = lVar24 + 0x70;
    }
    else if (((puVar25 == (undefined8 *)0x0) || ((long *)puVar25[0x26] == (long *)0x0)) ||
            (lVar24 = (**(code **)(*(long *)puVar25[0x26] + 0x38))(), lVar24 == 0))
    goto LAB_021bd8bc;
    if ((*(long **)(lVar24 + 0xd0) == (long *)0x0) ||
       (puVar25 = (undefined8 *)**(long **)(lVar24 + 0xd0), puVar25 == (undefined8 *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar25)();
    }
    puVar3 = PTR_DAT_04bc2a20;
    puVar2 = PTR_DAT_04bc27f0;
    lVar37 = 0;
    uVar13 = 0;
    puVar25 = (undefined8 *)PTR_DAT_04bb6380;
    do {
      lVar26 = *(long *)(lVar24 + 0xb8) + *(long *)(lVar24 + 0xb0);
      pbVar33 = (byte *)(lVar26 + lVar37 * 0x13230);
      uVar15 = (ulong)*pbVar33;
      if (((uVar15 < 0x23) && (bVar7 = pbVar33[1], bVar7 <= (byte)puVar2[uVar15])) &&
         (((*(uint *)(puVar3 + uVar15 * 4) >> (ulong)(bVar7 & 0x1f) & 1) != 0 &&
          (*(int *)(lVar26 + lVar37 * 0x13230 + 0x10764) == 0)))) {
        if ((&DAT_053fee41)[lVar37 * 0xba0] != '\0') {
          lVar26 = *(long *)PTR_DAT_04bb2208;
          uVar10 = FUN_006bd550("SeasonEventPlace",0);
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
          puVar17 = (uint *)FUN_021cb820(lVar26 + 0x660,&local_90);
          puVar25 = (undefined8 *)PTR_DAT_04bb6380;
          if (puVar17 != (uint *)0x0) {
            uVar5 = *puVar17;
            pcVar30 = &DAT_053feb60 + lVar37 * 0xba0;
            if (uVar5 != 0) {
              cVar31 = *PTR_DAT_04bb6378;
              do {
                if (cVar31 == '\0') {
                  cVar31 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *puVar25 = 0xffffffffffffffff;
                  *(undefined8 *)((long)puVar25 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)((long)puVar25 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)((long)puVar25 + 0x18) = 0xffffffffffffffff;
                  uVar5 = *puVar17;
                }
                else {
                  uVar11 = *(uint *)((long)puVar25 + 8);
                  if (-1 < (int)uVar11) {
                    if (((ushort *)((ulong)uVar11 + (long)puVar17) != (ushort *)0x0) &&
                       (uVar6 = *(ushort *)((ulong)uVar11 + (long)puVar17), uVar6 < 0x80)) {
                      pcVar30 = pcVar30 + uVar6;
                    }
                    break;
                  }
                  if (uVar11 != 0xffffffff) break;
                }
                puVar34 = (uint *)(ulong)uVar5;
                if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                lVar26 = 0xc;
                if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar17 + (lVar26 - (long)puVar34);
                if (lVar26 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                *(undefined4 *)((long)puVar25 + 8) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar35 = (int *)(lVar26 + 4);
                while (piVar35[-1] != 0x54706054) {
                  piVar35 = piVar35 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_021bb714;
                }
                iVar14 = 0;
                if (*piVar35 != -1) {
                  iVar14 = *piVar35;
                }
                *(int *)((long)puVar25 + 8) = iVar14;
                uVar5 = *puVar17;
                if (uVar5 == 0) break;
              } while( true );
            }
LAB_021bb714:
            if (*pcVar30 == '\x01') goto LAB_021bb560;
          }
        }
        uVar13 = 1 << (ulong)((uint)lVar37 & 0x1f) | uVar13;
      }
LAB_021bb560:
      lVar37 = lVar37 + 1;
    } while (lVar37 != 10);
    uVar5 = uVar13 - (uVar13 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
    uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
    uVar5 = uVar5 + (uVar5 >> 8);
    uVar5 = uVar5 + (uVar5 >> 0x10);
    plVar36 = (long *)PTR_DAT_04bb32e8;
    if ((uVar5 & 0x3f) != 0) {
      lVar37 = 0;
      iVar14 = 0;
      do {
        if ((&DAT_053fee41)[lVar37 * 0xba0] != '\0') {
          lVar26 = *(long *)PTR_DAT_04bb2208;
          uVar10 = FUN_006bd550("SeasonEventPlace",0);
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
          puVar17 = (uint *)FUN_021cb820(lVar26 + 0x660,&local_90);
          if (puVar17 != (uint *)0x0) {
            uVar11 = *puVar17;
            pcVar30 = &DAT_053feb60 + lVar37 * 0xba0;
            if (uVar11 != 0) {
              cVar31 = *PTR_DAT_04bb6378;
              do {
                if (cVar31 == '\0') {
                  cVar31 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *puVar25 = 0xffffffffffffffff;
                  puVar25[1] = 0xffffffffffffffff;
                  puVar25[2] = 0xffffffffffffffff;
                  puVar25[3] = 0xffffffffffffffff;
                  uVar11 = *puVar17;
                }
                else {
                  uVar23 = *(uint *)(puVar25 + 1);
                  if (-1 < (int)uVar23) {
                    if (((ushort *)((ulong)uVar23 + (long)puVar17) != (ushort *)0x0) &&
                       (uVar6 = *(ushort *)((ulong)uVar23 + (long)puVar17), uVar6 < 0x80)) {
                      pcVar30 = pcVar30 + uVar6;
                    }
                    break;
                  }
                  if (uVar23 != 0xffffffff) break;
                }
                puVar34 = (uint *)(ulong)uVar11;
                if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                lVar26 = 0xc;
                if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar17 + (lVar26 - (long)puVar34);
                if (lVar26 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                *(undefined4 *)(puVar25 + 1) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar35 = (int *)(lVar26 + 4);
                while (piVar35[-1] != 0x54706054) {
                  piVar35 = piVar35 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_021bb790;
                }
                iVar8 = 0;
                if (*piVar35 != -1) {
                  iVar8 = *piVar35;
                }
                *(int *)(puVar25 + 1) = iVar8;
                uVar11 = *puVar17;
                if (uVar11 == 0) break;
              } while( true );
            }
LAB_021bb790:
            if (*pcVar30 == '\x01') {
              iVar14 = iVar14 + 1;
            }
          }
        }
        lVar37 = lVar37 + 1;
      } while (lVar37 != 10);
      uVar38 = *(undefined8 *)PTR_DAT_04bb32f0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_88 = "Carnival";
      puVar27 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      local_90 = puVar2;
      if (*(short *)puVar27 == 0) {
        local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          lVar37 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar37 - 0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        uVar15 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar15,(undefined6)local_70) & 0xff00ffffffffffff;
        puVar27 = &local_70;
      }
      uVar15 = *puVar27;
      uVar11 = FUN_00879dd0(uVar38,&local_90,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
      iVar8 = 0;
      iVar22 = 2;
      if ((uVar11 & 1) != 0 || 2 < iVar14) {
        iVar22 = 3;
      }
      puVar3 = PTR_DAT_04bb3768 + 0x10;
      puVar39 = (undefined4 *)PTR_DAT_04bb39d8;
      do {
        puVar17 = (uint *)nn::os::GetTlsValue(*puVar39);
        uVar11 = uVar13 - (uVar13 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
        if (puVar17 != (uint *)0x0 && uVar11 != 0) {
          uVar23 = *puVar17 ^ *puVar17 << 0xb;
          uVar32 = puVar17[3];
          *puVar17 = puVar17[1];
          puVar17[1] = puVar17[2];
          uVar23 = uVar23 >> 8 ^ uVar32 >> 0x13 ^ uVar23 ^ uVar32;
          puVar17[2] = uVar32;
          puVar17[3] = uVar23;
          uVar23 = (uint)((ulong)uVar23 * (ulong)uVar11 >> 0x20);
          if (uVar23 < uVar11) {
            if (uVar13 != 0) {
              iVar14 = uVar23 + 2;
              uVar11 = uVar13;
              do {
                iVar14 = iVar14 + -1;
                if (iVar14 < 2) {
                  uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
                  uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
                  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                  uVar11 = uVar11 + (uVar11 >> 8);
                  uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
                  goto LAB_021bbb60;
                }
                uVar11 = uVar11 - 1 & uVar11;
              } while (uVar11 != 0);
            }
            uVar11 = 0xffffffff;
LAB_021bbb60:
            local_68 = CONCAT44(local_68._4_4_,uVar11);
            pcStack_88 = "SeasonEventPlace";
            local_90 = puVar2;
            FUN_021be8c0(&local_68,&local_90,iVar8 + 2);
            local_68 = CONCAT71(CONCAT61(local_68._2_6_,(char)(iVar8 + 2)),(char)uVar11);
            local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
            local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
            if (-1 < DAT_053d12e0) {
              FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12e0,&local_90,&local_68,2,0)
              ;
            }
            if (uVar11 < 10) {
              uVar13 = uVar13 & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
            }
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,0xffffffff);
            local_90 = PTR_DAT_04bb2020 + 0x10;
            pcStack_88 = "SeasonEventPlace";
            FUN_021be8c0(&local_68,&local_90,iVar8 + 2);
            local_68 = CONCAT71(CONCAT61(local_68._2_6_,(char)(iVar8 + 2)),0xff);
            local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
            local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
            if (-1 < DAT_053d12e0) {
              FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d12e0,&local_90,&local_68,2,0)
              ;
            }
            uVar11 = 0xffffffff;
          }
          local_75 = 0;
          local_80 = 8;
          local_7c[0] = '\0';
          local_90 = puVar3;
          pcStack_88 = local_7c;
          FUN_021d7c00(&local_90,uVar11);
          puVar39 = (undefined4 *)PTR_DAT_04bb39d8;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar22);
      lVar37 = 0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        if ((&DAT_053fee41)[lVar37 * 0xba0] != '\0') {
          lVar26 = *(long *)PTR_DAT_04bb2208;
          uVar10 = FUN_006bd550("SeasonEventPlace",0);
          local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar10);
          puVar17 = (uint *)FUN_021cb820(lVar26 + 0x660,&local_90);
          if (puVar17 != (uint *)0x0) {
            uVar11 = *puVar17;
            pbVar33 = &DAT_053feb60 + lVar37 * 0xba0;
            if (uVar11 != 0) {
              cVar31 = *PTR_DAT_04bb6378;
              do {
                if (cVar31 == '\0') {
                  cVar31 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *puVar25 = 0xffffffffffffffff;
                  puVar25[1] = 0xffffffffffffffff;
                  puVar25[2] = 0xffffffffffffffff;
                  puVar25[3] = 0xffffffffffffffff;
                  uVar11 = *puVar17;
                }
                else {
                  uVar23 = *(uint *)(puVar25 + 1);
                  if (-1 < (int)uVar23) {
                    if (((ushort *)((ulong)uVar23 + (long)puVar17) != (ushort *)0x0) &&
                       (uVar6 = *(ushort *)((ulong)uVar23 + (long)puVar17), uVar6 < 0x80)) {
                      pbVar33 = pbVar33 + uVar6;
                    }
                    break;
                  }
                  if (uVar23 != 0xffffffff) break;
                }
                puVar34 = (uint *)(ulong)uVar11;
                if ((puVar34 == (uint *)0x0) || (puVar17 == puVar34)) break;
                lVar26 = 0xc;
                if (*(char *)((long)puVar17 + (10 - (long)puVar34)) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar17 + (lVar26 - (long)puVar34);
                if (lVar26 == 0) break;
                uVar15 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar34));
                *(undefined4 *)(puVar25 + 1) = 0xfffffffe;
                if (uVar15 == 0) break;
                piVar35 = (int *)(lVar26 + 4);
                while (piVar35[-1] != 0x54706054) {
                  piVar35 = piVar35 + 2;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_021bbd64;
                }
                iVar14 = 0;
                if (*piVar35 != -1) {
                  iVar14 = *piVar35;
                }
                *(int *)(puVar25 + 1) = iVar14;
                uVar11 = *puVar17;
                if (uVar11 == 0) break;
              } while( true );
            }
LAB_021bbd64:
            if ((1 < *pbVar33) && (*(char *)(param_1 + lVar37 * 0xba0 + 0xaf9) != '\0')) {
              local_68 = CONCAT44(local_68._4_4_,(int)lVar37);
              pcStack_88 = "GotoEventPlazaForCountdown";
              local_90 = puVar2;
              FUN_021be8c0(&local_68,&local_90,1);
              local_68._0_2_ = CONCAT11(1,(char)lVar37);
              local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
              local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
              if (-1 < DAT_053d0e90) {
                FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e90,&local_90,&local_68,2,
                             0);
              }
            }
          }
        }
        plVar36 = (long *)PTR_DAT_04bb32e8;
        lVar37 = lVar37 + 1;
      } while (lVar37 != 10);
      uVar38 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_90 = PTR_DAT_04bb2020 + 0x10;
      pcStack_88 = "Carnival";
      puVar27 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar27 == 0) {
        local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          lVar37 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_68 = lVar37 - 0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
        }
        puVar27 = &local_70;
        uVar15 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar15,(undefined6)local_70) & 0xff00ffffffffffff;
      }
      uVar15 = *puVar27;
      uVar15 = FUN_00879dd0(uVar38,&local_90,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
      if ((uVar15 & 1) != 0) {
        uVar11 = uVar13 - (uVar13 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
        if (uVar11 != 0) {
          local_68 = local_68 & 0xffffffff00000000;
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = local_68 & 0xffffffffffff0000;
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,1);
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,1);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,2);
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,2);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,3);
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,3);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,4);
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,4);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,5);
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,5);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,6);
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,6);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,7);
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,7);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,8);
          puVar2 = PTR_DAT_04bb2020 + 0x10;
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,8);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          local_68 = CONCAT44(local_68._4_4_,9);
          pcStack_88 = "CarnivalWanderEventPlaza";
          local_90 = puVar2;
          FUN_021be8c0(&local_68,&local_90,0);
          local_68 = CONCAT62(local_68._2_6_,9);
          local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
          local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
          if (-1 < DAT_053d13d0) {
            FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0);
          }
          puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          if (puVar17 == (uint *)0x0) {
            plVar36 = (long *)PTR_DAT_04bb32e8;
          }
          else {
            uVar32 = puVar17[3];
            uVar23 = *puVar17 ^ *puVar17 << 0xb;
            *puVar17 = puVar17[1];
            puVar17[1] = puVar17[2];
            uVar23 = uVar23 >> 8 ^ uVar32 >> 0x13 ^ uVar23 ^ uVar32;
            puVar17[2] = uVar32;
            puVar17[3] = uVar23;
            plVar36 = (long *)PTR_DAT_04bb32e8;
            uVar23 = (uint)((ulong)uVar23 * (ulong)uVar11 >> 0x20);
            if (uVar23 < uVar11) {
              if (uVar13 == 0) {
                uVar23 = 0xffffffff;
              }
              else {
                iVar14 = uVar23 + 2;
                uVar23 = 0xffffffff;
                uVar32 = uVar13;
                do {
                  iVar14 = iVar14 + -1;
                  if (iVar14 < 2) {
                    uVar23 = uVar32 - 1 & (uVar32 ^ 0xffffffff);
                    uVar23 = uVar23 - (uVar23 >> 1 & 0x55555555);
                    uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
                    uVar23 = uVar23 + (uVar23 >> 4) & 0xf0f0f0f;
                    uVar23 = uVar23 + (uVar23 >> 8);
                    uVar23 = uVar23 + (uVar23 >> 0x10) & 0x3f;
                    break;
                  }
                  uVar32 = uVar32 - 1 & uVar32;
                } while (uVar32 != 0);
              }
              local_68 = CONCAT44(local_68._4_4_,uVar23);
              local_90 = PTR_DAT_04bb2020 + 0x10;
              pcStack_88 = "CarnivalWanderEventPlaza";
              FUN_021be8c0(&local_68,&local_90,1);
              local_68._0_2_ = CONCAT11(1,(char)uVar23);
              local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
              local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
              if (-1 < DAT_053d13d0) {
                FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,
                             0);
              }
              if (uVar23 < 10) {
                uVar13 = uVar13 & (1 << (ulong)(uVar23 & 0x1f) ^ 0xffffffffU);
                uVar11 = uVar13 - (uVar13 >> 1 & 0x55555555);
                uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                uVar11 = uVar11 + (uVar11 >> 8);
                uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
              }
            }
            else {
              local_68 = CONCAT44(local_68._4_4_,0xffffffff);
              local_90 = PTR_DAT_04bb2020 + 0x10;
              pcStack_88 = "CarnivalWanderEventPlaza";
              FUN_021be8c0(&local_68,&local_90,1);
              local_68 = CONCAT62(local_68._2_6_,0x1ff);
              local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
              local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
              if (-1 < DAT_053d13d0) {
                FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,
                             0);
              }
              uVar23 = 0xffffffff;
            }
            local_75 = 0;
            local_80 = 8;
            local_7c[0] = '\0';
            local_90 = PTR_DAT_04bb3768 + 0x10;
            pcStack_88 = local_7c;
            FUN_021d7c00(&local_90,uVar23);
          }
          puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          if ((uVar11 != 0) && (puVar17 != (uint *)0x0)) {
            uVar23 = *puVar17 ^ *puVar17 << 0xb;
            uVar32 = puVar17[3];
            *puVar17 = puVar17[1];
            puVar17[1] = puVar17[2];
            uVar23 = uVar23 >> 8 ^ uVar32 >> 0x13 ^ uVar23 ^ uVar32;
            puVar17[2] = uVar32;
            puVar17[3] = uVar23;
            uVar23 = (uint)((ulong)uVar23 * (ulong)uVar11 >> 0x20);
            if (uVar23 < uVar11 && uVar13 != 0) {
              iVar14 = uVar23 + 2;
              uVar11 = 0xffffffff;
              do {
                iVar14 = iVar14 + -1;
                if (iVar14 < 2) {
                  uVar13 = uVar13 - 1 & (uVar13 ^ 0xffffffff);
                  uVar13 = uVar13 - (uVar13 >> 1 & 0x55555555);
                  uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
                  uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
                  uVar13 = uVar13 + (uVar13 >> 8);
                  uVar11 = uVar13 + (uVar13 >> 0x10) & 0x3f;
                  break;
                }
                uVar13 = uVar13 - 1 & uVar13;
              } while (uVar13 != 0);
            }
            else {
              uVar11 = 0xffffffff;
            }
            local_68 = CONCAT44(local_68._4_4_,uVar11);
            local_90 = PTR_DAT_04bb2020 + 0x10;
            pcStack_88 = "CarnivalWanderEventPlaza";
            FUN_021be8c0(&local_68,&local_90,1);
            local_68._0_2_ = CONCAT11(1,(char)uVar11);
            local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
            local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
            if (-1 < DAT_053d13d0) {
              FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d13d0,&local_90,&local_68,2,0)
              ;
            }
            local_75 = 0;
            local_80 = 8;
            local_7c[0] = '\0';
            local_90 = PTR_DAT_04bb3768 + 0x10;
            pcStack_88 = local_7c;
            FUN_021d7c00(&local_90,uVar11);
          }
        }
        local_90 = PTR_DAT_04bb2020 + 0x10;
        pcStack_88 = "CarnivalEventPlazaNpcWander";
        FUN_0273f3c4(&local_90,0);
      }
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar24 + 0xd0) != 0)) &&
       (puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0xd0) + 8), puVar25 != (undefined8 *)0x0)) {
      (**(code **)*puVar25)();
    }
    if ((uVar5 & 0x3f) != 0) {
      local_90 = PTR_DAT_04bb2020 + 0x10;
      pcStack_88 = "SeasonEventActivityType";
      FUN_02743234(&local_90,1);
      local_68 = CONCAT71(local_68._1_7_,1);
      local_90._6_2_ = (ushort)((ulong)local_90 >> 0x30) & 0xff00;
      local_90 = (undefined *)CONCAT26(local_90._6_2_,0xff0000000000);
      if (-1 < DAT_053d1310) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d1310,&local_90,&local_68,1,0);
      }
      uVar9 = *puVar16 ^ *puVar16 << 0xb;
      uVar13 = puVar16[3];
      *puVar16 = puVar16[1];
      puVar16[1] = puVar16[2];
      uVar9 = uVar9 >> 8 ^ uVar13 >> 0x13 ^ uVar9 ^ uVar13;
      puVar16[2] = uVar13;
      puVar16[3] = uVar9;
      *psVar1 = 0;
      *(undefined4 *)(param_1 + 0x55e28) = 0x101;
      *(undefined1 *)(param_1 + 0x55e2c) = 0;
      *(undefined2 *)(param_1 + 0x55e2e) = 0;
      *(undefined4 *)(param_1 + 0x55e30) = 0x101;
      *(undefined1 *)(param_1 + 0x55e34) = 0;
      *(int *)(param_1 + 0x55e38) = iVar12 + (int)((ulong)uVar9 * 0x1e >> 0x20);
      return;
    }
  }
LAB_021bd8bc:
  uVar9 = *puVar16 ^ *puVar16 << 0xb;
  uVar13 = puVar16[3];
  *puVar16 = puVar16[1];
  puVar16[1] = puVar16[2];
  uVar9 = uVar9 >> 8 ^ uVar13 >> 0x13 ^ uVar9 ^ uVar13;
  puVar16[2] = uVar13;
  puVar16[3] = uVar9;
  *(int *)(param_1 + 0x55e38) = iVar21 + (int)((ulong)uVar9 * 0x1e >> 0x20);
  *(undefined8 *)psVar1 = *(undefined8 *)(*plVar36 + 0x4060);
  return;
}

