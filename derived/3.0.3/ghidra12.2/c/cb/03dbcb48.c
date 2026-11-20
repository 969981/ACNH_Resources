
void FUN_03dbcb48(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c532e8 = 0;
  DAT_04c532f0 = 1;
  DAT_04c532f8 = 0;
  DAT_04c532d8 = 0;
  DAT_04c532e0 = 0;
  DAT_04c53300 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53308 = PTR_DAT_04bb2120;
  DAT_04c53316 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53300;
  FUN_03c5a110(&DAT_04c53300,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c53328 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c53350 = &DAT_04c53358;
  DAT_04c53380 = (undefined8 *)0x0;
  DAT_04c53388 = 0;
  DAT_04c533a0 = 0xffffffffffffffff;
  DAT_04c53390 = (code *)0x0;
  DAT_04c53398 = (undefined1 *)0x0;
  DAT_04c53318 = (undefined8 *)0x0;
  DAT_04c53320 = &DAT_04c53328;
  DAT_04c53358 = DAT_04c53328;
  FUN_038e2df8(&DAT_04c533a8);
  DAT_04c53390 = FUN_03c66ec8;
  DAT_04c53398 = &LAB_03c66f18;
  DAT_04c533a0 = 0;
  DAT_04c53460 = 0;
  DAT_04c53468 = (undefined1 *)0x0;
  DAT_04c53470 = (undefined1 *)0x0;
  DAT_04c53478 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c53480);
  DAT_04c53548 = 0;
  DAT_04c53468 = &LAB_03c66f50;
  DAT_04c53538 = &DAT_04c53538;
  DAT_04c53540 = &DAT_04c53538;
  DAT_04c53560 = 0x1000000000;
  DAT_04c53470 = &LAB_03c67050;
  DAT_04c53478 = 0x20;
  DAT_04c53550 = &DAT_04c53550;
  DAT_04c53558 = &DAT_04c53550;
  if (((DAT_05af8cd0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8cd0), iVar3 != 0)) {
    DAT_05af8ca8 = puVar1 + 0x10;
    DAT_05af8c80 = 0;
    DAT_05af8c88 = 0;
    DAT_05af8c90 = 0;
    DAT_05af8c98 = 1;
    DAT_05af8ca0 = &DAT_05af8ca8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8c80,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8cd0);
  }
  DAT_04c53380 = &DAT_05af8c80;
  if (((DAT_05af8d40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8d40), iVar3 != 0)) {
    DAT_05af8cd8 = &PTR_LAB_04b94270;
    DAT_05af8ce0 = &PTR_FUN_04b942a0;
    DAT_05af8d00 = &PTR_FUN_04b942c8;
    DAT_05af8d20 = &PTR_FUN_04b942f0;
    __cxa_guard_release(&DAT_05af8d40);
  }
  DAT_04c53318 = &DAT_05af8cd8;
  uVar4 = (*(code *)DAT_05af8ce0[1])(&DAT_05af8ce0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53320)();
    DAT_04c53328 = &PTR_FUN_04b94318;
    DAT_04c53320 = &DAT_04c53328;
    DAT_04c53330 = &PTR_LAB_04b94378;
    DAT_04c53338 = &LAB_03dbcf90;
  }
  uVar4 = (*(code *)DAT_05af8d00[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53350)();
    DAT_04c53358 = &PTR_FUN_04b943a0;
    DAT_04c53350 = &DAT_04c53358;
    DAT_04c53360 = &PTR_LAB_04b94400;
    DAT_04c53368 = &LAB_03dbd02c;
  }
  uVar4 = (*(code *)DAT_05af8d20[1])();
  puVar2 = DAT_04c53380;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c53380[4])();
    puVar2[5] = &PTR_FUN_04b94428;
    puVar2[6] = &PTR_LAB_04b94488;
    puVar2[7] = &LAB_03dbd0cc;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c53388,(long)DAT_04c53380 + DAT_04c533a0);
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
  DAT_04c532f8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c532d8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

