
void _INIT_8130(void)

{
  DAT_05aa8b60 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa8b64);
  DAT_05aa8b70 = 0x8004ef;
  DAT_05aa8b78 = nn::os::GetSystemTick();
  DAT_05aa8b80 = 0;
  return;
}

