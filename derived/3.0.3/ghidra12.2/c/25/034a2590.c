
void _INIT_8014(void)

{
  DAT_05760630 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05760634);
  DAT_05760640 = 0x8004ef;
  DAT_05760648 = nn::os::GetSystemTick();
  DAT_05760650 = 0;
  DAT_05760658 = PTR_DAT_04bb2020 + 0x10;
  DAT_05760660 = "ModelOnUI";
  DAT_05760668 = 1;
  DAT_0576066c = 0x1c2b;
  FUN_0277d4ac();
  DAT_05760674 = 0x142e;
  FUN_0277d4ac();
  return;
}

