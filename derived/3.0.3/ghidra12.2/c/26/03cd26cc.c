
void FUN_03cd26cc(void)

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
  
  DAT_04c50238 = 0;
  DAT_04c50240 = 1;
  DAT_04c50248 = 0;
  DAT_04c50228 = 0;
  DAT_04c50230 = 0;
  DAT_04c50250 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c50258 = PTR_DAT_04bb2120;
  DAT_04c50266 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c50250;
  FUN_03c5a110(&DAT_04c50250,&local_50,0xffffffff,1);
  puVar3 = PTR_DAT_04bd3890;
  DAT_04c50278 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c502a0 = &DAT_04c502a8;
  DAT_04c502d0 = (undefined8 *)0x0;
  DAT_04c502d8 = 0;
  DAT_04c502f0 = 0xffffffffffffffff;
  DAT_04c502e0 = (code *)0x0;
  DAT_04c502e8 = (undefined1 *)0x0;
  DAT_04c50268 = (undefined *)0x0;
  DAT_04c50270 = &DAT_04c50278;
  DAT_04c502a8 = DAT_04c50278;
  FUN_038e2df8(&DAT_04c502f8);
  DAT_04c502e0 = FUN_03c66ec8;
  DAT_04c502e8 = &LAB_03c66f18;
  DAT_04c502f0 = 0;
  DAT_04c503b0 = 0;
  DAT_04c503b8 = (undefined1 *)0x0;
  DAT_04c503c0 = (undefined1 *)0x0;
  DAT_04c503c8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c503d0);
  DAT_04c50498 = 0;
  DAT_04c503b8 = &LAB_03c66f50;
  DAT_04c50488 = &DAT_04c50488;
  DAT_04c50490 = &DAT_04c50488;
  DAT_04c504b0 = 0x1000000000;
  DAT_04c503c0 = &LAB_03c67050;
  DAT_04c503c8 = 0x20;
  DAT_04c504a0 = &DAT_04c504a0;
  DAT_04c504a8 = &DAT_04c504a0;
  if (((DAT_05af0ab8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af0ab8), iVar6 != 0)) {
    DAT_05af0a90 = puVar3 + 0x10;
    DAT_05af0a68 = 0;
    DAT_05af0a70 = 0;
    DAT_05af0a78 = 0;
    DAT_05af0a80 = 1;
    DAT_05af0a88 = &DAT_05af0a90;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0a68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0ab8);
  }
  puVar3 = PTR_DAT_04bd3f10;
  DAT_04c502d0 = &DAT_05af0a68;
  if (((*PTR_DAT_04bd3f18 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3f18), iVar6 != 0))
  {
    puVar1 = PTR_DAT_04bd3f20 + 0x10;
    puVar2 = PTR_DAT_04bd3f30 + 0x10;
    *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3f28 + 0x10;
    puVar4 = PTR_DAT_04bd3f38;
    *(undefined **)puVar3 = puVar1;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3f18);
  }
  DAT_04c50268 = puVar3;
  uVar7 = (**(code **)(*(long *)(puVar3 + 8) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c50270)();
    DAT_04c50278 = &PTR_FUN_04b8a5d8;
    DAT_04c50270 = &DAT_04c50278;
    DAT_04c50280 = &PTR_LAB_04b8a638;
    DAT_04c50288 = &LAB_03cd2b1c;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x28) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c502a0)();
    DAT_04c502a8 = &PTR_FUN_04b8a660;
    DAT_04c502a0 = &DAT_04c502a8;
    DAT_04c502b0 = &PTR_LAB_04b8a6c0;
    DAT_04c502b8 = &LAB_03cd2bd4;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x48) + 8))(puVar3 + 0x48);
  puVar5 = DAT_04c502d0;
  if ((uVar7 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c502d0[4])();
    puVar5[5] = &PTR_FUN_04b8a6e8;
    puVar5[6] = &PTR_LAB_04b8a748;
    puVar5[7] = &LAB_03cd2c90;
    puVar5[4] = puVar5 + 5;
    FUN_03c63db0(&DAT_04c502d8,(long)DAT_04c502d0 + DAT_04c502f0);
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
  DAT_04c50248 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c50228 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

