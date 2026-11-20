
void FUN_03dc5a20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c53fb8 = 0;
  DAT_04c53fc0 = 1;
  DAT_04c53fc8 = 0;
  DAT_04c53fa8 = 0;
  DAT_04c53fb0 = 0;
  DAT_04c53fd0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53fd8 = PTR_DAT_04bb2120;
  DAT_04c53fe6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53fd0;
  FUN_03c5a110(&DAT_04c53fd0,&local_50,0xffffffff,1);
  puVar3 = PTR_DAT_04bd3890;
  DAT_04c53ff8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c54020 = &DAT_04c54028;
  DAT_04c54050 = (undefined8 *)0x0;
  DAT_04c54058 = 0;
  DAT_04c54070 = 0xffffffffffffffff;
  DAT_04c54060 = (code *)0x0;
  DAT_04c54068 = (undefined1 *)0x0;
  DAT_04c53fe8 = (undefined *)0x0;
  DAT_04c53ff0 = &DAT_04c53ff8;
  DAT_04c54028 = DAT_04c53ff8;
  FUN_038e2df8(&DAT_04c54078);
  DAT_04c54060 = FUN_03c66ec8;
  DAT_04c54068 = &LAB_03c66f18;
  DAT_04c54070 = 0;
  DAT_04c54130 = 0;
  DAT_04c54138 = (undefined1 *)0x0;
  DAT_04c54140 = (undefined1 *)0x0;
  DAT_04c54148 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c54150);
  DAT_04c54218 = 0;
  DAT_04c54138 = &LAB_03c66f50;
  DAT_04c54208 = &DAT_04c54208;
  DAT_04c54210 = &DAT_04c54208;
  DAT_04c54230 = 0x1000000000;
  DAT_04c54140 = &LAB_03c67050;
  DAT_04c54148 = 0x20;
  DAT_04c54220 = &DAT_04c54220;
  DAT_04c54228 = &DAT_04c54220;
  if (((DAT_05af90d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af90d8), iVar6 != 0)) {
    DAT_05af90b0 = puVar3 + 0x10;
    DAT_05af9088 = 0;
    DAT_05af9090 = 0;
    DAT_05af9098 = 0;
    DAT_05af90a0 = 1;
    DAT_05af90a8 = &DAT_05af90b0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af9088,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af90d8);
  }
  puVar3 = PTR_DAT_04bd3850;
  DAT_04c54050 = &DAT_05af9088;
  if (((*PTR_DAT_04bd3858 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3858), puVar4 = PTR_DAT_04bd3860, iVar6 != 0)) {
    puVar1 = PTR_DAT_04bd3878 + 0x10;
    puVar2 = PTR_DAT_04bd3868 + 0x10;
    *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3870 + 0x10;
    *(undefined **)(puVar3 + 0x48) = puVar1;
    puVar1 = PTR_DAT_04bd3880;
    *(undefined **)puVar3 = puVar4 + 0x10;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x68) = puVar1 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3858);
  }
  DAT_04c53fe8 = puVar3;
  uVar7 = (**(code **)(*(long *)(puVar3 + 8) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c53ff0)();
    DAT_04c53ff8 = &PTR_FUN_04b94d08;
    DAT_04c53ff0 = &DAT_04c53ff8;
    DAT_04c54000 = &PTR_LAB_04b94d68;
    DAT_04c54008 = &LAB_03dc5e80;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x28) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c54020)();
    DAT_04c54028 = &PTR_FUN_04b94d90;
    DAT_04c54020 = &DAT_04c54028;
    DAT_04c54030 = &PTR_LAB_04b94df0;
    DAT_04c54038 = &LAB_03dc5f48;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x48) + 8))(puVar3 + 0x48);
  puVar5 = DAT_04c54050;
  if ((uVar7 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c54050[4])();
    puVar5[5] = &PTR_FUN_04b94e18;
    puVar5[6] = &PTR_LAB_04b94e78;
    puVar5[7] = &LAB_03dc6014;
    puVar5[4] = puVar5 + 5;
    FUN_03c63db0(&DAT_04c54058,(long)DAT_04c54050 + DAT_04c54070);
  }
  if (((DAT_05aee2a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05aee2a8), iVar6 != 0)) {
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
  DAT_04c53fc8 = DAT_04c4cc40;
  if (((DAT_05aee2a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05aee2a8), iVar6 != 0)) {
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c53fa8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

