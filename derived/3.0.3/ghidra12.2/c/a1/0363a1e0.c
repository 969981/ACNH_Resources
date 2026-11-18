
void _INIT_8151(void)

{
  DAT_05aa9048 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa904c);
  DAT_05aa9058 = 0x8004ef;
  DAT_05aa9060 = nn::os::GetSystemTick();
  DAT_05aa9068 = 0;
  return;
}

