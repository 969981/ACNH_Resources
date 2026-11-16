
void FUN_027b5d00(int *param_1,ulong *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_70;
  char *pcStack_68;
  ulong local_48;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*param_2 != 0) {
    if (*param_2 == 1) {
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "TalkCountToday";
      iVar4 = FUN_02746e10(param_1 + 0xe,&local_70);
      if (iVar4 == 0) goto LAB_027b5d60;
    }
    else {
LAB_027b5d60:
      local_70 = puVar3 + 0x10;
      pcStack_68 = "ContinuousTalkDays";
      FUN_02747170(param_1 + 0xe,&local_70,0);
    }
    piVar1 = param_1 + 0xe;
    puVar2 = puVar3 + 0x10;
    pcStack_68 = "TalkCountToday";
    local_70 = puVar2;
    FUN_02747170(piVar1,&local_70,0);
    pcStack_68 = "BromideRewardSkipCount";
    local_70 = puVar2;
    iVar4 = FUN_02746e10(piVar1,&local_70);
    if (iVar4 != 0) {
      pcStack_68 = "BromideRewardSkipCount";
      local_70 = puVar2;
      FUN_027475c0(piVar1,&local_70,0xffffffff);
    }
  }
  if ((char)param_2[5] != '\0') goto LAB_027b5f3c;
  uVar10 = param_2[2];
  local_48 = uVar10;
  lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
  local_70 = (undefined *)(lVar6 + 0x15180);
  uVar7 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
  local_48 = uVar7;
  if (*param_2 < 2) {
    uVar12 = uVar7 >> 0x18;
    if ((undefined1 *)(uVar10 & 0xffff0000) == &LAB_01010000) {
      uVar11 = uVar7 >> 0x10;
    }
    else {
      if ((((uint)uVar7 >> 0x10 & 0xff) != 1) || (((uint)(uVar7 >> 0x18) & 0xff) != 1))
      goto LAB_027b5e08;
      uVar12 = 1;
      uVar11 = 1;
    }
LAB_027b5e84:
    puVar2 = PTR_DAT_04bb32f0;
    lVar6 = *(long *)PTR_DAT_04bb32f0;
    uVar5 = FUN_006bd550("LunarNewYear",0);
    local_70._0_4_ = uVar5;
    uVar8 = FUN_0088c0d0(lVar6 + 8,&local_70);
    uVar7 = FUN_00875c10(lVar6,uVar8,uVar7 & 0xffffffff,uVar11 & 0xffffffff,uVar12 & 0xffffffff);
    if ((uVar7 & 1) != 0) goto LAB_027b5f3c;
    lVar6 = *(long *)puVar2;
    uVar5 = FUN_006bd550("LunarNewYear",0);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar5);
    uVar8 = FUN_0088c0d0(lVar6 + 8,&local_70);
    uVar7 = FUN_00875c10(lVar6,uVar8,uVar10 & 0xffffffff,uVar10 >> 0x10 & 0xffffffff,
                         uVar10 >> 0x18 & 0xffffffff);
    if ((uVar7 & 1) != 0) goto LAB_027b5f3c;
  }
  else {
LAB_027b5e08:
    local_70 = puVar3 + 0x10;
    pcStack_68 = "NewYearGreetingFlag";
    FUN_02747170(param_1 + 0xe,&local_70,0);
    if (*param_2 < 2) {
      uVar7 = local_48 & 0xffff;
      uVar11 = local_48 >> 0x10 & 0xff;
      uVar12 = local_48 >> 0x18 & 0xff;
      goto LAB_027b5e84;
    }
  }
  local_70 = puVar3 + 0x10;
  pcStack_68 = "ChineseNewYearGreetingFlag";
  FUN_02747170(param_1 + 0xe,&local_70,0);
LAB_027b5f3c:
  if ((param_1[7] != 0) && (*param_1 != 0)) {
    piVar1 = param_1 + 0xe;
    local_70 = puVar3 + 0x10;
    pcStack_68 = "InputGreeting";
    iVar4 = FUN_02746e10(piVar1,&local_70);
    if (iVar4 != 0) {
      uVar7 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1) | 1;
      if (0x1f < (uint)uVar7) {
        uVar7 = 0;
      }
      uVar9 = (uint)(byte)(&DAT_04058440)[uVar7];
      local_48 = CONCAT44(local_48._4_4_,uVar9);
      if (10 < uVar9) {
        uVar9 = 1;
      }
      if ((short)param_1[(ulong)uVar9 * 0x18 + 0x53] == 0) {
        local_70 = puVar3 + 0x10;
        pcStack_68 = "InputGreeting";
        FUN_02747170(piVar1,&local_70,0);
      }
    }
    local_70 = puVar3 + 0x10;
    pcStack_68 = "InputNickname";
    iVar4 = FUN_02746e10(piVar1,&local_70);
    if ((iVar4 != 0) && ((short)param_1[0x4e] == 0)) {
      pcStack_68 = "InputNickname";
      local_70 = puVar3 + 0x10;
      FUN_02747170(piVar1,&local_70,0);
      pcStack_68 = "NicknameOriginal";
      local_70 = puVar3 + 0x10;
      FUN_02747170(piVar1,&local_70,0);
    }
  }
  return;
}

