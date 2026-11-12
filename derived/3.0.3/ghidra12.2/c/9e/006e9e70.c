
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1179(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  DAT_04c88ea0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04c88ea4);
  DAT_04c88eb0 = 0x8004ef;
  DAT_04c88eb8 = nn::os::GetSystemTick();
  uVar2 = _DAT_04101ee0;
  DAT_04c88ec0 = 0;
  powl(_DAT_04102440);
  uVar1 = _DAT_04101fb0;
  FUN_006bb7d0();
  DAT_04c88ec8 = FUN_006bbcd0();
  uVar2 = powl(_DAT_041026b0,uVar2);
  FUN_006bb7d0(uVar2,uVar1);
  DAT_04c88ed0 = FUN_006bbcd0();
  return;
}

