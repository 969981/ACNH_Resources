
void _INIT_3048(void)

{
  DAT_04f40d10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f40d14);
  DAT_04f40d20 = 0x8004ef;
  DAT_04f40d28 = nn::os::GetSystemTick();
  DAT_04f40d30 = 0;
  return;
}

