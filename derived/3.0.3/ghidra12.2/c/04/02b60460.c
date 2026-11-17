
ulong FUN_02b60460(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_20;
  char *pcStack_18;
  
  uVar2 = 0;
  switch(param_1) {
  case 0:
    uVar3 = FUN_02b58a70();
    return uVar3;
  case 1:
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "OfficeConstruction1";
    iVar1 = FUN_0273ea30(&local_20);
    uVar2 = (uint)(0 < iVar1);
    break;
  case 2:
    uVar3 = FUN_02b5a970();
    return uVar3;
  case 5:
    uVar3 = FUN_02b5acc0();
    return uVar3;
  case 0xf:
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "HotelConstruction";
    uVar2 = FUN_0273f0a0(&local_20);
  }
  return (ulong)(uVar2 & 1);
}

