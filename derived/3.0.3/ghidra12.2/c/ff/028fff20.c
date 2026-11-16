
void FUN_028fff20(long param_1)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  short *psVar10;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar9 = 0;
  uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar2 = PTR_DAT_04bb37e0[2];
  uVar3 = PTR_DAT_04bb37e0[3];
  uVar7 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  do {
    uVar5 = (ulong)uVar9;
    uVar9 = uVar9 + 1;
    puVar1 = (undefined2 *)(param_1 + ((long)(uVar5 << 0x20) >> 0x1d));
    *puVar1 = uVar4;
    *(undefined1 *)(puVar1 + 1) = uVar2;
    *(undefined1 *)((long)puVar1 + 3) = uVar3;
    *(undefined4 *)(puVar1 + 2) = uVar7;
    uVar6 = DAT_04cea100;
  } while (uVar9 != 0x40);
  if (*(short *)(DAT_04da6480 + 0x4070) == 0) {
    psVar10 = (short *)(DAT_04da6480 + 0x4068);
    if (*(short *)(DAT_04da6480 + 0x4068) == 0) {
      local_30 = *(undefined8 *)(DAT_04da6480 + 0x4060);
      if ((char)(local_30 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
        local_28 = lVar8 + -0x15180;
        local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
      uVar5 = local_30 >> 0x30;
      local_30._0_6_ = CONCAT24(5,(undefined4)local_30);
      local_30 = CONCAT26((short)uVar5,(undefined6)local_30) & 0xff00ffffffffffff;
      psVar10 = (short *)&local_30;
    }
    local_28 = *(ulong *)psVar10;
  }
  else {
    local_28 = *(undefined8 *)(DAT_04da6480 + 0x4070);
  }
  uVar7 = FUN_008839a4(uVar6,&local_28);
  local_28 = CONCAT44(local_28._4_4_,uVar7) & 0xffffffff00000001;
  FUN_02900030(param_1,&local_28);
  return;
}

