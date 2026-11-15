
void FUN_021ac650(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  char cVar16;
  uint uVar17;
  char *pcVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  ulong *puVar23;
  uint *puVar24;
  ulong uVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  undefined8 uVar29;
  char *pcVar30;
  byte bVar31;
  uint local_90;
  byte local_8c [4];
  undefined *local_88;
  char *pcStack_80;
  byte local_74 [4];
  undefined8 local_70;
  long local_68;
  
  *(undefined4 *)(param_1 + 0x55d08) = 0;
  *(undefined8 *)(param_1 + 0x55c28) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xafc) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x451c) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x50bc) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x5c5c) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x67fc) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x739c) = 0x244db4da;
  uVar29 = *(undefined8 *)PTR_DAT_04bb32f0;
  *(undefined4 *)(param_1 + 0x169c) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x223c) = 0x244db4da;
  puVar6 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(param_1 + 0x2ddc) = 0x244db4da;
  *(undefined4 *)(param_1 + 0x397c) = 0x244db4da;
  puVar23 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  pcStack_80 = "XmasEve";
  if (*(short *)puVar23 == 0) {
    local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    puVar23 = &local_70;
    uVar15 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(uint)local_70);
    local_70 = CONCAT26((short)uVar15,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  uVar15 = *puVar23;
  uVar15 = FUN_00879dd0(uVar29,&local_88,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
  puVar8 = PTR_DAT_04bb5038;
  if ((uVar15 & 1) != 0) {
    return;
  }
  if ((byte)*PTR_DAT_04bb5038 < 8) {
    local_8c[0] = *PTR_DAT_04bb5038;
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(PTR_DAT_04bb5038,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[1] < 8) {
    local_8c[0] = puVar8[1];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 1,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[2] < 8) {
    local_8c[0] = puVar8[2];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 2,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[3] < 8) {
    local_8c[0] = puVar8[3];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 3,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[4] < 8) {
    local_8c[0] = puVar8[4];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 4,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[5] < 8) {
    local_8c[0] = puVar8[5];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 5,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[6] < 8) {
    local_8c[0] = puVar8[6];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 6,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  if ((byte)puVar8[7] < 8) {
    local_8c[0] = puVar8[7];
    lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar13 != 0) {
      local_88 = puVar6 + 0x10;
      pcStack_80 = "NnpcFinishHintTalk";
      iVar11 = FUN_0274bce0(puVar8 + 7,&local_88);
      if (iVar11 == 0) {
        return;
      }
    }
  }
  puVar8 = PTR_DAT_04bb6380;
  uVar15 = 0;
  local_90 = 0;
  bVar9 = false;
  local_70 = local_70 & 0xffffffff00000000;
  do {
    if (*(char *)(param_1 + uVar15 * 0xba0 + 0xaf9) != '\0') {
      pcStack_80 = "NnpcHouseBuiltToday";
      local_88 = puVar6 + 0x10;
      iVar11 = FUN_027490f0(uVar15 & 0xffffffff,&local_88);
      if (iVar11 == 0) {
        pcVar30 = (char *)(param_1 + uVar15 * 0xba0 + 0x818);
        if (!bVar9) {
          lVar13 = *(long *)PTR_DAT_04bb2208;
          uVar12 = FUN_006bd550("IslandRepTalk",0);
          local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
          puVar14 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_88);
          if (puVar14 == (uint *)0x0) {
            cVar16 = '\0';
          }
          else {
            pcVar18 = pcVar30;
            if (*puVar14 != 0) {
              cVar16 = *PTR_DAT_04bb6378;
              do {
                if (cVar16 == '\0') {
                  cVar16 = '\x01';
                  *PTR_DAT_04bb6378 = 1;
                  *(undefined8 *)puVar8 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                  uVar17 = *puVar14;
                }
                else {
                  uVar17 = *(uint *)(puVar8 + 8);
                  if (-1 < (int)uVar17) {
                    if (((ushort *)((ulong)uVar17 + (long)puVar14) != (ushort *)0x0) &&
                       (uVar4 = *(ushort *)((ulong)uVar17 + (long)puVar14), uVar4 < 0x80)) {
                      pcVar18 = pcVar30 + uVar4;
                    }
                    break;
                  }
                  if (uVar17 != 0xffffffff) break;
                  uVar17 = *puVar14;
                }
                if ((uVar17 == 0) || (puVar24 = (uint *)(ulong)uVar17, puVar14 == puVar24)) break;
                lVar13 = 0xc;
                if (*(char *)((long)puVar14 + (10 - (long)puVar24)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)puVar14 + (lVar13 - (long)puVar24);
                if (lVar13 == 0) break;
                uVar25 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar24));
                *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
                if (uVar25 == 0) break;
                piVar26 = (int *)(lVar13 + 4);
                while (piVar26[-1] != 0x54706054) {
                  piVar26 = piVar26 + 2;
                  uVar25 = uVar25 - 1;
                  if (uVar25 == 0) goto LAB_021acb8c;
                }
                iVar11 = 0;
                if (*piVar26 != -1) {
                  iVar11 = *piVar26;
                }
                *(int *)(puVar8 + 8) = iVar11;
                if (*puVar14 == 0) break;
              } while( true );
            }
LAB_021acb8c:
            cVar16 = *pcVar18;
          }
          bVar9 = cVar16 != '\0';
        }
        else {
          bVar9 = true;
        }
        lVar13 = *(long *)PTR_DAT_04bb2208;
        uVar12 = FUN_006bd550("AppWelcomeMigrantsTalk",0);
        local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
        puVar14 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_88);
        if (puVar14 != (uint *)0x0) {
          pcVar18 = pcVar30;
          if (*puVar14 != 0) {
            cVar16 = *PTR_DAT_04bb6378;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *PTR_DAT_04bb6378 = 1;
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                uVar17 = *puVar14;
              }
              else {
                uVar17 = *(uint *)(puVar8 + 8);
                if (-1 < (int)uVar17) {
                  if (((ushort *)((ulong)uVar17 + (long)puVar14) != (ushort *)0x0) &&
                     (uVar4 = *(ushort *)((ulong)uVar17 + (long)puVar14), uVar4 < 0x80)) {
                    pcVar18 = pcVar30 + uVar4;
                  }
                  break;
                }
                if (uVar17 != 0xffffffff) break;
                uVar17 = *puVar14;
              }
              if ((uVar17 == 0) || (puVar24 = (uint *)(ulong)uVar17, puVar14 == puVar24)) break;
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar24)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + (lVar13 - (long)puVar24);
              if (lVar13 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar24));
              *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar26 = (int *)(lVar13 + 4);
              while (piVar26[-1] != 0x54706054) {
                piVar26 = piVar26 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_021accac;
              }
              iVar11 = 0;
              if (*piVar26 != -1) {
                iVar11 = *piVar26;
              }
              *(int *)(puVar8 + 8) = iVar11;
              if (*puVar14 == 0) break;
            } while( true );
          }
