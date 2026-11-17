
void _INIT_7330(void)

{
  DAT_056d6d00 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056d6d04);
  DAT_056d6d10 = 0x8004ef;
  DAT_056d6d18 = nn::os::GetSystemTick();
  DAT_056d6d20 = 0;
  DAT_056d6d28 = PTR_DAT_04bb2020 + 0x10;
  DAT_056d6d30 = "ModelOnUI";
  return;
}

