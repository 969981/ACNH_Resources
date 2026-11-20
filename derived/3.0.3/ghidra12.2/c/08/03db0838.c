
void FUN_03db0838(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c520f8 = 0;
  DAT_04c52100 = 1;
  DAT_04c52108 = 0;
  DAT_04c520e8 = 0;
  DAT_04c520f0 = 0;
  DAT_04c52110 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c52118 = PTR_DAT_04bb2120;
  DAT_04c52126 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c52110;
  FUN_03c5a110(&DAT_04c52110,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c52138 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c52160 = &DAT_04c52168;
  DAT_04c52190 = (undefined8 *)0x0;
  DAT_04c52198 = 0;
  DAT_04c521b0 = 0xffffffffffffffff;
  DAT_04c521a0 = (code *)0x0;
  DAT_04c521a8 = (undefined1 *)0x0;
  DAT_04c52128 = (undefined8 *)0x0;
  DAT_04c52130 = &DAT_04c52138;
  DAT_04c52168 = DAT_04c52138;
  FUN_038e2df8(&DAT_04c521b8);
  DAT_04c521a0 = FUN_03c66ec8;
  DAT_04c521a8 = &LAB_03c66f18;
  DAT_04c521b0 = 0;
  DAT_04c52270 = 0;
  DAT_04c52278 = (undefined1 *)0x0;
  DAT_04c52280 = (undefined1 *)0x0;
  DAT_04c52288 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c52290);
  DAT_04c52358 = 0;
  DAT_04c52278 = &LAB_03c66f50;
  DAT_04c52348 = &DAT_04c52348;
  DAT_04c52350 = &DAT_04c52348;
  DAT_04c52370 = 0x1000000000;
  DAT_04c52280 = &LAB_03c67050;
  DAT_04c52288 = 0x20;
  DAT_04c52360 = &DAT_04c52360;
  DAT_04c52368 = &DAT_04c52360;
  if (((DAT_05af8630 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8630), iVar3 != 0)) {
    DAT_05af8608 = puVar1 + 0x10;
    DAT_05af85e0 = 0;
    DAT_05af85e8 = 0;
    DAT_05af85f0 = 0;
    DAT_05af85f8 = 1;
    DAT_05af8600 = &DAT_05af8608;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af85e0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8630);
  }
  DAT_04c52190 = &DAT_05af85e0;
  if (((DAT_05af86a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af86a0), iVar3 != 0)) {
    DAT_05af8638 = &PTR_LAB_04b932b0;
    DAT_05af8640 = &PTR_FUN_04b932e0;
    DAT_05af8660 = &PTR_FUN_04b93308;
    DAT_05af8680 = &PTR_FUN_04b93330;
    __cxa_guard_release(&DAT_05af86a0);
  }
  DAT_04c52128 = &DAT_05af8638;
  uVar4 = (*(code *)DAT_05af8640[1])(&DAT_05af8640);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52130)();
    DAT_04c52138 = &PTR_FUN_04b93358;
    DAT_04c52130 = &DAT_04c52138;
    DAT_04c52140 = &PTR_LAB_04b933b8;
    DAT_04c52148 = &LAB_03db0c80;
  }
  uVar4 = (*(code *)DAT_05af8660[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52160)();
    DAT_04c52168 = &PTR_FUN_04b933e0;
    DAT_04c52160 = &DAT_04c52168;
    DAT_04c52170 = &PTR_LAB_04b93440;
    DAT_04c52178 = &LAB_03db0d1c;
  }
  uVar4 = (*(code *)DAT_05af8680[1])();
  puVar2 = DAT_04c52190;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c52190[4])();
    puVar2[5] = &PTR_FUN_04b93468;
    puVar2[6] = &PTR_LAB_04b934c8;
    puVar2[7] = &LAB_03db0dbc;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c52198,(long)DAT_04c52190 + DAT_04c521b0);
  }
  if (((DAT_05aee2a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aee2a8), iVar3 != 0)) {
    DAT_04c4cb68 = 0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(PTR_FUN_04bd3898,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  FUN_038e2f80(&DAT_04c4cb88);
  DAT_04c4cc40 = DAT_04c4cc40 + 1;
  DAT_04c52108 = DAT_04c4cc40;
  if (((DAT_05aee2a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aee2a8), iVar3 != 0)) {
    DAT_04c4cb68 = 0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(PTR_FUN_04bd3898,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c520e8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

