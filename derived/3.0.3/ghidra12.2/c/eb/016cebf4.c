
uint FUN_016cebf4(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "HotelConstruction";
  local_30 = puVar1;
  uVar3 = FUN_0273f0a0(&local_30);
  if ((uVar3 & 1) == 0) {
    pcStack_38 = "HotelBuilt";
    local_40 = puVar1;
    uVar2 = FUN_0273f0a0(&local_40);
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

