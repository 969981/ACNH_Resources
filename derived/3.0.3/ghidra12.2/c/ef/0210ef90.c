
void _INIT_5597(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_053eabc8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053eabcc);
  DAT_053eabd8 = 0x8004ef;
  DAT_053eabe0 = nn::os::GetSystemTick();
  DAT_053eabe8 = 0;
  DAT_053eabf0 = 0x1c2b;
  FUN_0277d4ac();
  DAT_053eabf8 = 0x142e;
  FUN_0277d4ac();
  DAT_053eac00 = 0xc0000000;
  DAT_053eac04 = 0x40000000;
  DAT_053eac08 = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"NpcPartsShoes\"";
  pcStack_38 = "NpcPartsShoesActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_053eac10,0x6b,&LAB_0210e3a0,0x2a8,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

