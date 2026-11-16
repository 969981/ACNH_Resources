
void FUN_028d7904(long param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 local_30;
  long local_28;
  
  piVar6 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar6 == 0) {
    local_30 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_30 >> 0x20) < '\x05') {
      local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
      local_28 = local_28 + -0x15180;
      local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
    }
    piVar6 = (int *)&local_30;
    uVar5 = local_30 >> 0x30;
    local_30._0_6_ = CONCAT24(5,(int)local_30);
    local_30 = CONCAT26((short)uVar5,(undefined6)local_30) & 0xff00ffffffffffff;
  }
  iVar2 = *piVar6;
  uVar4 = nn::time::GetDayOfWeek((int)(short)iVar2,(iVar2 << 8) >> 0x18,iVar2 >> 0x18);
  uVar5 = (ulong)uVar4;
  if (6 < uVar4) {
    uVar5 = 0;
  }
  if (*(int *)(param_1 + uVar5 * 4) == param_2) {
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    if (*(int *)(param_1 + uVar5 * 4) != 0) {
      uVar5 = (ulong)uVar4;
      if (6 < uVar4) {
        uVar5 = 0;
      }
      uVar3 = *(uint *)(param_1 + uVar5 * 4);
      if (0xb < uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined1 *)(param_1 + 0x60) + uVar3;
      if (0xd < uVar3) {
        puVar1 = (undefined1 *)(param_1 + 0x60);
      }
      *puVar1 = 1;
    }
    uVar5 = (ulong)uVar4;
    if (6 < uVar4) {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + uVar5 * 4) = 4;
    if (*(uint *)(param_1 + 0x70) == uVar4) {
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    }
  }
  return;
}

