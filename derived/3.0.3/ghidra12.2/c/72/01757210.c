
void _INIT_4885(void)

{
  undefined *local_30;
  char *pcStack_28;
  undefined *local_20;
  char *pcStack_18;
  
  local_20 = (undefined *)CONCAT44(local_20._4_4_,2);
  DAT_052891d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052891dc);
  DAT_052891e8 = 0x8004ef;
  DAT_052891f0 = nn::os::GetSystemTick();
  DAT_052891f8 = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "\"DisplacementModel\"";
  pcStack_28 = "IndoorActorDisplacementOBj";
  local_20 = local_30;
  FUN_007621e0(&DAT_05289200,0x13,&LAB_01756800,0x3a8,&local_20,&local_30,0,0,0xffffffff,0,0);
  return;
}

