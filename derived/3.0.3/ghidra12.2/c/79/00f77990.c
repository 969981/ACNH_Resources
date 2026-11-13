
void _INIT_3565(void)

{
  DAT_04ff5a60 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04ff5a64);
  DAT_04ff5a70 = 0x8004ef;
  DAT_04ff5a78 = nn::os::GetSystemTick();
  DAT_04ff5a88 = PTR_DAT_04bb2020 + 0x10;
  DAT_04ff5a90 = "NNPC_Talk_Sequence";
  DAT_04ff5aa0 = &DAT_04066c7f;
  DAT_04ff5ab0 = "AI_NPC_";
  DAT_04ff5a80 = 0;
  DAT_04ff5ac0 = &DAT_040a029a;
  DAT_04ff5ac8 = 0x1c2b;
  DAT_04ff5a98 = DAT_04ff5a88;
  DAT_04ff5aa8 = DAT_04ff5a88;
  DAT_04ff5ab8 = DAT_04ff5a88;
  FUN_0277d4ac();
  DAT_04ff5ad0 = 0x142e;
  FUN_0277d4ac();
  DAT_04ff5ad8 = 0xc0000000;
  DAT_04ff5adc = 0x40000000;
  DAT_04ff5ae0 = 1;
  return;
}

