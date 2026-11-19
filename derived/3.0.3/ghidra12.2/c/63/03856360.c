
void _INIT_8430(void)

{
  DAT_05ae57f0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae57f4);
  DAT_05ae5800 = 0x8004ef;
  DAT_05ae5808 = nn::os::GetSystemTick();
  DAT_05ae5810 = 0;
  return;
}

