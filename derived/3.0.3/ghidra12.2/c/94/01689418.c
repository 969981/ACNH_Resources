
void FUN_01689418(undefined2 *param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_30;
  long local_28;
  
  uVar4 = DAT_04da7238;
  if ((param_2 & 1) == 0) {
    local_30 = FUN_00a8c31c(DAT_04da7238);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar6 = local_30 >> 0x10;
    uVar3 = local_30 >> 0x30;
    uVar7 = local_30 >> 0x18;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar3,(undefined6)local_30) & 0xff00ffffffffffff;
    cVar5 = FUN_00a8ae20(uVar4,uVar6,uVar7);
    if (cVar5 == '\x01') {
      FUN_01689570(param_1);
      return;
    }
  }
  uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  uVar8 = (uint)((ulong)uVar1 * 100 >> 0x20);
  if (uVar8 < 6) {
    lVar9 = 0;
  }
  else if (uVar8 < 0x11) {
    lVar9 = 1;
  }
  else if (uVar8 < 0x1c) {
    lVar9 = 2;
  }
  else if (uVar8 < 0x27) {
    lVar9 = 3;
  }
  else if (uVar8 < 0x32) {
    lVar9 = 4;
  }
  else {
    lVar9 = 5;
    if (0x45 < uVar8) {
      lVar9 = 6;
    }
  }
  DAT_05582b7c = uVar1;
  param_1[1] = 0;
  uVar2 = (&DAT_0417695c)[lVar9];
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (short)uVar2;
  FUN_0277d4ac(param_1);
  return;
}

