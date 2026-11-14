
void _INIT_4869(void)

{
  undefined **local_40;
  char *pcStack_38;
  undefined **local_30;
  char *pcStack_28;
  
  local_30 = (undefined **)CONCAT44(local_30._4_4_,2);
  DAT_052814c8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052814cc);
  DAT_052814d8 = 0x8004ef;
  DAT_052814e0 = nn::os::GetSystemTick();
  DAT_052814e8 = 0;
  DAT_052814f0 = 3;
  DAT_052814f4 = 2;
  DAT_052814f8 = 0;
  DAT_052814f9 = &DAT_101010101010101;
  DAT_05281501 = &DAT_101010101010101;
  DAT_05281509 = &DAT_101010101010101;
  DAT_05281511 = &DAT_101010101010101;
  DAT_05281519 = &DAT_101010101010101;
  DAT_05281521 = &DAT_101010101010101;
  DAT_05281529 = 1;
  DAT_0528152a = 0x2020202;
  uRam000000000528152e = 0x20202;
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "\"HumanPartsToolBalloon\"";
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "HumanPartsToolBalloonActor";
  FUN_007621e0(&DAT_05281538,0xae,&LAB_0173df40,2000,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

