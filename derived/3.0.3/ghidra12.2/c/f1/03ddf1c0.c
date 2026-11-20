
void FUN_03ddf1c0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c56108 = 0;
  DAT_04c56110 = 1;
  DAT_04c56118 = 0;
  DAT_04c560f8 = 0;
  DAT_04c56100 = 0;
  DAT_04c56120 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c56128 = PTR_DAT_04bb2120;
  DAT_04c56136 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c56120;
  FUN_03c5a110(&DAT_04c56120,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c56148 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c56170 = &DAT_04c56178;
  DAT_04c561a0 = (undefined8 *)0x0;
  DAT_04c561a8 = 0;
  DAT_04c561c0 = 0xffffffffffffffff;
  DAT_04c561b0 = (code *)0x0;
  DAT_04c561b8 = (undefined1 *)0x0;
  DAT_04c56138 = (undefined8 *)0x0;
  DAT_04c56140 = &DAT_04c56148;
  DAT_04c56178 = DAT_04c56148;
  FUN_038e2df8(&DAT_04c561c8);
  DAT_04c561b0 = FUN_03c66ec8;
  DAT_04c561b8 = &LAB_03c66f18;
  DAT_04c561c0 = 0;
  DAT_04c56280 = 0;
  DAT_04c56288 = (undefined1 *)0x0;
  DAT_04c56290 = (undefined1 *)0x0;
  DAT_04c56298 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c562a0);
  DAT_04c56368 = 0;
  DAT_04c56288 = &LAB_03c66f50;
  DAT_04c56358 = &DAT_04c56358;
  DAT_04c56360 = &DAT_04c56358;
  DAT_04c56380 = 0x1000000000;
  DAT_04c56290 = &LAB_03c67050;
  DAT_04c56298 = 0x20;
  DAT_04c56370 = &DAT_04c56370;
  DAT_04c56378 = &DAT_04c56370;
  if (((DAT_05afa5a0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa5a0), iVar3 != 0)) {
    DAT_05afa578 = puVar1 + 0x10;
    DAT_05afa550 = 0;
    DAT_05afa558 = 0;
    DAT_05afa560 = 0;
    DAT_05afa568 = 1;
    DAT_05afa570 = &DAT_05afa578;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afa550,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afa5a0);
  }
  DAT_04c561a0 = &DAT_05afa550;
  if (((DAT_05afa610 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afa610), iVar3 != 0)) {
    DAT_05afa5a8 = &PTR_LAB_04b969c8;
    DAT_05afa5b0 = &PTR_FUN_04b969f8;
    DAT_05afa5d0 = &PTR_FUN_04b96a50;
    DAT_05afa5f0 = &PTR_FUN_04b96a78;
    __cxa_guard_release(&DAT_05afa610);
  }
  DAT_04c56138 = &DAT_05afa5a8;
  uVar4 = (*(code *)DAT_05afa5b0[1])(&DAT_05afa5b0);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c56140)();
    DAT_04c56148 = &PTR_FUN_04b96aa0;
    DAT_04c56140 = &DAT_04c56148;
    DAT_04c56150 = &PTR_LAB_04b96b00;
    DAT_04c56158 = &LAB_03ddf608;
  }
  uVar4 = (*(code *)DAT_05afa5d0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c56170)();
    DAT_04c56178 = &PTR_FUN_04b96b28;
    DAT_04c56170 = &DAT_04c56178;
    DAT_04c56180 = &PTR_LAB_04b96b88;
    DAT_04c56188 = &LAB_03ddf6a4;
  }
  uVar4 = (*(code *)DAT_05afa5f0[1])();
  puVar2 = DAT_04c561a0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c561a0[4])();
    puVar2[5] = &PTR_FUN_04b96bb0;
    puVar2[6] = &PTR_LAB_04b96c10;
    puVar2[7] = &LAB_03ddf744;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c561a8,(long)DAT_04c561a0 + DAT_04c561c0);
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
  DAT_04c56118 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c560f8 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

