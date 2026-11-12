
void FUN_007ca9f4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)((long)param_1 + 0x844);
  param_1[0x105] = 0;
  param_1[0x107] = puVar3;
  *(undefined4 *)(param_1 + 0x108) = 0x100;
  *(undefined1 *)((long)param_1 + 0x943) = 0;
  if (puVar3 != &DAT_0407ebb1) {
    *(undefined1 *)puVar3 = 0;
  }
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined1 *)(param_1 + 0x129) = 1;
  param_1[0x106] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb4a98;
  param_1[0x12a] = 0;
  *(undefined8 **)puVar1 = param_1;
  memset(param_1 + 1,0,0x820);
  *(undefined1 *)(param_1 + 299) = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0x22;
  puVar1 = PTR_DAT_04bdf090;
  *param_1 = &PTR_FUN_04916420;
  param_1[0x135] = param_1 + 0x134;
  param_1[0x134] = param_1 + 0x134;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x133) = 0;
  param_1[0x138] = param_1 + 0x137;
  param_1[300] = puVar1 + 0x10;
  param_1[0x137] = param_1 + 0x137;
  param_1[0x136] = 0xffffffff00000000;
  param_1[0x139] = 0xffffffff00000000;
  FUN_038e18e4(param_1 + 0x13a);
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  param_1[0x142] = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  param_1[0x14b] = PTR_DAT_04bb2120;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined2 *)(param_1 + 0x14d) = 0;
  *(undefined1 *)((long)param_1 + 0xa6b) = 0;
  param_1[0x14a] = puVar1;
  *(undefined4 *)((long)param_1 + 0x9b4) = 0x98;
  *(undefined4 *)((long)param_1 + 0x9cc) = 0xa8;
  puVar1 = PTR_DAT_04bdf0c8 + 0x10;
  *(undefined1 *)(param_1 + 0x14f) = 1;
  *(undefined4 *)((long)param_1 + 0xa7c) = 0;
  param_1[0x150] = 0;
  param_1[0x14e] = puVar1;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  param_1[0x155] = 0;
  param_1[0x151] = puVar1;
  puVar1 = PTR_DAT_04bcb440;
  param_1[0x154] = 0;
  param_1[0x153] = 0;
  param_1[0x152] = 0;
  *(undefined1 *)((long)param_1 + 0xb4b) = 0;
  puVar3 = (undefined8 *)((long)param_1 + 0xacc);
  param_1[0x156] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x159) = 0x80;
  param_1[0x158] = puVar3;
  if (puVar3 != &DAT_0407ebb1) {
    *(undefined1 *)puVar3 = 0;
  }
  param_1[0x157] = PTR_DAT_04bb2d88 + 0x10;
  uVar2 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x16b] = 0;
  param_1[0x156] = &PTR_LAB_04916480;
  param_1[0x171] = &PTR_LAB_049164d8;
  param_1[0x175] = &PTR_LAB_04916500;
  param_1[0x179] = &PTR_LAB_04916528;
  puVar3 = (undefined8 *)((long)param_1 + 0xbfc);
  *(undefined4 *)(param_1 + 0x17f) = 0x40;
  *(undefined4 *)(param_1 + 0x16a) = uVar2;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined8 *)((long)param_1 + 0xb6d) = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0;
  param_1[0x170] = 0;
  param_1[0x17e] = puVar3;
  *(undefined1 *)((long)param_1 + 0xc3b) = 0;
  if (puVar3 != &DAT_0407ebb1) {
    *(undefined1 *)puVar3 = 0;
  }
  param_1[0x18d] = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 399) = 0;
  param_1[400] = 0;
  param_1[0x17d] = puVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18e) = 0xffffffff;
  DAT_04cad390 = 1;
  DAT_04cad394 = 0xffffffffffffffff;
  DAT_04cad39c = 0xffffffffffffffff;
  return;
}

