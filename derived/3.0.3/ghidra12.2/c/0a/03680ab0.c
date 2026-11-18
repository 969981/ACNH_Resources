
void _INIT_8192(void)

{
  DAT_05aace1c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aace20);
  DAT_05aace2c = 0x8004ef;
  DAT_05aace30 = nn::os::GetSystemTick();
  DAT_05aace38 = 0;
  return;
}

