
void FUN_021b7120(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  ushort *puVar14;
  char cVar15;
  uint uVar16;
  long lVar17;
  char *pcVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  ulong uVar23;
  char *pcVar24;
  uint local_ac;
  undefined *puStack_a0;
  char *local_98;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  byte local_64 [4];
  
  lVar17 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar17 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar17 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar2 = (byte *)(lVar17 + 0x48);
    }
    if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar17 + 0x472) != bVar5)) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x55df8) != '\0') {
    return;
  }
  FUN_0252d11c(local_64);
  lVar17 = *(long *)PTR_DAT_04bb32f0;
  local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_70 >> 0x20) < '\x05') {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_80 = (undefined *)(lVar12 + -0x15180);
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
  }
  puVar6 = PTR_DAT_04bb2020;
  uVar23 = local_70 >> 0x30;
  local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
  local_70 = CONCAT26((short)uVar23,(undefined6)local_70) & 0xff00ffffffffffff;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
    return;
  }
  if (7 < local_64[0]) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "FireworkCannotGetNnpcItemFlag";
  local_80 = puVar1;
  iVar9 = FUN_0274bce0(local_64,&local_80);
  if (iVar9 != 0) {
    return;
  }
  pcStack_88 = "FireworksApproachNpcIndex";
  local_90 = puVar1;
  iVar9 = FUN_0274bce0(local_64,&local_90);
  if (lVar17 == 0) {
    return;
  }
  if (iVar9 != 0) {
    return;
  }
  iVar9 = FUN_00883634(lVar17);
  if (iVar9 < 0) {
    return;
  }
  local_98 = "FireworksLastApproachYear";
  puStack_a0 = puVar6 + 0x10;
  iVar9 = FUN_0274bce0(local_64,&puStack_a0);
  puVar8 = PTR_DAT_04bb6380;
  puVar1 = PTR_DAT_04bb2208;
  if (iVar9 == (short)local_70) {
    return;
  }
  local_ac = 0;
  uVar23 = 0;
  do {
    pcVar24 = (char *)(param_1 + uVar23 * 0xba0 + 0x818);
    lVar17 = *(long *)puVar1;
    uVar10 = FUN_006bd550("FireworksApproachTalk",0);
    local_80._0_4_ = uVar10;
    puVar13 = (uint *)FUN_021cb820(lVar17 + 0x660,&local_80);
    if (puVar13 != (uint *)0x0) {
      pcVar18 = pcVar24;
      if (*puVar13 != 0) {
        cVar15 = *PTR_DAT_04bb6378;
        do {
          puVar7 = PTR_DAT_04bb6378;
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            uVar11 = *puVar13;
          }
          else {
            uVar11 = *(uint *)(puVar8 + 8);
            if (-1 < (int)uVar11) {
              if (((ushort *)((ulong)uVar11 + (long)puVar13) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar11 + (long)puVar13), uVar4 < 0x80)) {
                pcVar18 = pcVar24 + uVar4;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
            uVar11 = *puVar13;
          }
          if ((uVar11 == 0) || (puVar19 = (uint *)(ulong)uVar11, puVar13 == puVar19)) break;
          lVar17 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar13 + (lVar17 - (long)puVar19);
          if (lVar17 == 0) break;
          uVar20 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
          *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
          if (uVar20 == 0) break;
          piVar21 = (int *)(lVar17 + 4);
          while (piVar21[-1] != 0x54706054) {
            piVar21 = piVar21 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_021b7408;
          }
          iVar9 = 0;
          if (*piVar21 != -1) {
            iVar9 = *piVar21;
          }
          *(int *)(puVar8 + 8) = iVar9;
          if (*puVar13 == 0) break;
        } while( true );
      }
LAB_021b7408:
      if (*pcVar18 != '\0') {
        return;
      }
    }
    lVar17 = *(long *)puVar1;
    uVar10 = FUN_006bd550("FireworksFieldNpc",0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar10);
    puVar13 = (uint *)FUN_021cb820(lVar17 + 0x660,&local_80);
    if (puVar13 != (uint *)0x0) {
      pcVar18 = pcVar24;
      if (*puVar13 != 0) {
        cVar15 = *PTR_DAT_04bb6378;
        do {
          puVar7 = PTR_DAT_04bb6378;
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            uVar11 = *puVar13;
          }
          else {
            uVar11 = *(uint *)(puVar8 + 8);
            if (-1 < (int)uVar11) {
              if (((ushort *)((ulong)uVar11 + (long)puVar13) != (ushort *)0x0) &&
                 (uVar4 = *(ushort *)((ulong)uVar11 + (long)puVar13), uVar4 < 0x80)) {
                pcVar18 = pcVar24 + uVar4;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
            uVar11 = *puVar13;
          }
          if ((uVar11 == 0) || (puVar19 = (uint *)(ulong)uVar11, puVar13 == puVar19)) break;
          lVar17 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar13 + (lVar17 - (long)puVar19);
          if (lVar17 == 0) break;
          uVar20 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
          *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
          if (uVar20 == 0) break;
          piVar21 = (int *)(lVar17 + 4);
          while (piVar21[-1] != 0x54706054) {
            piVar21 = piVar21 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_021b7508;
          }
          iVar9 = 0;
          if (*piVar21 != -1) {
            iVar9 = *piVar21;
          }
          *(int *)(puVar8 + 8) = iVar9;
          if (*puVar13 == 0) break;
        } while( true );
      }
LAB_021b7508:
      if (*pcVar18 != '\0') {
        lVar17 = *(long *)puVar1;
        uVar10 = FUN_006bd550("GotoEventPlazaForCountdown",0);
        local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar10);
        lVar17 = FUN_021cb820(lVar17 + 0x660,&local_80);
        if (lVar17 != 0) {
          puVar14 = (ushort *)FUN_00aa97d0(lVar17,2,0x54706054,DAT_054573c8);
          pcVar18 = pcVar24;
          if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x80)) {
            pcVar18 = pcVar24 + *puVar14;
          }
          if (*pcVar18 != '\0') {
            lVar17 = *(long *)puVar1;
            uVar10 = FUN_006bd550("FireworksAroundWater",0);
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar10);
            lVar17 = FUN_021cb820(lVar17 + 0x660,&local_80);
            if (lVar17 != 0) {
              puVar14 = (ushort *)FUN_00aa97d0(lVar17,2,0x54706054,DAT_054573c8);
              pcVar18 = pcVar24;
              if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x80)) {
                pcVar18 = pcVar24 + *puVar14;
              }
              if (*pcVar18 != '\0') goto LAB_021b72f4;
            }
            lVar17 = *(long *)puVar1;
            uVar10 = FUN_006bd550("ArrivedInEventPlaza",0);
            local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar10);
            lVar17 = FUN_021cb820(lVar17 + 0x660,&local_80);
            if (lVar17 != 0) {
              puVar14 = (ushort *)FUN_00aa97d0(lVar17,2,0x54706054,DAT_054573c8);
              if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x80)) {
                pcVar24 = pcVar24 + *puVar14;
              }
              if (*pcVar24 != '\0') {
                *(char *)(param_1 + 0x55df8) = '\x01';
                pcStack_78 = "FirstMeetGreetAtThisVillage";
                local_80 = puVar6 + 0x10;
                iVar9 = FUN_0265ced0(uVar23 & 0xffffffff,local_64,&local_80);
                if (iVar9 != 0) {
                  local_ac = 1 << (ulong)((uint)uVar23 & 0x1f) | local_ac;
                }
              }
            }
          }
        }
      }
    }
