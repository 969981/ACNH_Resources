
bool FUN_027ba7a4(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *local_30;
  char *pcStack_28;
  
  puVar3 = PTR_DAT_04bb2020;
  uVar2 = *param_1;
  if (5 < uVar2) {
    uVar2 = 0;
  }
  if (1 < (int)uVar2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "MuseumConstruction1";
    local_30 = puVar1;
    iVar4 = FUN_0273ea30(&local_30);
    if (iVar4 < 1) {
      pcStack_28 = "MuseumConstruction2";
      local_30 = puVar1;
      iVar4 = FUN_0273ea30(&local_30);
      if (iVar4 < 1) {
        local_30 = puVar3 + 0x10;
        pcStack_28 = "MuseumConstruction3";
        iVar4 = FUN_0273ea30(&local_30);
        return iVar4 < 1;
      }
    }
  }
  return false;
}

