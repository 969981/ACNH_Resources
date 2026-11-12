
undefined8 FUN_00883ff8(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  short sVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_58;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "SeqKKRave1stDone";
      uVar3 = FUN_02757a80(param_1,&local_50);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      local_58 = *param_2;
      uVar4 = FUN_00883750(param_1,&local_58);
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_38 = local_38 + -0x15180;
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      uVar5 = FUN_00883750(param_1,&local_58);
      if ((uVar4 & 1) != 0) {
        local_40 = *param_2;
        uVar4 = FUN_00883750(param_1,&local_40);
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_38 = local_38 + -0x15180;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        uVar5 = FUN_00883750(param_1,&local_40);
        if ((uVar4 & 1) == 0) {
          if ((uVar5 & 1) == 0) {
            return 1;
          }
          if (0x12 < *(byte *)((long)param_2 + 4) - 5) {
            return 1;
          }
        }
        else if (0xfffffff2 < *(byte *)((long)param_2 + 4) - 0x12) {
          return 1;
        }
        return 2;
      }
      if ((uVar5 & 1) != 0) {
        local_40 = *param_2;
        uVar4 = FUN_00883750(param_1,&local_40);
        local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
        local_38 = local_38 + -0x15180;
        local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        uVar5 = FUN_00883750(param_1,&local_40);
        if ((uVar4 & 1) != 0) {
          if (*(byte *)((long)param_2 + 4) - 0x12 < 0xfffffff3) {
            return 2;
          }
          return 3;
        }
        if ((uVar5 & 1) == 0) {
          return 3;
        }
        if (*(byte *)((long)param_2 + 4) - 5 < 0x13) {
          return 2;
        }
        return 3;
      }
    }
  }
  return 0;
}

