
void _INIT_8598(void)

{
  undefined *puVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "AmbientLight";
  puStack_38 = &DAT_040cc359;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05ae9058 = FUN_0391f030(&local_30,&local_40,&LAB_03926ee8,0,0x158);
  pcStack_28 = "HemisphereLight";
  puStack_38 = &DAT_040c74fc;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05ae9060 = FUN_0391f030(&local_30,&local_40,&LAB_03927068,0,0x1b8);
  pcStack_28 = "DirectionalLight";
  puStack_38 = &DAT_040f17df;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05ae9068 = FUN_0391f030(&local_30,&local_40,&LAB_039272d4,0,600);
  pcStack_28 = "PointLight";
  puStack_38 = &DAT_040f97d6;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05ae9070 = FUN_0391f030(&local_30,&local_40,&LAB_03927610,0,0x1f8);
  pcStack_28 = "SpotLight";
  puStack_38 = &DAT_040ca0fe;
  local_40 = puVar1;
  local_30 = puVar1;
  DAT_05ae9078 = FUN_0391f030(&local_30,&local_40,&LAB_03927690,0,0x270);
  return;
}

