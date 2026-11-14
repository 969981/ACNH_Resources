
void FUN_01556710(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "InstalledMarketTentSign";
  pcStack_48 = "RcmGotSignboard";
  local_50 = puVar1;
  local_40 = puVar1;
  iVar3 = FUN_0273ea30(&local_50);
  if ((iVar3 != 0) && (0 < *param_1)) {
    FUN_0273f3c4(&local_40,1);
  }
  pcStack_38 = "PlazaGyroidBuilt";
  pcStack_48 = "SzaGotGyroid";
  local_50 = puVar1;
  local_40 = puVar1;
  iVar3 = FUN_0273ea30(&local_50);
  if ((iVar3 != 0) && (0 < *param_1)) {
    FUN_0273f3c4(&local_40,1);
  }
  FUN_01555fe0(param_1);
  if (0 < *param_1) {
    local_40 = puVar2 + 0x10;
    pcStack_38 = "VillageDaysCount";
    FUN_0273fd90(&local_40);
  }
  FUN_015561c0();
  return;
}

