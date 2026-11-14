
int FUN_01af13b8(long param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined8 local_30;
  long local_28;
  
  iVar3 = FUN_01aed730();
  psVar5 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar5 == 0) {
    local_30 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    uVar2 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
    local_30 = CONCAT26((short)uVar2,(undefined6)local_30) & 0xff00ffffffffffff;
    psVar5 = (short *)&local_30;
  }
  if ((char)psVar5[1] == '\n') {
    iVar4 = FUN_0277d6c4(param_1 + 8);
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 1;
    }
    if (iVar4 == 0x33ab) {
      iVar3 = iVar1 >> 1;
    }
  }
  return iVar3;
}

