
ulong FUN_00883eac(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  undefined1 auStack_34 [4];
  undefined8 local_18;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x19 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "SeqKKRave1stDone";
      local_48 = puVar1;
      uVar6 = FUN_02757a80(param_1,&local_48);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      pcStack_50 = "MoonKKFesUnlockRestDays";
      local_58 = puVar1;
      iVar5 = FUN_02757a80(auStack_34,&local_58);
      if (iVar5 < 1) {
        local_18 = *param_2;
        uVar6 = FUN_00883750(param_1,&local_18);
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
        local_58 = (undefined *)(lVar7 + -0x15180);
        local_18 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
        uVar8 = FUN_00883750(param_1,&local_18);
        if ((uVar6 & 1) == 0) {
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          bVar4 = 0x12 < *(byte *)((long)param_2 + 4) - 5;
        }
        else {
          bVar4 = 0xfffffff2 < *(byte *)((long)param_2 + 4) - 0x12;
        }
        return (ulong)!bVar4;
      }
    }
  }
  return 0;
}

