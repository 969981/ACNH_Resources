
void _INIT_5914(void)

{
  undefined **local_40;
  char *pcStack_38;
  undefined **local_30;
  char *pcStack_28;
  
  local_30 = (undefined **)CONCAT44(local_30._4_4_,2);
  DAT_054f93c8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_054f93cc);
  DAT_054f93d8 = 0x8004ef;
  DAT_054f93e0 = nn::os::GetSystemTick();
  DAT_054f93e8 = 0;
  DAT_054f93f0 = 0x1c2b;
  FUN_0277d4ac();
  DAT_054f93f8 = 0x142e;
  FUN_0277d4ac();
  DAT_054f9400 = 0xc0000000;
  DAT_054f9404 = 0x40000000;
  DAT_054f9408 = 1;
  DAT_054f940c = 3;
  DAT_054f9410 = 2;
  DAT_054f9414 = 0;
  DAT_054f9415 = &DAT_101010101010101;
  DAT_054f941d = &DAT_101010101010101;
  DAT_054f9425 = &DAT_101010101010101;
  DAT_054f942d = &DAT_101010101010101;
  DAT_054f9435 = &DAT_101010101010101;
  DAT_054f943d = &DAT_101010101010101;
  DAT_054f9445 = 1;
  DAT_054f9446 = 0x2020202;
  uRam00000000054f944a = 0x20202;
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "\"PlayerPartsCap\"";
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "PlayerPartsCapActor";
  FUN_007621e0(&DAT_054f9450,0x75,FUN_02570760,0x288,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

