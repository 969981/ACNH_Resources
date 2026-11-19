
void FUN_03cc81fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4f2d8 = 0;
  DAT_04c4f2e0 = 1;
  DAT_04c4f2e8 = 0;
  DAT_04c4f2c8 = 0;
  DAT_04c4f2d0 = 0;
  DAT_04c4f2f0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4f2f8 = PTR_DAT_04bb2120;
  DAT_04c4f306 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4f2f0;
  FUN_03c5a110(&DAT_04c4f2f0,&local_50,0xffffffff,1);
  puVar2 = PTR_DAT_04bd3890;
  DAT_04c4f318 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4f340 = &DAT_04c4f348;
  DAT_04c4f370 = (undefined8 *)0x0;
  DAT_04c4f378 = 0;
  DAT_04c4f390 = 0xffffffffffffffff;
  DAT_04c4f380 = (code *)0x0;
  DAT_04c4f388 = (undefined1 *)0x0;
  DAT_04c4f308 = (undefined *)0x0;
  DAT_04c4f310 = &DAT_04c4f318;
  DAT_04c4f348 = DAT_04c4f318;
  FUN_038e2df8(&DAT_04c4f398);
  DAT_04c4f380 = FUN_03c66ec8;
  DAT_04c4f388 = &LAB_03c66f18;
  DAT_04c4f390 = 0;
  DAT_04c4f450 = 0;
  DAT_04c4f458 = (undefined1 *)0x0;
  DAT_04c4f460 = (undefined1 *)0x0;
  DAT_04c4f468 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4f470);
  DAT_04c4f538 = 0;
  DAT_04c4f458 = &LAB_03c66f50;
  DAT_04c4f528 = &DAT_04c4f528;
  DAT_04c4f530 = &DAT_04c4f528;
  DAT_04c4f550 = 0x1000000000;
  DAT_04c4f460 = &LAB_03c67050;
  DAT_04c4f468 = 0x20;
  DAT_04c4f540 = &DAT_04c4f540;
  DAT_04c4f548 = &DAT_04c4f540;
  if (((DAT_05af0738 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af0738), iVar5 != 0)) {
    DAT_05af0710 = puVar2 + 0x10;
    DAT_05af06e8 = 0;
    DAT_05af06f0 = 0;
    DAT_05af06f8 = 0;
    DAT_05af0700 = 1;
    DAT_05af0708 = &DAT_05af0710;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af06e8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0738);
  }
  puVar2 = PTR_DAT_04bd3bc0;
  DAT_04c4f370 = &DAT_05af06e8;
  if (((*PTR_DAT_04bd3bc8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3bc8), puVar3 = PTR_DAT_04bd3be0, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd3bd8 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd3bd0 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd3be8;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3bc8);
  }
  DAT_04c4f308 = puVar2;
  uVar6 = (**(code **)(*(long *)(puVar2 + 8) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4f310)();
    DAT_04c4f318 = &PTR_FUN_04b89af8;
    DAT_04c4f310 = &DAT_04c4f318;
    DAT_04c4f320 = &PTR_LAB_04b89b58;
    DAT_04c4f328 = &LAB_03cc864c;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x28) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4f340)();
    DAT_04c4f348 = &PTR_FUN_04b89b80;
    DAT_04c4f340 = &DAT_04c4f348;
    DAT_04c4f350 = &PTR_LAB_04b89be0;
    DAT_04c4f358 = &LAB_03cc8704;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x48) + 8))(puVar2 + 0x48);
  puVar4 = DAT_04c4f370;
  if ((uVar6 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4f370[4])();
    puVar4[5] = &PTR_FUN_04b89c08;
    puVar4[6] = &PTR_LAB_04b89c68;
    puVar4[7] = &LAB_03cc87c0;
    puVar4[4] = puVar4 + 5;
    FUN_03c63db0(&DAT_04c4f378,(long)DAT_04c4f370 + DAT_04c4f390);
  }
  if (((DAT_05aee2a8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05aee2a8), iVar5 != 0)) {
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
  DAT_04c4f2e8 = DAT_04c4cc40;
  if (((DAT_05aee2a8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05aee2a8), iVar5 != 0)) {
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4f2c8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

