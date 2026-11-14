
void FUN_01b307d0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_c0;
  char *local_b8;
  undefined1 local_b0;
  byte local_af;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  
  puVar6 = PTR_DAT_04bb2020;
  lVar14 = *(long *)PTR_DAT_04bb32f0;
  if (lVar14 == 0) {
    return;
  }
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "EarthDay";
  local_a8 = *(undefined **)(*param_1 + 0x10);
  if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_c0 = (undefined *)(lVar9 + -0x15180);
    local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  uVar7 = (ulong)local_a8;
  uVar10 = (ulong)local_a8 >> 0x30;
  local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
  local_a8 = (undefined *)(CONCAT26((short)uVar10,(uint6)local_a8) & 0xff00ffffffffffff);
  uVar10 = FUN_00879dd0(lVar14,&local_98,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
  if (((uVar10 & 1) != 0) && (*(char *)((long)param_2 + 500) != '\0')) {
    plVar1 = param_2 + 8;
    local_90 = "MainmenuRndDailyQuest";
    local_98 = puVar6 + 0x10;
    iVar8 = FUN_0274ce10(plVar1,&local_98);
    if (iVar8 != 0) {
      local_b8 = "MailSendFlag_EarthDayNotice";
      local_c0 = puVar6 + 0x10;
      iVar8 = FUN_0274ce10(plVar1,&local_c0);
      if (iVar8 == 0) {
        FUN_01b46be0(&local_98);
        lVar9 = *plVar1;
        if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar8 != 0)) {
          FUN_00dd5f80(PTR_DAT_04bb8aa0);
          __cxa_guard_release(PTR_DAT_04bb8aa8);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
          uVar10 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar10 * 4) == 0x16) goto LAB_01b3092c;
            uVar10 = uVar10 + 1;
          } while (*(uint *)PTR_DAT_04bb8aa0 != uVar10);
        }
        uVar10 = 0;
LAB_01b3092c:
        lVar12 = *param_1;
        uVar5 = *(ushort *)(lVar12 + 0x10);
        bVar3 = *(byte *)(lVar12 + 0x12);
        bVar4 = *(byte *)(lVar12 + 0x13);
        nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
        local_90 = (char *)CONCAT44((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)uVar5,
                                    (int)lVar9);
        local_78 = (undefined4)uVar10;
        uStack_74 = 8;
        local_70 = 6;
        local_64 = 0;
        local_6c = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        lVar9 = (**(code **)(local_98 + 0x20))(&local_98,*(undefined8 *)PTR_DAT_04bc0580);
        if (lVar9 != 0) {
          plVar13 = *(long **)PTR_DAT_04bb4fa8;
          lVar12 = *plVar13;
          plVar2 = (long *)(*(int *)((long)plVar13 + 0x14) + lVar9);
          *plVar13 = (long)plVar2;
          *plVar2 = lVar12;
          plVar2[1] = (long)plVar13;
          if (lVar12 != 0) {
            *(long **)(lVar12 + 8) = plVar2;
          }
          *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
        }
        local_c0 = puVar6 + 0x10;
        local_b8 = "MailSendFlag_EarthDayNotice";
        FUN_0274d104(plVar1,&local_c0,1);
      }
    }
  }
  local_98 = puVar6 + 0x10;
  local_90 = "Halloween";
  local_a8 = *(undefined **)(*param_1 + 0x10);
  if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
    lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_c0 = (undefined *)(lVar9 + -0x15180);
    local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  uVar10 = (ulong)local_a8;
  local_a8._0_6_ = CONCAT24(5,(undefined4)local_a8);
  local_a8._7_1_ = SUB81(uVar10,7);
  local_a8._0_7_ = (uint7)(uint6)local_a8;
  uVar10 = FUN_0087a8f0(lVar14,&local_98,uVar10,uVar10 >> 0x10,uVar10 >> 0x18,0);
  if (((uVar10 & 1) != 0) && (*(char *)((long)param_2 + 500) != '\0')) {
    plVar1 = param_2 + 8;
    local_98 = puVar6 + 0x10;
    local_90 = "PknSendLetterFlag";
    iVar8 = FUN_0274ce10(plVar1,&local_98);
    if (iVar8 == 0) {
      FUN_01b46be0(&local_98);
      lVar14 = *plVar1;
      if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar8 != 0)) {
        FUN_00dd5f80(PTR_DAT_04bb8aa0);
        __cxa_guard_release(PTR_DAT_04bb8aa8);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
        uVar10 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar10 * 4) == 0x2f) goto LAB_01b30aec;
          uVar10 = uVar10 + 1;
        } while (*(uint *)PTR_DAT_04bb8aa0 != uVar10);
      }
      uVar10 = 0;
