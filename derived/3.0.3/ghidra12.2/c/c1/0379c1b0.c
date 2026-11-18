
void _INIT_8254(void)

{
  DAT_05ac4f10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ac4f14);
  DAT_05ac4f20 = 0x8004ef;
  DAT_05ac4f28 = nn::os::GetSystemTick();
  DAT_05ac4f30 = 0;
  return;
}