LAB_021accac:
          if (*pcVar18 != '\0') goto LAB_021aca40;
        }
        lVar13 = *(long *)PTR_DAT_04bb2208;
        uVar12 = FUN_006bd550("AppFirstTalk",0);
        local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
        puVar14 = (uint *)FUN_021cb820(lVar13 + 0x660,&local_88);
        if (puVar14 != (uint *)0x0) {
          if (*puVar14 != 0) {
            cVar16 = *PTR_DAT_04bb6378;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *PTR_DAT_04bb6378 = 1;
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                uVar17 = *puVar14;
              }
              else {
                uVar17 = *(uint *)(puVar8 + 8);
                if (-1 < (int)uVar17) {
                  if (((ushort *)((ulong)uVar17 + (long)puVar14) != (ushort *)0x0) &&
                     (uVar4 = *(ushort *)((ulong)uVar17 + (long)puVar14), uVar4 < 0x80)) {
                    pcVar30 = pcVar30 + uVar4;
                  }
                  break;
                }
                if (uVar17 != 0xffffffff) break;
                uVar17 = *puVar14;
              }
              if ((uVar17 == 0) || (puVar24 = (uint *)(ulong)uVar17, puVar14 == puVar24)) break;
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar24)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + (lVar13 - (long)puVar24);
              if (lVar13 == 0) break;
              uVar25 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar24));
              *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
              if (uVar25 == 0) break;
              piVar26 = (int *)(lVar13 + 4);
              while (piVar26[-1] != 0x54706054) {
                piVar26 = piVar26 + 2;
                uVar25 = uVar25 - 1;
                if (uVar25 == 0) goto LAB_021ace10;
              }
              iVar11 = 0;
              if (*piVar26 != -1) {
                iVar11 = *piVar26;
              }
              *(int *)(puVar8 + 8) = iVar11;
              if (*puVar14 == 0) break;
            } while( true );
          }
