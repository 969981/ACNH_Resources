
void _INIT_8003(void)

{
  DAT_0575c730 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c734);
  DAT_0575c740 = 0x8004ef;
  DAT_0575c748 = nn::os::GetSystemTick();
  DAT_0575c750 = 0;
  return;
}

