
void FUN_03dc9dc8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c544d8 = 0;
  DAT_04c544e0 = 1;
  DAT_04c544e8 = 0;
  DAT_04c544c8 = 0;
  DAT_04c544d0 = 0;
  DAT_04c544f0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c544f8 = PTR_DAT_04bb2120;
  DAT_04c54506 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c544f0;
  FUN_03c5a110(&DAT_04c544f0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c54518 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c54540 = &DAT_04c54548;
  DAT_04c54570 = (undefined8 *)0x0;
  DAT_04c54578 = 0;
  DAT_04c54590 = 0xffffffffffffffff;
  DAT_04c54580 = (code *)0x0;
  DAT_04c54588 = (undefined1 *)0x0;
  DAT_04c54508 = (undefined8 *)0x0;
  DAT_04c54510 = &DAT_04c54518;
  DAT_04c54548 = DAT_04c54518;
  FUN_038e2df8(&DAT_04c54598);
  DAT_04c54580 = FUN_03c66ec8;
  DAT_04c54588 = &LAB_03c66f18;
  DAT_04c54590 = 0;
  DAT_04c54650 = 0;
  DAT_04c54658 = (undefined1 *)0x0;
  DAT_04c54660 = (undefined1 *)0x0;
  DAT_04c54668 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c54670);
  DAT_04c54738 = 0;
  DAT_04c54658 = &LAB_03c66f50;
  DAT_04c54728 = &DAT_04c54728;
  DAT_04c54730 = &DAT_04c54728;
  DAT_04c54750 = 0x1000000000;
  DAT_04c54660 = &LAB_03c67050;
  DAT_04c54668 = 0x20;
  DAT_04c54740 = &DAT_04c54740;
  DAT_04c54748 = &DAT_04c54740;
  if (((DAT_05af9278 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9278), iVar3 != 0)) {
    DAT_05af9250 = puVar1 + 0x10;
    DAT_05af9228 = 0;
    DAT_05af9230 = 0;
    DAT_05af9238 = 0;
    DAT_05af9240 = 1;
    DAT_05af9248 = &DAT_05af9250;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9228,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9278);
  }
  DAT_04c54570 = &DAT_05af9228;
  if (((DAT_05af92e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af92e8), iVar3 != 0)) {
    DAT_05af9280 = &PTR_LAB_04b95108;
    DAT_05af9288 = &PTR_FUN_04b95138;
    DAT_05af92a8 = &PTR_FUN_04b95160;
    DAT_05af92c8 = &PTR_FUN_04b95188;
    __cxa_guard_release(&DAT_05af92e8);
  }
  DAT_04c54508 = &DAT_05af9280;
  uVar4 = (*(code *)DAT_05af9288[1])(&DAT_05af9288);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54510)();
    DAT_04c54518 = &PTR_FUN_04b951b0;
    DAT_04c54510 = &DAT_04c54518;
    DAT_04c54520 = &PTR_LAB_04b95210;
    DAT_04c54528 = &LAB_03dca210;
  }
  uVar4 = (*(code *)DAT_05af92a8[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54540)();
    DAT_04c54548 = &PTR_FUN_04b95238;
    DAT_04c54540 = &DAT_04c54548;
    DAT_04c54550 = &PTR_LAB_04b95298;
    DAT_04c54558 = &LAB_03dca2ac;
  }
  uVar4 = (*(code *)DAT_05af92c8[1])();
  puVar2 = DAT_04c54570;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c54570[4])();
    puVar2[5] = &PTR_FUN_04b952c0;
    puVar2[6] = &PTR_LAB_04b95320;
    puVar2[7] = &LAB_03dca34c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c54578,(long)DAT_04c54570 + DAT_04c54590);
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
  DAT_04c544e8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c544c8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

