
void _INIT_8680(void)

{
  DAT_05aedb20 = 0x8004ef;
  DAT_05aedb28 = nn::os::GetSystemTick();
  DAT_05aedb38 = PTR_DAT_04bb2020 + 0x10;
  DAT_05aedb40 = "ELink2DB.belnk";
  DAT_05aedb48 = DAT_05aedb38;
  DAT_05aedb50 = "SLink2DB.bslnk";
  DAT_05aedb58 = DAT_05aedb38;
  DAT_05aedb60 = "ELink2/ELink2DB.szs";
  DAT_05aedb30 = 0;
  DAT_05aedb68 = DAT_05aedb38;
  DAT_05aedb70 = "SLink2/SLink2DB.szs";
  return;
}

