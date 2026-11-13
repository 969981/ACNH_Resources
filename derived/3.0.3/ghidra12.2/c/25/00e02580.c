
void _INIT_3011(void)

{
  DAT_04f3c010 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f3c014);
  DAT_04f3c020 = 0x8004ef;
  DAT_04f3c028 = nn::os::GetSystemTick();
  DAT_04f3c030 = 0;
  return;
}

