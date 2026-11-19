
void FUN_03cd5e44(void)

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
  
  DAT_04c50758 = 0;
  DAT_04c50760 = 1;
  DAT_04c50768 = 0;
  DAT_04c50748 = 0;
  DAT_04c50750 = 0;
  DAT_04c50770 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c50778 = PTR_DAT_04bb2120;
  DAT_04c50786 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c50770;
  FUN_03c5a110(&DAT_04c50770,&local_50,0xffffffff,1);
  puVar3 = PTR_DAT_04bd3890;
  DAT_04c50798 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c507c0 = &DAT_04c507c8;
  DAT_04c507f0 = (undefined8 *)0x0;
  DAT_04c507f8 = 0;
  DAT_04c50810 = 0xffffffffffffffff;
  DAT_04c50800 = (code *)0x0;
  DAT_04c50808 = (undefined1 *)0x0;
  DAT_04c50788 = (undefined *)0x0;
  DAT_04c50790 = &DAT_04c50798;
  DAT_04c507c8 = DAT_04c50798;
  FUN_038e2df8(&DAT_04c50818);
  DAT_04c50800 = FUN_03c66ec8;
  DAT_04c50808 = &LAB_03c66f18;
  DAT_04c50810 = 0;
  DAT_04c508d0 = 0;
  DAT_04c508d8 = (undefined1 *)0x0;
  DAT_04c508e0 = (undefined1 *)0x0;
  DAT_04c508e8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c508f0);
  DAT_04c509b8 = 0;
  DAT_04c508d8 = &LAB_03c66f50;
  DAT_04c509a8 = &DAT_04c509a8;
  DAT_04c509b0 = &DAT_04c509a8;
  DAT_04c509d0 = 0x1000000000;
  DAT_04c508e0 = &LAB_03c67050;
  DAT_04c508e8 = 0x20;
  DAT_04c509c0 = &DAT_04c509c0;
  DAT_04c509c8 = &DAT_04c509c0;
  if (((DAT_05af0ba0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af0ba0), iVar6 != 0)) {
    DAT_05af0b78 = puVar3 + 0x10;
    DAT_05af0b50 = 0;
    DAT_05af0b58 = 0;
    DAT_05af0b60 = 0;
    DAT_05af0b68 = 1;
    DAT_05af0b70 = &DAT_05af0b78;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0b50,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0ba0);
  }
  puVar3 = PTR_DAT_04bd3f70;
  DAT_04c507f0 = &DAT_05af0b50;
  if (((*PTR_DAT_04bd3f78 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3f78), iVar6 != 0))
  {
    puVar1 = PTR_DAT_04bd3f80 + 0x10;
    puVar2 = PTR_DAT_04bd3f90 + 0x10;
    *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3f88 + 0x10;
    puVar4 = PTR_DAT_04bd3f98;
    *(undefined **)puVar3 = puVar1;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3f78);
  }
  DAT_04c50788 = puVar3;
  uVar7 = (**(code **)(*(long *)(puVar3 + 8) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c50790)();
    DAT_04c50798 = &PTR_FUN_04b8a908;
    DAT_04c50790 = &DAT_04c50798;
    DAT_04c507a0 = &PTR_LAB_04b8a968;
    DAT_04c507a8 = &LAB_03cd6294;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x28) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c507c0)();
    DAT_04c507c8 = &PTR_FUN_04b8a990;
    DAT_04c507c0 = &DAT_04c507c8;
    DAT_04c507d0 = &PTR_LAB_04b8a9f0;
    DAT_04c507d8 = &LAB_03cd634c;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x48) + 8))(puVar3 + 0x48);
  puVar5 = DAT_04c507f0;
  if ((uVar7 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c507f0[4])();
    puVar5[5] = &PTR_FUN_04b8aa18;
    puVar5[6] = &PTR_LAB_04b8aa78;
    puVar5[7] = &LAB_03cd6408;
    puVar5[4] = puVar5 + 5;
    FUN_03c63db0(&DAT_04c507f8,(long)DAT_04c507f0 + DAT_04c50810);
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
  DAT_04c50768 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c50748 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