LAB_021b72f4:
    uVar23 = uVar23 + 1;
    if (uVar23 == 10) {
      uVar11 = local_ac - (local_ac >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
      if (uVar11 != 0) {
        puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar16 = *puVar13 ^ *puVar13 << 0xb;
        uVar3 = puVar13[3];
        *puVar13 = puVar13[1];
        puVar13[1] = puVar13[2];
        uVar16 = uVar16 >> 8 ^ uVar3 >> 0x13 ^ uVar16 ^ uVar3;
        puVar13[2] = uVar3;
        puVar13[3] = uVar16;
        uVar16 = (uint)((ulong)uVar16 * (ulong)uVar11 >> 0x20);
        if ((uVar16 < uVar11) && (uVar11 = FUN_038cd8b0(local_ac,uVar16 + 1), -1 < (int)uVar11)) {
          lVar17 = param_1 + (ulong)uVar11 * 0xba0;
          if (9 < uVar11) {
            lVar17 = param_1;
          }
          lVar12 = *(long *)puVar1;
          uVar10 = FUN_006bd550("FireworksApproachTalk",0);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar10);
          lVar12 = FUN_021cb820(lVar12 + 0x660,&local_80);
          if (lVar12 != 0) {
            puVar22 = (undefined1 *)(lVar17 + 0x818);
            puVar14 = (ushort *)FUN_00aa97d0(lVar12,2,0x54706054,DAT_054573c8);
            if ((puVar14 != (ushort *)0x0) && (*puVar14 < 0x80)) {
              puVar22 = puVar22 + *puVar14;
            }
            *puVar22 = 1;
          }
        }
      }
      return;
    }
  } while( true );
}

