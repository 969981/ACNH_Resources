
void FUN_021a035c(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  uint *puVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined1 local_b8;
  byte local_b7;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  byte local_8f;
  undefined1 uStack_85;
  uint local_84;
  undefined *local_80;
  char *local_78;
  undefined1 local_70;
  byte local_6f;
  uint local_68;
  int local_64;
  
  puVar7 = PTR_DAT_04bb27d0;
  plVar16 = *(long **)PTR_DAT_04bb27d0;
  if (((plVar16 != (long *)0x0) && (plVar16[5] != 0)) && ((int)plVar16[0x10] == 1)) {
    return;
  }
  uVar6 = *(ushort *)PTR_DAT_04bb6298;
  uVar17 = (ulong)(short)uVar6;
  if (uVar17 == 0xffffffffffffffff) {
LAB_021a0474:
    if (*(int *)(param_1 + 0x7444) != -1) {
      return;
    }
    if (*(short *)(param_1 + 0x7448) != 0) {
      local_80 = *(undefined **)(param_1 + 0x7448);
      FUN_00a80f0c(&local_80,1,0,0);
      iVar9 = FUN_00a813c0(&local_80);
      if (iVar9 < 0) {
        return;
      }
      plVar16 = *(long **)puVar7;
    }
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < (uint)(int)(short)uVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x19 & 1) != 0) {
      return;
    }
    puVar1 = PTR_DAT_04bc39f8 + (uVar17 & 0xffffffff) * 8;
    if (0xff < uVar6) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return;
    }
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar17 & 0xffffffff) * 8);
    if (0xff < uVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0xf & 1) == 0) goto LAB_021a0474;
  }
  *(undefined4 *)(param_1 + 0x7444) = 0xffffffff;
  puVar7 = PTR_DAT_04bb2020;
  if ((plVar16[2] != 0) && ((*(uint *)(PTR_DAT_04bc1240 + 8) & 1) != 0)) {
    return;
  }
  if (1 < *(byte *)(*plVar16 + 0x476) || *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x43080996) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) {
    return;
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "FinishiPC1Prologue";
  uVar17 = FUN_0273f0a0(&local_80);
  puVar1 = PTR_DAT_04bb32e8;
  if ((uVar17 & 1) == 0) {
    return;
  }
  uVar18 = *(undefined8 *)PTR_DAT_04bb32f0;
  lVar11 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
  iVar9 = FUN_0252d29c();
  local_64 = iVar9;
  uVar17 = FUN_00873540(uVar18,lVar11,1,1);
  if ((uVar17 & 1) != 0) {
    return;
  }
  if ((iVar9 != -1) && (uVar17 = FUN_0087d754(uVar18,&local_64,lVar11,1), (uVar17 & 1) != 0)) {
    return;
  }
  uVar17 = FUN_00882d58(uVar18,lVar11);
  if ((uVar17 & 1) != 0) {
    return;
  }
  local_78 = "NormalLive";
  local_80 = puVar7 + 0x10;
  uVar17 = FUN_0087322c(uVar18,&local_80,lVar11,1,1);
  if ((uVar17 & 1) != 0) {
    return;
  }
  local_98 = "BirthdayLive";
  local_a0 = puVar7 + 0x10;
  uVar17 = FUN_0087322c(uVar18,&local_a0,lVar11,1,1);
  if ((uVar17 & 1) != 0) {
    return;
  }
  local_c8 = puVar7 + 0x10;
  local_c0 = "TkkFirstLiveReserved";
  uVar17 = FUN_0273f0a0(&local_c8);
  if ((uVar17 & 1) != 0) {
    return;
  }
  lVar11 = FUN_0264d510();
  local_78 = (char *)(lVar11 + 0xe7188);
  local_70 = 1;
  if (*(long **)(lVar11 + 0xe71b0) == (long *)0x0) {
    local_6f = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar11 + 0xe71b0);
    local_6f = 0;
    if (puVar12 != (undefined8 *)0x0) {
      local_6f = (**(code **)*puVar12)();
    }
  }
  local_6f = local_6f & 1;
  local_80 = PTR_DAT_04bb62b8 + 0x10;
  uVar21 = *(uint *)(*(long *)(lVar11 + 0xe7198) + *(long *)(lVar11 + 0xe7190) + 0x10);
  local_68 = uVar21;
  FUN_02640184(&local_80);
  uVar17 = nn::time::IsValidDate(uVar21 & 0xffff,uVar21 >> 0x10 & 0xff,uVar21 >> 0x18);
  if ((uVar17 & 1) != 0) {
    local_80 = (undefined *)FUN_0272eca4(&local_68,1);
    local_a0 = *(undefined **)(*(long *)puVar1 + 0x4060);
    iVar9 = FUN_00a82474(&local_a0,&local_80);
    if (iVar9 < 7) {
      return;
    }
  }
  lVar11 = FUN_0265afd0();
  if (lVar11 == 0) {
    return;
  }
  local_84 = 0;
  local_70 = 1;
  local_78 = (char *)lVar11;
  if (*(long **)(lVar11 + 0x28) == (long *)0x0) {
    bVar8 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28);
    bVar8 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      bVar8 = (**(code **)*puVar12)();
    }
  }
  local_6f = bVar8 & 1;
  uVar21 = 0;
  local_80 = PTR_DAT_04bb4dc8 + 0x10;
  iVar9 = *(int *)(param_1 + 0x92c0);
  if ((*(char *)(param_1 + 0xaf9) != '\0') && (iVar9 != 0)) {
    pbVar2 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
    uVar17 = (ulong)*pbVar2;
    if ((uVar17 < 0x23) &&
       (((pbVar2[1] <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(pbVar2[1] & 0x1f) & 1) != 0)) &&
        (*(int *)(pbVar2 + 0x10764) == 0)))) {
      uVar21 = 1;
      local_84 = 1;
    }
    else {
      uVar21 = 0;
    }
  }
  if ((*(char *)(param_1 + 0x1699) != '\0') && (iVar9 != 1)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x13230);
    if (((uVar17 < 0x23) &&
        ((*(byte *)(lVar14 + 0x13231) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x13231) & 0x1f) &
          1) != 0)))) && (*(int *)(lVar14 + 0x23994) == 0)) {
      uVar21 = uVar21 | 2;
      local_84 = uVar21;
    }
  }
  if ((*(char *)(param_1 + 0x2239) != '\0') && (iVar9 != 2)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x26460);
    if ((uVar17 < 0x23) &&
       (((*(byte *)(lVar14 + 0x26461) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x26461) & 0x1f) &
          1) != 0)) && (*(int *)(lVar14 + 0x36bc4) == 0)))) {
      uVar21 = uVar21 | 4;
      local_84 = uVar21;
    }
  }
  if ((*(char *)(param_1 + 0x2dd9) != '\0') && (iVar9 != 3)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x39690);
    if (((uVar17 < 0x23) &&
        ((*(byte *)(lVar14 + 0x39691) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x39691) & 0x1f) &
          1) != 0)))) && (*(int *)(lVar14 + 0x49df4) == 0)) {
      uVar21 = uVar21 | 8;
      local_84 = uVar21;
    }
  }
  if ((*(char *)(param_1 + 0x3979) != '\0') && (iVar9 != 4)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x4c8c0);
    if ((uVar17 < 0x23) &&
       (((*(byte *)(lVar14 + 0x4c8c1) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x4c8c1) & 0x1f) &
          1) != 0)) && (*(int *)(lVar14 + 0x5d024) == 0)))) {
      uVar21 = uVar21 | 0x10;
      local_84 = uVar21;
    }
  }
  if ((*(char *)(param_1 + 0x4519) != '\0') && (iVar9 != 5)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x5faf0);
    if (((uVar17 < 0x23) &&
        ((*(byte *)(lVar14 + 0x5faf1) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x5faf1) & 0x1f) &
          1) != 0)))) && (*(int *)(lVar14 + 0x70254) == 0)) {
      uVar21 = uVar21 | 0x20;
      local_84 = uVar21;
    }
  }
  if ((*(char *)(param_1 + 0x50b9) != '\0') && (iVar9 != 6)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x72d20);
    if ((uVar17 < 0x23) &&
       (((*(byte *)(lVar14 + 0x72d21) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x72d21) & 0x1f) &
          1) != 0)) && (*(int *)(lVar14 + 0x83484) == 0)))) {
      uVar21 = uVar21 | 0x40;
      local_84 = uVar21;
    }
  }
  if ((*(char *)(param_1 + 0x5c59) != '\0') && (iVar9 != 7)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x85f50);
    if (((uVar17 < 0x23) &&
        ((*(byte *)(lVar14 + 0x85f51) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x85f51) & 0x1f) &
          1) != 0)))) && (*(int *)(lVar14 + 0x966b4) == 0)) {
      uVar21 = uVar21 | 0x80;
      local_84 = uVar21;
    }
  }
  uVar22 = uVar21;
  if ((*(char *)(param_1 + 0x67f9) != '\0') && (iVar9 != 8)) {
    lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
    uVar17 = (ulong)*(byte *)(lVar14 + 0x99180);
    if ((uVar17 < 0x23) &&
       (((*(byte *)(lVar14 + 0x99181) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0x99181) & 0x1f) &
          1) != 0)) && (uVar22 = uVar21 | 0x100, *(int *)(lVar14 + 0xa98e4) != 0)))) {
      uVar22 = uVar21;
    }
  }
  lVar14 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
  if ((((*(char *)(param_1 + 0x7399) != '\0') && (iVar9 != 9)) &&
      ((uVar17 = (ulong)*(byte *)(lVar14 + 0xac3b0), uVar17 < 0x23 &&
       ((*(byte *)(lVar14 + 0xac3b1) <= (byte)PTR_DAT_04bc27f0[uVar17] &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(*(byte *)(lVar14 + 0xac3b1) & 0x1f) &
         1) != 0)))))) && (*(int *)(lVar14 + 0xbcb14) == 0)) {
    uVar22 = uVar22 | 0x200;
    local_84 = uVar22;
  }
  cVar4 = *(char *)(lVar14 + 0x1e335d);
  cVar5 = *(char *)(lVar14 + 0x1e3362);
  FUN_025196e4(&uStack_85);
  if ((cVar4 == -1) || (cVar4 == cVar5)) {
    uVar21 = (uint)cVar5;
    if ((uVar21 != 0xffffffff) &&
       (pcVar13 = (char *)FUN_0265cf70(uVar21,&uStack_85), pcVar13 != (char *)0x0)) {
      local_90 = 1;
      local_98 = pcVar13;
      if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
        local_8f = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(pcVar13 + 0x28);
        local_8f = 0;
        if (puVar12 != (undefined8 *)0x0) {
          local_8f = (**(code **)*puVar12)();
        }
      }
      puVar1 = PTR_DAT_04bb6ac8;
      local_8f = local_8f & 1;
      local_a0 = PTR_DAT_04bb6ac8 + 0x10;
      local_b0 = puVar7 + 0x10;
      pcStack_a8 = "NextMoveOutTalk";
      iVar9 = FUN_02746e10(*(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8),&local_b0);
      if (iVar9 != 0) {
        local_b8 = 1;
        local_c0 = pcVar13;
        if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
          local_b7 = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(pcVar13 + 0x28);
          local_b7 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            local_b7 = (**(code **)*puVar12)();
          }
        }
        local_b7 = local_b7 & 1;
        local_c8 = puVar1 + 0x10;
        local_d8 = puVar7 + 0x10;
        local_d0 = "MoveCancelTalk";
        iVar9 = FUN_02746e10(*(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8),&local_d8);
        FUN_02640184(&local_c8);
        FUN_02640184(&local_a0);
        goto joined_r0x021a0e74;
      }
      FUN_02640184(&local_a0);
    }
  }
  else {
    uVar21 = (uint)cVar4;
    pcVar13 = (char *)FUN_0265cf70(uVar21,&uStack_85);
    if (pcVar13 != (char *)0x0) {
      local_90 = 1;
      local_98 = pcVar13;
      if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
        local_8f = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(pcVar13 + 0x28);
        local_8f = 0;
        if (puVar12 != (undefined8 *)0x0) {
          local_8f = (**(code **)*puVar12)();
        }
      }
      local_8f = local_8f & 1;
      local_a0 = PTR_DAT_04bb6ac8 + 0x10;
      local_c8 = puVar7 + 0x10;
      local_c0 = "NextMoveOutTalk";
      iVar9 = FUN_02746e10(*(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8),&local_c8);
      FUN_02640184(&local_a0);
joined_r0x021a0e74:
      if ((iVar9 == 0) && (uVar21 < 10)) {
        uVar22 = uVar22 & (1 << (ulong)(uVar21 & 0x1f) ^ 0xffffffffU);
        local_84 = uVar22;
      }
    }
  }
  uVar21 = uVar22 - (uVar22 >> 1 & 0x55555555);
  uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
  uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
  uVar21 = uVar21 + (uVar21 >> 8);
  uVar21 = uVar21 + (uVar21 >> 0x10);
  uVar20 = uVar21 & 0x3f;
  if (((uVar21 & 0x3f) != 0) && (uVar17 = FUN_01956f50(uVar20), (uVar17 & 1) != 0)) {
    FUN_02507c6c(&local_d8,1,1,1,0);
    if ((byte)local_d8 < 8) {
      puVar1 = PTR_DAT_04bb4c18 + 0x10;
      do {
        local_e0[0] = SUB81(local_d8,0);
        local_dc[0] = local_e0[0];
        lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_e0,1);
        if (lVar14 != 0) {
          local_98 = "ValidatePlayerSaveFlag";
          local_a0 = puVar7 + 0x10;
          iVar9 = FUN_0274bce0(local_dc,&local_a0);
          if (iVar9 == 0) goto LAB_021a1124;
          local_90 = 1;
          local_98 = (char *)(lVar14 + 0x17b88);
          if (*(long **)(lVar14 + 0x17bb0) == (long *)0x0) {
            bVar8 = 0;
          }
          else {
            puVar12 = (undefined8 *)**(long **)(lVar14 + 0x17bb0);
            bVar8 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              bVar8 = (**(code **)*puVar12)();
            }
          }
          local_8f = bVar8 & 1;
          lVar23 = 0;
          lVar19 = 0;
          local_a0 = puVar1;
          do {
            uVar21 = 1 << (ulong)((uint)lVar19 & 0x1f);
            if ((uVar21 & uVar22) != 0) {
              lVar15 = FUN_026b338c(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + lVar23,
                                    *(long *)(lVar14 + 0x17b98) + *(long *)(lVar14 + 0x17b90) + 0x1c
                                   );
              if (lVar15 != 0) {
                local_c0 = "HasAcquaintanceship";
                local_c8 = puVar7 + 0x10;
                iVar9 = FUN_02746e10(lVar15 + 0x38,&local_c8);
                if (iVar9 != 0) {
                  pcStack_a8 = "FirstMeetGreetAtThisVillage";
                  local_b0 = puVar7 + 0x10;
                  iVar9 = FUN_02746e10(lVar15 + 0x38,&local_b0);
                  if (iVar9 != 0) goto LAB_021a1000;
                }
              }
              uVar22 = uVar22 & (uVar21 ^ 0xffffffff);
            }
LAB_021a1000:
            lVar19 = lVar19 + 1;
            lVar23 = lVar23 + 0x13230;
          } while (lVar19 != 10);
          FUN_02507e7c(&local_d8);
          FUN_02640184(&local_a0);
        }
      } while ((byte)local_d8 < 8);
      uVar21 = uVar22 - (uVar22 >> 1 & 0x55555555);
      uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
      uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
      uVar21 = uVar21 + (uVar21 >> 8);
      uVar21 = uVar21 + (uVar21 >> 0x10);
      uVar20 = uVar21 & 0x3f;
      local_84 = uVar22;
      if ((uVar21 & 0x3f) == 0) goto LAB_021a1124;
    }
    else {
      local_84 = uVar22;
    }
    FUN_038e7ea0(&local_a0);
    uVar21 = (uint)local_a0 ^ (uint)local_a0 << 0xb;
    uVar10 = FUN_021a1140(&local_84,
                          (int)((ulong)(uVar21 >> 8 ^ local_98._4_4_ >> 0x13 ^
                                       uVar21 ^ local_98._4_4_) * (ulong)uVar20 >> 0x20) + 1);
    *(undefined4 *)(param_1 + 0x7444) = uVar10;
    *(undefined8 *)(param_1 + 0x7448) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
LAB_021a1124:
  FUN_02640184(&local_80);
  return;
}

