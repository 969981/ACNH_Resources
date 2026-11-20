
void FUN_03db76d8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c52b38 = 0;
  DAT_04c52b40 = 1;
  DAT_04c52b48 = 0;
  DAT_04c52b28 = 0;
  DAT_04c52b30 = 0;
  DAT_04c52b50 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c52b58 = PTR_DAT_04bb2120;
  DAT_04c52b66 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c52b50;
  FUN_03c5a110(&DAT_04c52b50,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c52b78 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c52ba0 = &DAT_04c52ba8;
  DAT_04c52bd0 = (undefined8 *)0x0;
  DAT_04c52bd8 = 0;
  DAT_04c52bf0 = 0xffffffffffffffff;
  DAT_04c52be0 = (code *)0x0;
  DAT_04c52be8 = (undefined1 *)0x0;
  DAT_04c52b68 = (undefined8 *)0x0;
  DAT_04c52b70 = &DAT_04c52b78;
  DAT_04c52ba8 = DAT_04c52b78;
  FUN_038e2df8(&DAT_04c52bf8);
  DAT_04c52be0 = FUN_03c66ec8;
  DAT_04c52be8 = &LAB_03c66f18;
  DAT_04c52bf0 = 0;
  DAT_04c52cb0 = 0;
  DAT_04c52cb8 = (undefined1 *)0x0;
  DAT_04c52cc0 = (undefined1 *)0x0;
  DAT_04c52cc8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c52cd0);
  DAT_04c52d98 = 0;
  DAT_04c52cb8 = &LAB_03c66f50;
  DAT_04c52d88 = &DAT_04c52d88;
  DAT_04c52d90 = &DAT_04c52d88;
  DAT_04c52db0 = 0x1000000000;
  DAT_04c52cc0 = &LAB_03c67050;
  DAT_04c52cc8 = 0x20;
  DAT_04c52da0 = &DAT_04c52da0;
  DAT_04c52da8 = &DAT_04c52da0;
  if (((DAT_05af89d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af89d0), iVar3 != 0)) {
    DAT_05af89a8 = puVar1 + 0x10;
    DAT_05af8980 = 0;
    DAT_05af8988 = 0;
    DAT_05af8990 = 0;
    DAT_05af8998 = 1;
    DAT_05af89a0 = &DAT_05af89a8;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8980,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af89d0);
  }
  DAT_04c52bd0 = &DAT_05af8980;
  if (((DAT_05af8a40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8a40), iVar3 != 0)) {
    DAT_05af89d8 = &PTR_LAB_04b93bb0;
    DAT_05af89e0 = &PTR_FUN_04b93be0;
    DAT_05af8a00 = &PTR_FUN_04b93c08;
    DAT_05af8a20 = &PTR_FUN_04b93c30;
    __cxa_guard_release(&DAT_05af8a40);
  }
  DAT_04c52b68 = &DAT_05af89d8;
  uVar4 = (*(code *)DAT_05af89e0[1])(&DAT_05af89e0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52b70)();
    DAT_04c52b78 = &PTR_FUN_04b93c58;
    DAT_04c52b70 = &DAT_04c52b78;
    DAT_04c52b80 = &PTR_LAB_04b93cb8;
    DAT_04c52b88 = &LAB_03db7b20;
  }
  uVar4 = (*(code *)DAT_05af8a00[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c52ba0)();
    DAT_04c52ba8 = &PTR_FUN_04b93ce0;
    DAT_04c52ba0 = &DAT_04c52ba8;
    DAT_04c52bb0 = &PTR_LAB_04b93d40;
    DAT_04c52bb8 = &LAB_03db7bbc;
  }
  uVar4 = (*(code *)DAT_05af8a20[1])();
  puVar2 = DAT_04c52bd0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c52bd0[4])();
    puVar2[5] = &PTR_FUN_04b93d68;
    puVar2[6] = &PTR_LAB_04b93dc8;
    puVar2[7] = &LAB_03db7c5c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c52bd8,(long)DAT_04c52bd0 + DAT_04c52bf0);
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
  DAT_04c52b48 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c52b28 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

