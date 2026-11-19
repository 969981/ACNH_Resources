
void FUN_03cc9d6c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4f568 = 0;
  DAT_04c4f570 = 1;
  DAT_04c4f578 = 0;
  DAT_04c4f558 = 0;
  DAT_04c4f560 = 0;
  DAT_04c4f580 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4f588 = PTR_DAT_04bb2120;
  DAT_04c4f596 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4f580;
  FUN_03c5a110(&DAT_04c4f580,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c4f5a8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4f5d0 = &DAT_04c4f5d8;
  DAT_04c4f600 = (undefined8 *)0x0;
  DAT_04c4f608 = 0;
  DAT_04c4f620 = 0xffffffffffffffff;
  DAT_04c4f610 = (code *)0x0;
  DAT_04c4f618 = (undefined1 *)0x0;
  DAT_04c4f598 = (undefined8 *)0x0;
  DAT_04c4f5a0 = &DAT_04c4f5a8;
  DAT_04c4f5d8 = DAT_04c4f5a8;
  FUN_038e2df8(&DAT_04c4f628);
  DAT_04c4f610 = FUN_03c66ec8;
  DAT_04c4f618 = &LAB_03c66f18;
  DAT_04c4f620 = 0;
  DAT_04c4f6e0 = 0;
  DAT_04c4f6e8 = (undefined1 *)0x0;
  DAT_04c4f6f0 = (undefined1 *)0x0;
  DAT_04c4f6f8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4f700);
  DAT_04c4f7c8 = 0;
  DAT_04c4f6e8 = &LAB_03c66f50;
  DAT_04c4f7b8 = &DAT_04c4f7b8;
  DAT_04c4f7c0 = &DAT_04c4f7b8;
  DAT_04c4f7e0 = 0x1000000000;
  DAT_04c4f6f0 = &LAB_03c67050;
  DAT_04c4f6f8 = 0x20;
  DAT_04c4f7d0 = &DAT_04c4f7d0;
  DAT_04c4f7d8 = &DAT_04c4f7d0;
  if (((DAT_05af07a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af07a8), iVar3 != 0)) {
    DAT_05af0780 = puVar1 + 0x10;
    DAT_05af0758 = 0;
    DAT_05af0760 = 0;
    DAT_05af0768 = 0;
    DAT_05af0770 = 1;
    DAT_05af0778 = &DAT_05af0780;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0758,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af07a8);
  }
  DAT_04c4f600 = &DAT_05af0758;
  if (((DAT_05af0818 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af0818), iVar3 != 0)) {
    DAT_05af07b0 = &PTR_LAB_04b89c90;
    DAT_05af07b8 = &PTR_FUN_04b89cc0;
    DAT_05af07d8 = &PTR_FUN_04b89ce8;
    DAT_05af07f8 = &PTR_FUN_04b89d10;
    __cxa_guard_release(&DAT_05af0818);
  }
  DAT_04c4f598 = &DAT_05af07b0;
  uVar4 = (*(code *)DAT_05af07b8[1])(&DAT_05af07b8);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c4f5a0)();
    DAT_04c4f5a8 = &PTR_FUN_04b89d38;
    DAT_04c4f5a0 = &DAT_04c4f5a8;
    DAT_04c4f5b0 = &PTR_LAB_04b89d98;
    DAT_04c4f5b8 = &LAB_03cca1b4;
  }
  uVar4 = (*(code *)DAT_05af07d8[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c4f5d0)();
    DAT_04c4f5d8 = &PTR_FUN_04b89dc0;
    DAT_04c4f5d0 = &DAT_04c4f5d8;
    DAT_04c4f5e0 = &PTR_LAB_04b89e20;
    DAT_04c4f5e8 = &LAB_03cca250;
  }
  uVar4 = (*(code *)DAT_05af07f8[1])();
  puVar2 = DAT_04c4f600;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4f600[4])();
    puVar2[5] = &PTR_FUN_04b89e48;
    puVar2[6] = &PTR_LAB_04b89ea8;
    puVar2[7] = &LAB_03cca2f0;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c4f608,(long)DAT_04c4f600 + DAT_04c4f620);
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
  DAT_04c4f578 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4f558 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

