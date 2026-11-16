
void FUN_025d9534(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x1d);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "ShopKind";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)*param_2);
    pcStack_38 = "SellMoney";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)param_2[1]);
    }
  }
  FUN_02602f20(param_1);
  FUN_02603050(param_1);
  FUN_025d9600(param_1,param_2);
  local_40 = puVar2 + 0x10;
  pcStack_38 = "IsOnRegulationMoney";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_40,(char)param_2[0x7b]);
  }
  return;
}

