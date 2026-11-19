
void FUN_03ccd45c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4fa88 = 0;
  DAT_04c4fa90 = 1;
  DAT_04c4fa98 = 0;
  DAT_04c4fa78 = 0;
  DAT_04c4fa80 = 0;
  DAT_04c4faa0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4faa8 = PTR_DAT_04bb2120;
  DAT_04c4fab6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4faa0;
  FUN_03c5a110(&DAT_04c4faa0,&local_50,0xffffffff,1);
  puVar2 = PTR_DAT_04bd3890;
  DAT_04c4fac8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4faf0 = &DAT_04c4faf8;
  DAT_04c4fb20 = (undefined8 *)0x0;
  DAT_04c4fb28 = 0;
  DAT_04c4fb40 = 0xffffffffffffffff;
  DAT_04c4fb30 = (code *)0x0;
  DAT_04c4fb38 = (undefined1 *)0x0;
  DAT_04c4fab8 = (undefined *)0x0;
  DAT_04c4fac0 = &DAT_04c4fac8;
  DAT_04c4faf8 = DAT_04c4fac8;
  FUN_038e2df8(&DAT_04c4fb48);
  DAT_04c4fb30 = FUN_03c66ec8;
  DAT_04c4fb38 = &LAB_03c66f18;
  DAT_04c4fb40 = 0;
  DAT_04c4fc00 = 0;
  DAT_04c4fc08 = (undefined1 *)0x0;
  DAT_04c4fc10 = (undefined1 *)0x0;
  DAT_04c4fc18 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4fc20);
  DAT_04c4fce8 = 0;
  DAT_04c4fc08 = &LAB_03c66f50;
  DAT_04c4fcd8 = &DAT_04c4fcd8;
  DAT_04c4fce0 = &DAT_04c4fcd8;
  DAT_04c4fd00 = 0x1000000000;
  DAT_04c4fc10 = &LAB_03c67050;
  DAT_04c4fc18 = 0x20;
  DAT_04c4fcf0 = &DAT_04c4fcf0;
  DAT_04c4fcf8 = &DAT_04c4fcf0;
  if (((DAT_05af08e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af08e8), iVar5 != 0)) {
    DAT_05af08c0 = puVar2 + 0x10;
    DAT_05af0898 = 0;
    DAT_05af08a0 = 0;
    DAT_05af08a8 = 0;
    DAT_05af08b0 = 1;
    DAT_05af08b8 = &DAT_05af08c0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0898,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af08e8);
  }
  puVar2 = PTR_DAT_04bd4050;
  DAT_04c4fb20 = &DAT_05af0898;
  if (((*PTR_DAT_04bd4058 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd4058), puVar3 = PTR_DAT_04bd4070, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd4068 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd4060 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd4078;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd4058);
  }
  DAT_04c4fab8 = puVar2;
  uVar6 = (**(code **)(*(long *)(puVar2 + 8) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4fac0)();
    DAT_04c4fac8 = &PTR_FUN_04b8a068;
    DAT_04c4fac0 = &DAT_04c4fac8;
    DAT_04c4fad0 = &PTR_LAB_04b8a0c8;
    DAT_04c4fad8 = &LAB_03ccd8ac;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x28) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4faf0)();
    DAT_04c4faf8 = &PTR_FUN_04b8a0f0;
    DAT_04c4faf0 = &DAT_04c4faf8;
    DAT_04c4fb00 = &PTR_LAB_04b8a150;
    DAT_04c4fb08 = &LAB_03ccd964;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x48) + 8))(puVar2 + 0x48);
  puVar4 = DAT_04c4fb20;
  if ((uVar6 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4fb20[4])();
    puVar4[5] = &PTR_FUN_04b8a178;
    puVar4[6] = &PTR_LAB_04b8a1d8;
    puVar4[7] = &LAB_03ccda20;
    puVar4[4] = puVar4 + 5;
    FUN_03c63db0(&DAT_04c4fb28,(long)DAT_04c4fb20 + DAT_04c4fb40);
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
  DAT_04c4fa98 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4fa78 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

