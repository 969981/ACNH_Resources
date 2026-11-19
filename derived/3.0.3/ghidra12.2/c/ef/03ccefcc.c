
void FUN_03ccefcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4fd18 = 0;
  DAT_04c4fd20 = 1;
  DAT_04c4fd28 = 0;
  DAT_04c4fd08 = 0;
  DAT_04c4fd10 = 0;
  DAT_04c4fd30 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4fd38 = PTR_DAT_04bb2120;
  DAT_04c4fd46 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4fd30;
  FUN_03c5a110(&DAT_04c4fd30,&local_50,0xffffffff,1);
  puVar2 = PTR_DAT_04bd3890;
  DAT_04c4fd58 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4fd80 = &DAT_04c4fd88;
  DAT_04c4fdb0 = (undefined8 *)0x0;
  DAT_04c4fdb8 = 0;
  DAT_04c4fdd0 = 0xffffffffffffffff;
  DAT_04c4fdc0 = (code *)0x0;
  DAT_04c4fdc8 = (undefined1 *)0x0;
  DAT_04c4fd48 = (undefined *)0x0;
  DAT_04c4fd50 = &DAT_04c4fd58;
  DAT_04c4fd88 = DAT_04c4fd58;
  FUN_038e2df8(&DAT_04c4fdd8);
  DAT_04c4fdc0 = FUN_03c66ec8;
  DAT_04c4fdc8 = &LAB_03c66f18;
  DAT_04c4fdd0 = 0;
  DAT_04c4fe90 = 0;
  DAT_04c4fe98 = (undefined1 *)0x0;
  DAT_04c4fea0 = (undefined1 *)0x0;
  DAT_04c4fea8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4feb0);
  DAT_04c4ff78 = 0;
  DAT_04c4fe98 = &LAB_03c66f50;
  DAT_04c4ff68 = &DAT_04c4ff68;
  DAT_04c4ff70 = &DAT_04c4ff68;
  DAT_04c4ff90 = 0x1000000000;
  DAT_04c4fea0 = &LAB_03c67050;
  DAT_04c4fea8 = 0x20;
  DAT_04c4ff80 = &DAT_04c4ff80;
  DAT_04c4ff88 = &DAT_04c4ff80;
  if (((DAT_05af0948 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af0948), iVar5 != 0)) {
    DAT_05af0920 = puVar2 + 0x10;
    DAT_05af08f8 = 0;
    DAT_05af0900 = 0;
    DAT_05af0908 = 0;
    DAT_05af0910 = 1;
    DAT_05af0918 = &DAT_05af0920;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af08f8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0948);
  }
  puVar2 = PTR_DAT_04bd3ff0;
  DAT_04c4fdb0 = &DAT_05af08f8;
  if (((*PTR_DAT_04bd3ff8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3ff8), puVar3 = PTR_DAT_04bd4010, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd4008 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd4000 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd4018;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3ff8);
  }
  DAT_04c4fd48 = puVar2;
  uVar6 = (**(code **)(*(long *)(puVar2 + 8) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4fd50)();
    DAT_04c4fd58 = &PTR_FUN_04b8a200;
    DAT_04c4fd50 = &DAT_04c4fd58;
    DAT_04c4fd60 = &PTR_LAB_04b8a260;
    DAT_04c4fd68 = &LAB_03ccf41c;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x28) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4fd80)();
    DAT_04c4fd88 = &PTR_FUN_04b8a288;
    DAT_04c4fd80 = &DAT_04c4fd88;
    DAT_04c4fd90 = &PTR_LAB_04b8a2e8;
    DAT_04c4fd98 = &LAB_03ccf4d4;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x48) + 8))(puVar2 + 0x48);
  puVar4 = DAT_04c4fdb0;
  if ((uVar6 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4fdb0[4])();
    puVar4[5] = &PTR_FUN_04b8a310;
    puVar4[6] = &PTR_LAB_04b8a370;
    puVar4[7] = &LAB_03ccf590;
    puVar4[4] = puVar4 + 5;
    FUN_03c63db0(&DAT_04c4fdb8,(long)DAT_04c4fdb0 + DAT_04c4fdd0);
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
  DAT_04c4fd28 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4fd08 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

