
void FUN_03dc3cc0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c53d28 = 0;
  DAT_04c53d30 = 1;
  DAT_04c53d38 = 0;
  DAT_04c53d18 = 0;
  DAT_04c53d20 = 0;
  DAT_04c53d40 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53d48 = PTR_DAT_04bb2120;
  DAT_04c53d56 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53d40;
  FUN_03c5a110(&DAT_04c53d40,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c53d68 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c53d90 = &DAT_04c53d98;
  DAT_04c53dc0 = (undefined8 *)0x0;
  DAT_04c53dc8 = 0;
  DAT_04c53de0 = 0xffffffffffffffff;
  DAT_04c53dd0 = (code *)0x0;
  DAT_04c53dd8 = (undefined1 *)0x0;
  DAT_04c53d58 = (undefined8 *)0x0;
  DAT_04c53d60 = &DAT_04c53d68;
  DAT_04c53d98 = DAT_04c53d68;
  FUN_038e2df8(&DAT_04c53de8);
  DAT_04c53dd0 = FUN_03c66ec8;
  DAT_04c53dd8 = &LAB_03c66f18;
  DAT_04c53de0 = 0;
  DAT_04c53ea0 = 0;
  DAT_04c53ea8 = (undefined1 *)0x0;
  DAT_04c53eb0 = (undefined1 *)0x0;
  DAT_04c53eb8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c53ec0);
  DAT_04c53f88 = 0;
  DAT_04c53ea8 = &LAB_03c66f50;
  DAT_04c53f78 = &DAT_04c53f78;
  DAT_04c53f80 = &DAT_04c53f78;
  DAT_04c53fa0 = 0x1000000000;
  DAT_04c53eb0 = &LAB_03c67050;
  DAT_04c53eb8 = 0x20;
  DAT_04c53f90 = &DAT_04c53f90;
  DAT_04c53f98 = &DAT_04c53f90;
  if (((DAT_05af8ff0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8ff0), iVar3 != 0)) {
    DAT_05af8fc8 = puVar1 + 0x10;
    DAT_05af8fa0 = 0;
    DAT_05af8fa8 = 0;
    DAT_05af8fb0 = 0;
    DAT_05af8fb8 = 1;
    DAT_05af8fc0 = &DAT_05af8fc8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8fa0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8ff0);
  }
  DAT_04c53dc0 = &DAT_05af8fa0;
  if (((DAT_05af9060 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9060), iVar3 != 0)) {
    DAT_05af8ff8 = &PTR_LAB_04b94ac8;
    DAT_05af9000 = &PTR_FUN_04b94af8;
    DAT_05af9020 = &PTR_FUN_04b94b20;
    DAT_05af9040 = &PTR_FUN_04b94b48;
    __cxa_guard_release(&DAT_05af9060);
  }
  DAT_04c53d58 = &DAT_05af8ff8;
  uVar4 = (*(code *)DAT_05af9000[1])(&DAT_05af9000);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53d60)();
    DAT_04c53d68 = &PTR_FUN_04b94b70;
    DAT_04c53d60 = &DAT_04c53d68;
    DAT_04c53d70 = &PTR_LAB_04b94bd0;
    DAT_04c53d78 = &LAB_03dc4108;
  }
  uVar4 = (*(code *)DAT_05af9020[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53d90)();
    DAT_04c53d98 = &PTR_FUN_04b94bf8;
    DAT_04c53d90 = &DAT_04c53d98;
    DAT_04c53da0 = &PTR_LAB_04b94c58;
    DAT_04c53da8 = &LAB_03dc41a4;
  }
  uVar4 = (*(code *)DAT_05af9040[1])();
  puVar2 = DAT_04c53dc0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c53dc0[4])();
    puVar2[5] = &PTR_FUN_04b94c80;
    puVar2[6] = &PTR_LAB_04b94ce0;
    puVar2[7] = &LAB_03dc4244;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c53dc8,(long)DAT_04c53dc0 + DAT_04c53de0);
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
  DAT_04c53d38 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c53d18 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

