
void FUN_01201880(undefined2 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 local_30;
  long local_28;
  
  uVar5 = DAT_04da7238;
  if (DAT_04c487d4 != -1) {
    local_28 = CONCAT44(local_28._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 1 & 1) != 0) &&
       (local_28 = CONCAT44(local_28._4_4_,0x1a), (*puVar1 >> 0x1a & 1) != 0)) {
      local_30 = FUN_00a8c31c(DAT_04da7238);
      if ((char)(local_30 >> 0x20) < '\x05') {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
        local_28 = lVar7 + -0x15180;
        local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      uVar8 = local_30 >> 0x10;
      uVar4 = local_30 >> 0x30;
      uVar9 = local_30 >> 0x18;
      local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
      local_30 = CONCAT26((short)uVar4,(undefined6)local_30) & 0xff00ffffffffffff;
      cVar6 = FUN_00a8ae20(uVar5,uVar8,uVar9,6);
      local_28 = CONCAT44(local_28._4_4_,(int)cVar6);
      uVar3 = (int)cVar6 - 1;
      if (uVar3 < 6) {
        puVar10 = (undefined4 *)((&PTR_DAT_04987220)[(int)uVar3] + 0x18);
      }
      else {
        puVar10 = &DAT_04c47ef8;
      }
      goto LAB_01201a6c;
    }
  }
  local_30 = FUN_00a8c31c(DAT_04da7238);
  if ((char)(local_30 >> 0x20) < '\x05') {
    lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = lVar7 + -0x15180;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  uVar8 = local_30 >> 0x10;
  uVar4 = local_30 >> 0x30;
  uVar9 = local_30 >> 0x18;
  local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
  local_30 = CONCAT26((short)uVar4,(undefined6)local_30) & 0xff00ffffffffffff;
  cVar6 = FUN_00a8ae20(uVar5,uVar8,uVar9,6);
  local_28 = CONCAT44(local_28._4_4_,(int)cVar6);
  uVar3 = (int)cVar6 - 1;
  if (uVar3 < 6) {
    puVar10 = (undefined4 *)(&PTR_DAT_04987220)[(int)uVar3];
  }
  else {
    puVar10 = &DAT_04c47ee0;
  }
  uVar3 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar3 = uVar3 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar3 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  puVar10 = (undefined4 *)((long)puVar10 + ((ulong)uVar3 + (ulong)uVar3 * 2 >> 0x1e & 0xc));
  DAT_0514cb64 = uVar3;
LAB_01201a6c:
  uVar2 = *puVar10;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (short)uVar2;
  FUN_0277d4ac(param_1);
  return;
}