LAB_021ace10:
          if (*pcVar30 != '\0') goto LAB_021aca40;
        }
        local_90 = 1 << (ulong)((uint)uVar15 & 0x1f) | local_90;
        local_70 = CONCAT44(local_70._4_4_,local_90);
      }
    }
LAB_021aca40:
    puVar7 = PTR_DAT_04bb2020;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 10);
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 != 0) {
    puVar19 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar19 + 0x38))();
      if (lVar13 != 0) {
        lVar13 = lVar13 + 0x70;
        goto LAB_021aceb4;
      }
    }
    else if (((puVar19 != (undefined8 *)0x0) && ((long *)puVar19[0x26] != (long *)0x0)) &&
            (lVar13 = (**(code **)(*(long *)puVar19[0x26] + 0x38))(), lVar13 != 0)) {
LAB_021aceb4:
      if ((*(long **)(lVar13 + 0xd0) == (long *)0x0) ||
         (puVar19 = (undefined8 *)**(long **)(lVar13 + 0xd0), puVar19 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (**(code **)*puVar19)();
        uVar15 = uVar15 & 0xffffffff;
      }
      FUN_027e00c8(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0),&local_70);
      lVar1 = *(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0);
      if (*(byte *)(lVar1 + 0x1e3363) < 10) {
        local_70 = CONCAT44(local_70._4_4_,
                            (uint)local_70 &
                            (1 << (ulong)(*(byte *)(lVar1 + 0x1e3363) & 0x1f) ^ 0xffffffffU));
      }
      if (*(byte *)(lVar1 + 0x1e3364) < 10) {
        local_70 = CONCAT44(local_70._4_4_,
                            (uint)local_70 &
                            (1 << (ulong)(*(byte *)(lVar1 + 0x1e3364) & 0x1f) ^ 0xffffffffU));
      }
      if (*(byte *)(lVar1 + 0x1e3365) < 10) {
        local_70 = CONCAT44(local_70._4_4_,
                            (uint)local_70 &
                            (1 << (ulong)(*(byte *)(lVar1 + 0x1e3365) & 0x1f) ^ 0xffffffffU));
      }
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar13 + 0xd0) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar13 + 0xd0) + 8), puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
      local_90 = (uint)local_70;
    }
  }
  if (*(uint *)(param_1 + 0x55d2c) < 10) {
    local_70 = CONCAT44(local_70._4_4_,
                        local_90 & (1 << (ulong)(*(uint *)(param_1 + 0x55d2c) & 0x1f) ^ 0xffffffffU)
                       );
  }
  iVar11 = *(int *)(param_1 + 0x7440);
  uVar17 = 10;
  if (iVar11 < 10) {
    bVar31 = 0;
    iVar27 = 0x3c;
    uVar17 = 0x14;
    switch(iVar11) {
    case 5:
      bVar31 = 1;
      iVar27 = 0x14;
      uVar17 = 0x50;
      break;
    case 6:
      bVar31 = 1;
      iVar27 = 0x28;
      uVar17 = 0x3c;
      break;
    case 7:
      bVar31 = 1;
      uVar17 = 0x28;
      break;
    case 8:
      bVar31 = 0;
      uVar17 = 0x1e;
      break;
    case 9:
      break;
    default:
      if (iVar11 < 3) {
        iVar27 = 0;
        bVar31 = 1;
        uVar17 = 100;
      }
      else {
        local_88 = puVar7 + 0x10;
        pcStack_80 = "Museum2Built";
        uVar15 = FUN_0273f0a0(&local_88);
        bVar10 = (uVar15 & 1) == 0;
        bVar31 = 1;
        iVar27 = 10;
        if (bVar10) {
          iVar27 = 0;
        }
        uVar17 = 0x5a;
        if (bVar10) {
          uVar17 = 100;
        }
      }
    }
  }
  else {
    bVar31 = 0;
    iVar27 = 0x3c;
  }
  puVar6 = PTR_DAT_04bb39d8;
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar22 = *puVar14 ^ *puVar14 << 0xb;
  uVar2 = puVar14[3];
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar22 = uVar22 >> 8 ^ uVar2 >> 0x13 ^ uVar22 ^ uVar2;
  puVar14[2] = uVar2;
  puVar14[3] = uVar22;
  uVar22 = (uint)((ulong)uVar22 * 100 >> 0x20);
  if (uVar22 < uVar17) {
    return;
  }
  FUN_021eb8f0(&local_70);
  FUN_021ebc40(&local_70,0,0,0);
  FUN_021ec000(&local_70);
  uVar2 = (uint)local_70 - ((uint)local_70 >> 1 & 0x55555555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar2 = uVar2 + (uVar2 >> 0x10) & 0x3f;
  if (uVar2 == 0) {
    return;
  }
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
  bVar10 = false;
  uVar3 = puVar14[3];
  uVar28 = 0xffffffff;
  uVar21 = *puVar14 ^ *puVar14 << 0xb;
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar21 = uVar21 >> 8 ^ uVar3 >> 0x13 ^ uVar21 ^ uVar3;
  puVar14[2] = uVar3;
  puVar14[3] = uVar21;
  puVar8 = PTR_DAT_04bb39b0;
  if (((uint)local_70 != 0) &&
     (uVar3 = (uint)local_70 - ((uint)local_70 >> 1 & 0x55555555),
     uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333),
     uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f, uVar3 = uVar3 + (uVar3 >> 8),
     uVar21 = (uint)((ulong)uVar21 * (ulong)uVar2 >> 0x20),
     uVar21 < (uVar3 + (uVar3 >> 0x10) & 0x3f))) {
    iVar11 = uVar21 + 2;
    uVar21 = (uint)local_70;
    do {
      iVar11 = iVar11 + -1;
      if (iVar11 < 2) {
        uVar28 = uVar21 - 1 & (uVar21 ^ 0xffffffff);
        uVar28 = uVar28 - (uVar28 >> 1 & 0x55555555);
        uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
        uVar21 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
        uVar21 = uVar21 + (uVar21 >> 8);
        uVar21 = uVar21 + (uVar21 >> 0x10);
        uVar28 = uVar21 & 0x3f;
        if (uVar28 < 10) {
          bVar10 = true;
          local_70 = CONCAT44(local_70._4_4_,
                              (uint)local_70 & (1 << (ulong)(uVar21 & 0x1f) ^ 0xffffffffU));
          goto LAB_021ad230;
        }
        break;
      }
      uVar21 = uVar21 - 1 & uVar21;
    } while (uVar21 != 0);
    bVar10 = false;
  }
