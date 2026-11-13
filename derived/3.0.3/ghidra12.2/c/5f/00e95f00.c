
void _INIT_3270(void)

{
  DAT_04f79f48 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f79f4c);
  DAT_04f79f58 = 0x8004ef;
  DAT_04f79f60 = nn::os::GetSystemTick();
  DAT_04f79f68 = 0;
  return;
}

