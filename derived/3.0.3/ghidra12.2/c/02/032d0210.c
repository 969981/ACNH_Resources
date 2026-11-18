
void _INIT_7724(void)

{
  DAT_0572ebe8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0572ebec);
  DAT_0572ebf8 = 0x8004ef;
  DAT_0572ec00 = nn::os::GetSystemTick();
  DAT_0572ec10 = PTR_DAT_04bb2020 + 0x10;
  DAT_0572ec18 = "MainContents";
  DAT_0572ec28 = "FixedUi";
  DAT_0572ec08 = 0;
  DAT_0572ec38 = "Prepare";
  DAT_0572ec48 = "Layout";
  DAT_0572ec58 = "Scene";
  DAT_0572ec68 = "Fader";
  DAT_0572ec78 = "Notification";
  DAT_0572ec80 = 0xc4070000c4700000;
  DAT_0572ec88 = 0x4407000044700000;
  DAT_0572ec90 = PTR_DAT_04bc9518 + 0x10;
  DAT_0572ec20 = DAT_0572ec10;
  DAT_0572ec30 = DAT_0572ec10;
  DAT_0572ec40 = DAT_0572ec10;
  DAT_0572ec50 = DAT_0572ec10;
  DAT_0572ec60 = DAT_0572ec10;
  DAT_0572ec70 = DAT_0572ec10;
  nn::os::AllocateTlsSlot((TlsSlot *)&DAT_0572ec98,(_func_void_ulong *)0x0);
  FUN_001001d0(PTR_LAB_04bc9408,&DAT_0572ec98,&__DT_FINI_ARRAY);
  return;
}

