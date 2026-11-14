
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_4902(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  DAT_05292340 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05292344);
  DAT_05292350 = 0x8004ef;
  DAT_05292358 = nn::os::GetSystemTick();
  puVar2 = PTR_s_ErrorName_04bbe308;
  DAT_05292360 = 0;
  DAT_05292438 = 0;
  DAT_05292368 = &PTR_LAB_049c3d20;
  _DAT_05292370 = 0;
  uVar6 = 0;
  _DAT_05292378 = 0;
  _DAT_05292380 = 0;
  _DAT_05292388 = 0;
  _DAT_05292390 = 0;
  _DAT_05292398 = 0;
  DAT_052923a0 = 0;
  DAT_052923a8 = 0;
  DAT_052923b0 = 0;
  DAT_052923b8 = 0;
  DAT_052923c0 = 0;
  DAT_052923c8 = 0;
  DAT_052923d0 = 0;
  DAT_052923d8 = 0;
  DAT_052923e0 = 0;
  DAT_052923e8 = 0;
  _DAT_052923f0 = 0;
  _DAT_052923f8 = 0;
  _DAT_05292400 = 0;
  _DAT_05292408 = 0;
  _DAT_05292410 = 0;
  _DAT_05292418 = 0;
  _DAT_05292420 = 0;
  _DAT_05292428 = 0;
  _DAT_05292430 = 0;
  do {
    uVar5 = (uint)uVar6;
    puVar4 = &DAT_0407ebb1;
    if (uVar5 < 0x33) {
      puVar4 = *(undefined8 **)(puVar2 + uVar6 * 8 + 0x278);
    }
    uVar3 = FUN_006bd550(puVar4,0);
    puVar1 = &DAT_05292370 + uVar6;
    if (0x32 < uVar5) {
      puVar1 = &DAT_05292370;
    }
    *puVar1 = uVar3;
    uVar7 = 0x33;
    if ((int)uVar5 < 0x33) {
      uVar7 = uVar5 + 1;
    }
    uVar6 = (ulong)uVar7;
  } while (uVar7 != 0x33);
  return;
}

