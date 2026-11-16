
undefined2 * FUN_0288557c(long param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  undefined8 local_50;
  long local_48;
  
  puVar6 = PTR_DAT_04bb32e8;
  piVar10 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar10 == 0) {
    local_50 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_50 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = local_48 + -0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    piVar10 = (int *)&local_50;
    uVar5 = local_50 >> 0x30;
    local_50._0_6_ = CONCAT24(5,(int)local_50);
    local_50 = CONCAT26((short)uVar5,(undefined6)local_50) & 0xff00ffffffffffff;
  }
  iVar4 = *piVar10;
  uVar7 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
  pcVar1 = (char *)(param_1 + 0xa8);
  piVar10 = (int *)(param_1 + 0x70);
  pcVar2 = pcVar1 + (ulong)uVar7 * 2;
  if (6 < uVar7) {
    pcVar2 = pcVar1;
  }
  if (*pcVar2 == '\0') {
    piVar9 = (int *)(*(long *)puVar6 + 0x4068);
    if (*(short *)piVar9 == 0) {
      local_50 = *(undefined8 *)(*(long *)puVar6 + 0x4060);
      if ((char)(local_50 >> 0x20) < '\x05') {
        local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
        local_48 = local_48 + -0x15180;
        local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      piVar9 = (int *)&local_50;
      uVar5 = local_50 >> 0x30;
      local_50._0_6_ = CONCAT24(5,(int)local_50);
      local_50 = CONCAT26((short)uVar5,(undefined6)local_50) & 0xff00ffffffffffff;
    }
    iVar4 = *piVar9;
    uVar8 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
    piVar9 = piVar10 + (ulong)uVar8 * 2;
    if (6 < uVar8) {
      piVar9 = piVar10;
    }
    if (*piVar9 == 0) goto LAB_02885634;
    uVar8 = 1;
  }
  else {
LAB_02885634:
    if (param_2 == 0) {
      lVar11 = 0;
      goto LAB_0288579c;
    }
    uVar8 = 2;
  }
  pcVar2 = pcVar1 + (ulong)uVar7 * 2;
  if (6 < uVar7) {
    pcVar2 = pcVar1;
  }
  if (pcVar2[1] == '\0') {
    piVar9 = (int *)(*(long *)puVar6 + 0x4068);
    if (*(short *)piVar9 == 0) {
      local_50 = *(undefined8 *)(*(long *)puVar6 + 0x4060);
      if ((char)(local_50 >> 0x20) < '\x05') {
        local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
        local_48 = local_48 + -0x15180;
        local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
      }
      piVar9 = (int *)&local_50;
      uVar5 = local_50 >> 0x30;
      local_50._0_6_ = CONCAT24(5,(int)local_50);
      local_50 = CONCAT26((short)uVar5,(undefined6)local_50) & 0xff00ffffffffffff;
    }
    iVar4 = *piVar9;
    uVar7 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
    piVar9 = piVar10 + (ulong)uVar7 * 2;
    if (6 < uVar7) {
      piVar9 = piVar10;
    }
    if (uVar8 <= param_2) {
      return (undefined2 *)PTR_DAT_04bb37e0;
    }
    if (piVar9[1] != 0) {
      return (undefined2 *)PTR_DAT_04bb37e0;
    }
  }
  else if (uVar8 <= param_2) {
    return &DAT_05586008;
  }
  lVar11 = 1;
LAB_0288579c:
  piVar10 = (int *)(*(long *)puVar6 + 0x4068);
  if (*(short *)piVar10 == 0) {
    local_50 = *(undefined8 *)(*(long *)puVar6 + 0x4060);
    if ((char)(local_50 >> 0x20) < '\x05') {
      local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_48 = local_48 + -0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
    }
    piVar10 = (int *)&local_50;
    uVar5 = local_50 >> 0x30;
    local_50._0_6_ = CONCAT24(5,(int)local_50);
    local_50 = CONCAT26((short)uVar5,(undefined6)local_50) & 0xff00ffffffffffff;
  }
  iVar4 = *piVar10;
  uVar7 = nn::time::GetDayOfWeek((int)(short)iVar4,(iVar4 << 8) >> 0x18,iVar4 >> 0x18);
  lVar3 = param_1 + (ulong)uVar7 * 0x10;
  if (6 < uVar7) {
    lVar3 = param_1;
  }
  return (undefined2 *)(lVar3 + lVar11 * 8);
}

