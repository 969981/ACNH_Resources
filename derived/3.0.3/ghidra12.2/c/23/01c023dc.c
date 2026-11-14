
void FUN_01c023dc(long param_1)

{
  int iVar1;
  
  if ((DAT_05343858 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05343858);
    if (iVar1 != 0) {
      DAT_05343830 = PTR_DAT_04bb2020 + 0x10;
      DAT_05343848 = PTR_DAT_04bb2120;
      DAT_05343850 = 0;
      DAT_05343838 = PTR_DAT_04bb2120;
      DAT_05343828 = &PTR_LAB_04a3ed98;
      DAT_05343840 = DAT_05343830;
      __cxa_guard_release(&DAT_05343858);
    }
  }
  if ((DAT_053438b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_053438b8);
    if (iVar1 != 0) {
      DAT_05343860 = 0;
      DAT_05343870 = PTR_DAT_04bb2020 + 0x10;
      DAT_053438a8 = PTR_DAT_04bb2120;
      DAT_053438b0 = 0;
      DAT_05343868 = (undefined8 *)0x0;
      DAT_05343878 = PTR_DAT_04bb2120;
      DAT_05343888 = PTR_DAT_04bb2120;
      DAT_05343898 = PTR_DAT_04bb2120;
      DAT_05343880 = DAT_05343870;
      DAT_05343890 = DAT_05343870;
      DAT_053438a0 = DAT_05343870;
      __cxa_guard_release(&DAT_053438b8);
    }
  }
  DAT_05343868 = &DAT_05343828;
  DAT_05343878 = "Doubutsugo_Base";
  DAT_053438a8 = "MonologueObject";
  DAT_053438b0 = 0;
  FUN_038387b8(param_1 + 0x20);
  return;
}

