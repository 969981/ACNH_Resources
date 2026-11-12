
ulong FUN_00a8c31c(long param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  uVar5 = (ulong)(short)DAT_04c487d4;
  if (uVar5 == 0xffffffffffffffff) {
LAB_00a8c43c:
    puVar6 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar6 == 0) {
      local_20 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_20 >> 0x20) < '\x05') {
        lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_20);
        local_18 = lVar4 + -0x15180;
        local_20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
      }
      puVar6 = &local_20;
      uVar5 = local_20 >> 0x30;
      local_20._0_6_ = CONCAT24(5,(undefined4)local_20);
      local_20 = CONCAT26((short)uVar5,(undefined6)local_20) & 0xff00ffffffffffff;
    }
    local_28 = *puVar6;
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      local_18 = CONCAT44(local_18._4_4_,0x1f);
      piVar2 = (int *)(PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8);
      if (0xff < DAT_04c487d4) {
        piVar2 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar2) {
        local_18 = CONCAT44(local_18._4_4_,0x20);
        puVar3 = PTR_DAT_04bc39f8 + (uVar5 & 0xffffffff) * 8;
        if (0xff < DAT_04c487d4) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8c43c;
      }
    }
    local_28 = *(undefined8 *)(param_1 + 0x651e0);
    if ((char)(local_28 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_18 = lVar4 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    uVar5 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar5,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  return local_28;
}

