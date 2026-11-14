
byte FUN_01a11f30(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_30;
  long local_28;
  
  lVar2 = DAT_04da7238;
  if (DAT_04da7238 == 0) {
switchD_01a11f80_default:
    bVar4 = 1;
  }
  else {
    uVar5 = FUN_01a11dd8();
    switch(uVar5) {
    case 1:
      uVar6 = FUN_00a868d0(lVar2,*(undefined1 *)((long)param_3 + 4));
      bVar4 = (uVar6 & 0xfffffffe) == 4;
      break;
    case 2:
      local_30 = *param_3;
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
      cVar3 = FUN_00a8ae20(lVar2,uVar7,uVar8,4);
      bVar4 = cVar3 == '\x02';
      break;
    case 3:
      uVar6 = FUN_00a868d0(lVar2,*(undefined1 *)((long)param_3 + 4));
      bVar4 = (uVar6 & 0xfffffffe) != 4;
      break;
    case 4:
      uVar6 = FUN_00a868d0(lVar2,*(undefined1 *)((long)param_3 + 4));
      if ((uVar6 & 0xfffffffe) == 4) {
        bVar4 = 0;
      }
      else {
        uVar6 = FUN_00a868d0(lVar2,*(undefined1 *)((long)param_3 + 4));
        bVar4 = (uVar6 & 0xfffffffe) != 6;
      }
      break;
    case 5:
      local_30 = *param_3;
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
      cVar3 = FUN_00a8ae20(lVar2,uVar7,uVar8,8);
      bVar4 = (byte)(cVar3 - 1U) < 3;
      break;
    case 6:
      bVar4 = FUN_00a8d4a0(lVar2,param_3);
      break;
    default:
      goto switchD_01a11f80_default;
    }
  }
  return bVar4 & 1;
}

