
void _INIT_5200(void)

{
  DAT_0533a360 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0533a364);
  DAT_0533a370 = 0x8004ef;
  DAT_0533a378 = nn::os::GetSystemTick();
  DAT_0533a380 = 0;
  return;
}

