
void FUN_03dc02d8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c53808 = 0;
  DAT_04c53810 = 1;
  DAT_04c53818 = 0;
  DAT_04c537f8 = 0;
  DAT_04c53800 = 0;
  DAT_04c53820 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53828 = PTR_DAT_04bb2120;
  DAT_04c53836 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53820;
  FUN_03c5a110(&DAT_04c53820,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c53848 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c53870 = &DAT_04c53878;
  DAT_04c538a0 = (undefined8 *)0x0;
  DAT_04c538a8 = 0;
  DAT_04c538c0 = 0xffffffffffffffff;
  DAT_04c538b0 = (code *)0x0;
  DAT_04c538b8 = (undefined1 *)0x0;
  DAT_04c53838 = (undefined8 *)0x0;
  DAT_04c53840 = &DAT_04c53848;
  DAT_04c53878 = DAT_04c53848;
  FUN_038e2df8(&DAT_04c538c8);
  DAT_04c538b0 = FUN_03c66ec8;
  DAT_04c538b8 = &LAB_03c66f18;
  DAT_04c538c0 = 0;
  DAT_04c53980 = 0;
  DAT_04c53988 = (undefined1 *)0x0;
  DAT_04c53990 = (undefined1 *)0x0;
  DAT_04c53998 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c539a0);
  DAT_04c53a68 = 0;
  DAT_04c53988 = &LAB_03c66f50;
  DAT_04c53a58 = &DAT_04c53a58;
  DAT_04c53a60 = &DAT_04c53a58;
  DAT_04c53a80 = 0x1000000000;
  DAT_04c53990 = &LAB_03c67050;
  DAT_04c53998 = 0x20;
  DAT_04c53a70 = &DAT_04c53a70;
  DAT_04c53a78 = &DAT_04c53a70;
  if (((DAT_05af8e18 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8e18), iVar3 != 0)) {
    DAT_05af8df0 = puVar1 + 0x10;
    DAT_05af8dc8 = 0;
    DAT_05af8dd0 = 0;
    DAT_05af8dd8 = 0;
    DAT_05af8de0 = 1;
    DAT_05af8de8 = &DAT_05af8df0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8dc8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8e18);
  }
  DAT_04c538a0 = &DAT_05af8dc8;
  if (((DAT_05af8e88 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8e88), iVar3 != 0)) {
    DAT_05af8e20 = &PTR_LAB_04b94648;
    DAT_05af8e28 = &PTR_FUN_04b946a0;
    DAT_05af8e48 = &PTR_FUN_04b94678;
    DAT_05af8e68 = &PTR_FUN_04b946c8;
    __cxa_guard_release(&DAT_05af8e88);
  }
  DAT_04c53838 = &DAT_05af8e20;
  uVar4 = (*(code *)DAT_05af8e28[1])(&DAT_05af8e28);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53840)();
    DAT_04c53848 = &PTR_FUN_04b946f0;
    DAT_04c53840 = &DAT_04c53848;
    DAT_04c53850 = &PTR_LAB_04b94750;
    DAT_04c53858 = &LAB_03dc0720;
  }
  uVar4 = (*(code *)DAT_05af8e48[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53870)();
    DAT_04c53878 = &PTR_FUN_04b94778;
    DAT_04c53870 = &DAT_04c53878;
    DAT_04c53880 = &PTR_LAB_04b947d8;
    DAT_04c53888 = &LAB_03dc07bc;
  }
  uVar4 = (*(code *)DAT_05af8e68[1])();
  puVar2 = DAT_04c538a0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c538a0[4])();
    puVar2[5] = &PTR_FUN_04b94800;
    puVar2[6] = &PTR_LAB_04b94860;
    puVar2[7] = &LAB_03dc085c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c538a8,(long)DAT_04c538a0 + DAT_04c538c0);
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
  DAT_04c53818 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c537f8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

