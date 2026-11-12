
uint FUN_008839a4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  undefined1 auStack_14 [4];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x19 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "SeqKKRave1stDone";
      local_40 = puVar1;
      iVar4 = FUN_02757a80(param_1,&local_40);
      uVar5 = 0;
      if (iVar4 == 0) goto LAB_00883a6c;
      pcStack_48 = "MoonKKFesUnlockRestDays";
      local_50 = puVar1;
      iVar4 = FUN_02757a80(auStack_14,&local_50);
      if (iVar4 < 1) {
        local_58 = *param_2;
        uVar6 = FUN_00883750(param_1,&local_58);
        if ((uVar6 & 1) == 0) {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
          local_50 = (undefined *)(lVar7 + -0x15180);
          local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
          uVar5 = FUN_00883750(param_1,&local_58);
        }
        else {
          uVar5 = 1;
        }
        goto LAB_00883a6c;
      }
    }
  }
  uVar5 = 0;
LAB_00883a6c:
  return uVar5 & 1;
}

