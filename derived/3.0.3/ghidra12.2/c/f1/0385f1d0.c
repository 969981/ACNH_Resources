
void _INIT_8476(void)

{
  DAT_05ae6040 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae6044);
  DAT_05ae6050 = 0x8004ef;
  DAT_05ae6058 = nn::os::GetSystemTick();
  DAT_05ae6070 = 2;
  DAT_05ae6060 = 0;
  DAT_05ae606c = 1;
  DAT_05ae6074 = 3;
  DAT_05ae6078 = PTR_DAT_04bb2020 + 0x10;
  DAT_05ae6080 = "BtnList_Scroll";
  DAT_05ae6088 = DAT_05ae6078;
  DAT_05ae6090 = "BtnList_ScrollInvalid";
  DAT_05ae6098 = DAT_05ae6078;
  DAT_05ae60a0 = "BtnList_ChangeSelectBtnList";
  DAT_05ae6068 = 0;
  DAT_05ae60a8 = DAT_05ae6078;
  DAT_05ae60b0 = "BtnList_ScrollScrollBtnList::Dir";
  return;
}

