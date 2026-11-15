
undefined4 FUN_02172270(void)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  short *psVar7;
  uint uVar8;
  short local_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_18;
  
  iVar3 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar3 == -0x6d41fcf3) {
    if (DAT_04c487d0 != -1) {
      local_18 = CONCAT44(local_18._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d0 * 8);
      if (0xff < (uint)(int)DAT_04c487d0) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) != 0) {
        return 0x14;
      }
    }
  }
  else if (DAT_04c487d4 == -1) {
    if (iVar3 == -0x10e0fba8) {
      return 0x14;
    }
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (iVar3 == -0x10e0fba8) {
      return 0x14;
    }
    if ((*puVar1 & 0x2000000) != 0) {
      return 0x14;
    }
  }
  if ((*(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0) != 0) ||
     (iVar3 = FUN_00883634(DAT_04cea100), iVar3 < 0)) {
    return 0x14;
  }
  psVar7 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar7 == 0) {
    local_38 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_38 >> 0x20) < '\x05') {
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      local_18 = lVar4 + -0x15180;
      local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    psVar7 = (short *)&local_38;
    uVar2 = local_38 >> 0x30;
    local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
    local_38 = CONCAT26((short)uVar2,(undefined6)local_38) & 0xff00ffffffffffff;
  }
  local_18 = *(long *)psVar7;
  local_38._4_4_ = (undefined4)((ulong)local_18 >> 0x20);
  local_38._0_2_ = (short)local_18;
  local_38._0_4_ = CONCAT22(0x1303,(short)local_38);
  _local_40 = CONCAT44(local_38._4_4_,CONCAT22(0x130a,(short)local_38));
  lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
  lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
  if (lVar5 < lVar4) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    uVar8 = (uint)(lVar5 != lVar4);
  }
  lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_18);
  lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  if (lVar4 <= lVar5) {
    nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
  }
  uVar6 = 0x23;
  if (((int)uVar8 < 0 && lVar4 <= lVar5) == (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) == 1)) {
    uVar6 = 0x24;
  }
  return uVar6;
}

