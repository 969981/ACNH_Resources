
void _INIT_5915(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_054f9540 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_054f9544);
  DAT_054f9550 = 0x8004ef;
  DAT_054f9558 = nn::os::GetSystemTick();
  DAT_054f9560 = 0;
  DAT_054f9568 = 0x1c2b;
  FUN_0277d4ac();
  DAT_054f9570 = 0x142e;
  FUN_0277d4ac();
  DAT_054f9578 = 0xc0000000;
  DAT_054f957c = 0x40000000;
  DAT_054f9580 = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"PlayerPartsHair\"";
  pcStack_38 = "PlayerPartsHairActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_054f9588,0x72,&LAB_02572310,0x288,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

