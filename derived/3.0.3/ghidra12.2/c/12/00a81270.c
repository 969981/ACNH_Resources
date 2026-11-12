
bool FUN_00a81270(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [8];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  long lVar8;
  undefined8 local_30;
  undefined1 local_28 [8];
  long local_8;
  
  local_30 = *param_1;
  if ((char)(local_30 >> 0x20) < '\x05') {
    local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_8 = local_8 + -0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
  }
  uVar1 = local_30 >> 0x30;
  uVar5 = (uint)local_30;
  local_30._0_6_ = CONCAT24(5,(uint)local_30);
  local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
  uVar4 = uVar5 & 0xffff;
  uVar5 = uVar5 >> 0x10 & 0xff;
  lVar8 = *(long *)PTR_DAT_04bb32e8;
  psVar7 = (short *)(lVar8 + 0x4068);
  if (*(short *)(lVar8 + 0x4070) == 0) {
    if (*psVar7 == 0) {
      local_28 = *(undefined1 (*) [8])(lVar8 + 0x4060);
      if ((char)((ulong)local_28 >> 0x20) < '\x05') {
        local_8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_28);
        local_8 = local_8 + -0x15180;
        local_28 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_8);
        uVar4 = (uint)(ushort)local_30;
        uVar5 = (uint)local_30._2_1_;
      }
      auVar2 = local_28;
      psVar7 = (short *)local_28;
      local_28._4_2_ = 5;
      local_28[7] = auVar2[7];
      local_28[6] = 0;
    }
    uVar6 = (uint)*(undefined8 *)psVar7;
  }
  else {
    uVar6 = (uint)*(undefined8 *)(lVar8 + 0x4070);
  }
  if (uVar4 == (uVar6 & 0xffff) && uVar5 == (uVar6 >> 0x10 & 0xff)) {
    bVar3 = (uint)local_30._3_1_ != uVar6 >> 0x18;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

