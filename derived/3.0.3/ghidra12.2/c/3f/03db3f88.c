
void FUN_03db3f88(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c52618 = 0;
  DAT_04c52620 = 1;
  DAT_04c52628 = 0;
  DAT_04c52608 = 0;
  DAT_04c52610 = 0;
  DAT_04c52630 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c52638 = PTR_DAT_04bb2120;
  DAT_04c52646 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c52630;
  FUN_03c5a110(&DAT_04c52630,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c52658 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c52680 = &DAT_04c52688;
  DAT_04c526b0 = (undefined8 *)0x0;
  DAT_04c526b8 = 0;
  DAT_04c526d0 = 0xffffffffffffffff;
  DAT_04c526c0 = (code *)0x0;
  DAT_04c526c8 = (undefined1 *)0x0;
  DAT_04c52648 = (undefined8 *)0x0;
  DAT_04c52650 = &DAT_04c52658;
  DAT_04c52688 = DAT_04c52658;
  FUN_038e2df8(&DAT_04c526d8);
  DAT_04c526c0 = FUN_03c66ec8;
  DAT_04c526c8 = &LAB_03c66f18;
  DAT_04c526d0 = 0;
  DAT_04c52790 = 0;
  DAT_04c52798 = (undefined1 *)0x0;
  DAT_04c527a0 = (undefined1 *)0x0;
  DAT_04c527a8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c527b0);
  DAT_04c52878 = 0;
  DAT_04c52798 = &LAB_03c66f50;
  DAT_04c52868 = &DAT_04c52868;
  DAT_04c52870 = &DAT_04c52868;
  DAT_04c52890 = 0x1000000000;
  DAT_04c527a0 = &LAB_03c67050;
  DAT_04c527a8 = 0x20;
  DAT_04c52880 = &DAT_04c52880;
  DAT_04c52888 = &DAT_04c52880;
  if (((DAT_05af8800 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8800), iVar3 != 0)) {
    DAT_05af87d8 = puVar1 + 0x10;
    DAT_05af87b0 = 0;
    DAT_05af87b8 = 0;
    DAT_05af87c0 = 0;
    DAT_05af87c8 = 1;
    DAT_05af87d0 = &DAT_05af87d8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af87b0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8800);
  }
  DAT_04c526b0 = &DAT_05af87b0;
  if (((DAT_05af8870 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8870), iVar3 != 0)) {
    DAT_05af8808 = &PTR_LAB_04b93730;
    DAT_05af8810 = &PTR_FUN_04b93760;
    DAT_05af8830 = &PTR_FUN_04b93788;
    DAT_05af8850 = &PTR_FUN_04b937b0;
    __cxa_guard_release(&DAT_05af8870);
  }
  DAT_04c52648 = &DAT_05af8808;
  uVar4 = (*(code *)DAT_05af8810[1])(&DAT_05af8810);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52650)();
    DAT_04c52658 = &PTR_FUN_04b937d8;
    DAT_04c52650 = &DAT_04c52658;
    DAT_04c52660 = &PTR_LAB_04b93838;
    DAT_04c52668 = &LAB_03db43d0;
  }
  uVar4 = (*(code *)DAT_05af8830[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52680)();
    DAT_04c52688 = &PTR_FUN_04b93860;
    DAT_04c52680 = &DAT_04c52688;
    DAT_04c52690 = &PTR_LAB_04b938c0;
    DAT_04c52698 = &LAB_03db446c;
  }
  uVar4 = (*(code *)DAT_05af8850[1])();
  puVar2 = DAT_04c526b0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c526b0[4])();
    puVar2[5] = &PTR_FUN_04b938e8;
    puVar2[6] = &PTR_LAB_04b93948;
    puVar2[7] = &LAB_03db450c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c526b8,(long)DAT_04c526b0 + DAT_04c526d0);
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
  DAT_04c52628 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c52608 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

