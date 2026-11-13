
void _INIT_3040(void)

{
  DAT_04f40050 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f40054);
  DAT_04f40060 = 0x8004ef;
  DAT_04f40068 = nn::os::GetSystemTick();
  DAT_04f40070 = 0;
  return;
}

