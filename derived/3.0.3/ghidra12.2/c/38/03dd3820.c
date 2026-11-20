
void FUN_03dd3820(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c551a8 = 0;
  DAT_04c551b0 = 1;
  DAT_04c551b8 = 0;
  DAT_04c55198 = 0;
  DAT_04c551a0 = 0;
  DAT_04c551c0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c551c8 = PTR_DAT_04bb2120;
  DAT_04c551d6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c551c0;
  FUN_03c5a110(&DAT_04c551c0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c551e8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c55210 = &DAT_04c55218;
  DAT_04c55240 = (undefined8 *)0x0;
  DAT_04c55248 = 0;
  DAT_04c55260 = 0xffffffffffffffff;
  DAT_04c55250 = (code *)0x0;
  DAT_04c55258 = (undefined1 *)0x0;
  DAT_04c551d8 = (undefined8 *)0x0;
  DAT_04c551e0 = &DAT_04c551e8;
  DAT_04c55218 = DAT_04c551e8;
  FUN_038e2df8(&DAT_04c55268);
  DAT_04c55250 = FUN_03c66ec8;
  DAT_04c55258 = &LAB_03c66f18;
  DAT_04c55260 = 0;
  DAT_04c55320 = 0;
  DAT_04c55328 = (undefined1 *)0x0;
  DAT_04c55330 = (undefined1 *)0x0;
  DAT_04c55338 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c55340);
  DAT_04c55408 = 0;
  DAT_04c55328 = &LAB_03c66f50;
  DAT_04c553f8 = &DAT_04c553f8;
  DAT_04c55400 = &DAT_04c553f8;
  DAT_04c55420 = 0x1000000000;
  DAT_04c55330 = &LAB_03c67050;
  DAT_04c55338 = 0x20;
  DAT_04c55410 = &DAT_04c55410;
  DAT_04c55418 = &DAT_04c55410;
  if (((DAT_05af9820 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9820), iVar3 != 0)) {
    DAT_05af97f8 = puVar1 + 0x10;
    DAT_05af97d0 = 0;
    DAT_05af97d8 = 0;
    DAT_05af97e0 = 0;
    DAT_05af97e8 = 1;
    DAT_05af97f0 = &DAT_05af97f8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af97d0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9820);
  }
  DAT_04c55240 = &DAT_05af97d0;
  if (((DAT_05af9890 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9890), iVar3 != 0)) {
    DAT_05af9828 = &PTR_LAB_04b95c48;
    DAT_05af9830 = &PTR_FUN_04b95c78;
    DAT_05af9850 = &PTR_FUN_04b95ca0;
    DAT_05af9870 = &PTR_FUN_04b95cc8;
    __cxa_guard_release(&DAT_05af9890);
  }
  DAT_04c551d8 = &DAT_05af9828;
  uVar4 = (*(code *)DAT_05af9830[1])(&DAT_05af9830);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c551e0)();
    DAT_04c551e8 = &PTR_FUN_04b95cf0;
    DAT_04c551e0 = &DAT_04c551e8;
    DAT_04c551f0 = &PTR_LAB_04b95d50;
    DAT_04c551f8 = &LAB_03dd3c68;
  }
  uVar4 = (*(code *)DAT_05af9850[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55210)();
    DAT_04c55218 = &PTR_FUN_04b95d78;
    DAT_04c55210 = &DAT_04c55218;
    DAT_04c55220 = &PTR_LAB_04b95dd8;
    DAT_04c55228 = &LAB_03dd3d04;
  }
  uVar4 = (*(code *)DAT_05af9870[1])();
  puVar2 = DAT_04c55240;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c55240[4])();
    puVar2[5] = &PTR_FUN_04b95e00;
    puVar2[6] = &PTR_LAB_04b95e60;
    puVar2[7] = &LAB_03dd3da4;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c55248,(long)DAT_04c55240 + DAT_04c55260);
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
  DAT_04c551b8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c55198 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

