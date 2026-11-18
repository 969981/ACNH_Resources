
void _INIT_8124(void)

{
  DAT_05aa8a70 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa8a74);
  DAT_05aa8a80 = 0x8004ef;
  DAT_05aa8a88 = nn::os::GetSystemTick();
  DAT_05aa8a90 = 0;
  return;
}

