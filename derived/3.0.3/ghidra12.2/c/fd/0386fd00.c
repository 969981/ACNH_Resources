
void _INIT_8502(void)

{
  DAT_05ae65f8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae65fc);
  DAT_05ae6608 = 0x8004ef;
  DAT_05ae6610 = nn::os::GetSystemTick();
  DAT_05ae6618 = 0;
  return;
}

