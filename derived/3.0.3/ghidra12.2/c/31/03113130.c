
void _INIT_7451(void)

{
  DAT_056f3100 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056f3104);
  DAT_056f3110 = 0x8004ef;
  DAT_056f3118 = nn::os::GetSystemTick();
  DAT_056f3120 = 0;
  DAT_056f3128 = PTR_DAT_04bb2020 + 0x10;
  DAT_056f3130 = "ModelOnUI";
  DAT_056f3138 = 1;
  DAT_056f313c = 0x1c2b;
  FUN_0277d4ac();
  DAT_056f3144 = 0x142e;
  FUN_0277d4ac();
  DAT_056f314c = 0xc0000000;
  DAT_056f3150 = 0x40000000;
  return;
}

