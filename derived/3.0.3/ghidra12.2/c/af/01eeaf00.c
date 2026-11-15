
undefined8 FUN_01eeaf00(void)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  short *psVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte local_3c [4];
  long local_38;
  char *local_30;
  undefined8 local_28;
  
  uVar11 = *(undefined8 *)PTR_DAT_04bb32f0;
  psVar8 = (short *)(DAT_04da6480 + 0x4068);
  if (*psVar8 == 0) {
    local_28 = *(undefined8 *)(DAT_04da6480 + 0x4060);
    if ((char)(local_28 >> 0x20) < '\x05') {
      local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
      local_38 = local_38 + -0x15180;
      local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    }
    psVar8 = (short *)&local_28;
    uVar5 = local_28 >> 0x30;
    local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
    local_28 = CONCAT26((short)uVar5,(undefined6)local_28) & 0xff00ffffffffffff;
  }
  local_28 = *(ulong *)psVar8;
  uVar5 = FUN_00873540(uVar11,&local_28,1,1);
  if ((uVar5 & 1) == 0) {
    return 1;
  }
  FUN_00873ad0(&local_38,uVar11,&local_28,1);
  iVar4 = FUN_008841f4(uVar11,&local_38);
  cVar3 = FUN_00884b80(uVar11,&local_38);
  (**(code **)(local_38 + 0x18))(&local_38);
  (**(code **)(local_38 + 0x18))(&local_38);
  if (local_30 == "Countdown") {
LAB_01eeb0d8:
    if (iVar4 - 1U < 2) {
      return 0;
    }
    return 1;
  }
  if (*local_30 == 'C') {
    uVar5 = 0;
    do {
      uVar10 = uVar5;
      uVar5 = uVar10;
      if (uVar10 == 0x80000) goto LAB_01eeb05c;
      if (local_30[uVar10 + 1] != "Countdown"[uVar10 + 1]) {
        uVar5 = 0;
        goto LAB_01eeb05c;
      }
      uVar5 = uVar10 + 1;
    } while (local_30[uVar10 + 1] != '\0');
    uVar5 = 1;
LAB_01eeb05c:
    uVar6 = (uint)(uVar10 < 0x80000) & (uint)uVar5;
  }
  else {
    uVar6 = 0;
  }
  if ((cVar3 == '\x05') || (uVar6 != 0)) goto LAB_01eeb0d8;
  if (iVar4 == 1) {
    return 0;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_01eeb0f4:
    if (7 < *pbVar7) {
LAB_01eeb100:
      if (DAT_0537d558 != (long *)0x0) {
        lVar9 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar9 + 0x471);
          }
        }
        local_3c[0] = *pbVar7;
        if (local_3c[0] < 8) goto LAB_01eeb180;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01eeb0f4;
      }
      goto LAB_01eeb100;
    }
  }
  local_3c[0] = *pbVar7;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
LAB_01eeb180:
  uVar5 = FUN_02744114(local_3c,&DAT_0539fa38);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar5 = FUN_02744114(local_3c,&DAT_0539fae8);
  if ((uVar5 & 1) == 0) {
    return 1;
  }
  return 0;
}

