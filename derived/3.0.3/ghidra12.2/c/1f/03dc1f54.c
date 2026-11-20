
void FUN_03dc1f54(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c53a98 = 0;
  DAT_04c53aa0 = 1;
  DAT_04c53aa8 = 0;
  DAT_04c53a88 = 0;
  DAT_04c53a90 = 0;
  DAT_04c53ab0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53ab8 = PTR_DAT_04bb2120;
  DAT_04c53ac6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53ab0;
  FUN_03c5a110(&DAT_04c53ab0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c53ad8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c53b00 = &DAT_04c53b08;
  DAT_04c53b30 = (undefined8 *)0x0;
  DAT_04c53b38 = 0;
  DAT_04c53b50 = 0xffffffffffffffff;
  DAT_04c53b40 = (code *)0x0;
  DAT_04c53b48 = (undefined1 *)0x0;
  DAT_04c53ac8 = (undefined8 *)0x0;
  DAT_04c53ad0 = &DAT_04c53ad8;
  DAT_04c53b08 = DAT_04c53ad8;
  FUN_038e2df8(&DAT_04c53b58);
  DAT_04c53b40 = FUN_03c66ec8;
  DAT_04c53b48 = &LAB_03c66f18;
  DAT_04c53b50 = 0;
  DAT_04c53c10 = 0;
  DAT_04c53c18 = (undefined1 *)0x0;
  DAT_04c53c20 = (undefined1 *)0x0;
  DAT_04c53c28 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c53c30);
  DAT_04c53cf8 = 0;
  DAT_04c53c18 = &LAB_03c66f50;
  DAT_04c53ce8 = &DAT_04c53ce8;
  DAT_04c53cf0 = &DAT_04c53ce8;
  DAT_04c53d10 = 0x1000000000;
  DAT_04c53c20 = &LAB_03c67050;
  DAT_04c53c28 = 0x20;
  DAT_04c53d00 = &DAT_04c53d00;
  DAT_04c53d08 = &DAT_04c53d00;
  if (((DAT_05af8f08 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8f08), iVar3 != 0)) {
    DAT_05af8ee0 = puVar1 + 0x10;
    DAT_05af8eb8 = 0;
    DAT_05af8ec0 = 0;
    DAT_05af8ec8 = 0;
    DAT_05af8ed0 = 1;
    DAT_05af8ed8 = &DAT_05af8ee0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8eb8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8f08);
  }
  DAT_04c53b30 = &DAT_05af8eb8;
  if (((DAT_05af8f78 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8f78), iVar3 != 0)) {
    DAT_05af8f10 = &PTR_LAB_04b94888;
    DAT_05af8f18 = &PTR_FUN_04b948b8;
    DAT_05af8f38 = &PTR_FUN_04b948e0;
    DAT_05af8f58 = &PTR_FUN_04b94908;
    __cxa_guard_release(&DAT_05af8f78);
  }
  DAT_04c53ac8 = &DAT_05af8f10;
  uVar4 = (*(code *)DAT_05af8f18[1])(&DAT_05af8f18);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53ad0)();
    DAT_04c53ad8 = &PTR_FUN_04b94930;
    DAT_04c53ad0 = &DAT_04c53ad8;
    DAT_04c53ae0 = &PTR_LAB_04b94990;
    DAT_04c53ae8 = &LAB_03dc239c;
  }
  uVar4 = (*(code *)DAT_05af8f38[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c53b00)();
    DAT_04c53b08 = &PTR_FUN_04b949b8;
    DAT_04c53b00 = &DAT_04c53b08;
    DAT_04c53b10 = &PTR_LAB_04b94a18;
    DAT_04c53b18 = &LAB_03dc2438;
  }
  uVar4 = (*(code *)DAT_05af8f58[1])();
  puVar2 = DAT_04c53b30;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c53b30[4])();
    puVar2[5] = &PTR_FUN_04b94a40;
    puVar2[6] = &PTR_LAB_04b94aa0;
    puVar2[7] = &LAB_03dc24d8;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c53b38,(long)DAT_04c53b30 + DAT_04c53b50);
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
  DAT_04c53aa8 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c53a88 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

