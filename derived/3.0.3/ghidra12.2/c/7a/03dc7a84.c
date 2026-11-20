
void FUN_03dc7a84(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c54248 = 0;
  DAT_04c54250 = 1;
  DAT_04c54258 = 0;
  DAT_04c54238 = 0;
  DAT_04c54240 = 0;
  DAT_04c54260 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c54268 = PTR_DAT_04bb2120;
  DAT_04c54276 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c54260;
  FUN_03c5a110(&DAT_04c54260,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c54288 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c542b0 = &DAT_04c542b8;
  DAT_04c542e0 = (undefined8 *)0x0;
  DAT_04c542e8 = 0;
  DAT_04c54300 = 0xffffffffffffffff;
  DAT_04c542f0 = (code *)0x0;
  DAT_04c542f8 = (undefined1 *)0x0;
  DAT_04c54278 = (undefined8 *)0x0;
  DAT_04c54280 = &DAT_04c54288;
  DAT_04c542b8 = DAT_04c54288;
  FUN_038e2df8(&DAT_04c54308);
  DAT_04c542f0 = FUN_03c66ec8;
  DAT_04c542f8 = &LAB_03c66f18;
  DAT_04c54300 = 0;
  DAT_04c543c0 = 0;
  DAT_04c543c8 = (undefined1 *)0x0;
  DAT_04c543d0 = (undefined1 *)0x0;
  DAT_04c543d8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c543e0);
  DAT_04c544a8 = 0;
  DAT_04c543c8 = &LAB_03c66f50;
  DAT_04c54498 = &DAT_04c54498;
  DAT_04c544a0 = &DAT_04c54498;
  DAT_04c544c0 = 0x1000000000;
  DAT_04c543d0 = &LAB_03c67050;
  DAT_04c543d8 = 0x20;
  DAT_04c544b0 = &DAT_04c544b0;
  DAT_04c544b8 = &DAT_04c544b0;
  if (((DAT_05af9160 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9160), iVar3 != 0)) {
    DAT_05af9138 = puVar1 + 0x10;
    DAT_05af9110 = 0;
    DAT_05af9118 = 0;
    DAT_05af9120 = 0;
    DAT_05af9128 = 1;
    DAT_05af9130 = &DAT_05af9138;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9110,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9160);
  }
  DAT_04c542e0 = &DAT_05af9110;
  if (((DAT_05af91f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af91f0), iVar3 != 0)) {
    DAT_05af9190 = &PTR_FUN_04b94ef8;
    DAT_05af9168 = &PTR_LAB_04b94ea0;
    DAT_05af9170 = &PTR_FUN_04b94ed0;
    DAT_05af91b0 = &PTR_FUN_04b94f20;
    DAT_05af91d0 = &PTR_FUN_04b94f48;
    __cxa_guard_release(&DAT_05af91f0);
  }
  DAT_04c54278 = &DAT_05af9168;
  uVar4 = (*(code *)DAT_05af9170[1])(&DAT_05af9170);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54280)();
    DAT_04c54288 = &PTR_FUN_04b94f70;
    DAT_04c54280 = &DAT_04c54288;
    DAT_04c54290 = &PTR_LAB_04b94fd0;
    DAT_04c54298 = &LAB_03dc7ed8;
  }
  uVar4 = (*(code *)DAT_05af9190[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c542b0)();
    DAT_04c542b8 = &PTR_FUN_04b94ff8;
    DAT_04c542b0 = &DAT_04c542b8;
    DAT_04c542c0 = &PTR_LAB_04b95058;
    DAT_04c542c8 = &LAB_03dc7f80;
  }
  uVar4 = (*(code *)DAT_05af91b0[1])();
  puVar2 = DAT_04c542e0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c542e0[4])();
    puVar2[5] = &PTR_FUN_04b95080;
    puVar2[6] = &PTR_LAB_04b950e0;
    puVar2[7] = &LAB_03dc802c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c542e8,(long)DAT_04c542e0 + DAT_04c54300);
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
  DAT_04c54258 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c54238 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

