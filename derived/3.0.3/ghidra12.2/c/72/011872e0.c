
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_4274(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  
  DAT_050b8ee8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050b8eec);
  DAT_050b8ef8 = 0x8004ef;
  DAT_050b8f00 = nn::os::GetSystemTick();
  DAT_050b8f20 = 0;
  DAT_050b8f08 = 0;
  DAT_050b8f10 = &DAT_050b8f24;
  _DAT_050b8f18 = 8;
  FUN_001001d0(&LAB_01185490,&DAT_050b8f10,&__DT_FINI_ARRAY);
  FUN_038e18e4(&DAT_050ca268);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_050ca268,&__DT_FINI_ARRAY);
  puVar6 = PTR_DAT_04bdf1d8;
  puVar5 = PTR_DAT_04bdf0c8;
  puVar4 = PTR_DAT_04bb2120;
  puVar7 = &DAT_050ca2c0;
  lVar8 = 100;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bdf0c8 + 0x10;
  puVar3 = PTR_DAT_04bdf1d8 + 0x10;
  do {
    *(undefined **)(puVar7 + -0x18) = puVar1;
    *(undefined **)(puVar7 + -0x10) = puVar4;
    lVar8 = lVar8 + -1;
    *(undefined **)(puVar7 + -8) = puVar2;
    *puVar7 = 1;
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar7[0x38] = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined **)(puVar7 + 0x10) = puVar3;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    puVar7 = puVar7 + 0x58;
  } while (lVar8 != 0);
  FUN_001001d0(FUN_01185508,&DAT_050ca2a8,&__DT_FINI_ARRAY);
  FUN_03f2f3b8(0x3f800000,&DAT_050cc510,0);
  DAT_050cc5a8 = 0;
  DAT_050cc510 = &PTR_FUN_049837e8;
  DAT_050cc590 = &PTR_LAB_04983780;
  DAT_050cc5c0 = 0;
  DAT_050cc598 = 0;
  DAT_050cc5a0 = 0;
  DAT_050cc5b0 = 0;
  DAT_050cc5b8 = 0;
  FUN_001001d0(FUN_01185914,&DAT_050cc510,&__DT_FINI_ARRAY);
  DAT_050cc5f4 = 0;
  DAT_050cc618 = 0;
  DAT_050cc5c8 = &PTR_LAB_04983760;
  DAT_050cc5d0 = 0;
  DAT_050cc5e8 = puVar5 + 0x10;
  DAT_050cc5f0 = 1;
  DAT_050cc600 = puVar6 + 0x10;
  DAT_050cc5d8 = 0;
  DAT_050cc5e0 = 0;
  DAT_050cc5f8 = 0;
  DAT_050cc608 = 0;
  DAT_050cc610 = 0;
  FUN_001001d0(&LAB_01186c30,&DAT_050cc5c8,&__DT_FINI_ARRAY);
  return;
}

