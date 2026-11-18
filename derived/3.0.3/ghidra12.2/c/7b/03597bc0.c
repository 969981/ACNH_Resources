
void _INIT_8100(void)

{
  DAT_057732e8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_057732ec);
  DAT_057732f8 = 0x8004ef;
  DAT_05773300 = nn::os::GetSystemTick();
  DAT_05773308 = 0;
  return;
}

