
void _INIT_8041(void)

{
  DAT_0576635c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05766360);
  DAT_0576636c = 0x8004ef;
  DAT_05766370 = nn::os::GetSystemTick();
  DAT_05766390 = 0xc0000000;
  DAT_05766378 = 0;
  DAT_05766380 = PTR_DAT_04bb2020 + 0x10;
  DAT_05766388 = "ModelOnUI";
  DAT_05766394 = 0x40000000;
  return;
}

