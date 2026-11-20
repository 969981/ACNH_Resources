
void FUN_03dcbca0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c54768 = 0;
  DAT_04c54770 = 1;
  DAT_04c54778 = 0;
  DAT_04c54758 = 0;
  DAT_04c54760 = 0;
  DAT_04c54780 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c54788 = PTR_DAT_04bb2120;
  DAT_04c54796 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c54780;
  FUN_03c5a110(&DAT_04c54780,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c547a8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c547d0 = &DAT_04c547d8;
  DAT_04c54800 = (undefined8 *)0x0;
  DAT_04c54808 = 0;
  DAT_04c54820 = 0xffffffffffffffff;
  DAT_04c54810 = (code *)0x0;
  DAT_04c54818 = (undefined1 *)0x0;
  DAT_04c54798 = (undefined8 *)0x0;
  DAT_04c547a0 = &DAT_04c547a8;
  DAT_04c547d8 = DAT_04c547a8;
  FUN_038e2df8(&DAT_04c54828);
  DAT_04c54810 = FUN_03c66ec8;
  DAT_04c54818 = &LAB_03c66f18;
  DAT_04c54820 = 0;
  DAT_04c548e0 = 0;
  DAT_04c548e8 = (undefined1 *)0x0;
  DAT_04c548f0 = (undefined1 *)0x0;
  DAT_04c548f8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c54900);
  DAT_04c549c8 = 0;
  DAT_04c548e8 = &LAB_03c66f50;
  DAT_04c549b8 = &DAT_04c549b8;
  DAT_04c549c0 = &DAT_04c549b8;
  DAT_04c549e0 = 0x1000000000;
  DAT_04c548f0 = &LAB_03c67050;
  DAT_04c548f8 = 0x20;
  DAT_04c549d0 = &DAT_04c549d0;
  DAT_04c549d8 = &DAT_04c549d0;
  if (((DAT_05af9370 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9370), iVar3 != 0)) {
    DAT_05af9348 = puVar1 + 0x10;
    DAT_05af9320 = 0;
    DAT_05af9328 = 0;
    DAT_05af9330 = 0;
    DAT_05af9338 = 1;
    DAT_05af9340 = &DAT_05af9348;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9320,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9370);
  }
  DAT_04c54800 = &DAT_05af9320;
  if (((DAT_05af93e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af93e0), iVar3 != 0)) {
    DAT_05af9378 = &PTR_LAB_04b95348;
    DAT_05af9380 = &PTR_FUN_04b95378;
    DAT_05af93a0 = &PTR_FUN_04b953a0;
    DAT_05af93c0 = &PTR_FUN_04b953c8;
    __cxa_guard_release(&DAT_05af93e0);
  }
  DAT_04c54798 = &DAT_05af9378;
  uVar4 = (*(code *)DAT_05af9380[1])(&DAT_05af9380);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c547a0)();
    DAT_04c547a8 = &PTR_FUN_04b953f0;
    DAT_04c547a0 = &DAT_04c547a8;
    DAT_04c547b0 = &PTR_LAB_04b95450;
    DAT_04c547b8 = &LAB_03dcc0e8;
  }
  uVar4 = (*(code *)DAT_05af93a0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c547d0)();
    DAT_04c547d8 = &PTR_FUN_04b95478;
    DAT_04c547d0 = &DAT_04c547d8;
    DAT_04c547e0 = &PTR_LAB_04b954d8;
    DAT_04c547e8 = &LAB_03dcc184;
  }
  uVar4 = (*(code *)DAT_05af93c0[1])();
  puVar2 = DAT_04c54800;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c54800[4])();
    puVar2[5] = &PTR_FUN_04b95500;
    puVar2[6] = &PTR_LAB_04b95560;
    puVar2[7] = &LAB_03dcc224;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c54808,(long)DAT_04c54800 + DAT_04c54820);
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
  DAT_04c54778 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c54758 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

