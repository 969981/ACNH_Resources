
undefined8 FUN_0284abe0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  CalendarTime *pCVar9;
  ulong uVar10;
  ulong local_58;
  undefined *local_50;
  char *local_48;
  
  uVar3 = DAT_05405f40;
  puVar2 = PTR_DAT_04bb2020;
  if (((int)*(char *)(param_1 + 0x2c) != param_2) || (9 < param_2)) {
    return 0;
  }
  if ((DAT_05405f40 & 0xffff) == 0) {
    return 0;
  }
  if ((&DAT_053fee41)[(ulong)param_2 * 0xba0] == '\0') {
LAB_0284ae28:
    uVar8 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "IndoorTalkCount";
    local_50 = puVar1;
    iVar4 = FUN_021991a0(&DAT_053fe348 + (ulong)param_2 * 0xba0,&local_50);
    uVar10 = *(ulong *)PTR_DAT_04bc3a00;
    local_58 = uVar10;
    if (iVar4 == 0) {
      if ((uVar10 & 0xffff) != 0) {
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        local_50 = (undefined *)(lVar6 + 0x1e);
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
      }
      pCVar9 = (CalendarTime *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      lVar7 = nn::time::ToPosixTimeFromUtc(pCVar9);
      if (lVar7 < lVar6) goto LAB_0284ae28;
    }
    else {
      local_48 = "VisitPGoHomeCheckCondition";
      local_50 = puVar1;
      iVar5 = FUN_02743000(&local_50);
      puVar1 = PTR_DAT_04bb32e8;
      if (((4 < iVar4) && (iVar5 == 0)) && (((byte)DAT_05453f68 & 1) == 0)) {
        local_58 = uVar3;
        if ((uVar3 & 0xffff) != 0) {
          lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
          local_50 = (undefined *)(lVar6 + 10);
          local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
        }
        pCVar9 = (CalendarTime *)(*(long *)puVar1 + 0x4060);
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        lVar7 = nn::time::ToPosixTimeFromUtc(pCVar9);
        if (lVar6 <= lVar7) goto LAB_0284ae34;
      }
      local_48 = "ExtendStayTimeVisitP";
      local_58 = uVar10;
      local_50 = puVar2 + 0x10;
      iVar4 = FUN_021991a0(&DAT_053fe348 + (ulong)param_2 * 0xba0,&local_50);
      if (iVar4 == 0) {
        iVar4 = 0xf;
      }
      else {
        local_48 = "VisitPStayExtendTime";
        local_50 = puVar2 + 0x10;
        iVar4 = FUN_02743000(&local_50);
        iVar4 = iVar4 + 0xf;
      }
      if ((short)local_58 != 0) {
        local_50 = (undefined *)nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
        if (iVar4 != 0) {
          local_50 = local_50 + ((long)iVar4 * 60000000000) / 1000000000;
        }
        local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
      }
      pCVar9 = (CalendarTime *)(*(long *)puVar1 + 0x4060);
      lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      lVar7 = nn::time::ToPosixTimeFromUtc(pCVar9);
      if (lVar7 < lVar6) goto LAB_0284ae28;
    }
LAB_0284ae34:
    nn::time::ToPosixTimeFromUtc(pCVar9);
    uVar8 = 1;
  }
  return uVar8;
}

