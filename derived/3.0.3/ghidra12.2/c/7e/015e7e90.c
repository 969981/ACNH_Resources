
void _INIT_4752(void)

{
  DAT_0522a020 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0522a024);
  DAT_0522a030 = 0x8004ef;
  DAT_0522a038 = nn::os::GetSystemTick();
  DAT_0522a040 = 0;
  DAT_0522a048 = PTR_DAT_04bb2020 + 0x10;
  DAT_0522a050 = "App_DebugDraw";
  return;
}

