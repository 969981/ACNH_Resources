
void _INIT_8450(void)

{
  DAT_05ae5b20 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae5b24);
  DAT_05ae5b30 = 0x8004ef;
  DAT_05ae5b38 = nn::os::GetSystemTick();
  DAT_05ae5b40 = 0;
  return;
}

