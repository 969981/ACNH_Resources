
bool FUN_0214f9ac(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [8];
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_40 [8];
  undefined8 local_38;
  long local_18;
  
  local_38 = *param_2;
  if ((char)(local_38 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = local_18 + -0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  local_40 = *(undefined1 (*) [8])(param_1 + 0x228);
  uVar4 = local_38 >> 0x30;
  local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
  local_38 = CONCAT26((short)uVar4,(undefined6)local_38) & 0xff00ffffffffffff;
  if ((char)((ulong)local_40 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_40);
    local_18 = local_18 + -0x15180;
    local_40 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  auVar5 = local_40;
  local_40._4_2_ = 5;
  local_40[7] = auVar5[7];
  local_40[6] = 0;
  iVar7 = FUN_00a82474(&local_38,local_40);
  if (iVar7 < 1) {
    cVar3 = *(char *)((long)param_2 + 4);
    uVar1 = (int)cVar3 + 0x18;
    if (4 < cVar3) {
      uVar1 = (int)cVar3;
    }
    bVar2 = *(byte *)(param_1 + 0x1f8);
    uVar1 = uVar1 & 0xff;
    uVar8 = (uint)bVar2;
    bVar6 = (uVar8 <= uVar1 && uVar1 != bVar2 ||
            *(byte *)((long)param_2 + 5) == *(byte *)(param_1 + 0x1f9) && uVar1 == uVar8) ||
            *(byte *)(param_1 + 0x1f9) < *(byte *)((long)param_2 + 5) && uVar1 == uVar8;
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}

