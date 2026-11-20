
void FUN_03dbaf88(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c53058 = 0;
  DAT_04c53060 = 1;
  DAT_04c53068 = 0;
  DAT_04c53048 = 0;
  DAT_04c53050 = 0;
  DAT_04c53070 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53078 = PTR_DAT_04bb2120;
  DAT_04c53086 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53070;
  FUN_03c5a110(&DAT_04c53070,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c53098 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c530c0 = &DAT_04c530c8;
  DAT_04c530f0 = (undefined8 *)0x0;
  DAT_04c530f8 = 0;
  DAT_04c53110 = 0xffffffffffffffff;
  DAT_04c53100 = (code *)0x0;
  DAT_04c53108 = (undefined1 *)0x0;
  DAT_04c53088 = (undefined8 *)0x0;
  DAT_04c53090 = &DAT_04c53098;
  DAT_04c530c8 = DAT_04c53098;
  FUN_038e2df8(&DAT_04c53118);
  DAT_04c53100 = FUN_03c66ec8;
  DAT_04c53108 = &LAB_03c66f18;
  DAT_04c53110 = 0;
  DAT_04c531d0 = 0;
  DAT_04c531d8 = (undefined1 *)0x0;
  DAT_04c531e0 = (undefined1 *)0x0;
  DAT_04c531e8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c531f0);
  DAT_04c532b8 = 0;
  DAT_04c531d8 = &LAB_03c66f50;
  DAT_04c532a8 = &DAT_04c532a8;
  DAT_04c532b0 = &DAT_04c532a8;
  DAT_04c532d0 = 0x1000000000;
  DAT_04c531e0 = &LAB_03c67050;
  DAT_04c531e8 = 0x20;
  DAT_04c532c0 = &DAT_04c532c0;
  DAT_04c532c8 = &DAT_04c532c0;
  if (((DAT_05af8be8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8be8), iVar3 != 0)) {
    DAT_05af8bc0 = puVar1 + 0x10;
    DAT_05af8b98 = 0;
    DAT_05af8ba0 = 0;
    DAT_05af8ba8 = 0;
    DAT_05af8bb0 = 1;
    DAT_05af8bb8 = &DAT_05af8bc0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8b98,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8be8);
  }
  DAT_04c530f0 = &DAT_05af8b98;
  if (((DAT_05af8c58 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8c58), iVar3 != 0)) {
    DAT_05af8bf0 = &PTR_LAB_04b94030;
    DAT_05af8bf8 = &PTR_FUN_04b94060;
    DAT_05af8c18 = &PTR_FUN_04b94088;
    DAT_05af8c38 = &PTR_FUN_04b940b0;
    __cxa_guard_release(&DAT_05af8c58);
  }
  DAT_04c53088 = &DAT_05af8bf0;
  uVar4 = (*(code *)DAT_05af8bf8[1])(&DAT_05af8bf8);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53090)();
    DAT_04c53098 = &PTR_FUN_04b940d8;
    DAT_04c53090 = &DAT_04c53098;
    DAT_04c530a0 = &PTR_LAB_04b94138;
    DAT_04c530a8 = &LAB_03dbb3d0;
  }
  uVar4 = (*(code *)DAT_05af8c18[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c530c0)();
    DAT_04c530c8 = &PTR_FUN_04b94160;
    DAT_04c530c0 = &DAT_04c530c8;
    DAT_04c530d0 = &PTR_LAB_04b941c0;
    DAT_04c530d8 = &LAB_03dbb46c;
  }
  uVar4 = (*(code *)DAT_05af8c38[1])();
  puVar2 = DAT_04c530f0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c530f0[4])();
    puVar2[5] = &PTR_FUN_04b941e8;
    puVar2[6] = &PTR_LAB_04b94248;
    puVar2[7] = &LAB_03dbb50c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c530f8,(long)DAT_04c530f0 + DAT_04c53110);
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
  DAT_04c53068 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c53048 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

