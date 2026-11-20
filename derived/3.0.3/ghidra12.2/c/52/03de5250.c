
void FUN_03de5250(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c568b8 = 0;
  DAT_04c568c0 = 1;
  DAT_04c568c8 = 0;
  DAT_04c568a8 = 0;
  DAT_04c568b0 = 0;
  DAT_04c568d0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c568d8 = PTR_DAT_04bb2120;
  DAT_04c568e6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c568d0;
  FUN_03c5a110(&DAT_04c568d0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c568f8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c56920 = &DAT_04c56928;
  DAT_04c56950 = (undefined8 *)0x0;
  DAT_04c56958 = 0;
  DAT_04c56970 = 0xffffffffffffffff;
  DAT_04c56960 = (code *)0x0;
  DAT_04c56968 = (undefined1 *)0x0;
  DAT_04c568e8 = (undefined8 *)0x0;
  DAT_04c568f0 = &DAT_04c568f8;
  DAT_04c56928 = DAT_04c568f8;
  FUN_038e2df8(&DAT_04c56978);
  DAT_04c56960 = FUN_03c66ec8;
  DAT_04c56968 = &LAB_03c66f18;
  DAT_04c56970 = 0;
  DAT_04c56a30 = 0;
  DAT_04c56a38 = (undefined1 *)0x0;
  DAT_04c56a40 = (undefined1 *)0x0;
  DAT_04c56a48 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c56a50);
  DAT_04c56b18 = 0;
  DAT_04c56a38 = &LAB_03c66f50;
  DAT_04c56b08 = &DAT_04c56b08;
  DAT_04c56b10 = &DAT_04c56b08;
  DAT_04c56b30 = 0x1000000000;
  DAT_04c56a40 = &LAB_03c67050;
  DAT_04c56a48 = 0x20;
  DAT_04c56b20 = &DAT_04c56b20;
  DAT_04c56b28 = &DAT_04c56b20;
  if (((DAT_05afaf70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afaf70), iVar3 != 0)) {
    DAT_05afaf48 = puVar1 + 0x10;
    DAT_05afaf20 = 0;
    DAT_05afaf28 = 0;
    DAT_05afaf30 = 0;
    DAT_05afaf38 = 1;
    DAT_05afaf40 = &DAT_05afaf48;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afaf20,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afaf70);
  }
  DAT_04c56950 = &DAT_05afaf20;
  if (((DAT_05afafe0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afafe0), iVar3 != 0)) {
    DAT_05afaf78 = &PTR_LAB_04b97118;
    DAT_05afaf80 = &PTR_FUN_04b97148;
    DAT_05afafa0 = &PTR_FUN_04b971a0;
    DAT_05afafc0 = &PTR_FUN_04b971c8;
    __cxa_guard_release(&DAT_05afafe0);
  }
  DAT_04c568e8 = &DAT_05afaf78;
  uVar4 = (*(code *)DAT_05afaf80[1])(&DAT_05afaf80);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c568f0)();
    DAT_04c568f8 = &PTR_FUN_04b971f0;
    DAT_04c568f0 = &DAT_04c568f8;
    DAT_04c56900 = &PTR_LAB_04b97250;
    DAT_04c56908 = &LAB_03de5698;
  }
  uVar4 = (*(code *)DAT_05afafa0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c56920)();
    DAT_04c56928 = &PTR_FUN_04b97278;
    DAT_04c56920 = &DAT_04c56928;
    DAT_04c56930 = &PTR_LAB_04b972d8;
    DAT_04c56938 = &LAB_03de5734;
  }
  uVar4 = (*(code *)DAT_05afafc0[1])();
  puVar2 = DAT_04c56950;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c56950[4])();
    puVar2[5] = &PTR_FUN_04b97300;
    puVar2[6] = &PTR_LAB_04b97360;
    puVar2[7] = &LAB_03de57d4;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c56958,(long)DAT_04c56950 + DAT_04c56970);
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
  DAT_04c568c8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c568a8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

