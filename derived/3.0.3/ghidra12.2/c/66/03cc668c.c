
void FUN_03cc668c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4f048 = 0;
  DAT_04c4f050 = 1;
  DAT_04c4f058 = 0;
  DAT_04c4f038 = 0;
  DAT_04c4f040 = 0;
  DAT_04c4f060 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4f068 = PTR_DAT_04bb2120;
  DAT_04c4f076 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4f060;
  FUN_03c5a110(&DAT_04c4f060,&local_50,0xffffffff,1);
  puVar2 = PTR_DAT_04bd3890;
  DAT_04c4f088 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4f0b0 = &DAT_04c4f0b8;
  DAT_04c4f0e0 = (undefined8 *)0x0;
  DAT_04c4f0e8 = 0;
  DAT_04c4f100 = 0xffffffffffffffff;
  DAT_04c4f0f0 = (code *)0x0;
  DAT_04c4f0f8 = (undefined1 *)0x0;
  DAT_04c4f078 = (undefined *)0x0;
  DAT_04c4f080 = &DAT_04c4f088;
  DAT_04c4f0b8 = DAT_04c4f088;
  FUN_038e2df8(&DAT_04c4f108);
  DAT_04c4f0f0 = FUN_03c66ec8;
  DAT_04c4f0f8 = &LAB_03c66f18;
  DAT_04c4f100 = 0;
  DAT_04c4f1c0 = 0;
  DAT_04c4f1c8 = (undefined1 *)0x0;
  DAT_04c4f1d0 = (undefined1 *)0x0;
  DAT_04c4f1d8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4f1e0);
  DAT_04c4f2a8 = 0;
  DAT_04c4f1c8 = &LAB_03c66f50;
  DAT_04c4f298 = &DAT_04c4f298;
  DAT_04c4f2a0 = &DAT_04c4f298;
  DAT_04c4f2c0 = 0x1000000000;
  DAT_04c4f1d0 = &LAB_03c67050;
  DAT_04c4f1d8 = 0x20;
  DAT_04c4f2b0 = &DAT_04c4f2b0;
  DAT_04c4f2b8 = &DAT_04c4f2b0;
  if (((DAT_05af06c8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af06c8), iVar5 != 0)) {
    DAT_05af06a0 = puVar2 + 0x10;
    DAT_05af0678 = 0;
    DAT_05af0680 = 0;
    DAT_05af0688 = 0;
    DAT_05af0690 = 1;
    DAT_05af0698 = &DAT_05af06a0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0678,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af06c8);
  }
  puVar2 = PTR_DAT_04bd3bf0;
  DAT_04c4f0e0 = &DAT_05af0678;
  if (((*PTR_DAT_04bd3bf8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3bf8), puVar3 = PTR_DAT_04bd3c10, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd3c08 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd3c00 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd3c18;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3bf8);
  }
  DAT_04c4f078 = puVar2;
  uVar6 = (**(code **)(*(long *)(puVar2 + 8) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4f080)();
    DAT_04c4f088 = &PTR_FUN_04b89960;
    DAT_04c4f080 = &DAT_04c4f088;
    DAT_04c4f090 = &PTR_LAB_04b899c0;
    DAT_04c4f098 = &LAB_03cc6adc;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x28) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4f0b0)();
    DAT_04c4f0b8 = &PTR_FUN_04b899e8;
    DAT_04c4f0b0 = &DAT_04c4f0b8;
    DAT_04c4f0c0 = &PTR_LAB_04b89a48;
    DAT_04c4f0c8 = &LAB_03cc6b94;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x48) + 8))(puVar2 + 0x48);
  puVar4 = DAT_04c4f0e0;
  if ((uVar6 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4f0e0[4])();
    puVar4[5] = &PTR_FUN_04b89a70;
    puVar4[6] = &PTR_LAB_04b89ad0;
    puVar4[7] = &LAB_03cc6c50;
    puVar4[4] = puVar4 + 5;
    FUN_03c63db0(&DAT_04c4f0e8,(long)DAT_04c4f0e0 + DAT_04c4f100);
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
  DAT_04c4f058 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4f038 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

