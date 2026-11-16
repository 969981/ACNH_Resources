
void _INIT_6510(void)

{
  DAT_055dd8e0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055dd8e4);
  DAT_055dd8f0 = 0x8004ef;
  DAT_055dd8f8 = nn::os::GetSystemTick();
  DAT_055dd900 = 0;
  return;
}

