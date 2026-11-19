
void FUN_03cd0b58(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c4ffa8 = 0;
  DAT_04c4ffb0 = 1;
  DAT_04c4ffb8 = 0;
  DAT_04c4ff98 = 0;
  DAT_04c4ffa0 = 0;
  DAT_04c4ffc0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c4ffc8 = PTR_DAT_04bb2120;
  DAT_04c4ffd6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c4ffc0;
  FUN_03c5a110(&DAT_04c4ffc0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c4ffe8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c50010 = &DAT_04c50018;
  DAT_04c50040 = (undefined8 *)0x0;
  DAT_04c50048 = 0;
  DAT_04c50060 = 0xffffffffffffffff;
  DAT_04c50050 = (code *)0x0;
  DAT_04c50058 = (undefined1 *)0x0;
  DAT_04c4ffd8 = (undefined8 *)0x0;
  DAT_04c4ffe0 = &DAT_04c4ffe8;
  DAT_04c50018 = DAT_04c4ffe8;
  FUN_038e2df8(&DAT_04c50068);
  DAT_04c50050 = FUN_03c66ec8;
  DAT_04c50058 = &LAB_03c66f18;
  DAT_04c50060 = 0;
  DAT_04c50120 = 0;
  DAT_04c50128 = (undefined1 *)0x0;
  DAT_04c50130 = (undefined1 *)0x0;
  DAT_04c50138 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c50140);
  DAT_04c50208 = 0;
  DAT_04c50128 = &LAB_03c66f50;
  DAT_04c501f8 = &DAT_04c501f8;
  DAT_04c50200 = &DAT_04c501f8;
  DAT_04c50220 = 0x1000000000;
  DAT_04c50130 = &LAB_03c67050;
  DAT_04c50138 = 0x20;
  DAT_04c50210 = &DAT_04c50210;
  DAT_04c50218 = &DAT_04c50210;
  if (((DAT_05af09d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af09d0), iVar3 != 0)) {
    DAT_05af09a8 = puVar1 + 0x10;
    DAT_05af0980 = 0;
    DAT_05af0988 = 0;
    DAT_05af0990 = 0;
    DAT_05af0998 = 1;
    DAT_05af09a0 = &DAT_05af09a8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af0980,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af09d0);
  }
  DAT_04c50040 = &DAT_05af0980;
  if (((DAT_05af0a40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af0a40), iVar3 != 0)) {
    DAT_05af09d8 = &PTR_LAB_04b8a398;
    DAT_05af09e0 = &PTR_FUN_04b8a3f0;
    DAT_05af0a00 = &PTR_FUN_04b8a3c8;
    DAT_05af0a20 = &PTR_FUN_04b8a418;
    __cxa_guard_release(&DAT_05af0a40);
  }
  DAT_04c4ffd8 = &DAT_05af09d8;
  uVar4 = (*(code *)DAT_05af09e0[1])(&DAT_05af09e0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c4ffe0)();
    DAT_04c4ffe8 = &PTR_FUN_04b8a440;
    DAT_04c4ffe0 = &DAT_04c4ffe8;
    DAT_04c4fff0 = &PTR_LAB_04b8a4a0;
    DAT_04c4fff8 = &LAB_03cd0fa0;
  }
  uVar4 = (*(code *)DAT_05af0a00[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c50010)();
    DAT_04c50018 = &PTR_FUN_04b8a4c8;
    DAT_04c50010 = &DAT_04c50018;
    DAT_04c50020 = &PTR_LAB_04b8a528;
    DAT_04c50028 = &LAB_03cd103c;
  }
  uVar4 = (*(code *)DAT_05af0a20[1])();
  puVar2 = DAT_04c50040;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c50040[4])();
    puVar2[5] = &PTR_FUN_04b8a550;
    puVar2[6] = &PTR_LAB_04b8a5b0;
    puVar2[7] = &LAB_03cd10dc;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c50048,(long)DAT_04c50040 + DAT_04c50060);
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
  DAT_04c4ffb8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c4ff98 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

