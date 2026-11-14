
void FUN_016a9ee0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "HotelUnlockNormalRoomNumber";
  local_40 = puVar1;
  iVar3 = FUN_0273ea30(&local_40);
  pcStack_38 = "HotelUnlockNormalRoomNumberReserve";
  local_40 = puVar1;
  iVar4 = FUN_0273ea30(&local_40);
  if (iVar4 < 3) {
    iVar4 = 2;
  }
  if (iVar3 < iVar4) {
    pcStack_38 = "HotelUnlockNormalRoomNumber";
    local_40 = puVar1;
    FUN_0273f3c4(&local_40);
  }
  pcStack_38 = "HotelUnlockVipRoomReserve";
  local_40 = puVar1;
  iVar4 = FUN_0273ea30(&local_40);
  if (iVar4 != 0) {
    local_40 = puVar2 + 0x10;
    pcStack_38 = "HotelUnlockVipRoom";
    FUN_0273f3c4(&local_40,1);
  }
  return;
}

