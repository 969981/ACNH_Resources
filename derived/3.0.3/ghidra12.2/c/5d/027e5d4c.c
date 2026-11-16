
undefined8 FUN_027e5d4c(long param_1,uint *param_2,ulong param_3)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 auVar4 [8];
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  CalendarTime *pCVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined8 local_80;
  byte local_74 [4];
  undefined2 local_70;
  uint local_6c;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  long local_58;
  
  puVar3 = PTR_DAT_04bb32e8;
  local_60 = *(undefined1 (*) [8])(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)((ulong)local_60 >> 0x20) < '\x05') {
    local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_60);
    local_58 = local_58 + -0x15180;
    local_60 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
  }
  auVar4 = local_60;
  local_60._4_2_ = 5;
  local_60[7] = auVar4[7];
  local_60[6] = 0;
  lVar7 = param_1 + (ulong)*param_2 * 0x13230;
  if (9 < *param_2) {
    lVar7 = param_1;
  }
  uVar6 = FUN_02697e80(lVar7,local_60);
  if (((uVar6 & 1) != 0) && (DAT_05574040 != 0)) {
    puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar7 == 0) {
        return 1;
      }
      lVar7 = lVar7 + 0x70;
    }
    else {
      if (puVar12 == (undefined8 *)0x0) {
        return 1;
      }
      if ((long *)puVar12[0x26] == (long *)0x0) {
        return 1;
      }
      lVar7 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      if (lVar7 == 0) {
        return 1;
      }
    }
    if ((*(long **)(lVar7 + 0xe6bc8) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar7 + 0xe6bc8), puVar12 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar12)();
      uVar5 = uVar5 ^ 1;
    }
    uVar6 = FUN_0284f400(*(long *)(lVar7 + 0xe6bb0) + *(long *)(lVar7 + 0xe6ba8),param_2);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0xe6bc8) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar7 + 0xe6bc8) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
    lVar7 = DAT_04da7238;
    if (((uVar6 & 1) == 0) && (DAT_04da7238 != 0)) {
      local_68 = *(undefined1 (*) [8])(*(long *)puVar3 + 0x4060);
      if ((char)((ulong)local_68 >> 0x20) < '\x05') {
        local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_68);
        local_58 = local_58 + -0x15180;
        local_68 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      auVar4 = local_68;
      local_68._4_2_ = 5;
      local_68[7] = auVar4[7];
      local_68[6] = 0;
      lVar8 = param_1 + (ulong)*param_2 * 0x13230;
      if (9 < *param_2) {
        lVar8 = param_1;
      }
      local_6c = FUN_020fd7d8(lVar8);
      local_6c = local_6c & 0xff;
      local_70 = 0;
      local_74[0] = 0;
      FUN_0214c868(&local_70,local_74,&local_6c,1,1);
      if ((param_3 & 1) == 0) {
        local_80 = (ulong)local_68;
        bVar2 = local_74[0] - 0x18;
        bVar11 = local_74[0];
        if (0x17 < local_74[0]) {
          local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
          local_58 = local_58 + 0x15180;
          nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
          bVar11 = bVar2;
        }
        local_80._0_4_ = (undefined4)*(undefined8 *)(*(long *)puVar3 + 0x4060);
        local_80._0_5_ = CONCAT14(bVar11,(undefined4)local_80);
        local_80._7_1_ = (undefined1)((ulong)*(undefined8 *)(*(long *)puVar3 + 0x4060) >> 0x38);
        local_80._0_7_ = (uint7)(uint5)local_80;
        local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_68);
        local_58 = local_58 + 0x15180;
        local_68 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
        while( true ) {
          lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_68);
          lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
          if (lVar8 <= lVar9) break;
          uVar5 = FUN_00a8d8a8(lVar7,&local_80);
          if (2 < uVar5) {
            return 1;
          }
          if ((short)local_80 != 0) {
            local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
            local_58 = local_58 + 0xe10;
            local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
          }
        }
        pCVar10 = (CalendarTime *)&local_80;
      }
      else {
        cVar1 = (char)local_70;
        if (local_70._1_1_ != '\0') {
          cVar1 = (char)local_70 + '\x01';
        }
        local_80._0_4_ = (undefined4)*(undefined8 *)(*(long *)puVar3 + 0x4060);
        local_80._0_5_ = CONCAT14(cVar1,(undefined4)local_80);
        local_80 = CONCAT35((int3)((ulong)*(undefined8 *)(*(long *)puVar3 + 0x4060) >> 0x28),
                            (uint5)local_80) & 0xff0000ffffffffff;
        while( true ) {
          lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
          lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_68);
          if (lVar8 <= lVar9) break;
          uVar5 = FUN_00a8d8a8(lVar7,local_68);
          if (2 < uVar5) {
            return 1;
          }
          if (local_68._0_2_ != 0) {
            local_58 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_68);
            local_58 = local_58 + 0xe10;
            local_68 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
          }
        }
        pCVar10 = (CalendarTime *)local_68;
      }
      nn::time::ToPosixTimeFromUtc(pCVar10);
      return 0;
    }
  }
  return 1;
}

