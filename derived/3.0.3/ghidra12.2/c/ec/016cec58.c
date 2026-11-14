
uint FUN_016cec58(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "HotelConstruction";
  local_30 = puVar1;
  uVar3 = FUN_0273f0a0(&local_30);
  if ((uVar3 & 1) == 0) {
    pcStack_28 = "HotelBuilt";
    local_30 = puVar1;
    uVar2 = FUN_0273f0a0(&local_30);
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

