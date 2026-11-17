
void _INIT_7401(void)

{
  DAT_056ead80 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056ead84);
  DAT_056ead90 = 0x8004ef;
  DAT_056ead98 = nn::os::GetSystemTick();
  DAT_056eada0 = 0;
  DAT_056eada8 = 1;
  DAT_056eadac = 0x1c2b;
  FUN_0277d4ac();
  DAT_056eadb4 = 0x142e;
  FUN_0277d4ac();
  return;
}

