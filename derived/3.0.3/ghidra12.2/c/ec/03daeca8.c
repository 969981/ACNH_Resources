
void FUN_03daeca8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c51e68 = 0;
  DAT_04c51e70 = 1;
  DAT_04c51e78 = 0;
  DAT_04c51e58 = 0;
  DAT_04c51e60 = 0;
  DAT_04c51e80 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c51e88 = PTR_DAT_04bb2120;
  DAT_04c51e96 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c51e80;
  FUN_03c5a110(&DAT_04c51e80,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c51ea8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c51ed0 = &DAT_04c51ed8;
  DAT_04c51f00 = (undefined8 *)0x0;
  DAT_04c51f08 = 0;
  DAT_04c51f20 = 0xffffffffffffffff;
  DAT_04c51f10 = (code *)0x0;
  DAT_04c51f18 = (undefined1 *)0x0;
  DAT_04c51e98 = (undefined8 *)0x0;
  DAT_04c51ea0 = &DAT_04c51ea8;
  DAT_04c51ed8 = DAT_04c51ea8;
  FUN_038e2df8(&DAT_04c51f28);
  DAT_04c51f10 = FUN_03c66ec8;
  DAT_04c51f18 = &LAB_03c66f18;
  DAT_04c51f20 = 0;
  DAT_04c51fe0 = 0;
  DAT_04c51fe8 = (undefined1 *)0x0;
  DAT_04c51ff0 = (undefined1 *)0x0;
  DAT_04c51ff8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c52000);
  DAT_04c520c8 = 0;
  DAT_04c51fe8 = &LAB_03c66f50;
  DAT_04c520b8 = &DAT_04c520b8;
  DAT_04c520c0 = &DAT_04c520b8;
  DAT_04c520e0 = 0x1000000000;
  DAT_04c51ff0 = &LAB_03c67050;
  DAT_04c51ff8 = 0x20;
  DAT_04c520d0 = &DAT_04c520d0;
  DAT_04c520d8 = &DAT_04c520d0;
  if (((DAT_05af8548 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8548), iVar3 != 0)) {
    DAT_05af8520 = puVar1 + 0x10;
    DAT_05af84f8 = 0;
    DAT_05af8500 = 0;
    DAT_05af8508 = 0;
    DAT_05af8510 = 1;
    DAT_05af8518 = &DAT_05af8520;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af84f8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8548);
  }
  DAT_04c51f00 = &DAT_05af84f8;
  if (((DAT_05af85b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af85b8), iVar3 != 0)) {
    DAT_05af8550 = &PTR_LAB_04b93070;
    DAT_05af8558 = &PTR_FUN_04b930a0;
    DAT_05af8578 = &PTR_FUN_04b930c8;
    DAT_05af8598 = &PTR_FUN_04b930f0;
    __cxa_guard_release(&DAT_05af85b8);
  }
  DAT_04c51e98 = &DAT_05af8550;
  uVar4 = (*(code *)DAT_05af8558[1])(&DAT_05af8558);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c51ea0)();
    DAT_04c51ea8 = &PTR_FUN_04b93118;
    DAT_04c51ea0 = &DAT_04c51ea8;
    DAT_04c51eb0 = &PTR_LAB_04b93178;
    DAT_04c51eb8 = &LAB_03daf0f0;
  }
  uVar4 = (*(code *)DAT_05af8578[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c51ed0)();
    DAT_04c51ed8 = &PTR_FUN_04b931a0;
    DAT_04c51ed0 = &DAT_04c51ed8;
    DAT_04c51ee0 = &PTR_LAB_04b93200;
    DAT_04c51ee8 = &LAB_03daf18c;
  }
  uVar4 = (*(code *)DAT_05af8598[1])();
  puVar2 = DAT_04c51f00;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c51f00[4])();
    puVar2[5] = &PTR_FUN_04b93228;
    puVar2[6] = &PTR_LAB_04b93288;
    puVar2[7] = &LAB_03daf22c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c51f08,(long)DAT_04c51f00 + DAT_04c51f20);
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
  DAT_04c51e78 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c51e58 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

