
void FUN_01201ab0(undefined2 *param_1,byte param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 local_38;
  long local_18;
  
  uVar4 = DAT_04da7238;
  if ((param_2 == 0xff) || (2 < param_2)) {
    FUN_01201880(param_1);
    return;
  }
  local_38 = FUN_00a8c31c(DAT_04da7238);
  if ((char)(local_38 >> 0x20) < '\x05') {
    local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = local_18 + -0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  uVar6 = local_38 >> 0x10;
  uVar3 = local_38 >> 0x30;
  uVar7 = local_38 >> 0x18;
  local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
  local_38 = CONCAT26((short)uVar3,(undefined6)local_38) & 0xff00ffffffffffff;
  cVar5 = FUN_00a8ae20(uVar4,uVar6,uVar7,6);
  local_18 = CONCAT44(local_18._4_4_,(int)cVar5);
  uVar2 = (int)cVar5 - 1;
  if (uVar2 < 6) {
    puVar8 = (undefined4 *)(&PTR_DAT_04987220)[(int)uVar2];
  }
  else {
    puVar8 = &DAT_04c47ee0;
  }
  uVar1 = puVar8[param_2];
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (short)uVar1;
  FUN_0277d4ac(param_1);
  return;
}

