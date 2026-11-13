
bool FUN_0124ea54(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_30;
  ulong local_28;
  
  puVar2 = PTR_DAT_04bb30a0;
  local_30 = FUN_00a8c31c(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar8 = *(undefined8 *)puVar2;
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
  cVar3 = FUN_00a8ae20(uVar8,uVar6,uVar7,1);
  local_28 = CONCAT44(local_28._4_4_,(int)cVar3);
  iVar4 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar4 == 0xc) {
    return ((int)cVar3 & 0xfffffffeU) == 2;
  }
  switch(local_28 & 0xffffffff) {
  case 0:
    goto switchD_0124eb20_caseD_0;
  case 1:
    if (iVar4 == 0xb) {
      return true;
    }
    break;
  case 2:
    if (iVar4 == 0xd) {
      return true;
    }
    break;
  case 3:
    if (iVar4 == 0xe) {
      return true;
    }
    break;
  case 4:
    if (iVar4 == 0x11) {
      return true;
    }
    break;
  case 5:
    if (iVar4 == 0x10) {
      return true;
    }
    break;
  case 6:
    if (iVar4 == 0xf) {
      return true;
    }
  }
switchD_0124eb20_caseD_0:
  return false;
}

