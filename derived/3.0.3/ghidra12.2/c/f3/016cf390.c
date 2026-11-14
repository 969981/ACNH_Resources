
bool FUN_016cf390(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "HotelConstruction";
  local_50 = puVar1;
  uVar5 = FUN_0273f0a0(&local_50);
  if ((uVar5 & 1) == 0) {
    pcStack_48 = "HotelBuilt";
    local_50 = puVar1;
    uVar5 = FUN_0273f0a0(&local_50);
    puVar3 = PTR_DAT_04bb32f0;
    puVar1 = PTR_DAT_04bb32e8;
    if (((uVar5 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) {
      plVar7 = *(long **)PTR_DAT_04bb27d0;
      if (((*(uint *)(plVar7 + 0x10) < 2) ||
          (((*(uint *)(plVar7 + 0x10) != 2 || (*(byte *)(*plVar7 + 0x476) < 2)) &&
           ((plVar7[2] == 0 || ((*(uint *)(PTR_DAT_04bc1240 + 8) & 1) == 0)))))) &&
         ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3ee08254 ||
          (*(int *)(PTR_DAT_04bc3a78 + 0x38) == 0x6622bd46)))) {
        local_50 = puVar2 + 0x10;
        uVar9 = *(undefined8 *)PTR_DAT_04bb32f0;
        pcStack_48 = "Countdown";
        puVar8 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*(short *)puVar8 == 0) {
          local_38 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)(local_38 >> 0x20) < '\x05') {
            lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
            local_60 = (undefined *)(lVar6 + -0x15180);
            local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
          }
          puVar8 = &local_38;
          uVar5 = local_38 >> 0x30;
          local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
          local_38 = CONCAT26((short)uVar5,(undefined6)local_38) & 0xff00ffffffffffff;
        }
        uVar5 = *puVar8;
        uVar5 = FUN_00879dd0(uVar9,&local_50,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
        if ((uVar5 & 1) == 0) {
          local_60 = puVar2 + 0x10;
          pcStack_58 = "Fireworks";
          uVar9 = *(undefined8 *)puVar3;
          puVar8 = (ulong *)(*(long *)puVar1 + 0x4068);
          if (*(short *)puVar8 == 0) {
            local_40 = *(ulong *)(*(long *)puVar1 + 0x4060);
            if ((char)(local_40 >> 0x20) < '\x05') {
              lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
              local_38 = lVar6 - 0x15180;
              local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
            }
            puVar8 = &local_40;
            uVar5 = local_40 >> 0x30;
            local_40._0_6_ = CONCAT24(5,(undefined4)local_40);
            local_40 = CONCAT26((short)uVar5,(undefined6)local_40) & 0xff00ffffffffffff;
          }
          uVar5 = *puVar8;
          uVar5 = FUN_00879dd0(uVar9,&local_60,uVar5,uVar5 >> 0x10,uVar5 >> 0x18,0);
          if ((uVar5 & 1) != 0) {
            return false;
          }
          FUN_025196e4(&local_60,0);
          if ((byte)local_60._0_1_ < 8) {
            pcStack_48 = "SeqHotelIntroductionDone";
            local_50 = puVar2 + 0x10;
            iVar4 = FUN_0274bce0(&local_60,&local_50);
            if (iVar4 == 0) {
              pcStack_48 = "ReserveHotelintroduction";
              local_50 = puVar2 + 0x10;
              iVar4 = FUN_0274bce0(&local_60,&local_50);
              return iVar4 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}

