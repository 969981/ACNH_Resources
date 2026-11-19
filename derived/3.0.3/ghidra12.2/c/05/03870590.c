
void _INIT_8505(void)

{
  DAT_05ae6680 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae6684);
  DAT_05ae6690 = 0x8004ef;
  DAT_05ae6698 = nn::os::GetSystemTick();
  DAT_05ae66a0 = 0;
  return;
}

