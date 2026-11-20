
void FUN_03dd94f0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c55958 = 0;
  DAT_04c55960 = 1;
  DAT_04c55968 = 0;
  DAT_04c55948 = 0;
  DAT_04c55950 = 0;
  DAT_04c55970 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c55978 = PTR_DAT_04bb2120;
  DAT_04c55986 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c55970;
  FUN_03c5a110(&DAT_04c55970,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c55998 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c559c0 = &DAT_04c559c8;
  DAT_04c559f0 = (undefined8 *)0x0;
  DAT_04c559f8 = 0;
  DAT_04c55a10 = 0xffffffffffffffff;
  DAT_04c55a00 = (code *)0x0;
  DAT_04c55a08 = (undefined1 *)0x0;
  DAT_04c55988 = (undefined8 *)0x0;
  DAT_04c55990 = &DAT_04c55998;
  DAT_04c559c8 = DAT_04c55998;
  FUN_038e2df8(&DAT_04c55a18);
  DAT_04c55a00 = FUN_03c66ec8;
  DAT_04c55a08 = &LAB_03c66f18;
  DAT_04c55a10 = 0;
  DAT_04c55ad0 = 0;
  DAT_04c55ad8 = (undefined1 *)0x0;
  DAT_04c55ae0 = (undefined1 *)0x0;
  DAT_04c55ae8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c55af0);
  DAT_04c55bb8 = 0;
  DAT_04c55ad8 = &LAB_03c66f50;
  DAT_04c55ba8 = &DAT_04c55ba8;
  DAT_04c55bb0 = &DAT_04c55ba8;
  DAT_04c55bd0 = 0x1000000000;
  DAT_04c55ae0 = &LAB_03c67050;
  DAT_04c55ae8 = 0x20;
  DAT_04c55bc0 = &DAT_04c55bc0;
  DAT_04c55bc8 = &DAT_04c55bc0;
  if (((DAT_05afa1f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa1f0), iVar3 != 0)) {
    DAT_05afa1c8 = puVar1 + 0x10;
    DAT_05afa1a0 = 0;
    DAT_05afa1a8 = 0;
    DAT_05afa1b0 = 0;
    DAT_05afa1b8 = 1;
    DAT_05afa1c0 = &DAT_05afa1c8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afa1a0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afa1f0);
  }
  DAT_04c559f0 = &DAT_05afa1a0;
  if (((DAT_05afa260 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa260), iVar3 != 0)) {
    DAT_05afa1f8 = &PTR_LAB_04b96308;
    DAT_05afa200 = &PTR_FUN_04b96338;
    DAT_05afa220 = &PTR_FUN_04b96360;
    DAT_05afa240 = &PTR_FUN_04b96388;
    __cxa_guard_release(&DAT_05afa260);
  }
  DAT_04c55988 = &DAT_05afa1f8;
  uVar4 = (*(code *)DAT_05afa200[1])(&DAT_05afa200);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55990)();
    DAT_04c55998 = &PTR_FUN_04b963b0;
    DAT_04c55990 = &DAT_04c55998;
    DAT_04c559a0 = &PTR_LAB_04b96410;
    DAT_04c559a8 = &LAB_03dd9938;
  }
  uVar4 = (*(code *)DAT_05afa220[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c559c0)();
    DAT_04c559c8 = &PTR_FUN_04b96438;
    DAT_04c559c0 = &DAT_04c559c8;
    DAT_04c559d0 = &PTR_LAB_04b96498;
    DAT_04c559d8 = &LAB_03dd99d4;
  }
  uVar4 = (*(code *)DAT_05afa240[1])();
  puVar2 = DAT_04c559f0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c559f0[4])();
    puVar2[5] = &PTR_FUN_04b964c0;
    puVar2[6] = &PTR_LAB_04b96520;
    puVar2[7] = &LAB_03dd9a74;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c559f8,(long)DAT_04c559f0 + DAT_04c55a10);
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
  DAT_04c55968 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c55948 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

