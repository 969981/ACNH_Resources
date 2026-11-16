
void _INIT_5910(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_054f791c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_054f7920);
  DAT_054f792c = 0x8004ef;
  DAT_054f7930 = nn::os::GetSystemTick();
  DAT_054f7938 = 0;
  DAT_054f7940 = 0x1c2b;
  FUN_0277d4ac();
  DAT_054f7948 = 0x142e;
  FUN_0277d4ac();
  DAT_054f7950 = 0xc0000000;
  DAT_054f7954 = 0x40000000;
  DAT_054f7958 = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"PlayerPartsAcceEye\"";
  pcStack_38 = "PlayerPartsAcceEyeActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_054f7960,0x77,&LAB_0256b210,0x288,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

