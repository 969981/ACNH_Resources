
void FUN_03db9308(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c52dc8 = 0;
  DAT_04c52dd0 = 1;
  DAT_04c52dd8 = 0;
  DAT_04c52db8 = 0;
  DAT_04c52dc0 = 0;
  DAT_04c52de0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c52de8 = PTR_DAT_04bb2120;
  DAT_04c52df6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c52de0;
  FUN_03c5a110(&DAT_04c52de0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c52e08 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c52e30 = &DAT_04c52e38;
  DAT_04c52e60 = (undefined8 *)0x0;
  DAT_04c52e68 = 0;
  DAT_04c52e80 = 0xffffffffffffffff;
  DAT_04c52e70 = (code *)0x0;
  DAT_04c52e78 = (undefined1 *)0x0;
  DAT_04c52df8 = (undefined8 *)0x0;
  DAT_04c52e00 = &DAT_04c52e08;
  DAT_04c52e38 = DAT_04c52e08;
  FUN_038e2df8(&DAT_04c52e88);
  DAT_04c52e70 = FUN_03c66ec8;
  DAT_04c52e78 = &LAB_03c66f18;
  DAT_04c52e80 = 0;
  DAT_04c52f40 = 0;
  DAT_04c52f48 = (undefined1 *)0x0;
  DAT_04c52f50 = (undefined1 *)0x0;
  DAT_04c52f58 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c52f60);
  DAT_04c53028 = 0;
  DAT_04c52f48 = &LAB_03c66f50;
  DAT_04c53018 = &DAT_04c53018;
  DAT_04c53020 = &DAT_04c53018;
  DAT_04c53040 = 0x1000000000;
  DAT_04c52f50 = &LAB_03c67050;
  DAT_04c52f58 = 0x20;
  DAT_04c53030 = &DAT_04c53030;
  DAT_04c53038 = &DAT_04c53030;
  if (((DAT_05af8ad0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8ad0), iVar3 != 0)) {
    DAT_05af8aa8 = puVar1 + 0x10;
    DAT_05af8a80 = 0;
    DAT_05af8a88 = 0;
    DAT_05af8a90 = 0;
    DAT_05af8a98 = 1;
    DAT_05af8aa0 = &DAT_05af8aa8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8a80,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8ad0);
  }
  DAT_04c52e60 = &DAT_05af8a80;
  if (((DAT_05af8b40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8b40), iVar3 != 0)) {
    DAT_05af8ad8 = &PTR_LAB_04b93df0;
    DAT_05af8ae0 = &PTR_FUN_04b93e20;
    DAT_05af8b00 = &PTR_FUN_04b93e48;
    DAT_05af8b20 = &PTR_FUN_04b93e70;
    __cxa_guard_release(&DAT_05af8b40);
  }
  DAT_04c52df8 = &DAT_05af8ad8;
  uVar4 = (*(code *)DAT_05af8ae0[1])(&DAT_05af8ae0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52e00)();
    DAT_04c52e08 = &PTR_FUN_04b93e98;
    DAT_04c52e00 = &DAT_04c52e08;
    DAT_04c52e10 = &PTR_LAB_04b93ef8;
    DAT_04c52e18 = &LAB_03db9750;
  }
  uVar4 = (*(code *)DAT_05af8b00[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52e30)();
    DAT_04c52e38 = &PTR_FUN_04b93f20;
    DAT_04c52e30 = &DAT_04c52e38;
    DAT_04c52e40 = &PTR_LAB_04b93f80;
    DAT_04c52e48 = &LAB_03db97ec;
  }
  uVar4 = (*(code *)DAT_05af8b20[1])();
  puVar2 = DAT_04c52e60;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c52e60[4])();
    puVar2[5] = &PTR_FUN_04b93fa8;
    puVar2[6] = &PTR_LAB_04b94008;
    puVar2[7] = &LAB_03db988c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c52e68,(long)DAT_04c52e60 + DAT_04c52e80);
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
  DAT_04c52dd8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c52db8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

