
void _INIT_7731(void)

{
  DAT_0572f018 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0572f01c);
  DAT_0572f028 = 0x8004ef;
  DAT_0572f030 = nn::os::GetSystemTick();
  DAT_0572f038 = 0;
  DAT_0572f040 = PTR_DAT_04bb2020 + 0x10;
  DAT_0572f048 = "MainContents";
  DAT_0572f058 = "FixedUi";
  DAT_0572f068 = "Prepare";
  DAT_0572f078 = "Layout";
  DAT_0572f088 = "Scene";
  DAT_0572f098 = "Fader";
  DAT_0572f0a8 = "Notification";
  DAT_0572f0b0 = 0xc4070000c4700000;
  DAT_0572f0b8 = 0x4407000044700000;
  DAT_0572f050 = DAT_0572f040;
  DAT_0572f060 = DAT_0572f040;
  DAT_0572f070 = DAT_0572f040;
  DAT_0572f080 = DAT_0572f040;
  DAT_0572f090 = DAT_0572f040;
  DAT_0572f0a0 = DAT_0572f040;
  FUN_0034f3dc(&DAT_0572f0c0);
  FUN_001001d0(PTR_FUN_04bc95c0,&DAT_0572f0c0,&__DT_FINI_ARRAY);
  return;
}

