
void _INIT_5050(void)

{
  DAT_052c3d30 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c3d34);
  DAT_052c3d40 = 0x8004ef;
  DAT_052c3d48 = nn::os::GetSystemTick();
  DAT_052c3d50 = 0;
  return;
}

