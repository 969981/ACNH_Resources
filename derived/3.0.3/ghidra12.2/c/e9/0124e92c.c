
bool FUN_0124e92c(long param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = *param_2;
  uVar7 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)(local_30 >> 0x20) < '\x05') {
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = lVar4 + -0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar5 = local_30 >> 0x10;
  uVar1 = local_30 >> 0x30;
  uVar6 = local_30 >> 0x18;
  local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
  local_30 = CONCAT26((short)uVar1,(undefined6)local_30) & 0xff00ffffffffffff;
  cVar2 = FUN_00a8ae20(uVar7,uVar5,uVar6,1);
  local_28 = CONCAT44(local_28._4_4_,(int)cVar2);
  iVar3 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar3 == 0xc) {
    return ((int)cVar2 & 0xfffffffeU) == 2;
  }
  switch(local_28 & 0xffffffff) {
  case 0:
    goto switchD_0124e9f4_caseD_0;
  case 1:
    if (iVar3 == 0xb) {
      return true;
    }
    break;
  case 2:
    if (iVar3 == 0xd) {
      return true;
    }
    break;
  case 3:
    if (iVar3 == 0xe) {
      return true;
    }
    break;
  case 4:
    if (iVar3 == 0x11) {
      return true;
    }
    break;
  case 5:
    if (iVar3 == 0x10) {
      return true;
    }
    break;
  case 6:
    if (iVar3 == 0xf) {
      return true;
    }
  }
switchD_0124e9f4_caseD_0:
  return false;
}

