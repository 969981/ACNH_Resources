
void FUN_03d80244(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c51948 = 0;
  DAT_04c51950 = 1;
  DAT_04c51958 = 0;
  DAT_04c51938 = 0;
  DAT_04c51940 = 0;
  DAT_04c51960 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c51968 = PTR_DAT_04bb2120;
  DAT_04c51976 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c51960;
  FUN_03c5a110(&DAT_04c51960,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c51988 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c519b0 = &DAT_04c519b8;
  DAT_04c519e0 = (undefined8 *)0x0;
  DAT_04c519e8 = 0;
  DAT_04c51a00 = 0xffffffffffffffff;
  DAT_04c519f0 = (code *)0x0;
  DAT_04c519f8 = (undefined1 *)0x0;
  DAT_04c51978 = (undefined8 *)0x0;
  DAT_04c51980 = &DAT_04c51988;
  DAT_04c519b8 = DAT_04c51988;
  FUN_038e2df8(&DAT_04c51a08);
  DAT_04c519f0 = FUN_03c66ec8;
  DAT_04c519f8 = &LAB_03c66f18;
  DAT_04c51a00 = 0;
  DAT_04c51ac0 = 0;
  DAT_04c51ac8 = (undefined1 *)0x0;
  DAT_04c51ad0 = (undefined1 *)0x0;
  DAT_04c51ad8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c51ae0);
  DAT_04c51ba8 = 0;
  DAT_04c51ac8 = &LAB_03c66f50;
  DAT_04c51b98 = &DAT_04c51b98;
  DAT_04c51ba0 = &DAT_04c51b98;
  DAT_04c51bc0 = 0x1000000000;
  DAT_04c51ad0 = &LAB_03c67050;
  DAT_04c51ad8 = 0x20;
  DAT_04c51bb0 = &DAT_04c51bb0;
  DAT_04c51bb8 = &DAT_04c51bb0;
  if (((DAT_05af8298 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8298), iVar3 != 0)) {
    DAT_05af8270 = puVar1 + 0x10;
    DAT_05af8248 = 0;
    DAT_05af8250 = 0;
    DAT_05af8258 = 0;
    DAT_05af8260 = 1;
    DAT_05af8268 = &DAT_05af8270;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8248,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8298);
  }
  DAT_04c519e0 = &DAT_05af8248;
  if (((DAT_05af8308 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8308), iVar3 != 0)) {
    DAT_05af82a0 = &PTR_LAB_04b923a8;
    DAT_05af82a8 = &PTR_FUN_04b923d8;
    DAT_05af82c8 = &PTR_FUN_04b92400;
    DAT_05af82e8 = &PTR_FUN_04b92428;
    __cxa_guard_release(&DAT_05af8308);
  }
  DAT_04c51978 = &DAT_05af82a0;
  uVar4 = (*(code *)DAT_05af82a8[1])(&DAT_05af82a8);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c51980)();
    DAT_04c51988 = &PTR_FUN_04b92450;
    DAT_04c51980 = &DAT_04c51988;
    DAT_04c51990 = &PTR_LAB_04b924b0;
    DAT_04c51998 = &LAB_03d8068c;
  }
  uVar4 = (*(code *)DAT_05af82c8[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c519b0)();
    DAT_04c519b8 = &PTR_FUN_04b924d8;
    DAT_04c519b0 = &DAT_04c519b8;
    DAT_04c519c0 = &PTR_LAB_04b92538;
    DAT_04c519c8 = &LAB_03d80728;
  }
  uVar4 = (*(code *)DAT_05af82e8[1])();
  puVar2 = DAT_04c519e0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c519e0[4])();
    puVar2[5] = &PTR_FUN_04b92560;
    puVar2[6] = &PTR_LAB_04b925c0;
    puVar2[7] = &LAB_03d807c8;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c519e8,(long)DAT_04c519e0 + DAT_04c51a00);
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
  DAT_04c51958 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c51938 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

