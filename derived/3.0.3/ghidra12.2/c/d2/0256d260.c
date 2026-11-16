
void _INIT_5911(void)

{
  undefined **local_40;
  char *pcStack_38;
  undefined **local_30;
  char *pcStack_28;
  
  local_30 = (undefined **)CONCAT44(local_30._4_4_,2);
  DAT_054f7a50 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_054f7a54);
  DAT_054f7a60 = 0x8004ef;
  DAT_054f7a68 = nn::os::GetSystemTick();
  DAT_054f7a70 = 0;
  DAT_054f7a78 = 0x1c2b;
  FUN_0277d4ac();
  DAT_054f7a80 = 0x142e;
  FUN_0277d4ac();
  DAT_054f7a88 = 0xc0000000;
  DAT_054f7a8c = 0x40000000;
  DAT_054f7a90 = 1;
  DAT_054f7a94 = 3;
  DAT_054f7a98 = 2;
  DAT_054f7a9c = 0;
  DAT_054f7a9d = &DAT_101010101010101;
  DAT_054f7aa5 = &DAT_101010101010101;
  DAT_054f7aad = &DAT_101010101010101;
  DAT_054f7ab5 = &DAT_101010101010101;
  DAT_054f7abd = &DAT_101010101010101;
  DAT_054f7ac5 = &DAT_101010101010101;
  DAT_054f7acd = 1;
  DAT_054f7ace = 0x2020202;
  uRam00000000054f7ad2 = 0x20202;
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "\"PlayerPartsAcceMouth\"";
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "PlayerPartsAcceMouthActor";
  FUN_007621e0(&DAT_054f7ad8,0x76,FUN_0256c0e0,0x288,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

