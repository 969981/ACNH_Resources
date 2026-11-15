
undefined8 FUN_0219b250(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  FUN_0252d11c(local_34);
  puVar2 = PTR_DAT_04bb2020;
  if (7 < local_34[0] || *(char *)(param_1 + 0xaf9) == '\0') {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "EnableEmoticonUI";
  local_48 = puVar1;
  iVar3 = FUN_0274bce0(local_34,&local_48);
  if (iVar3 == 0) {
    if ((param_2 & 1) == 0) {
      local_48 = puVar2 + 0x10;
      pcStack_40 = "MarketBuilt";
      uVar5 = FUN_0273f0a0(&local_48);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    else {
      puVar2 = puVar2 + 0x10;
      pcStack_40 = "MarketBuilt";
      local_48 = puVar2;
      uVar5 = FUN_0273f0a0(&local_48);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      pcStack_50 = "NnpcApproachNoEmoticonCount";
      local_58 = puVar2;
      iVar3 = FUN_0274bce0(local_34,&local_58);
      if (iVar3 < 1) {
        return 0;
      }
    }
  }
  else {
    pcStack_40 = "NnpcApproachNoEmoticonCount";
    local_48 = puVar1;
    iVar3 = FUN_0274bce0(local_34,&local_48);
    pcStack_50 = "NnpcApproachNoEmoticonCount";
    local_58 = puVar1;
    iVar4 = FUN_0274f6e0(&local_58);
    if (iVar3 < iVar4) {
      return 0;
    }
  }
  uVar6 = FUN_00ef5558(local_34,(long)*(char *)(param_1 + 0xaf8));
  if ((int)uVar6 == 1) {
    return uVar6;
  }
  return 0;
}

