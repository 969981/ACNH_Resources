
void FUN_03dbe730(void)

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
  
  DAT_04c53578 = 0;
  DAT_04c53580 = 1;
  DAT_04c53588 = 0;
  DAT_04c53568 = 0;
  DAT_04c53570 = 0;
  DAT_04c53590 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c53598 = PTR_DAT_04bb2120;
  DAT_04c535a6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c53590;
  FUN_03c5a110(&DAT_04c53590,&local_50,0xffffffff,1);
  puVar3 = PTR_DAT_04bd3890;
  DAT_04c535b8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c535e0 = &DAT_04c535e8;
  DAT_04c53610 = (undefined8 *)0x0;
  DAT_04c53618 = 0;
  DAT_04c53630 = 0xffffffffffffffff;
  DAT_04c53620 = (code *)0x0;
  DAT_04c53628 = (undefined1 *)0x0;
  DAT_04c535a8 = (undefined *)0x0;
  DAT_04c535b0 = &DAT_04c535b8;
  DAT_04c535e8 = DAT_04c535b8;
  FUN_038e2df8(&DAT_04c53638);
  DAT_04c53620 = FUN_03c66ec8;
  DAT_04c53628 = &LAB_03c66f18;
  DAT_04c53630 = 0;
  DAT_04c536f0 = 0;
  DAT_04c536f8 = (undefined1 *)0x0;
  DAT_04c53700 = (undefined1 *)0x0;
  DAT_04c53708 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c53710);
  DAT_04c537d8 = 0;
  DAT_04c536f8 = &LAB_03c66f50;
  DAT_04c537c8 = &DAT_04c537c8;
  DAT_04c537d0 = &DAT_04c537c8;
  DAT_04c537f0 = 0x1000000000;
  DAT_04c53700 = &LAB_03c67050;
  DAT_04c53708 = 0x20;
  DAT_04c537e0 = &DAT_04c537e0;
  DAT_04c537e8 = &DAT_04c537e0;
  if (((DAT_05af8db8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05af8db8), iVar6 != 0)) {
    DAT_05af8d90 = puVar3 + 0x10;
    DAT_05af8d68 = 0;
    DAT_05af8d70 = 0;
    DAT_05af8d78 = 0;
    DAT_05af8d80 = 1;
    DAT_05af8d88 = &DAT_05af8d90;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af8d68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8db8);
  }
  puVar3 = PTR_DAT_04bd3750;
  DAT_04c53610 = &DAT_05af8d68;
  if (((*PTR_DAT_04bd3758 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bd3758), iVar6 != 0))
  {
    puVar1 = PTR_DAT_04bd3760 + 0x10;
    puVar2 = PTR_DAT_04bd3770 + 0x10;
    *(undefined **)(puVar3 + 0x28) = PTR_DAT_04bd3768 + 0x10;
    puVar4 = PTR_DAT_04bd3778;
    *(undefined **)puVar3 = puVar1;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x48) = puVar4 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd3758);
  }
  DAT_04c535a8 = puVar3;
  uVar7 = (**(code **)(*(long *)(puVar3 + 8) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c535b0)();
    DAT_04c535b8 = &PTR_FUN_04b944b0;
    DAT_04c535b0 = &DAT_04c535b8;
    DAT_04c535c0 = &PTR_LAB_04b94510;
    DAT_04c535c8 = &LAB_03dbeb80;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x28) + 8))();
  if ((uVar7 & 1) != 0) {
    (**(code **)*DAT_04c535e0)();
    DAT_04c535e8 = &PTR_FUN_04b94538;
    DAT_04c535e0 = &DAT_04c535e8;
    DAT_04c535f0 = &PTR_LAB_04b94598;
    DAT_04c535f8 = &LAB_03dbec38;
  }
  uVar7 = (**(code **)(*(long *)(puVar3 + 0x48) + 8))(puVar3 + 0x48);
  puVar5 = DAT_04c53610;
  if ((uVar7 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c53610[4])();
    puVar5[5] = &PTR_FUN_04b945c0;
    puVar5[6] = &PTR_LAB_04b94620;
    puVar5[7] = &LAB_03dbecf4;
    puVar5[4] = puVar5 + 5;
    FUN_03c63db0(&DAT_04c53618,(long)DAT_04c53610 + DAT_04c53630);
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
  DAT_04c53588 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c53568 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

