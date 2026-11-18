
void _INIT_8066(void)

{
  DAT_0576b410 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576b414);
  DAT_0576b420 = 0x8004ef;
  DAT_0576b428 = nn::os::GetSystemTick();
  DAT_0576b430 = 0;
  return;
}