LAB_021ad230:
  local_68 = CONCAT44(local_68._4_4_,uVar28);
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_021ad298:
    if (*pbVar20 < 8) goto LAB_021ad310;
LAB_021ad2a4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_021ad308:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_021ad310;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar13 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar14 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar14 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar14 & 8) != 0) {
        pbVar20 = (byte *)(lVar13 + 0x471);
      }
    }
    local_74[0] = *pbVar20;
    if (7 < local_74[0]) goto LAB_021ad308;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_021ad298;
      }
      goto LAB_021ad2a4;
    }
LAB_021ad310:
    local_74[0] = *pbVar20;
    if (7 < local_74[0]) {
      local_74[0] = 0xff;
    }
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "HasAcquaintanceship";
  iVar11 = FUN_02746c30(uVar28,local_74,&local_88);
  if (iVar11 != 0) {
    lVar13 = param_1 + (ulong)uVar28 * 0xba0;
    if (!bVar10) {
      lVar13 = param_1;
    }
    uVar15 = FUN_02152e10(lVar13 + 0x8b0);
    if (((uVar15 & 1) == 0) && (uVar15 = FUN_021a57c0(param_1,&local_68), (uVar15 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x55c28) = (undefined4)local_68;
    }
  }
  bVar9 = (bool)(iVar27 + uVar17 <= uVar22 & ((bVar9 | bVar31) ^ 1) ^ 1);
  if (uVar2 < 2) {
    bVar9 = true;
  }
  if (bVar9) {
    return;
  }
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
  bVar9 = false;
  uVar28 = puVar14[3];
  uVar17 = 0xffffffff;
  uVar22 = *puVar14 ^ *puVar14 << 0xb;
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar22 = uVar22 >> 8 ^ uVar28 >> 0x13 ^ uVar22 ^ uVar28;
  puVar14[2] = uVar28;
  puVar14[3] = uVar22;
  if (((uint)local_70 != 0) &&
     (uVar28 = (uint)local_70 - ((uint)local_70 >> 1 & 0x55555555),
     uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333),
     uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f, uVar28 = uVar28 + (uVar28 >> 8),
     uVar22 = (uint)((ulong)uVar22 * (ulong)(uVar2 - 1) >> 0x20),
     uVar22 < (uVar28 + (uVar28 >> 0x10) & 0x3f))) {
    iVar11 = uVar22 + 2;
    uVar22 = (uint)local_70;
    do {
      iVar11 = iVar11 + -1;
      if (iVar11 < 2) {
        uVar17 = uVar22 - 1 & (uVar22 ^ 0xffffffff);
        uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
        uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
        uVar22 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
        uVar22 = uVar22 + (uVar22 >> 8);
        uVar22 = uVar22 + (uVar22 >> 0x10);
        uVar17 = uVar22 & 0x3f;
        if (uVar17 < 10) {
          bVar9 = true;
          local_70 = CONCAT44(local_70._4_4_,
                              (uint)local_70 & (1 << (ulong)(uVar22 & 0x1f) ^ 0xffffffffU));
          goto LAB_021ad4c0;
        }
        break;
      }
      uVar22 = uVar22 - 1 & uVar22;
    } while (uVar22 != 0);
    bVar9 = false;
  }