LAB_01b30aec:
      lVar9 = *param_1;
      uVar5 = *(ushort *)(lVar9 + 0x10);
      bVar3 = *(byte *)(lVar9 + 0x12);
      bVar4 = *(byte *)(lVar9 + 0x13);
      nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
      local_c0 = (undefined *)0x3429;
      FUN_0277d4ac(&local_c0);
      local_78 = (undefined4)uVar10;
      uStack_74 = 0x1c;
      local_70 = 1;
      local_6c = (undefined4)local_c0;
      uStack_68 = local_c0._4_4_;
      local_64 = 0;
      local_90 = (char *)CONCAT44((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)uVar5,
                                  (int)lVar14);
      lVar14 = (**(code **)(local_98 + 0x20))(&local_98,*(undefined8 *)PTR_DAT_04bc0580);
      if (lVar14 != 0) {
        plVar13 = *(long **)PTR_DAT_04bb4fa8;
        lVar9 = *plVar13;
        plVar2 = (long *)(*(int *)((long)plVar13 + 0x14) + lVar14);
        *plVar13 = (long)plVar2;
        *plVar2 = lVar9;
        plVar2[1] = (long)plVar13;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar2;
        }
        *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
      }
      local_c0 = puVar6 + 0x10;
      local_b8 = "PknSendLetterFlag";
      FUN_0274d104(plVar1,&local_c0,1);
    }
  }
  if (*(char *)((long)param_2 + 500) == '\0') {
    return;
  }
  plVar1 = param_2 + 8;
  local_90 = "RcoPaid1stCharge";
  local_98 = puVar6 + 0x10;
  iVar8 = FUN_0274ce10(plVar1,&local_98);
  if (iVar8 == 0) {
    return;
  }
  local_b8 = "RcoMachineEnableExchange";
  local_c0 = puVar6 + 0x10;
  iVar8 = FUN_0274ce10(plVar1,&local_c0);
  if (iVar8 == 0) {
    return;
  }
  pcStack_a0 = "MilageSendLetterFlag";
  local_a8 = puVar6 + 0x10;
  iVar8 = FUN_0274ce10(plVar1,&local_a8);
  if (iVar8 != 0) {
    return;
  }
  local_90 = "BuiltTownOffice";
  local_98 = puVar6 + 0x10;
  uVar10 = FUN_0273f0a0(&local_98);
  if ((uVar10 & 1) != 0) {
    local_98 = puVar6 + 0x10;
    local_90 = "MilageSendLetterFlag";
    FUN_0274d104(plVar1,&local_98,1);
    return;
  }
  if (*(char *)(*param_1 + 0x12) != '\n') {
    return;
  }
  local_98 = puVar6 + 0x10;
  local_90 = "MilageSendLetterFlag";
  FUN_0274d104(plVar1,&local_98,1);
  lVar14 = *param_2 + 0x194b0;
  if (*(long *)(*param_2 + 0x194b8) == 0) {
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  local_b0 = 1;
  local_b8 = (char *)(lVar14 + 0x1068);
  if (*(long **)(lVar14 + 0x1090) == (long *)0x0) {
    local_af = 0;
  }
  else {
    puVar11 = (undefined8 *)**(long **)(lVar14 + 0x1090);
    local_af = 0;
    if (puVar11 != (undefined8 *)0x0) {
      local_af = (**(code **)*puVar11)();
    }
  }
  local_af = local_af & 1;
  lVar12 = *(long *)(lVar14 + 0x1070);
  lVar9 = *(long *)(lVar14 + 0x1078);
  local_c0 = PTR_DAT_04bb64c8 + 0x10;
  local_98 = (undefined *)0x33c9;
  FUN_0277d4ac(&local_98);
  uVar10 = FUN_0277a1f4(lVar9 + lVar12,&local_98);
  if ((uVar10 & 1) != 0) {
    lVar9 = *(long *)(lVar14 + 0x1070);
    lVar14 = *(long *)(lVar14 + 0x1078);
    local_a8 = (undefined *)0x33c8;
    FUN_0277d4ac(&local_a8);
    uVar10 = FUN_0277a1f4(lVar14 + lVar9,&local_a8);
    if ((uVar10 & 1) != 0) goto LAB_01b30df4;
  }
  FUN_01b46be0(&local_98);
  lVar14 = *plVar1;
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar8 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar10 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar10 * 4) == 0x19) goto LAB_01b30d98;
      uVar10 = uVar10 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar10);
  }
  uVar10 = 0;
LAB_01b30d98:
  lVar9 = *param_1;
  uVar5 = *(ushort *)(lVar9 + 0x10);
  bVar3 = *(byte *)(lVar9 + 0x12);
  bVar4 = *(byte *)(lVar9 + 0x13);
  nn::time::IsValidDate((uint)uVar5,(uint)bVar3,(uint)bVar4);
  local_90 = (char *)CONCAT44((uint)bVar4 << 0x18 | (uint)bVar3 << 0x10 | (uint)uVar5,(int)lVar14);
  local_78 = (undefined4)uVar10;
  uStack_74 = 8;
  local_70 = 10;
  local_64 = 0;
  local_6c = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_01b35b30(&local_98);
LAB_01b30df4:
  FUN_02640184(&local_c0);
  return;
}

