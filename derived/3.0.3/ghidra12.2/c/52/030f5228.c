
byte FUN_030f5228(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  cVar3 = FUN_030f51a8();
  puVar2 = PTR_DAT_04bb2020;
  bVar4 = 0;
  switch(*param_2) {
  case 0:
  case 2:
  case 5:
  case 6:
    bVar4 = cVar3 == '\x01';
    break;
  case 0xf:
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "HotelConstruction";
    local_30 = puVar1;
    uVar5 = FUN_0273f0a0(&local_30);
    if ((uVar5 & 1) == 0) {
      pcStack_38 = "HotelBuilt";
      local_40 = puVar1;
      uVar5 = FUN_0273f0a0(&local_40);
      if ((uVar5 & 1) == 0) {
        bVar4 = 0;
        break;
      }
    }
    pcStack_28 = "HotelConstruction";
    local_30 = puVar2 + 0x10;
    uVar5 = FUN_0273f0a0(&local_30);
    if ((uVar5 & 1) == 0) {
      pcStack_28 = "HotelBuilt";
      local_30 = puVar2 + 0x10;
      bVar4 = FUN_0273f0a0(&local_30);
      bVar4 = bVar4 ^ 1;
    }
    else {
      bVar4 = 1;
    }
  }
  return bVar4 & 1;
}

