
void FUN_03cc4b1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4edb8 = 0;
  DAT_04c4edc0 = 1;
  DAT_04c4edc8 = 0;
  DAT_04c4eda8 = 0;
  DAT_04c4edb0 = 0;
  DAT_04c4edd0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4edd8 = PTR_DAT_04bb2120;
  DAT_04c4ede6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4edd0;
  FUN_03c5a110(&DAT_04c4edd0,&local_50,0xffffffff,1);
  puVar2 = PTR_DAT_04bd3890;
  DAT_04c4edf8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4ee20 = &DAT_04c4ee28;
  DAT_04c4ee50 = (undefined8 *)0x0;
  DAT_04c4ee58 = 0;
  DAT_04c4ee70 = 0xffffffffffffffff;
  DAT_04c4ee60 = (code *)0x0;
  DAT_04c4ee68 = (undefined1 *)0x0;
  DAT_04c4ede8 = (undefined *)0x0;
  DAT_04c4edf0 = &DAT_04c4edf8;
  DAT_04c4ee28 = DAT_04c4edf8;
  FUN_038e2df8(&DAT_04c4ee78);
  DAT_04c4ee60 = FUN_03c66ec8;
  DAT_04c4ee68 = &LAB_03c66f18;
  DAT_04c4ee70 = 0;
  DAT_04c4ef30 = 0;
  DAT_04c4ef38 = (undefined1 *)0x0;
  DAT_04c4ef40 = (undefined1 *)0x0;
  DAT_04c4ef48 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4ef50);
  DAT_04c4f018 = 0;
  DAT_04c4ef38 = &LAB_03c66f50;
  DAT_04c4f008 = &DAT_04c4f008;
  DAT_04c4f010 = &DAT_04c4f008;
  DAT_04c4f030 = 0x1000000000;
  DAT_04c4ef40 = &LAB_03c67050;
  DAT_04c4ef48 = 0x20;
  DAT_04c4f020 = &DAT_04c4f020;
  DAT_04c4f028 = &DAT_04c4f020;
  if (((DAT_05af0658 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af0658), iVar5 != 0)) {
    DAT_05af0630 = puVar2 + 0x10;
    DAT_05af0608 = 0;
    DAT_05af0610 = 0;
    DAT_05af0618 = 0;
    DAT_05af0620 = 1;
    DAT_05af0628 = &DAT_05af0630;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0608,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0658);
  }
  puVar2 = PTR_DAT_04bd3c20;
  DAT_04c4ee50 = &DAT_05af0608;
  if (((*PTR_DAT_04bd3c28 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3c28), puVar3 = PTR_DAT_04bd3c40, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd3c38 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd3c30 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd3c48;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3c28);
  }
  DAT_04c4ede8 = puVar2;
  uVar6 = (**(code **)(*(long *)(puVar2 + 8) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4edf0)();
    DAT_04c4edf8 = &PTR_FUN_04b897c8;
    DAT_04c4edf0 = &DAT_04c4edf8;
    DAT_04c4ee00 = &PTR_LAB_04b89828;
    DAT_04c4ee08 = &LAB_03cc4f6c;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x28) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4ee20)();
    DAT_04c4ee28 = &PTR_FUN_04b89850;
    DAT_04c4ee20 = &DAT_04c4ee28;
    DAT_04c4ee30 = &PTR_LAB_04b898b0;
    DAT_04c4ee38 = &LAB_03cc5024;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x48) + 8))(puVar2 + 0x48);
  puVar4 = DAT_04c4ee50;
  if ((uVar6 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4ee50[4])();
    puVar4[5] = &PTR_FUN_04b898d8;
    puVar4[6] = &PTR_LAB_04b89938;
    puVar4[7] = &LAB_03cc50e0;
    puVar4[4] = puVar4 + 5;
    FUN_03c63db0(&DAT_04c4ee58,(long)DAT_04c4ee50 + DAT_04c4ee70);
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
  DAT_04c4edc8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4eda8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

