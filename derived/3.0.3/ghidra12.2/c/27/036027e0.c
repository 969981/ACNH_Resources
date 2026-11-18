
void _INIT_8139(void)

{
  DAT_05aa8e68 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa8e6c);
  DAT_05aa8e78 = 0x8004ef;
  DAT_05aa8e80 = nn::os::GetSystemTick();
  DAT_05aa8e88 = 0;
  return;
}

