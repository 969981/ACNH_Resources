
void FUN_03ddb3e0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c55be8 = 0;
  DAT_04c55bf0 = 1;
  DAT_04c55bf8 = 0;
  DAT_04c55bd8 = 0;
  DAT_04c55be0 = 0;
  DAT_04c55c00 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c55c08 = PTR_DAT_04bb2120;
  DAT_04c55c16 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c55c00;
  FUN_03c5a110(&DAT_04c55c00,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c55c28 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c55c50 = &DAT_04c55c58;
  DAT_04c55c80 = (undefined8 *)0x0;
  DAT_04c55c88 = 0;
  DAT_04c55ca0 = 0xffffffffffffffff;
  DAT_04c55c90 = (code *)0x0;
  DAT_04c55c98 = (undefined1 *)0x0;
  DAT_04c55c18 = (undefined8 *)0x0;
  DAT_04c55c20 = &DAT_04c55c28;
  DAT_04c55c58 = DAT_04c55c28;
  FUN_038e2df8(&DAT_04c55ca8);
  DAT_04c55c90 = FUN_03c66ec8;
  DAT_04c55c98 = &LAB_03c66f18;
  DAT_04c55ca0 = 0;
  DAT_04c55d60 = 0;
  DAT_04c55d68 = (undefined1 *)0x0;
  DAT_04c55d70 = (undefined1 *)0x0;
  DAT_04c55d78 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c55d80);
  DAT_04c55e48 = 0;
  DAT_04c55d68 = &LAB_03c66f50;
  DAT_04c55e38 = &DAT_04c55e38;
  DAT_04c55e40 = &DAT_04c55e38;
  DAT_04c55e60 = 0x1000000000;
  DAT_04c55d70 = &LAB_03c67050;
  DAT_04c55d78 = 0x20;
  DAT_04c55e50 = &DAT_04c55e50;
  DAT_04c55e58 = &DAT_04c55e50;
  if (((DAT_05afa300 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa300), iVar3 != 0)) {
    DAT_05afa2d8 = puVar1 + 0x10;
    DAT_05afa2b0 = 0;
    DAT_05afa2b8 = 0;
    DAT_05afa2c0 = 0;
    DAT_05afa2c8 = 1;
    DAT_05afa2d0 = &DAT_05afa2d8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afa2b0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afa300);
  }
  DAT_04c55c80 = &DAT_05afa2b0;
  if (((DAT_05afa370 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa370), iVar3 != 0)) {
    DAT_05afa308 = &PTR_LAB_04b96548;
    DAT_05afa310 = &PTR_FUN_04b96578;
    DAT_05afa330 = &PTR_FUN_04b965a0;
    DAT_05afa350 = &PTR_FUN_04b965c8;
    __cxa_guard_release(&DAT_05afa370);
  }
  DAT_04c55c18 = &DAT_05afa308;
  uVar4 = (*(code *)DAT_05afa310[1])(&DAT_05afa310);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55c20)();
    DAT_04c55c28 = &PTR_FUN_04b965f0;
    DAT_04c55c20 = &DAT_04c55c28;
    DAT_04c55c30 = &PTR_LAB_04b96650;
    DAT_04c55c38 = &LAB_03ddb828;
  }
  uVar4 = (*(code *)DAT_05afa330[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55c50)();
    DAT_04c55c58 = &PTR_FUN_04b96678;
    DAT_04c55c50 = &DAT_04c55c58;
    DAT_04c55c60 = &PTR_LAB_04b966d8;
    DAT_04c55c68 = &LAB_03ddb8c4;
  }
  uVar4 = (*(code *)DAT_05afa350[1])();
  puVar2 = DAT_04c55c80;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c55c80[4])();
    puVar2[5] = &PTR_FUN_04b96700;
    puVar2[6] = &PTR_LAB_04b96760;
    puVar2[7] = &LAB_03ddb964;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c55c88,(long)DAT_04c55c80 + DAT_04c55ca0);
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
  DAT_04c55bf8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c55bd8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

