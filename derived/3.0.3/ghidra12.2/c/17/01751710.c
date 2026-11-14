
void _INIT_4880(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_052878e0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052878e4);
  DAT_052878f0 = 0x8004ef;
  DAT_052878f8 = nn::os::GetSystemTick();
  DAT_05287900 = 0;
  DAT_05287908 = 3;
  DAT_0528790c = 2;
  DAT_05287911 = &DAT_101010101010101;
  DAT_05287919 = &DAT_101010101010101;
  DAT_05287921 = &DAT_101010101010101;
  DAT_05287929 = &DAT_101010101010101;
  DAT_05287931 = &DAT_101010101010101;
  DAT_05287939 = &DAT_101010101010101;
  DAT_05287941 = 1;
  DAT_05287910 = 0;
  DAT_05287942 = 0x2020202;
  uRam0000000005287946 = 0x20202;
  DAT_0528794c = 0x1c2b;
  FUN_0277d4ac();
  DAT_05287954 = 0x142e;
  FUN_0277d4ac();
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"HumanPartsToolUmbrella\"";
  pcStack_38 = "HumanPartsToolUmbrellaActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_05287960,0x97,FUN_01750ca0,0x3b0,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

