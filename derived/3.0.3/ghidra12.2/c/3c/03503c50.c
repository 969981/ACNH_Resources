
void _INIT_8042(void)

{
  DAT_057663a8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_057663ac);
  DAT_057663b8 = 0x8004ef;
  DAT_057663c0 = nn::os::GetSystemTick();
  DAT_057663c8 = 0;
  return;
}

