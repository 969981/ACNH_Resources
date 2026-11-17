
void _INIT_7170(void)

{
  DAT_056aab68 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056aab6c);
  DAT_056aab78 = 0x8004ef;
  DAT_056aab80 = nn::os::GetSystemTick();
  DAT_056aab90 = 0xc0000000;
  DAT_056aab94 = 0x40000000;
  DAT_056aab98 = PTR_DAT_04bb2020 + 0x10;
  DAT_056aaba0 = "ModelOnUI";
  DAT_056aab88 = 0;
  DAT_056aaba8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_056aabb0 = 0x142e;
  FUN_0277d4ac();
  DAT_056aabb8 = 1;
  return;
}

