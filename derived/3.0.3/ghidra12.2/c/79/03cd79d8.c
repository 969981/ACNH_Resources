
void FUN_03cd79d8(void)

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
  
  DAT_04c509e8 = 0;
  DAT_04c509f0 = 1;
  DAT_04c509f8 = 0;
  DAT_04c509d8 = 0;
  DAT_04c509e0 = 0;
  DAT_04c50a00 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c50a08 = PTR_DAT_04bb2120;
  DAT_04c50a16 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c50a00;
  FUN_03c5a110(&DAT_04c50a00,&local_50,0xffffffff,1);
  puVar3 = PTR_DAT_04bd3890;
  DAT_04c50a28 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c50a50 = &DAT_04c50a58;
  DAT_04c50a80 = (undefined8 *)0x0;
  DAT_04c50a88 = 0;
  DAT_04c50aa0 = 0xffffffffffffffff;
  DAT_04c50a90 = (code *)0x0;
  DAT_04c50a98 = (undefined1 *)0x0;
  DAT_04c50a18 = (undefined *)0x0;
  DAT_04c50a20 = &DAT_04c50a28;
  DAT_04c50a58 = DAT_04c50a28;
  FUN_038e2df8(&DAT_04c50aa8);
  DAT_04c50a90 = FUN_03c66ec8;
  DAT_04c50a98 = &LAB_03c66f18;
  DAT_04c50aa0 = 0;
  DAT_04c50b60 = 0;
  DAT_04c50b68 = (undefined1 *)0x0;
  DAT_04c50b70 = (undefined1 *)0x0;
  DAT_04c50b78 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c50b80);
  DAT_04c50c48 = 0;
  DAT_04c50b68 = &LAB_03c66f50;
  DAT_04c50c38 = &DAT_04c50c38;
  DAT_04c50c40 = &DAT_04c50c38;
  DAT_04c50c60 = 0x1000000000;
  DAT_04c50b70 = &LAB_03c67050;
  DAT_04c50b78 = 0x20;
  DAT_04c50c50 = &DAT_04c50c50;
  DAT_04c50c58 = &DAT_04c50c50;
  if (((DAT_05af0c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af0c20), iVar6 != 0)) {
    DAT_05af0bf8 = puVar3 + 0x10;
    DAT_05af0bd0 = 0;
    DAT_05af0bd8 = 0;
    DAT_05af0be0 = 0;
    DAT_05af0be8 = 1;
    DAT_05af0bf0 = &DAT_05af0bf8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0bd0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0c20);
  }
  puVar3 = PTR_DAT_04bd3fa0;
  DAT_04c50a80 = &DAT_05af0bd0;
  if (((*PTR_DAT_04bd3fa8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3fa8), iVar6 != 0))
  {
    puVar1 = PTR_DAT_04bd3fb0 + 0x10;
    puVar2 = PTR_DAT_04bd3fc0 + 0x10;
    *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3fb8 + 0x10;
    puVar4 = PTR_DAT_04bd3fc8;
    *(undefined **)puVar3 = puVar1;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3fa8);
  }
  DAT_04c50a18 = puVar3;
  uVar7 = (**(code **)(*(long *)(puVar3 + 8) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c50a20)();
    DAT_04c50a28 = &PTR_FUN_04b8aaa0;
    DAT_04c50a20 = &DAT_04c50a28;
    DAT_04c50a30 = &PTR_LAB_04b8ab00;
    DAT_04c50a38 = &LAB_03cd7e28;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x28) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c50a50)();
    DAT_04c50a58 = &PTR_FUN_04b8ab28;
    DAT_04c50a50 = &DAT_04c50a58;
    DAT_04c50a60 = &PTR_LAB_04b8ab88;
    DAT_04c50a68 = &LAB_03cd7ee0;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x48) + 8))(puVar3 + 0x48);
  puVar5 = DAT_04c50a80;
  if ((uVar7 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c50a80[4])();
    puVar5[5] = &PTR_FUN_04b8abb0;
    puVar5[6] = &PTR_LAB_04b8ac10;
    puVar5[7] = &LAB_03cd7f9c;
    puVar5[4] = puVar5 + 5;
    FUN_03c63db0(&DAT_04c50a88,(long)DAT_04c50a80 + DAT_04c50aa0);
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
  DAT_04c509f8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c509d8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

