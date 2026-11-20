
void FUN_03ddd2d0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c55e78 = 0;
  DAT_04c55e80 = 1;
  DAT_04c55e88 = 0;
  DAT_04c55e68 = 0;
  DAT_04c55e70 = 0;
  DAT_04c55e90 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c55e98 = PTR_DAT_04bb2120;
  DAT_04c55ea6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c55e90;
  FUN_03c5a110(&DAT_04c55e90,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c55eb8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c55ee0 = &DAT_04c55ee8;
  DAT_04c55f10 = (undefined8 *)0x0;
  DAT_04c55f18 = 0;
  DAT_04c55f30 = 0xffffffffffffffff;
  DAT_04c55f20 = (code *)0x0;
  DAT_04c55f28 = (undefined1 *)0x0;
  DAT_04c55ea8 = (undefined8 *)0x0;
  DAT_04c55eb0 = &DAT_04c55eb8;
  DAT_04c55ee8 = DAT_04c55eb8;
  FUN_038e2df8(&DAT_04c55f38);
  DAT_04c55f20 = FUN_03c66ec8;
  DAT_04c55f28 = &LAB_03c66f18;
  DAT_04c55f30 = 0;
  DAT_04c55ff0 = 0;
  DAT_04c55ff8 = (undefined1 *)0x0;
  DAT_04c56000 = (undefined1 *)0x0;
  DAT_04c56008 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c56010);
  DAT_04c560d8 = 0;
  DAT_04c55ff8 = &LAB_03c66f50;
  DAT_04c560c8 = &DAT_04c560c8;
  DAT_04c560d0 = &DAT_04c560c8;
  DAT_04c560f0 = 0x1000000000;
  DAT_04c56000 = &LAB_03c67050;
  DAT_04c56008 = 0x20;
  DAT_04c560e0 = &DAT_04c560e0;
  DAT_04c560e8 = &DAT_04c560e0;
  if (((DAT_05afa430 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa430), iVar3 != 0)) {
    DAT_05afa408 = puVar1 + 0x10;
    DAT_05afa3e0 = 0;
    DAT_05afa3e8 = 0;
    DAT_05afa3f0 = 0;
    DAT_05afa3f8 = 1;
    DAT_05afa400 = &DAT_05afa408;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afa3e0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afa430);
  }
  DAT_04c55f10 = &DAT_05afa3e0;
  if (((DAT_05afa4a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa4a0), iVar3 != 0)) {
    DAT_05afa438 = &PTR_LAB_04b96788;
    DAT_05afa440 = &PTR_FUN_04b967b8;
    DAT_05afa460 = &PTR_FUN_04b967e0;
    DAT_05afa480 = &PTR_FUN_04b96808;
    __cxa_guard_release(&DAT_05afa4a0);
  }
  DAT_04c55ea8 = &DAT_05afa438;
  uVar4 = (*(code *)DAT_05afa440[1])(&DAT_05afa440);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55eb0)();
    DAT_04c55eb8 = &PTR_FUN_04b96830;
    DAT_04c55eb0 = &DAT_04c55eb8;
    DAT_04c55ec0 = &PTR_LAB_04b96890;
    DAT_04c55ec8 = &LAB_03ddd718;
  }
  uVar4 = (*(code *)DAT_05afa460[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c55ee0)();
    DAT_04c55ee8 = &PTR_FUN_04b968b8;
    DAT_04c55ee0 = &DAT_04c55ee8;
    DAT_04c55ef0 = &PTR_LAB_04b96918;
    DAT_04c55ef8 = &LAB_03ddd7b4;
  }
  uVar4 = (*(code *)DAT_05afa480[1])();
  puVar2 = DAT_04c55f10;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c55f10[4])();
    puVar2[5] = &PTR_FUN_04b96940;
    puVar2[6] = &PTR_LAB_04b969a0;
    puVar2[7] = &LAB_03ddd854;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c55f18,(long)DAT_04c55f10 + DAT_04c55f30);
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
  DAT_04c55e88 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c55e68 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

