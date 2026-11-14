
void _INIT_5134(void)

{
  DAT_053006d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053006dc);
  DAT_053006e8 = 0x8004ef;
  DAT_053006f0 = nn::os::GetSystemTick();
  DAT_053006f8 = 0;
  DAT_05300700 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05300708 = 0x142e;
  FUN_0277d4ac();
  DAT_05300710 = 0xc0000000;
  DAT_05300714 = 0x40000000;
  DAT_05300718 = 1;
  DAT_05300728 = PTR_DAT_04bb2020 + 0x10;
  DAT_05300730 = "ItemMgrHeap";
  return;
}

