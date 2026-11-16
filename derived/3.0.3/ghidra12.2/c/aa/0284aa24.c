
undefined8 FUN_0284aa24(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  
  puVar2 = PTR_DAT_04bb32e8;
  if (*(char *)(param_1 + 0x2e) == '\x02') {
    if (*(char *)(param_1 + 0x2f) == '\x02') {
      local_38 = *(ulong *)(param_1 + 0x24);
      if ((local_38 & 0xffff) != 0) {
        lVar6 = *(long *)PTR_DAT_04bb32e8;
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060));
        if ((lVar3 <= lVar4) &&
           (lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar6 + 0x4060)), lVar4 != lVar3))
        goto LAB_0284ab94;
      }
      local_48 = *(undefined8 *)(param_1 + 0x1c);
      if ((char)(local_48 >> 0x20) < '\x05') {
        lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
        local_38 = lVar3 - 0x15180;
        local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      }
      uVar1 = local_48 >> 0x30;
      local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
      local_48 = CONCAT26((short)uVar1,(undefined6)local_48) & 0xff00ffffffffffff;
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_38 = lVar3 + 0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
      puVar7 = (ulong *)(*(long *)puVar2 + 0x4068);
      if (*(short *)puVar7 == 0) {
        local_40 = *(ulong *)(*(long *)puVar2 + 0x4060);
        if ((char)(local_40 >> 0x20) < '\x05') {
          lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = lVar3 + -0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        uVar1 = local_40;
        puVar7 = &local_40;
        local_40._7_1_ = SUB81(uVar1,7);
        local_40._0_7_ = (uint7)CONCAT24(5,(undefined4)local_40);
      }
      local_50 = *puVar7;
      if ((local_50 & 0xffff) == 0) goto LAB_0284abc8;
      lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      if ((lVar4 < lVar3) ||
         (lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50), lVar4 != lVar3))
      goto LAB_0284ab94;
    }
    else {
LAB_0284ab94:
      if ((*(char *)(param_1 + 0x2e) != '\x02') ||
         ((*(char *)(param_1 + 0x2f) != '\x02' || ((*(byte *)(param_1 + 0x36) & 1) == 0))))
      goto LAB_0284abc8;
    }
    uVar5 = 1;
  }
  else {
LAB_0284abc8:
    uVar5 = 0;
  }
  return uVar5;
}

