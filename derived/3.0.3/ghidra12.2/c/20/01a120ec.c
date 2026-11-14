
bool FUN_01a120ec(void)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_30;
  long local_28;
  
  lVar2 = DAT_04da7238;
  if (DAT_04da7238 == 0) {
switchD_01a12138_default:
    bVar3 = true;
  }
  else {
    uVar5 = FUN_01a11dd8();
    switch(uVar5) {
    case 1:
      uVar6 = FUN_00a86724(lVar2);
      bVar3 = (uVar6 & 0xfffffffe) == 4;
      break;
    case 2:
      local_30 = FUN_00a8c31c(lVar2);
      if ((char)(local_30 >> 0x20) < '\x05') {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
        local_28 = local_28 + -0x15180;
        local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      uVar7 = local_30 >> 0x10;
      uVar1 = local_30 >> 0x30;
      uVar8 = local_30 >> 0x18;
      local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
      local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
      cVar4 = FUN_00a8ae20(lVar2,uVar7,uVar8,4);
      bVar3 = cVar4 == '\x02';
      break;
    case 3:
      uVar6 = FUN_00a86724(lVar2);
      bVar3 = (uVar6 & 0xfffffffe) != 4;
      break;
    case 4:
      uVar6 = FUN_00a86724(lVar2);
      if ((uVar6 & 0xfffffffe) == 4) {
        bVar3 = false;
      }
      else {
        uVar6 = FUN_00a86724(lVar2);
        bVar3 = (uVar6 & 0xfffffffe) != 6;
      }
      break;
    case 5:
      local_30 = FUN_00a8c31c(DAT_04da7238);
      if ((char)(local_30 >> 0x20) < '\x05') {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
        local_28 = local_28 + -0x15180;
        local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      uVar7 = local_30 >> 0x10;
      uVar1 = local_30 >> 0x30;
      uVar8 = local_30 >> 0x18;
      local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
      local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
      cVar4 = FUN_00a8ae20(lVar2,uVar7,uVar8,8);
      bVar3 = (byte)(cVar4 - 1U) < 3;
      break;
    case 6:
      fVar9 = (float)FUN_00a8cd7c(lVar2);
      bVar3 = 0.0 < fVar9;
      break;
    default:
      goto switchD_01a12138_default;
    }
  }
  return bVar3;
}