LAB_021ad4c0:
  lVar13 = *(long *)puVar8;
  local_68 = CONCAT44(local_68._4_4_,uVar17);
  pbVar20 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_021ad51c:
    if (7 < *pbVar20) {
LAB_021ad528:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar31 = *(byte *)(lVar13 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar31 != 0xffffffffffffffff) {
          puVar14 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar31 & 0xffffffffU) * 0x20;
          if (7 < bVar31) {
            puVar14 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar14 & 8) != 0) {
            pbVar20 = (byte *)(lVar13 + 0x471);
          }
        }
        local_74[0] = *pbVar20;
        if (local_74[0] < 8) goto LAB_021ad5a8;
      }
      pbVar20 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_021ad51c;
      }
      goto LAB_021ad528;
    }
  }
  local_74[0] = *pbVar20;
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
LAB_021ad5a8:
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "HasAcquaintanceship";
  iVar11 = FUN_02746c30(uVar17,local_74,&local_88);
  if (iVar11 != 0) {
    lVar13 = param_1 + (ulong)uVar17 * 0xba0;
    if (!bVar9) {
      lVar13 = param_1;
    }
    uVar15 = FUN_02152e10(lVar13 + 0x8b0);
    if (((uVar15 & 1) == 0) && (uVar15 = FUN_021a57c0(param_1,&local_68), (uVar15 & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x55c2c) = (undefined4)local_68;
    }
  }
  return;
}

