
void _INIT_8150(void)

{
  DAT_05aa9020 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa9024);
  DAT_05aa9030 = 0x8004ef;
  DAT_05aa9038 = nn::os::GetSystemTick();
  DAT_05aa9040 = 0;
  return;
}

