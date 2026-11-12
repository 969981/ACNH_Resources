
void _INIT_1543(void)

{
  DAT_04d01600 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04d01604);
  DAT_04d01610 = 0x8004ef;
  DAT_04d01618 = nn::os::GetSystemTick();
  DAT_04d01620 = 0;
  DAT_04d01628 = PTR_DAT_04bb2020 + 0x10;
  DAT_04d01630 = "Debug\\Replay";
  DAT_04d01638 = PTR_DAT_04bb2020 + 0x10;
  DAT_04d01640 = &DAT_040c9827;
  return;
}

