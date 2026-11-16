
undefined8 FUN_028d6bec(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  short *psVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined *local_60;
  char *local_58;
  undefined1 local_50;
  byte local_4f;
  uint local_44;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bb32e8;
  puVar1 = PTR_DAT_04bb2020;
  uVar14 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_44 = param_2;
  switch(param_2) {
  case 0:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "RollanTalkBeforeFlag";
    break;
  case 1:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 4;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "TotakekeTalkBeforeFlag";
    break;
  case 2:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "TunekichiTalkBefore";
    local_60 = puVar1;
    uVar7 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    local_58 = "Fireworks";
    local_60 = puVar1;
    uVar10 = FUN_00884390(*(undefined8 *)PTR_DAT_04bb32f0,&local_60,uVar14);
    goto joined_r0x028d7558;
  case 3:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0xd;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "KotonoTalkBeforeFlag";
    break;
  case 4:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x11;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "OwsFirstTalk";
    break;
  case 5:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x15;
    uVar10 = FUN_028d5b80(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "PckTalkBeforeFlag";
    break;
  case 6:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x19;
    local_60 = puVar2;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "JohnnyTalkBeforeFlag";
    local_60 = puVar2;
    uVar14 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    local_58 = "JohnnyQuestFinishFlag";
    break;
  case 7:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x1d;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "SkkTalkBeforeFlag";
    break;
  case 8:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x21;
    uVar10 = FUN_028d5b80(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "TukTalkFirst";
    break;
  case 9:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x25;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "ReijiTalkBeforeFlag";
    break;
  case 10:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x29;
    uVar10 = FUN_028d5b80(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "PynTalkBeforeFlag";
    break;
  case 0xb:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x2d;
    uVar10 = FUN_028d5b80(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "ReiTalkFirst";
    break;
  case 0xc:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x31;
    local_60 = puVar2;
    uVar10 = FUN_028d5b80(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "PknTalkBeforeFlag";
    local_60 = puVar2;
    uVar14 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    local_60 = puVar1 + 0x10;
    local_58 = "Halloween";
    iVar5 = FUN_008842b0(*(undefined8 *)PTR_DAT_04bb32f0,&local_60);
    if (iVar5 != 1) {
      return 0;
    }
    goto switchD_028d6c40_caseD_19;
  case 0xd:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "BeyDaily_TalkFirst";
    uVar7 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    local_58 = "FishingConvention";
    goto LAB_028d70c0;
  case 0xe:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x39;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "KaburibaTalkBeforeFlag";
    break;
  case 0xf:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "ChyDaily_TalkFirst";
    uVar7 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    local_58 = "InsectConvention";
LAB_028d70c0:
    local_60 = puVar1 + 0x10;
    uVar10 = FUN_00884390(*(undefined8 *)PTR_DAT_04bb32f0,&local_60,uVar14);
    if ((uVar10 & 1) == 0) {
      if (local_44 < 0x21) {
        local_58 = *(char **)(PTR_DAT_04bc2a88 + (ulong)local_44 * 8 + 0x88);
      }
      else {
        local_58 = (char *)&DAT_0407ebb1;
      }
      local_60 = puVar1 + 0x10;
      uVar10 = FUN_028d4d70(param_1,&local_60);
      goto joined_r0x028d7558;
    }
    goto switchD_028d6c40_caseD_19;
  case 0x10:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = PTR_DAT_04bc2a88 + 0x41;
    local_60 = puVar2;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "GulBTalkBeforeFlag";
    local_60 = puVar2;
    uVar14 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    local_58 = "GulBQuestFinishFlag";
    break;
  case 0x11:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "KinuyoTalkBoforeFlag";
    uVar14 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    if (local_44 < 0x21) {
      local_58 = *(char **)(PTR_DAT_04bc2a88 + (ulong)local_44 * 8 + 0x88);
    }
    else {
      local_58 = "";
    }
    local_60 = puVar1 + 0x10;
    uVar10 = FUN_028d4d70(param_1,&local_60);
    if ((uVar10 & 1) == 0) goto LAB_028d7588;
    goto switchD_028d6c40_caseD_19;
  case 0x12:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "HgsCloseness";
    iVar5 = FUN_0274bce0(param_3,&local_60);
    if (iVar5 < 7) {
      return 0;
    }
LAB_028d7588:
    lVar8 = FUN_0264d510();
    local_58 = (char *)(lVar8 + 0x1a0d78);
    local_50 = 1;
    if (*(long **)(lVar8 + 0x1a0da0) == (long *)0x0) {
      local_4f = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1a0da0);
      local_4f = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_4f = (**(code **)*puVar9)();
      }
    }
    local_4f = local_4f & 1;
    local_60 = PTR_DAT_04bb6eb0 + 0x10;
    uVar10 = FUN_0289ae64(*(long *)(lVar8 + 0x1a0d88) + *(long *)(lVar8 + 0x1a0d80));
    goto LAB_028d7714;
  case 0x13:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "OwlFinished1stTalk";
    uVar7 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    lVar8 = FUN_0264d510();
    local_58 = (char *)(lVar8 + 0x1bf190);
    local_50 = 1;
    if (*(long **)(lVar8 + 0x1bf1b8) == (long *)0x0) {
      local_4f = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1bf1b8);
      local_4f = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_4f = (**(code **)*puVar9)();
      }
    }
    local_4f = local_4f & 1;
    local_60 = PTR_DAT_04bb64a8 + 0x10;
    uVar10 = FUN_027ba7a4(*(long *)(lVar8 + 0x1bf1a0) + *(long *)(lVar8 + 0x1bf198));
    FUN_02640184(&local_60);
    if (0xfffffff2 < ((uint)((ulong)uVar14 >> 0x20) & 0xff) - 0x12) {
      return 0;
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    goto switchD_028d6c40_caseD_19;
  case 0x14:
    local_58 = "OdekakeFirstTalk";
    break;
  case 0x15:
    local_58 = "DocMysterytourExplain1st";
    break;
  case 0x16:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "SeoFirstmeetingFlag";
    uVar14 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    local_58 = "SeoExchangeItemToday";
    break;
  case 0x17:
  case 0x18:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "MarketConstruction2";
    iVar5 = FUN_0273ea30(&local_60);
    if (iVar5 != 0) {
      return 0;
    }
    puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
    if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar8 = 0;
      if (lVar6 != 0) {
        lVar8 = lVar6 + 0x70;
      }
    }
    else {
      lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    }
    plVar3 = (long *)(lVar8 + 0x1a3d88);
    plVar11 = (long *)*plVar3;
    if (plVar11 == (long *)0x0) {
LAB_028d74bc:
      uVar13 = 1;
    }
    else {
      puVar9 = (undefined8 *)*plVar11;
      lVar8 = 0;
      if (puVar9 == (undefined8 *)0x0) goto LAB_028d74bc;
      lVar8 = (**(code **)*puVar9)();
      uVar13 = (uint)lVar8 ^ 1;
    }
    plVar11 = (long *)(*(long *)puVar2 + 0x4060);
    psVar12 = (short *)(*(long *)puVar2 + 0x4068);
    if (*psVar12 == 0) {
      local_28 = *plVar11;
      if ((char)(local_28 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
        local_60 = (undefined *)(lVar8 + -0x15180);
        lVar8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
        local_28 = lVar8;
      }
      uVar10 = local_28 >> 0x30;
      local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
      local_28 = CONCAT26((short)uVar10,(undefined6)local_28) & 0xff00ffffffffffff;
      psVar12 = (short *)&local_28;
    }
    local_60 = *(undefined **)psVar12;
    uVar10 = FUN_028b425c(lVar8,plVar11,&local_60);
    if ((((uVar13 & 1) == 0) && (lVar8 = *plVar3, lVar8 != 0)) &&
       (puVar9 = *(undefined8 **)(lVar8 + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
    goto joined_r0x028d7558;
  case 0x19:
    goto switchD_028d6c40_caseD_19;
  case 0x1a:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "BuiltTownOffice";
    uVar10 = FUN_0273f0a0(&local_60);
    goto joined_r0x028d7558;
  case 0x1b:
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "PgeTalkFirstFlag";
    uVar14 = FUN_0274bce0(param_3,&local_60);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    lVar8 = FUN_0264d510();
    local_58 = (char *)(lVar8 + 0x1bf190);
    local_50 = 1;
    if (*(long **)(lVar8 + 0x1bf1b8) == (long *)0x0) {
      local_4f = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1bf1b8);
      local_4f = 0;
      if (puVar9 != (undefined8 *)0x0) {
        local_4f = (**(code **)*puVar9)();
      }
    }
    puVar1 = PTR_DAT_04bb64a8;
    local_4f = local_4f & 1;
    local_60 = PTR_DAT_04bb64a8 + 0x10;
    uVar13 = *(uint *)(*(long *)(lVar8 + 0x1bf1a0) + *(long *)(lVar8 + 0x1bf198));
    if (5 < uVar13) {
      uVar13 = 0;
    }
    local_28 = CONCAT44(local_28._4_4_,uVar13);
    FUN_02640184(&local_60);
    if ((int)uVar13 < 5) {
      return 0;
    }
    lVar8 = FUN_0264d510(0);
    local_58 = (char *)(lVar8 + 0x1bf190);
    local_50 = 1;
    if (*(long **)(lVar8 + 0x1bf1b8) == (long *)0x0) {
      bVar4 = 0;
    }
    else {
      puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1bf1b8);
      bVar4 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        bVar4 = (**(code **)*puVar9)();
      }
    }
    local_4f = bVar4 & 1;
    local_60 = puVar1 + 0x10;
    uVar10 = FUN_027ba7a4(*(long *)(lVar8 + 0x1bf1a0) + *(long *)(lVar8 + 0x1bf198));
LAB_028d7714:
    FUN_02640184(&local_60);
joined_r0x028d7558:
    if ((uVar10 & 1) == 0) {
switchD_028d6c40_default:
      return 0;
    }
    goto switchD_028d6c40_caseD_19;
  case 0x1c:
    local_58 = "KppFirstTalk";
    break;
  case 0x1d:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "IsVisitNpcTidyToday";
    local_60 = puVar2;
    iVar5 = FUN_0273ea30(&local_60);
    if (iVar5 != 1) {
      local_58 = "IsCallNpcTidy";
      local_60 = puVar2;
      iVar5 = FUN_0273ea30(&local_60);
      if (iVar5 != 1) {
        return 0;
      }
    }
    local_58 = "NpcTidyFirstTalk";
    break;
  case 0x1e:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "HotelConstruction";
    local_60 = puVar2;
    uVar10 = FUN_0273f0a0(&local_60);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    local_58 = "HotelBuilt";
    local_60 = puVar2;
    uVar10 = FUN_0273f0a0(&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "NpcKpmFirstTalk";
    break;
  case 0x1f:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "HotelConstruction";
    local_60 = puVar2;
    uVar10 = FUN_0273f0a0(&local_60);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    local_58 = "HotelBuilt";
    local_60 = puVar2;
    uVar10 = FUN_0273f0a0(&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    uVar10 = FUN_0220c450();
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "NpcKpsFirstTalk";
    break;
  case 0x20:
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "HotelConstruction";
    local_60 = puVar2;
    uVar10 = FUN_0273f0a0(&local_60);
    if ((uVar10 & 1) != 0) {
      return 0;
    }
    local_58 = "HotelBuilt";
    local_60 = puVar2;
    uVar10 = FUN_0273f0a0(&local_60);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    local_58 = "NpcKpgFirstTalk";
    break;
  default:
    goto switchD_028d6c40_default;
  }
  local_60 = puVar1 + 0x10;
  uVar14 = FUN_0274bce0(param_3,&local_60);
  if ((int)uVar14 != 0) {
switchD_028d6c40_caseD_19:
    uVar14 = 1;
  }
  return uVar14;
}

