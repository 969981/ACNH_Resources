
void FUN_03cd423c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c504c8 = 0;
  DAT_04c504d0 = 1;
  DAT_04c504d8 = 0;
  DAT_04c504b8 = 0;
  DAT_04c504c0 = 0;
  DAT_04c504e0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c504e8 = PTR_DAT_04bb2120;
  DAT_04c504f6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c504e0;
  FUN_03c5a110(&DAT_04c504e0,&local_50,0xffffffff,1);
  puVar3 = PTR_DAT_04bd3890;
  DAT_04c50508 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c50530 = &DAT_04c50538;
  DAT_04c50560 = (undefined8 *)0x0;
  DAT_04c50568 = 0;
  DAT_04c50580 = 0xffffffffffffffff;
  DAT_04c50570 = (code *)0x0;
  DAT_04c50578 = (undefined1 *)0x0;
  DAT_04c504f8 = (undefined *)0x0;
  DAT_04c50500 = &DAT_04c50508;
  DAT_04c50538 = DAT_04c50508;
  FUN_038e2df8(&DAT_04c50588);
  DAT_04c50570 = FUN_03c66ec8;
  DAT_04c50578 = &LAB_03c66f18;
  DAT_04c50580 = 0;
  DAT_04c50640 = 0;
  DAT_04c50648 = (undefined1 *)0x0;
  DAT_04c50650 = (undefined1 *)0x0;
  DAT_04c50658 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c50660);
  DAT_04c50728 = 0;
  DAT_04c50648 = &LAB_03c66f50;
  DAT_04c50718 = &DAT_04c50718;
  DAT_04c50720 = &DAT_04c50718;
  DAT_04c50740 = 0x1000000000;
  DAT_04c50650 = &LAB_03c67050;
  DAT_04c50658 = 0x20;
  DAT_04c50730 = &DAT_04c50730;
  DAT_04c50738 = &DAT_04c50730;
  if (((DAT_05af0b18 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af0b18), iVar6 != 0)) {
    DAT_05af0af0 = puVar3 + 0x10;
    DAT_05af0ac8 = 0;
    DAT_05af0ad0 = 0;
    DAT_05af0ad8 = 0;
    DAT_05af0ae0 = 1;
    DAT_05af0ae8 = &DAT_05af0af0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0ac8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0b18);
  }
  puVar3 = PTR_DAT_04bd3f40;
  DAT_04c50560 = &DAT_05af0ac8;
  if (((*PTR_DAT_04bd3f48 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3f48), iVar6 != 0))
  {
    puVar1 = PTR_DAT_04bd3f50 + 0x10;
    puVar2 = PTR_DAT_04bd3f60 + 0x10;
    *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3f58 + 0x10;
    puVar4 = PTR_DAT_04bd3f68;
    *(undefined **)puVar3 = puVar1;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3f48);
  }
  DAT_04c504f8 = puVar3;
  uVar7 = (**(code **)(*(long *)(puVar3 + 8) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c50500)();
    DAT_04c50508 = &PTR_FUN_04b8a770;
    DAT_04c50500 = &DAT_04c50508;
    DAT_04c50510 = &PTR_LAB_04b8a7d0;
    DAT_04c50518 = &LAB_03cd468c;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x28) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c50530)();
    DAT_04c50538 = &PTR_FUN_04b8a7f8;
    DAT_04c50530 = &DAT_04c50538;
    DAT_04c50540 = &PTR_LAB_04b8a858;
    DAT_04c50548 = &LAB_03cd4744;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x48) + 8))(puVar3 + 0x48);
  puVar5 = DAT_04c50560;
  if ((uVar7 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c50560[4])();
    puVar5[5] = &PTR_FUN_04b8a880;
    puVar5[6] = &PTR_LAB_04b8a8e0;
    puVar5[7] = &LAB_03cd4800;
    puVar5[4] = puVar5 + 5;
    FUN_03c63db0(&DAT_04c50568,(long)DAT_04c50560 + DAT_04c50580);
  }
  if (((DAT_05aee2a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05aee2a8), iVar6 != 0)) {
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
  DAT_04c504d8 = DAT_04c4cc40;
  if (((DAT_05aee2a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05aee2a8), iVar6 != 0)) {
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c504b8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

