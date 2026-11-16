
undefined8 FUN_02831f90(char *param_1,undefined8 *param_2,CalendarTime *param_3)

{
  short *psVar1;
  char *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 local_48;
  long local_28;
  
  psVar1 = (short *)(param_1 + 0x1f2c0);
  if (*psVar1 == 0) {
    *(undefined8 *)psVar1 = *(undefined8 *)param_3;
    local_48 = *(ulong *)param_3;
    if ('\b' < (char)(local_48 >> 0x20)) goto LAB_02832004;
LAB_02832034:
    uVar7 = 9;
  }
  else {
    local_28 = *(long *)psVar1;
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    lVar6 = nn::time::ToPosixTimeFromUtc(param_3);
    if (lVar5 <= lVar6) {
      nn::time::ToPosixTimeFromUtc(param_3);
      local_28 = *(long *)(param_1 + 0x1f2c8);
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      lVar6 = nn::time::ToPosixTimeFromUtc(param_3);
      if (lVar6 < lVar5) {
        return 0;
      }
      nn::time::ToPosixTimeFromUtc(param_3);
      *param_2 = *(undefined8 *)(param_1 + 0x1f2c8);
      *(undefined8 *)psVar1 = *(undefined8 *)param_3;
      uVar8 = *(undefined8 *)param_3;
      local_48._7_1_ = (byte)((ulong)uVar8 >> 0x38);
      local_48._0_4_ = (undefined4)uVar8;
      uVar4 = (undefined4)local_48;
      if ((char)((ulong)uVar8 >> 0x20) < '\t') {
        uVar7 = 9;
      }
      else {
        if (0x10 < ((uint)((ulong)uVar8 >> 0x20) & 0xff)) {
          local_48 = (ulong)local_48._7_1_ << 0x38;
          local_48._0_6_ = CONCAT24(9,uVar4);
          local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
          local_28 = local_28 + 0x15180;
          local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
          goto LAB_02832144;
        }
        uVar7 = 0x11;
      }
      local_48._0_6_ = CONCAT24(uVar7,(undefined4)local_48);
      local_48._0_7_ = (uint7)(uint6)local_48;
LAB_02832144:
      lVar5 = 0;
      cVar9 = '\0';
      *(ulong *)(param_1 + 0x1f2c8) = local_48;
      do {
        lVar6 = lVar5 + 0x15950;
        lVar5 = lVar5 + 4;
        pcVar2 = param_1 + (ulong)*(uint *)(param_1 + lVar6) * 0x374;
        if (99 < *(uint *)(param_1 + lVar6)) {
          pcVar2 = param_1;
        }
        if (*pcVar2 != '\0') {
          cVar9 = cVar9 + '\x01';
        }
      } while (lVar5 != 400);
      if (cVar9 == '\0') {
        lVar5 = 0;
        cVar9 = '\0';
        do {
          lVar6 = lVar5 + 0x1f220;
          lVar5 = lVar5 + 4;
          pcVar2 = param_1 + 0x15ae0 + (ulong)*(uint *)(param_1 + lVar6) * 0x3c8;
          if (0x27 < *(uint *)(param_1 + lVar6)) {
            pcVar2 = param_1 + 0x15ae0;
          }
          if (*pcVar2 != '\0') {
            cVar9 = cVar9 + '\x01';
          }
        } while (lVar5 != 0xa0);
        if (cVar9 == '\0') {
          return 0;
        }
      }
      return 1;
    }
    *(undefined8 *)psVar1 = *(undefined8 *)param_3;
    local_48 = *(ulong *)param_3;
    if ((char)(local_48 >> 0x20) < '\t') goto LAB_02832034;
LAB_02832004:
    if (0x10 < ((uint)(local_48 >> 0x20) & 0xff)) {
      uVar3 = local_48 >> 0x30;
      local_48._0_6_ = CONCAT24(9,(undefined4)local_48);
      local_48 = CONCAT26((short)uVar3,(uint6)local_48) & 0xff00ffffffffffff;
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_28 = local_28 + 0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      goto LAB_028320a4;
    }
    uVar7 = 0x11;
  }
  uVar8 = local_48;
  local_48._0_6_ = CONCAT24(uVar7,(undefined4)local_48);
  local_48._7_1_ = SUB81(uVar8,7);
  local_48._0_7_ = (uint7)(uint6)local_48;
LAB_028320a4:
  *(ulong *)(param_1 + 0x1f2c8) = local_48;
  return 0;
}

