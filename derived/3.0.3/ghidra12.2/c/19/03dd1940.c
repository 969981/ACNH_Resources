
void FUN_03dd1940(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c54f18 = 0;
  DAT_04c54f20 = 1;
  DAT_04c54f28 = 0;
  DAT_04c54f08 = 0;
  DAT_04c54f10 = 0;
  DAT_04c54f30 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c54f38 = PTR_DAT_04bb2120;
  DAT_04c54f46 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c54f30;
  FUN_03c5a110(&DAT_04c54f30,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c54f58 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c54f80 = &DAT_04c54f88;
  DAT_04c54fb0 = (undefined8 *)0x0;
  DAT_04c54fb8 = 0;
  DAT_04c54fd0 = 0xffffffffffffffff;
  DAT_04c54fc0 = (code *)0x0;
  DAT_04c54fc8 = (undefined1 *)0x0;
  DAT_04c54f48 = (undefined8 *)0x0;
  DAT_04c54f50 = &DAT_04c54f58;
  DAT_04c54f88 = DAT_04c54f58;
  FUN_038e2df8(&DAT_04c54fd8);
  DAT_04c54fc0 = FUN_03c66ec8;
  DAT_04c54fc8 = &LAB_03c66f18;
  DAT_04c54fd0 = 0;
  DAT_04c55090 = 0;
  DAT_04c55098 = (undefined1 *)0x0;
  DAT_04c550a0 = (undefined1 *)0x0;
  DAT_04c550a8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c550b0);
  DAT_04c55178 = 0;
  DAT_04c55098 = &LAB_03c66f50;
  DAT_04c55168 = &DAT_04c55168;
  DAT_04c55170 = &DAT_04c55168;
  DAT_04c55190 = 0x1000000000;
  DAT_04c550a0 = &LAB_03c67050;
  DAT_04c550a8 = 0x20;
  DAT_04c55180 = &DAT_04c55180;
  DAT_04c55188 = &DAT_04c55180;
  if (((DAT_05af96b0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af96b0), iVar3 != 0)) {
    DAT_05af9688 = puVar1 + 0x10;
    DAT_05af9660 = 0;
    DAT_05af9668 = 0;
    DAT_05af9670 = 0;
    DAT_05af9678 = 1;
    DAT_05af9680 = &DAT_05af9688;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9660,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af96b0);
  }
  DAT_04c54fb0 = &DAT_05af9660;
  if (((DAT_05af9720 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9720), iVar3 != 0)) {
    DAT_05af96b8 = &PTR_LAB_04b95a08;
    DAT_05af96c0 = &PTR_FUN_04b95a38;
    DAT_05af96e0 = &PTR_FUN_04b95a60;
    DAT_05af9700 = &PTR_FUN_04b95a88;
    __cxa_guard_release(&DAT_05af9720);
  }
  DAT_04c54f48 = &DAT_05af96b8;
  uVar4 = (*(code *)DAT_05af96c0[1])(&DAT_05af96c0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54f50)();
    DAT_04c54f58 = &PTR_FUN_04b95ab0;
    DAT_04c54f50 = &DAT_04c54f58;
    DAT_04c54f60 = &PTR_LAB_04b95b10;
    DAT_04c54f68 = &LAB_03dd1d88;
  }
  uVar4 = (*(code *)DAT_05af96e0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54f80)();
    DAT_04c54f88 = &PTR_FUN_04b95b38;
    DAT_04c54f80 = &DAT_04c54f88;
    DAT_04c54f90 = &PTR_LAB_04b95b98;
    DAT_04c54f98 = &LAB_03dd1e24;
  }
  uVar4 = (*(code *)DAT_05af9700[1])();
  puVar2 = DAT_04c54fb0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c54fb0[4])();
    puVar2[5] = &PTR_FUN_04b95bc0;
    puVar2[6] = &PTR_LAB_04b95c20;
    puVar2[7] = &LAB_03dd1ec4;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c54fb8,(long)DAT_04c54fb0 + DAT_04c54fd0);
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
  DAT_04c54f28 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c54f08 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

