
void FUN_03dd7600(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c556c8 = 0;
  DAT_04c556d0 = 1;
  DAT_04c556d8 = 0;
  DAT_04c556b8 = 0;
  DAT_04c556c0 = 0;
  DAT_04c556e0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c556e8 = PTR_DAT_04bb2120;
  DAT_04c556f6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c556e0;
  FUN_03c5a110(&DAT_04c556e0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c55708 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c55730 = &DAT_04c55738;
  DAT_04c55760 = (undefined8 *)0x0;
  DAT_04c55768 = 0;
  DAT_04c55780 = 0xffffffffffffffff;
  DAT_04c55770 = (code *)0x0;
  DAT_04c55778 = (undefined1 *)0x0;
  DAT_04c556f8 = (undefined8 *)0x0;
  DAT_04c55700 = &DAT_04c55708;
  DAT_04c55738 = DAT_04c55708;
  FUN_038e2df8(&DAT_04c55788);
  DAT_04c55770 = FUN_03c66ec8;
  DAT_04c55778 = &LAB_03c66f18;
  DAT_04c55780 = 0;
  DAT_04c55840 = 0;
  DAT_04c55848 = (undefined1 *)0x0;
  DAT_04c55850 = (undefined1 *)0x0;
  DAT_04c55858 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c55860);
  DAT_04c55928 = 0;
  DAT_04c55848 = &LAB_03c66f50;
  DAT_04c55918 = &DAT_04c55918;
  DAT_04c55920 = &DAT_04c55918;
  DAT_04c55940 = 0x1000000000;
  DAT_04c55850 = &LAB_03c67050;
  DAT_04c55858 = 0x20;
  DAT_04c55930 = &DAT_04c55930;
  DAT_04c55938 = &DAT_04c55930;
  if (((DAT_05af9d00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9d00), iVar3 != 0)) {
    DAT_05af9cd8 = puVar1 + 0x10;
    DAT_05af9cb0 = 0;
    DAT_05af9cb8 = 0;
    DAT_05af9cc0 = 0;
    DAT_05af9cc8 = 1;
    DAT_05af9cd0 = &DAT_05af9cd8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9cb0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9d00);
  }
  DAT_04c55760 = &DAT_05af9cb0;
  if (((DAT_05af9d70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9d70), iVar3 != 0)) {
    DAT_05af9d08 = &PTR_LAB_04b960c8;
    DAT_05af9d10 = &PTR_FUN_04b960f8;
    DAT_05af9d30 = &PTR_FUN_04b96120;
    DAT_05af9d50 = &PTR_FUN_04b96148;
    __cxa_guard_release(&DAT_05af9d70);
  }
  DAT_04c556f8 = &DAT_05af9d08;
  uVar4 = (*(code *)DAT_05af9d10[1])(&DAT_05af9d10);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55700)();
    DAT_04c55708 = &PTR_FUN_04b96170;
    DAT_04c55700 = &DAT_04c55708;
    DAT_04c55710 = &PTR_LAB_04b961d0;
    DAT_04c55718 = &LAB_03dd7a48;
  }
  uVar4 = (*(code *)DAT_05af9d30[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55730)();
    DAT_04c55738 = &PTR_FUN_04b961f8;
    DAT_04c55730 = &DAT_04c55738;
    DAT_04c55740 = &PTR_LAB_04b96258;
    DAT_04c55748 = &LAB_03dd7ae4;
  }
  uVar4 = (*(code *)DAT_05af9d50[1])();
  puVar2 = DAT_04c55760;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c55760[4])();
    puVar2[5] = &PTR_FUN_04b96280;
    puVar2[6] = &PTR_LAB_04b962e0;
    puVar2[7] = &LAB_03dd7b84;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c55768,(long)DAT_04c55760 + DAT_04c55780);
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
  DAT_04c556d8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c556b8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

