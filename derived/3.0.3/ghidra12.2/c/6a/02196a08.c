
void FUN_02196a08(byte *param_1,uint param_2,byte param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined *local_c8;
  char *pcStack_c0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  char *local_a0;
  undefined *puStack_98;
  long local_90;
  undefined1 local_88;
  byte local_87;
  undefined *local_80;
  long local_78;
  undefined1 local_70;
  byte local_6f;
  byte local_68 [4];
  uint local_64;
  
  uVar18 = (ulong)param_2;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_64 = param_2;
  FUN_0252d11c(local_68);
  if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) || 7 < local_68[0]) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) {
LAB_02196acc:
    lVar13 = 0;
  }
  else {
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar14 + 0x38))();
      lVar13 = 0;
      if (lVar9 != 0) {
        lVar13 = lVar9 + 0x70;
      }
    }
    else {
      if ((puVar14 == (undefined8 *)0x0) || ((long *)puVar14[0x26] == (long *)0x0))
      goto LAB_02196acc;
      lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
    }
  }
  lVar9 = lVar13 + 0xa8;
  if (lVar13 == 0) {
    lVar9 = 0;
  }
  lVar10 = FUN_0265cf70(uVar18,local_68);
  if ((lVar13 == 0) || (lVar10 == 0)) {
LAB_02196e78:
    iVar7 = FUN_0219782c(lVar10,10,1,uVar18);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar2 = iVar7 + (uint)*param_1;
    uVar16 = uVar2;
    if (0x1e < uVar2) {
      uVar16 = 0x1f;
    }
    *param_1 = (byte)uVar16 & ((byte)((int)uVar2 >> 0x1f) ^ 0xff);
    param_1[0x19] = 0x1f < (int)uVar2;
  }
  else {
    local_70 = 1;
    local_78 = lVar10;
    if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar14 == (undefined8 *)0x0)) {
      bVar4 = 0;
    }
    else {
      bVar4 = (**(code **)*puVar14)();
    }
    local_6f = bVar4 & 1;
    local_80 = PTR_DAT_04bb6ac8 + 0x10;
    local_88 = 1;
    local_90 = lVar9;
    if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar14 == (undefined8 *)0x0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = (**(code **)*puVar14)();
    }
    puVar3 = PTR_DAT_04bb2020;
    local_87 = bVar5 & 1;
    puStack_98 = PTR_DAT_04bb4dc8 + 0x10;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_a0 = "HasAcquaintanceship";
    local_a8 = puVar1;
    iVar7 = FUN_02746e10(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_a8);
    if (iVar7 != 0) {
      pcStack_b0 = "FirstMeetGreetAtThisVillage";
      local_b8 = puVar1;
      iVar7 = FUN_02746e10(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8),&local_b8);
      if (iVar7 != 0) {
        if (DAT_05454078 != param_2) {
          if ((param_2 < 10) && ((&DAT_053fee41)[(ulong)param_2 * 0xba0] != '\0')) {
            pcVar17 = &DAT_053feb60 + uVar18 * 0xba0;
            lVar13 = *(long *)PTR_DAT_04bb2208;
            uVar8 = FUN_006bd550("MarketBuildingTalk",0);
            local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
            lVar13 = FUN_021cb820(lVar13 + 0x660,&local_a8);
            if (lVar13 != 0) {
              puVar11 = (ushort *)FUN_00aa97d0(lVar13,2,0x54706054,DAT_054573c8);
              pcVar15 = pcVar17;
              if ((puVar11 != (ushort *)0x0) && (*puVar11 < 0x80)) {
                pcVar15 = pcVar17 + *puVar11;
              }
              if (*pcVar15 != '\0') goto LAB_02196d7c;
            }
            if ((&DAT_053fee41)[(ulong)param_2 * 0xba0] != '\0') {
              lVar13 = *(long *)PTR_DAT_04bb2208;
              uVar8 = FUN_006bd550("MileTourTicketSupportTalk",0);
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar8);
              lVar13 = FUN_021cb820(lVar13 + 0x660,&local_a8);
              if (lVar13 != 0) {
                puVar11 = (ushort *)FUN_00aa97d0(lVar13,2,0x54706054,DAT_054573c8);
                if ((puVar11 != (ushort *)0x0) && (*puVar11 < 0x80)) {
                  pcVar17 = pcVar17 + *puVar11;
                }
                if (*pcVar17 != '\0') goto LAB_02196d7c;
              }
            }
          }
          local_a0 = "EasterRecipeTalk";
          local_a8 = puVar3 + 0x10;
          sVar6 = FUN_02196ed0(&local_64,&local_a8);
          if (sVar6 == 0) {
            pcStack_b0 = "ChristmasApproachTalk";
            local_b8 = puVar3 + 0x10;
            sVar6 = FUN_02196ed0(&local_64,&local_b8);
            if (sVar6 == 0) {
              pcStack_c0 = "EmoticonGetTalk";
              local_c8 = puVar3 + 0x10;
              sVar6 = FUN_02196ed0(&local_64,&local_c8);
              if (sVar6 == 0) {
                local_a0 = "IslandRepTalk";
                local_a8 = puVar3 + 0x10;
                sVar6 = FUN_02196ed0(&local_64,&local_a8);
                if (sVar6 != 0) {
                  pcStack_b0 = "NnpcAppE_Rep_OccuredToday";
                  local_b8 = puVar3 + 0x10;
                  iVar7 = FUN_0274bce0(local_68,&local_b8);
                  if (iVar7 == 0) {
                    pcStack_c0 = "CountAppE_RepTalk";
                    local_c8 = puVar3 + 0x10;
                    iVar7 = FUN_0273ea30(&local_c8);
                    if (iVar7 == 0) goto LAB_02196d7c;
                  }
                }
                if (((9 < param_2) || ((&DAT_053fee41)[(ulong)param_2 * 0xba0] == '\0')) ||
                   ((uVar12 = FUN_02197070(&DAT_053fe348 + (ulong)param_2 * 0xba0),
                    (uVar12 & 1) == 0 &&
                    (uVar12 = FUN_02197450(&DAT_053fe348 + (ulong)param_2 * 0xba0),
                    (uVar12 & 1) == 0)))) {
                  FUN_02640184(&puStack_98);
                  lVar10 = FUN_02640184(&local_80);
                  goto LAB_02196e78;
                }
              }
            }
          }
        }
LAB_02196d7c:
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *param_1 = 0x1f;
        param_1[0x19] = (param_3 ^ 0xff) & 1;
      }
    }
    if ((((bVar5 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
    if ((((bVar4 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  return;
}

