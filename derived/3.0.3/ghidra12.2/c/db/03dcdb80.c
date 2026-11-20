
void FUN_03dcdb80(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c549f8 = 0;
  DAT_04c54a00 = 1;
  DAT_04c54a08 = 0;
  DAT_04c549e8 = 0;
  DAT_04c549f0 = 0;
  DAT_04c54a10 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c54a18 = PTR_DAT_04bb2120;
  DAT_04c54a26 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c54a10;
  FUN_03c5a110(&DAT_04c54a10,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c54a38 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c54a60 = &DAT_04c54a68;
  DAT_04c54a90 = (undefined8 *)0x0;
  DAT_04c54a98 = 0;
  DAT_04c54ab0 = 0xffffffffffffffff;
  DAT_04c54aa0 = (code *)0x0;
  DAT_04c54aa8 = (undefined1 *)0x0;
  DAT_04c54a28 = (undefined8 *)0x0;
  DAT_04c54a30 = &DAT_04c54a38;
  DAT_04c54a68 = DAT_04c54a38;
  FUN_038e2df8(&DAT_04c54ab8);
  DAT_04c54aa0 = FUN_03c66ec8;
  DAT_04c54aa8 = &LAB_03c66f18;
  DAT_04c54ab0 = 0;
  DAT_04c54b70 = 0;
  DAT_04c54b78 = (undefined1 *)0x0;
  DAT_04c54b80 = (undefined1 *)0x0;
  DAT_04c54b88 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c54b90);
  DAT_04c54c58 = 0;
  DAT_04c54b78 = &LAB_03c66f50;
  DAT_04c54c48 = &DAT_04c54c48;
  DAT_04c54c50 = &DAT_04c54c48;
  DAT_04c54c70 = 0x1000000000;
  DAT_04c54b80 = &LAB_03c67050;
  DAT_04c54b88 = 0x20;
  DAT_04c54c60 = &DAT_04c54c60;
  DAT_04c54c68 = &DAT_04c54c60;
  if (((DAT_05af9470 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9470), iVar3 != 0)) {
    DAT_05af9448 = puVar1 + 0x10;
    DAT_05af9420 = 0;
    DAT_05af9428 = 0;
    DAT_05af9430 = 0;
    DAT_05af9438 = 1;
    DAT_05af9440 = &DAT_05af9448;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9420,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9470);
  }
  DAT_04c54a90 = &DAT_05af9420;
  if (((DAT_05af94e0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af94e0), iVar3 != 0)) {
    DAT_05af9478 = &PTR_LAB_04b95588;
    DAT_05af9480 = &PTR_FUN_04b955b8;
    DAT_05af94a0 = &PTR_FUN_04b955e0;
    DAT_05af94c0 = &PTR_FUN_04b95608;
    __cxa_guard_release(&DAT_05af94e0);
  }
  DAT_04c54a28 = &DAT_05af9478;
  uVar4 = (*(code *)DAT_05af9480[1])(&DAT_05af9480);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54a30)();
    DAT_04c54a38 = &PTR_FUN_04b95630;
    DAT_04c54a30 = &DAT_04c54a38;
    DAT_04c54a40 = &PTR_LAB_04b95690;
    DAT_04c54a48 = &LAB_03dcdfc8;
  }
  uVar4 = (*(code *)DAT_05af94a0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54a60)();
    DAT_04c54a68 = &PTR_FUN_04b956b8;
    DAT_04c54a60 = &DAT_04c54a68;
    DAT_04c54a70 = &PTR_LAB_04b95718;
    DAT_04c54a78 = &LAB_03dce064;
  }
  uVar4 = (*(code *)DAT_05af94c0[1])();
  puVar2 = DAT_04c54a90;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c54a90[4])();
    puVar2[5] = &PTR_FUN_04b95740;
    puVar2[6] = &PTR_LAB_04b957a0;
    puVar2[7] = &LAB_03dce104;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c54a98,(long)DAT_04c54a90 + DAT_04c54ab0);
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
  DAT_04c54a08 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c549e8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

