
void FUN_03db5b18(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c528a8 = 0;
  DAT_04c528b0 = 1;
  DAT_04c528b8 = 0;
  DAT_04c52898 = 0;
  DAT_04c528a0 = 0;
  DAT_04c528c0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c528c8 = PTR_DAT_04bb2120;
  DAT_04c528d6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c528c0;
  FUN_03c5a110(&DAT_04c528c0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c528e8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c52910 = &DAT_04c52918;
  DAT_04c52940 = (undefined8 *)0x0;
  DAT_04c52948 = 0;
  DAT_04c52960 = 0xffffffffffffffff;
  DAT_04c52950 = (code *)0x0;
  DAT_04c52958 = (undefined1 *)0x0;
  DAT_04c528d8 = (undefined8 *)0x0;
  DAT_04c528e0 = &DAT_04c528e8;
  DAT_04c52918 = DAT_04c528e8;
  FUN_038e2df8(&DAT_04c52968);
  DAT_04c52950 = FUN_03c66ec8;
  DAT_04c52958 = &LAB_03c66f18;
  DAT_04c52960 = 0;
  DAT_04c52a20 = 0;
  DAT_04c52a28 = (undefined1 *)0x0;
  DAT_04c52a30 = (undefined1 *)0x0;
  DAT_04c52a38 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c52a40);
  DAT_04c52b08 = 0;
  DAT_04c52a28 = &LAB_03c66f50;
  DAT_04c52af8 = &DAT_04c52af8;
  DAT_04c52b00 = &DAT_04c52af8;
  DAT_04c52b20 = 0x1000000000;
  DAT_04c52a30 = &LAB_03c67050;
  DAT_04c52a38 = 0x20;
  DAT_04c52b10 = &DAT_04c52b10;
  DAT_04c52b18 = &DAT_04c52b10;
  if (((DAT_05af88e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af88e8), iVar3 != 0)) {
    DAT_05af88c0 = puVar1 + 0x10;
    DAT_05af8898 = 0;
    DAT_05af88a0 = 0;
    DAT_05af88a8 = 0;
    DAT_05af88b0 = 1;
    DAT_05af88b8 = &DAT_05af88c0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8898,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af88e8);
  }
  DAT_04c52940 = &DAT_05af8898;
  if (((DAT_05af8958 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8958), iVar3 != 0)) {
    DAT_05af88f0 = &PTR_LAB_04b93970;
    DAT_05af88f8 = &PTR_FUN_04b939a0;
    DAT_05af8918 = &PTR_FUN_04b939c8;
    DAT_05af8938 = &PTR_FUN_04b939f0;
    __cxa_guard_release(&DAT_05af8958);
  }
  DAT_04c528d8 = &DAT_05af88f0;
  uVar4 = (*(code *)DAT_05af88f8[1])(&DAT_05af88f8);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c528e0)();
    DAT_04c528e8 = &PTR_FUN_04b93a18;
    DAT_04c528e0 = &DAT_04c528e8;
    DAT_04c528f0 = &PTR_LAB_04b93a78;
    DAT_04c528f8 = &LAB_03db5f60;
  }
  uVar4 = (*(code *)DAT_05af8918[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52910)();
    DAT_04c52918 = &PTR_FUN_04b93aa0;
    DAT_04c52910 = &DAT_04c52918;
    DAT_04c52920 = &PTR_LAB_04b93b00;
    DAT_04c52928 = &LAB_03db5ffc;
  }
  uVar4 = (*(code *)DAT_05af8938[1])();
  puVar2 = DAT_04c52940;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c52940[4])();
    puVar2[5] = &PTR_FUN_04b93b28;
    puVar2[6] = &PTR_LAB_04b93b88;
    puVar2[7] = &LAB_03db609c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c52948,(long)DAT_04c52940 + DAT_04c52960);
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
  DAT_04c528b8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c52898 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

