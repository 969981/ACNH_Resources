
void FUN_03de11f0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c56398 = 0;
  DAT_04c563a0 = 1;
  DAT_04c563a8 = 0;
  DAT_04c56388 = 0;
  DAT_04c56390 = 0;
  DAT_04c563b0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c563b8 = PTR_DAT_04bb2120;
  DAT_04c563c6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c563b0;
  FUN_03c5a110(&DAT_04c563b0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c563d8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c56400 = &DAT_04c56408;
  DAT_04c56430 = (undefined8 *)0x0;
  DAT_04c56438 = 0;
  DAT_04c56450 = 0xffffffffffffffff;
  DAT_04c56440 = (code *)0x0;
  DAT_04c56448 = (undefined1 *)0x0;
  DAT_04c563c8 = (undefined8 *)0x0;
  DAT_04c563d0 = &DAT_04c563d8;
  DAT_04c56408 = DAT_04c563d8;
  FUN_038e2df8(&DAT_04c56458);
  DAT_04c56440 = FUN_03c66ec8;
  DAT_04c56448 = &LAB_03c66f18;
  DAT_04c56450 = 0;
  DAT_04c56510 = 0;
  DAT_04c56518 = (undefined1 *)0x0;
  DAT_04c56520 = (undefined1 *)0x0;
  DAT_04c56528 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c56530);
  DAT_04c565f8 = 0;
  DAT_04c56518 = &LAB_03c66f50;
  DAT_04c565e8 = &DAT_04c565e8;
  DAT_04c565f0 = &DAT_04c565e8;
  DAT_04c56610 = 0x1000000000;
  DAT_04c56520 = &LAB_03c67050;
  DAT_04c56528 = 0x20;
  DAT_04c56600 = &DAT_04c56600;
  DAT_04c56608 = &DAT_04c56600;
  if (((DAT_05afa790 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa790), iVar3 != 0)) {
    DAT_05afa768 = puVar1 + 0x10;
    DAT_05afa740 = 0;
    DAT_05afa748 = 0;
    DAT_05afa750 = 0;
    DAT_05afa758 = 1;
    DAT_05afa760 = &DAT_05afa768;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afa740,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afa790);
  }
  DAT_04c56430 = &DAT_05afa740;
  if (((DAT_05afa800 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa800), iVar3 != 0)) {
    DAT_05afa798 = &PTR_LAB_04b96c38;
    DAT_05afa7a0 = &PTR_FUN_04b96c68;
    DAT_05afa7c0 = &PTR_FUN_04b96cc0;
    DAT_05afa7e0 = &PTR_FUN_04b96ce8;
    __cxa_guard_release(&DAT_05afa800);
  }
  DAT_04c563c8 = &DAT_05afa798;
  uVar4 = (*(code *)DAT_05afa7a0[1])(&DAT_05afa7a0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c563d0)();
    DAT_04c563d8 = &PTR_FUN_04b96d10;
    DAT_04c563d0 = &DAT_04c563d8;
    DAT_04c563e0 = &PTR_LAB_04b96d70;
    DAT_04c563e8 = &LAB_03de1638;
  }
  uVar4 = (*(code *)DAT_05afa7c0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c56400)();
    DAT_04c56408 = &PTR_FUN_04b96d98;
    DAT_04c56400 = &DAT_04c56408;
    DAT_04c56410 = &PTR_LAB_04b96df8;
    DAT_04c56418 = &LAB_03de16d4;
  }
  uVar4 = (*(code *)DAT_05afa7e0[1])();
  puVar2 = DAT_04c56430;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c56430[4])();
    puVar2[5] = &PTR_FUN_04b96e20;
    puVar2[6] = &PTR_LAB_04b96e80;
    puVar2[7] = &LAB_03de1774;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c56438,(long)DAT_04c56430 + DAT_04c56450);
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
  DAT_04c563a8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c56388 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

