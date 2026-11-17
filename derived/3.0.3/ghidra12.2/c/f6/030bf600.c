
void _INIT_7410(void)

{
  DAT_056eb0dc = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056eb0e0);
  DAT_056eb0ec = 0x8004ef;
  DAT_056eb0f0 = nn::os::GetSystemTick();
  DAT_056eb0f8 = 0;
  DAT_056eb100 = 1;
  DAT_056eb104 = 0x1c2b;
  FUN_0277d4ac();
  DAT_056eb10c = 0x142e;
  FUN_0277d4ac();
  return;
}

