
void FUN_03ccb8ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4f7f8 = 0;
  DAT_04c4f800 = 1;
  DAT_04c4f808 = 0;
  DAT_04c4f7e8 = 0;
  DAT_04c4f7f0 = 0;
  DAT_04c4f810 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4f818 = PTR_DAT_04bb2120;
  DAT_04c4f826 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4f810;
  FUN_03c5a110(&DAT_04c4f810,&local_50,0xffffffff,1);
  puVar2 = PTR_DAT_04bd3890;
  DAT_04c4f838 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c4f860 = &DAT_04c4f868;
  DAT_04c4f890 = (undefined8 *)0x0;
  DAT_04c4f898 = 0;
  DAT_04c4f8b0 = 0xffffffffffffffff;
  DAT_04c4f8a0 = (code *)0x0;
  DAT_04c4f8a8 = (undefined1 *)0x0;
  DAT_04c4f828 = (undefined *)0x0;
  DAT_04c4f830 = &DAT_04c4f838;
  DAT_04c4f868 = DAT_04c4f838;
  FUN_038e2df8(&DAT_04c4f8b8);
  DAT_04c4f8a0 = FUN_03c66ec8;
  DAT_04c4f8a8 = &LAB_03c66f18;
  DAT_04c4f8b0 = 0;
  DAT_04c4f970 = 0;
  DAT_04c4f978 = (undefined1 *)0x0;
  DAT_04c4f980 = (undefined1 *)0x0;
  DAT_04c4f988 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c4f990);
  DAT_04c4fa58 = 0;
  DAT_04c4f978 = &LAB_03c66f50;
  DAT_04c4fa48 = &DAT_04c4fa48;
  DAT_04c4fa50 = &DAT_04c4fa48;
  DAT_04c4fa70 = 0x1000000000;
  DAT_04c4f980 = &LAB_03c67050;
  DAT_04c4f988 = 0x20;
  DAT_04c4fa60 = &DAT_04c4fa60;
  DAT_04c4fa68 = &DAT_04c4fa60;
  if (((DAT_05af0888 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05af0888), iVar5 != 0)) {
    DAT_05af0860 = puVar2 + 0x10;
    DAT_05af0838 = 0;
    DAT_05af0840 = 0;
    DAT_05af0848 = 0;
    DAT_05af0850 = 1;
    DAT_05af0858 = &DAT_05af0860;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0838,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af0888);
  }
  puVar2 = PTR_DAT_04bd3a20;
  DAT_04c4f890 = &DAT_05af0838;
  if (((*PTR_DAT_04bd3a28 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd3a28), puVar3 = PTR_DAT_04bd3a40, iVar5 != 0)) {
    puVar1 = PTR_DAT_04bd3a38 + 0x10;
    *(undefined **)puVar2 = PTR_DAT_04bd3a30 + 0x10;
    *(undefined **)(puVar2 + 8) = puVar1;
    puVar1 = PTR_DAT_04bd3a48;
    *(undefined **)(puVar2 + 0x28) = puVar3 + 0x10;
    *(undefined **)(puVar2 + 0x48) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3a28);
  }
  DAT_04c4f828 = puVar2;
  uVar6 = (**(code **)(*(long *)(puVar2 + 8) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4f830)();
    DAT_04c4f838 = &PTR_FUN_04b89ed0;
    DAT_04c4f830 = &DAT_04c4f838;
    DAT_04c4f840 = &PTR_LAB_04b89f30;
    DAT_04c4f848 = &LAB_03ccbd3c;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x28) + 8))();
  if ((uVar6 & 1) != 0) {
    (**(code **)*DAT_04c4f860)();
    DAT_04c4f868 = &PTR_FUN_04b89f58;
    DAT_04c4f860 = &DAT_04c4f868;
    DAT_04c4f870 = &PTR_LAB_04b89fb8;
    DAT_04c4f878 = &LAB_03ccbdf4;
  }
  uVar6 = (**(code **)(*(long *)(puVar2 + 0x48) + 8))(puVar2 + 0x48);
  puVar4 = DAT_04c4f890;
  if ((uVar6 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c4f890[4])();
    puVar4[5] = &PTR_FUN_04b89fe0;
    puVar4[6] = &PTR_LAB_04b8a040;
    puVar4[7] = &LAB_03ccbeb0;
    puVar4[4] = puVar4 + 5;
    FUN_03c63db0(&DAT_04c4f898,(long)DAT_04c4f890 + DAT_04c4f8b0);
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
  DAT_04c4f808 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4f7e8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

