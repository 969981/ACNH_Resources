
void FUN_03dd5710(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c55438 = 0;
  DAT_04c55440 = 1;
  DAT_04c55448 = 0;
  DAT_04c55428 = 0;
  DAT_04c55430 = 0;
  DAT_04c55450 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c55458 = PTR_DAT_04bb2120;
  DAT_04c55466 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c55450;
  FUN_03c5a110(&DAT_04c55450,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c55478 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c554a0 = &DAT_04c554a8;
  DAT_04c554d0 = (undefined8 *)0x0;
  DAT_04c554d8 = 0;
  DAT_04c554f0 = 0xffffffffffffffff;
  DAT_04c554e0 = (code *)0x0;
  DAT_04c554e8 = (undefined1 *)0x0;
  DAT_04c55468 = (undefined8 *)0x0;
  DAT_04c55470 = &DAT_04c55478;
  DAT_04c554a8 = DAT_04c55478;
  FUN_038e2df8(&DAT_04c554f8);
  DAT_04c554e0 = FUN_03c66ec8;
  DAT_04c554e8 = &LAB_03c66f18;
  DAT_04c554f0 = 0;
  DAT_04c555b0 = 0;
  DAT_04c555b8 = (undefined1 *)0x0;
  DAT_04c555c0 = (undefined1 *)0x0;
  DAT_04c555c8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c555d0);
  DAT_04c55698 = 0;
  DAT_04c555b8 = &LAB_03c66f50;
  DAT_04c55688 = &DAT_04c55688;
  DAT_04c55690 = &DAT_04c55688;
  DAT_04c556b0 = 0x1000000000;
  DAT_04c555c0 = &LAB_03c67050;
  DAT_04c555c8 = 0x20;
  DAT_04c556a0 = &DAT_04c556a0;
  DAT_04c556a8 = &DAT_04c556a0;
  if (((DAT_05af9a10 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9a10), iVar3 != 0)) {
    DAT_05af99e8 = puVar1 + 0x10;
    DAT_05af99c0 = 0;
    DAT_05af99c8 = 0;
    DAT_05af99d0 = 0;
    DAT_05af99d8 = 1;
    DAT_05af99e0 = &DAT_05af99e8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af99c0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9a10);
  }
  DAT_04c554d0 = &DAT_05af99c0;
  if (((DAT_05af9a80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9a80), iVar3 != 0)) {
    DAT_05af9a18 = &PTR_LAB_04b95e88;
    DAT_05af9a20 = &PTR_FUN_04b95eb8;
    DAT_05af9a40 = &PTR_FUN_04b95ee0;
    DAT_05af9a60 = &PTR_FUN_04b95f08;
    __cxa_guard_release(&DAT_05af9a80);
  }
  DAT_04c55468 = &DAT_05af9a18;
  uVar4 = (*(code *)DAT_05af9a20[1])(&DAT_05af9a20);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55470)();
    DAT_04c55478 = &PTR_FUN_04b95f30;
    DAT_04c55470 = &DAT_04c55478;
    DAT_04c55480 = &PTR_LAB_04b95f90;
    DAT_04c55488 = &LAB_03dd5b58;
  }
  uVar4 = (*(code *)DAT_05af9a40[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c554a0)();
    DAT_04c554a8 = &PTR_FUN_04b95fb8;
    DAT_04c554a0 = &DAT_04c554a8;
    DAT_04c554b0 = &PTR_LAB_04b96018;
    DAT_04c554b8 = &LAB_03dd5bf4;
  }
  uVar4 = (*(code *)DAT_05af9a60[1])();
  puVar2 = DAT_04c554d0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c554d0[4])();
    puVar2[5] = &PTR_FUN_04b96040;
    puVar2[6] = &PTR_LAB_04b960a0;
    puVar2[7] = &LAB_03dd5c94;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c554d8,(long)DAT_04c554d0 + DAT_04c554f0);
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
  DAT_04c55448 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c55428 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

