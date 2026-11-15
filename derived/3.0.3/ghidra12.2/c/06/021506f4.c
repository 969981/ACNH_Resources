
undefined8 FUN_021506f4(long param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [8];
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  undefined **local_60;
  long local_58;
  undefined1 local_50;
  byte local_4f;
  undefined1 local_48 [8];
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x1f0) == 0) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x1f0) + 9) == '\0') {
    return 0;
  }
  uVar6 = FUN_01df9150();
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar6 = FUN_0290d828();
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  local_60 = (undefined **)CONCAT44(local_60._4_4_,param_2);
  lVar7 = *(long *)PTR_DAT_04bb4760 + (ulong)param_2 * 0x15;
  if (0x6c < param_2) {
    lVar7 = *(long *)PTR_DAT_04bb4760;
  }
  uVar1 = (uint)*(byte *)(lVar7 + 4) | (*(byte *)(lVar7 + 5) & 3) << 8;
  if (0x1ff < uVar1) {
    uVar1 = uVar1 | 0xfffffc00;
  }
  uVar6 = FUN_01d69340(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10),uVar1,1);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x1f0) != 0) && (*(int *)(*(long *)(param_1 + 0x1f0) + 4) == 7)) {
    lVar7 = FUN_0265afd0();
    if (lVar7 == 0) {
      return 0;
    }
    local_50 = 1;
    local_58 = lVar7;
    if (*(long **)(lVar7 + 0x28) == (long *)0x0) {
      local_4f = 0;
    }
    else {
      puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28);
      local_4f = 0;
      if (puVar8 != (undefined8 *)0x0) {
        local_4f = (**(code **)*puVar8)();
      }
    }
    local_4f = local_4f & 1;
    local_60 = (undefined **)(PTR_DAT_04bb4dc8 + 0x10);
    uVar6 = FUN_027e09dc(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8),1);
    FUN_02640184(&local_60);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb32e8;
  local_28 = *(undefined8 *)(lVar7 + 0x4060);
  if ((char)(local_28 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_28);
    local_60 = (undefined **)(lVar9 + -0x15180);
    local_28 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  }
  local_48 = *(undefined1 (*) [8])(param_1 + 0x228);
  uVar6 = local_28 >> 0x30;
  local_28._0_6_ = CONCAT24(5,(undefined4)local_28);
  local_28 = CONCAT26((short)uVar6,(undefined6)local_28) & 0xff00ffffffffffff;
  if ((char)((ulong)local_48 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)local_48);
    local_60 = (undefined **)(lVar9 + -0x15180);
    local_48 = (undefined1  [8])nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
  }
  auVar3 = local_48;
  local_48._4_2_ = 5;
  local_48[7] = auVar3[7];
  local_48[6] = 0;
  iVar5 = FUN_00a82474(&local_28,local_48);
  if (iVar5 < 1) {
    bVar4 = *(byte *)(param_1 + 0x1f8);
    cVar2 = *(char *)(lVar7 + 0x4064);
    uVar1 = (int)cVar2 + 0x18;
    if (4 < cVar2) {
      uVar1 = (int)cVar2;
    }
    uVar1 = uVar1 & 0xff;
    uVar10 = (uint)bVar4;
    if (((uVar1 < uVar10 || uVar1 == bVar4) &&
        (*(byte *)(lVar7 + 0x4065) != *(byte *)(param_1 + 0x1f9) || uVar1 != uVar10)) &&
       (*(byte *)(lVar7 + 0x4065) <= *(byte *)(param_1 + 0x1f9) || uVar1 != uVar10)) {
      return 0;
    }
  }
  iVar5 = *(int *)(*(long *)(param_1 + 0x1f0) + 4);
  if ((iVar5 == 0x19) || (iVar5 == 0x17)) {
    lVar7 = FUN_0265b250();
    if (lVar7 != 0) {
      local_50 = 1;
      local_58 = lVar7;
      if (*(long **)(lVar7 + 0x28) == (long *)0x0) {
        bVar4 = 0;
      }
      else {
        puVar8 = (undefined8 *)**(long **)(lVar7 + 0x28);
        bVar4 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          bVar4 = (**(code **)*puVar8)();
        }
      }
      local_4f = bVar4 & 1;
      local_60 = &PTR_FUN_0493cd60;
      if (iVar5 == 0x17) {
        if (*(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x36) == '\0')
        goto LAB_021509cc;
      }
      else if ((iVar5 == 0x19) &&
              (uVar6 = FUN_0284a7d8(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)),
              (uVar6 & 1) != 0)) {
LAB_021509cc:
        FUN_02640184(&local_60);
        return 0;
      }
      FUN_02640184(&local_60);
    }
    if (*(long *)(param_1 + 0x1f0) == 0) {
      iVar5 = 0x22;
    }
    else {
      iVar5 = *(int *)(*(long *)(param_1 + 0x1f0) + 4);
    }
  }
  else if (iVar5 == 7) {
    FUN_0214eb90(param_1,param_2,1);
    return 1;
  }
  *(int *)(param_1 + 0x1fc) = iVar5;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_0214d220(param_1);
  *(undefined1 *)(param_1 + 0x236) = 1;
  return 1;
}

