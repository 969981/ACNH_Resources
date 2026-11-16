
void _INIT_6550(void)

{
  DAT_055e745c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055e7460);
  DAT_055e746c = 0x8004ef;
  DAT_055e7470 = nn::os::GetSystemTick();
  DAT_055e7478 = 0;
  return;
}

