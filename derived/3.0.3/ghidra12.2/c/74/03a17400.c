
void _INIT_8608(void)

{
  undefined *puVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "MaskedLight";
  puStack_38 = &DAT_040a3548;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05aea4e0 = FUN_0391f030(&local_30,&local_40,&LAB_03a16c88,0,0x2c0);
  pcStack_28 = "MaskedSpotLight";
  puStack_38 = &DAT_0409e49e;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05aea4f0 = FUN_0391f030(&local_30,&local_40,&LAB_03a16d08,0,0x448);
  pcStack_28 = "MaskedProjLight";
  puStack_38 = &DAT_04098f2e;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05aea4e8 = FUN_0391f030(&local_30,&local_40,&LAB_03a16d88,0,0x6e8);
  return;
}

