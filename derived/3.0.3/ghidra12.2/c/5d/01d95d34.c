
void FUN_01d95d34(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_30;
  long local_28;
  
  puVar2 = PTR_DAT_04bb30a0;
  uVar4 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
  local_28 = CONCAT44(local_28._4_4_,uVar4);
  switch(uVar4) {
  case 0:
  case 1:
    *(undefined4 *)(param_1 + 0x128) = 0;
    return;
  case 2:
switchD_01d95d7c_caseD_2:
    uVar4 = 2;
    break;
  case 3:
    uVar8 = *(undefined8 *)puVar2;
    local_30 = FUN_00a8c31c(uVar8);
    if ((char)(local_30 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = lVar5 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar6 = local_30 >> 0x10;
    uVar1 = local_30 >> 0x30;
    uVar7 = local_30 >> 0x18;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
    cVar3 = FUN_00a8ae20(uVar8,uVar6,uVar7,4);
    if (cVar3 != '\x02') goto switchD_01d95d7c_caseD_2;
    uVar4 = 3;
    break;
  default:
    goto switchD_01d95d7c_default;
  }
  *(undefined4 *)(param_1 + 0x128) = uVar4;
switchD_01d95d7c_default:
  return;
}

