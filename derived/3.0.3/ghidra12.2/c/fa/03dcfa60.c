
void FUN_03dcfa60(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c54c88 = 0;
  DAT_04c54c90 = 1;
  DAT_04c54c98 = 0;
  DAT_04c54c78 = 0;
  DAT_04c54c80 = 0;
  DAT_04c54ca0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c54ca8 = PTR_DAT_04bb2120;
  DAT_04c54cb6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c54ca0;
  FUN_03c5a110(&DAT_04c54ca0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c54cc8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c54cf0 = &DAT_04c54cf8;
  DAT_04c54d20 = (undefined8 *)0x0;
  DAT_04c54d28 = 0;
  DAT_04c54d40 = 0xffffffffffffffff;
  DAT_04c54d30 = (code *)0x0;
  DAT_04c54d38 = (undefined1 *)0x0;
  DAT_04c54cb8 = (undefined8 *)0x0;
  DAT_04c54cc0 = &DAT_04c54cc8;
  DAT_04c54cf8 = DAT_04c54cc8;
  FUN_038e2df8(&DAT_04c54d48);
  DAT_04c54d30 = FUN_03c66ec8;
  DAT_04c54d38 = &LAB_03c66f18;
  DAT_04c54d40 = 0;
  DAT_04c54e00 = 0;
  DAT_04c54e08 = (undefined1 *)0x0;
  DAT_04c54e10 = (undefined1 *)0x0;
  DAT_04c54e18 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c54e20);
  DAT_04c54ee8 = 0;
  DAT_04c54e08 = &LAB_03c66f50;
  DAT_04c54ed8 = &DAT_04c54ed8;
  DAT_04c54ee0 = &DAT_04c54ed8;
  DAT_04c54f00 = 0x1000000000;
  DAT_04c54e10 = &LAB_03c67050;
  DAT_04c54e18 = 0x20;
  DAT_04c54ef0 = &DAT_04c54ef0;
  DAT_04c54ef8 = &DAT_04c54ef0;
  if (((DAT_05af9580 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af9580), iVar3 != 0)) {
    DAT_05af9558 = puVar1 + 0x10;
    DAT_05af9530 = 0;
    DAT_05af9538 = 0;
    DAT_05af9540 = 0;
    DAT_05af9548 = 1;
    DAT_05af9550 = &DAT_05af9558;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9530,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af9580);
  }
  DAT_04c54d20 = &DAT_05af9530;
  if (((DAT_05af95f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af95f0), iVar3 != 0)) {
    DAT_05af9588 = &PTR_LAB_04b957c8;
    DAT_05af9590 = &PTR_FUN_04b957f8;
    DAT_05af95b0 = &PTR_FUN_04b95820;
    DAT_05af95d0 = &PTR_FUN_04b95848;
    __cxa_guard_release(&DAT_05af95f0);
  }
  DAT_04c54cb8 = &DAT_05af9588;
  uVar4 = (*(code *)DAT_05af9590[1])(&DAT_05af9590);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54cc0)();
    DAT_04c54cc8 = &PTR_FUN_04b95870;
    DAT_04c54cc0 = &DAT_04c54cc8;
    DAT_04c54cd0 = &PTR_LAB_04b958d0;
    DAT_04c54cd8 = &LAB_03dcfea8;
  }
  uVar4 = (*(code *)DAT_05af95b0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c54cf0)();
    DAT_04c54cf8 = &PTR_FUN_04b958f8;
    DAT_04c54cf0 = &DAT_04c54cf8;
    DAT_04c54d00 = &PTR_LAB_04b95958;
    DAT_04c54d08 = &LAB_03dcff44;
  }
  uVar4 = (*(code *)DAT_05af95d0[1])();
  puVar2 = DAT_04c54d20;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c54d20[4])();
    puVar2[5] = &PTR_FUN_04b95980;
    puVar2[6] = &PTR_LAB_04b959e0;
    puVar2[7] = &LAB_03dcffe4;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c54d28,(long)DAT_04c54d20 + DAT_04c54d40);
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
  DAT_04c54c98 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c54c78 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

