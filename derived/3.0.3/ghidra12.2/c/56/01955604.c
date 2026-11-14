
void FUN_01955604(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined **local_78 [4];
  uint local_54;
  ulong local_50;
  ulong local_48;
  undefined **local_40;
  undefined ***pppuStack_38;
  
  if (param_2 != 0) {
    local_50 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    local_48 = local_50;
    if ((local_50 & 0xffff) != 0) {
      lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_40 = (undefined **)(lVar1 + 0xe10);
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
      local_48 = local_50;
      if ((local_50 & 0xffff) != 0) {
        lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
        local_40 = (undefined **)(lVar1 + 0xe10);
        local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
      }
    }
    local_54 = 0;
    if ((DAT_04da7238 != 0) && (local_54 = *(uint *)(DAT_04da7238 + 0x65204), 1 < local_54)) {
      local_54 = 0;
    }
    local_78[0] = &PTR_LAB_049e1938;
    pppuStack_38 = local_78;
    local_40 = &PTR_LAB_049e19b0;
    FUN_01956430(param_1,param_2,&local_54,&local_48,&local_50,&local_40,0);
  }
  return;
}

