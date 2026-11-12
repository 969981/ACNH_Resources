
void FUN_00a90a00(void)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  short *psVar6;
  undefined8 local_30;
  undefined8 local_28;
  long local_8;
  
  puVar4 = PTR_DAT_04bb32e8;
  psVar6 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar6 == 0) {
    local_28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_8 = lVar5 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
    }
    psVar6 = (short *)&local_28;
    uVar3 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar3,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  local_30 = *(undefined8 *)psVar6;
  if (DAT_04c487d4 != -1) {
    local_8 = CONCAT44(local_8._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      lVar5 = *(long *)puVar4;
      psVar6 = (short *)(lVar5 + 0x4068);
      if (*(short *)(lVar5 + 0x4070) == 0) {
        if (*psVar6 == 0) {
          local_28 = *(undefined8 *)(lVar5 + 0x4060);
          if ((char)(local_28 >> 0x20) < '\x05') {
            lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
            local_8 = lVar5 + -0x15180;
            local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
          }
          uVar3 = local_28 >> 0x30;
          local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
          local_28 = CONCAT26((short)uVar3,(undefined6)local_28) & 0xff00ffffffffffff;
          psVar6 = (short *)&local_28;
        }
        sVar2 = *psVar6;
      }
      else {
        sVar2 = *(short *)(lVar5 + 0x4070);
      }
      if (sVar2 != 0) {
        lVar5 = *(long *)puVar4;
        psVar6 = (short *)(lVar5 + 0x4068);
        if (*(short *)(lVar5 + 0x4070) == 0) {
          if (*psVar6 == 0) {
            local_28 = *(undefined8 *)(lVar5 + 0x4060);
            if ((char)(local_28 >> 0x20) < '\x05') {
              lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
              local_8 = lVar5 + -0x15180;
              local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
            }
            uVar3 = local_28 >> 0x30;
            local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
            local_28 = CONCAT26((short)uVar3,(undefined6)local_28) & 0xff00ffffffffffff;
            psVar6 = (short *)&local_28;
          }
          local_30 = *(undefined8 *)psVar6;
        }
        else {
          local_30 = *(undefined8 *)(lVar5 + 0x4070);
        }
      }
    }
  }
  FUN_00a82aa0(*(undefined8 *)puVar4,&local_30);
  return;
}

