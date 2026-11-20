
void FUN_03db23c8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c52388 = 0;
  DAT_04c52390 = 1;
  DAT_04c52398 = 0;
  DAT_04c52378 = 0;
  DAT_04c52380 = 0;
  DAT_04c523a0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c523a8 = PTR_DAT_04bb2120;
  DAT_04c523b6 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c523a0;
  FUN_03c5a110(&DAT_04c523a0,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c523c8 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c523f0 = &DAT_04c523f8;
  DAT_04c52420 = (undefined8 *)0x0;
  DAT_04c52428 = 0;
  DAT_04c52440 = 0xffffffffffffffff;
  DAT_04c52430 = (code *)0x0;
  DAT_04c52438 = (undefined1 *)0x0;
  DAT_04c523b8 = (undefined8 *)0x0;
  DAT_04c523c0 = &DAT_04c523c8;
  DAT_04c523f8 = DAT_04c523c8;
  FUN_038e2df8(&DAT_04c52448);
  DAT_04c52430 = FUN_03c66ec8;
  DAT_04c52438 = &LAB_03c66f18;
  DAT_04c52440 = 0;
  DAT_04c52500 = 0;
  DAT_04c52508 = (undefined1 *)0x0;
  DAT_04c52510 = (undefined1 *)0x0;
  DAT_04c52518 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c52520);
  DAT_04c525e8 = 0;
  DAT_04c52508 = &LAB_03c66f50;
  DAT_04c525d8 = &DAT_04c525d8;
  DAT_04c525e0 = &DAT_04c525d8;
  DAT_04c52600 = 0x1000000000;
  DAT_04c52510 = &LAB_03c67050;
  DAT_04c52518 = 0x20;
  DAT_04c525f0 = &DAT_04c525f0;
  DAT_04c525f8 = &DAT_04c525f0;
  if (((DAT_05af8718 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8718), iVar3 != 0)) {
    DAT_05af86f0 = puVar1 + 0x10;
    DAT_05af86c8 = 0;
    DAT_05af86d0 = 0;
    DAT_05af86d8 = 0;
    DAT_05af86e0 = 1;
    DAT_05af86e8 = &DAT_05af86f0;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05af86c8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05af8718);
  }
  DAT_04c52420 = &DAT_05af86c8;
  if (((DAT_05af8788 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05af8788), iVar3 != 0)) {
    DAT_05af8720 = &PTR_LAB_04b934f0;
    DAT_05af8728 = &PTR_FUN_04b93520;
    DAT_05af8748 = &PTR_FUN_04b93548;
    DAT_05af8768 = &PTR_FUN_04b93570;
    __cxa_guard_release(&DAT_05af8788);
  }
  DAT_04c523b8 = &DAT_05af8720;
  uVar4 = (*(code *)DAT_05af8728[1])(&DAT_05af8728);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c523c0)();
    DAT_04c523c8 = &PTR_FUN_04b93598;
    DAT_04c523c0 = &DAT_04c523c8;
    DAT_04c523d0 = &PTR_LAB_04b935f8;
    DAT_04c523d8 = &LAB_03db2810;
  }
  uVar4 = (*(code *)DAT_05af8748[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c523f0)();
    DAT_04c523f8 = &PTR_FUN_04b93620;
    DAT_04c523f0 = &DAT_04c523f8;
    DAT_04c52400 = &PTR_LAB_04b93680;
    DAT_04c52408 = &LAB_03db28ac;
  }
  uVar4 = (*(code *)DAT_05af8768[1])();
  puVar2 = DAT_04c52420;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c52420[4])();
    puVar2[5] = &PTR_FUN_04b936a8;
    puVar2[6] = &PTR_LAB_04b93708;
    puVar2[7] = &LAB_03db294c;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c52428,(long)DAT_04c52420 + DAT_04c52440);
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
  DAT_04c52398 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c52378 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

