
uint FUN_016cf630(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb32f0;
  puVar2 = PTR_DAT_04bb32e8;
  puVar1 = PTR_DAT_04bb2020;
  if ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) &&
     ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0 &&
      *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) &&
      *(int *)(PTR_DAT_04bc3a78 + 0x38) == 0x3ee08254)) {
    local_80 = PTR_DAT_04bb2020 + 0x10;
    uVar10 = *(undefined8 *)PTR_DAT_04bb32f0;
    pcStack_78 = "Countdown";
    puVar9 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar9 == 0) {
      local_38 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_38 >> 0x20) < '\x05') {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
        local_50 = (undefined *)(lVar7 + -0x15180);
        local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_50);
      }
      puVar9 = &local_38;
      uVar8 = local_38 >> 0x30;
      local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
      local_38 = CONCAT26((short)uVar8,(undefined6)local_38) & 0xff00ffffffffffff;
    }
    uVar8 = *puVar9;
    uVar8 = FUN_00879dd0(uVar10,&local_80,uVar8,uVar8 >> 0x10,uVar8 >> 0x18,0);
    if ((uVar8 & 1) == 0) {
      local_50 = puVar1 + 0x10;
      pcStack_48 = "Fireworks";
      uVar10 = *(undefined8 *)puVar3;
      puVar9 = (ulong *)(*(long *)puVar2 + 0x4068);
      if (*(short *)puVar9 == 0) {
        local_40 = *(ulong *)(*(long *)puVar2 + 0x4060);
        if ((char)(local_40 >> 0x20) < '\x05') {
          lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
          local_38 = lVar7 - 0x15180;
          local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
        }
        puVar9 = &local_40;
        uVar8 = local_40 >> 0x30;
        local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
        local_40 = CONCAT26((short)uVar8,(undefined6)local_40) & 0xff00ffffffffffff;
      }
      uVar8 = *puVar9;
      uVar8 = FUN_00879dd0(uVar10,&local_50,uVar8,uVar8 >> 0x10,uVar8 >> 0x18,0);
      uVar6 = 0;
      if ((uVar8 & 1) != 0) goto LAB_016cf848;
      FUN_025196e4(&local_50);
      if ((byte)local_50._0_1_ < 8) {
        local_80 = puVar1 + 0x10;
        pcStack_78 = "SeqHotelIntroductionDone";
        iVar4 = FUN_0274bce0(&local_50,&local_80);
        uVar6 = 0;
        if (iVar4 == 0) goto LAB_016cf848;
        uVar5 = FUN_0252d29c();
        local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar5);
        uVar8 = FUN_02618870(&local_80);
        if ((uVar8 & 1) != 0) {
          local_80 = puVar1 + 0x10;
          pcStack_78 = "HotelUnlockDIYTrade";
          iVar4 = FUN_0274bce0(&local_50,&local_80);
          if (iVar4 == 0) {
            local_60 = 0;
            uStack_58 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_80 = (undefined *)0x0;
            pcStack_78 = (char *)0x0;
            uVar6 = FUN_0220b170(&local_80);
            goto LAB_016cf848;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_016cf848:
  return uVar6 & 1;
}

