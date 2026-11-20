
void FUN_03dad134(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c51bd8 = 0;
  DAT_04c51be0 = 1;
  DAT_04c51be8 = 0;
  DAT_04c51bc8 = 0;
  DAT_04c51bd0 = 0;
  DAT_04c51bf0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c51bf8 = PTR_DAT_04bb2120;
  DAT_04c51c06 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c51bf0;
  FUN_03c5a110(&DAT_04c51bf0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c51c18 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c51c40 = &DAT_04c51c48;
  DAT_04c51c70 = (undefined8 *)0x0;
  DAT_04c51c78 = 0;
  DAT_04c51c90 = 0xffffffffffffffff;
  DAT_04c51c80 = (code *)0x0;
  DAT_04c51c88 = (undefined1 *)0x0;
  DAT_04c51c08 = (undefined8 *)0x0;
  DAT_04c51c10 = &DAT_04c51c18;
  DAT_04c51c48 = DAT_04c51c18;
  FUN_038e2df8(&DAT_04c51c98);
  DAT_04c51c80 = FUN_03c66ec8;
  DAT_04c51c88 = &LAB_03c66f18;
  DAT_04c51c90 = 0;
  DAT_04c51d50 = 0;
  DAT_04c51d58 = (undefined1 *)0x0;
  DAT_04c51d60 = (undefined1 *)0x0;
  DAT_04c51d68 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c51d70);
  DAT_04c51e38 = 0;
  DAT_04c51d58 = &LAB_03c66f50;
  DAT_04c51e28 = &DAT_04c51e28;
  DAT_04c51e30 = &DAT_04c51e28;
  DAT_04c51e50 = 0x1000000000;
  DAT_04c51d60 = &LAB_03c67050;
  DAT_04c51d68 = 0x20;
  DAT_04c51e40 = &DAT_04c51e40;
  DAT_04c51e48 = &DAT_04c51e40;
  if (((DAT_05af8468 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8468), iVar3 != 0)) {
    DAT_05af8440 = puVar1 + 0x10;
    DAT_05af8418 = 0;
    DAT_05af8420 = 0;
    DAT_05af8428 = 0;
    DAT_05af8430 = 1;
    DAT_05af8438 = &DAT_05af8440;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8418,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8468);
  }
  DAT_04c51c70 = &DAT_05af8418;
  if (((DAT_05af84d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af84d8), iVar3 != 0)) {
    DAT_05af8470 = &PTR_LAB_04b92e30;
    DAT_05af8478 = &PTR_FUN_04b92e60;
    DAT_05af8498 = &PTR_FUN_04b92e88;
    DAT_05af84b8 = &PTR_FUN_04b92eb0;
    __cxa_guard_release(&DAT_05af84d8);
  }
  DAT_04c51c08 = &DAT_05af8470;
  uVar4 = (*(code *)DAT_05af8478[1])(&DAT_05af8478);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c51c10)();
    DAT_04c51c18 = &PTR_FUN_04b92ed8;
    DAT_04c51c10 = &DAT_04c51c18;
    DAT_04c51c20 = &PTR_LAB_04b92f38;
    DAT_04c51c28 = &LAB_03dad57c;
  }
  uVar4 = (*(code *)DAT_05af8498[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c51c40)();
    DAT_04c51c48 = &PTR_FUN_04b92f60;
    DAT_04c51c40 = &DAT_04c51c48;
    DAT_04c51c50 = &PTR_LAB_04b92fc0;
    DAT_04c51c58 = &LAB_03dad618;
  }
  uVar4 = (*(code *)DAT_05af84b8[1])();
  puVar2 = DAT_04c51c70;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c51c70[4])();
    puVar2[5] = &PTR_FUN_04b92fe8;
    puVar2[6] = &PTR_LAB_04b93048;
    puVar2[7] = &LAB_03dad6b8;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c51c78,(long)DAT_04c51c70 + DAT_04c51c90);
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
  DAT_04c51be8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c51bc8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

