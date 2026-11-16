
void FUN_02649500(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  if (*param_1 < 8) {
    uVar2 = FUN_02582d8c(param_1,1);
    if ((((uVar2 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) &&
       ((local_14[0] = *param_1, local_14[0] < 8 &&
        (lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1), lVar5 != 0)))) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "MarketBuiltMyVillage";
      local_40 = puVar1;
      iVar3 = FUN_0274bce0(param_1,&local_40);
      if (iVar3 != 0) {
        uVar4 = FUN_0264a7a0(lVar5);
        pcStack_38 = "FillCatalog";
        local_40 = puVar1;
        FUN_02799370(param_1,&local_40,uVar4);
      }
      uVar4 = FUN_0264abf0(lVar5);
      pcStack_38 = "FillGyroidList";
      local_40 = puVar1;
      FUN_0279a8e8(lVar5,&local_40,uVar4);
    }
  }
  return;
}

