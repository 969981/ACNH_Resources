
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_4389(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  DAT_0516b090 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0516b094);
  DAT_0516b0a0 = 0x8004ef;
  DAT_0516b0a8 = nn::os::GetSystemTick();
  uVar5 = 0;
  DAT_0516b0b0 = 0;
  DAT_0516b0b8 = 3;
  DAT_0516b0bc = 2;
  DAT_0516b0c0 = 0;
  DAT_0516b0c1 = &DAT_101010101010101;
  DAT_0516b0c9 = &DAT_101010101010101;
  DAT_0516b0d1 = &DAT_101010101010101;
  DAT_0516b0d9 = &DAT_101010101010101;
  DAT_0516b0e1 = &DAT_101010101010101;
  DAT_0516b0e9 = &DAT_101010101010101;
  DAT_0516b0f1 = 1;
  DAT_0516b0f2 = 0x2020202;
  uRam000000000516b0f6 = 0x20202;
  DAT_0516b1e0 = 0;
  DAT_0516b1e8 = 0;
  DAT_0516b100 = &PTR_LAB_0498b180;
  _DAT_0516b108 = 0;
  _DAT_0516b110 = 0;
  _DAT_0516b118 = 0;
  DAT_0516b120 = 0;
  DAT_0516b128 = 0;
  DAT_0516b130 = 0;
  DAT_0516b138 = 0;
  DAT_0516b140 = 0;
  DAT_0516b148 = 0;
  DAT_0516b150 = 0;
  DAT_0516b158 = 0;
  DAT_0516b160 = 0;
  DAT_0516b168 = 0;
  DAT_0516b170 = 0;
  DAT_0516b178 = 0;
  DAT_0516b180 = 0;
  DAT_0516b188 = 0;
  DAT_0516b190 = 0;
  DAT_0516b198 = 0;
  DAT_0516b1a0 = 0;
  DAT_0516b1a8 = 0;
  DAT_0516b1b0 = 0;
  DAT_0516b1b8 = 0;
  DAT_0516b1c0 = 0;
  DAT_0516b1c8 = 0;
  DAT_0516b1d0 = 0;
  DAT_0516b1d8 = 0;
  do {
    uVar4 = (uint)uVar5;
    puVar3 = &DAT_0407ebb1;
    if (uVar4 < 0x39) {
      puVar3 = (undefined8 *)(&PTR_s_Invalid_0498b510)[uVar5];
    }
    uVar2 = FUN_006bd550(puVar3,0);
    puVar1 = &DAT_0516b108 + uVar5;
    if (0x38 < uVar4) {
      puVar1 = &DAT_0516b108;
    }
    *puVar1 = uVar2;
    uVar6 = 0x39;
    if ((int)uVar4 < 0x39) {
      uVar6 = uVar4 + 1;
    }
    uVar5 = (ulong)uVar6;
  } while (uVar6 != 0x39);
  return;
}

