
void FUN_02649b30(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1), lVar4 != 0)) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "MarketBuiltMyVillage";
    local_40 = puVar1;
    iVar2 = FUN_0274ce10(param_1,&local_40);
    if (iVar2 != 0) {
      uVar3 = FUN_0264a7a0(lVar4);
      pcStack_38 = "FillCatalog";
      local_40 = puVar1;
      FUN_0279a7c4(param_1,&local_40,uVar3);
    }
    uVar3 = FUN_0264abf0(lVar4);
    pcStack_38 = "FillGyroidList";
    local_40 = puVar1;
    FUN_0279a7c4(param_1,&local_40,uVar3);
  }
  return;
}

