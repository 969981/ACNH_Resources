
bool FUN_011f4c50(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 local_30;
  long local_28;
  
  if (param_1 < 1) {
    uVar6 = local_30 >> 0x30;
    local_30 = CONCAT26((ushort)uVar6 & 0xff00,0x1010000);
    if ((DAT_05574040 != 0) &&
       (lVar1 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(), lVar1 != 0)
       ) {
      if ((*(long **)(lVar1 + 0x276cd8) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x276cd8), puVar2 == (undefined8 *)0x0)) {
        uVar6 = *(ulong *)(*(long *)(lVar1 + 0x276cc0) + *(long *)(lVar1 + 0x276cb8) + 0x3c9920);
        local_30 = uVar6;
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        uVar6 = *(ulong *)(*(long *)(lVar1 + 0x276cc0) + *(long *)(lVar1 + 0x276cb8) + 0x3c9920);
        local_30 = uVar6;
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x276cd8) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x276cd8) + 8), puVar2 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar2)();
        }
      }
      if ((uVar6 & 0xffff) != 0) {
        local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
        local_28 = local_28 + 0x708;
        local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
      }
    }
    lVar5 = *(long *)PTR_DAT_04bb32e8;
    lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    lVar4 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar5 + 0x4060));
    bVar7 = lVar1 <= lVar4;
    if (lVar1 <= lVar4) {
      nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar5 + 0x4060));
    }
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

