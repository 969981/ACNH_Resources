
void FUN_03de3220(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_50;
  undefined8 *puStack_48;
  
  DAT_04c56628 = 0;
  DAT_04c56630 = 1;
  DAT_04c56638 = 0;
  DAT_04c56618 = 0;
  DAT_04c56620 = 0;
  DAT_04c56640 = PTR_DAT_04bb2020 + 0x10;
  DAT_04c56648 = PTR_DAT_04bb2120;
  DAT_04c56656 = 0;
  puStack_48 = &DAT_0407ebb1;
  local_50 = DAT_04c56640;
  FUN_03c5a110(&DAT_04c56640,&local_50,0xffffffff,1);
  puVar1 = PTR_DAT_04bd3890;
  DAT_04c56668 = (undefined **)(PTR_DAT_04bd3890 + 0x10);
  DAT_04c56690 = &DAT_04c56698;
  DAT_04c566c0 = (undefined8 *)0x0;
  DAT_04c566c8 = 0;
  DAT_04c566e0 = 0xffffffffffffffff;
  DAT_04c566d0 = (code *)0x0;
  DAT_04c566d8 = (undefined1 *)0x0;
  DAT_04c56658 = (undefined8 *)0x0;
  DAT_04c56660 = &DAT_04c56668;
  DAT_04c56698 = DAT_04c56668;
  FUN_038e2df8(&DAT_04c566e8);
  DAT_04c566d0 = FUN_03c66ec8;
  DAT_04c566d8 = &LAB_03c66f18;
  DAT_04c566e0 = 0;
  DAT_04c567a0 = 0;
  DAT_04c567a8 = (undefined1 *)0x0;
  DAT_04c567b0 = (undefined1 *)0x0;
  DAT_04c567b8 = 0xffffffffffffffff;
  FUN_038e2df8(&DAT_04c567c0);
  DAT_04c56888 = 0;
  DAT_04c567a8 = &LAB_03c66f50;
  DAT_04c56878 = &DAT_04c56878;
  DAT_04c56880 = &DAT_04c56878;
  DAT_04c568a0 = 0x1000000000;
  DAT_04c567b0 = &LAB_03c67050;
  DAT_04c567b8 = 0x20;
  DAT_04c56890 = &DAT_04c56890;
  DAT_04c56898 = &DAT_04c56890;
  if (((DAT_05afaa80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afaa80), iVar3 != 0)) {
    DAT_05afaa58 = puVar1 + 0x10;
    DAT_05afaa30 = 0;
    DAT_05afaa38 = 0;
    DAT_05afaa40 = 0;
    DAT_05afaa48 = 1;
    DAT_05afaa50 = &DAT_05afaa58;
    FUN_001001d0(PTR_LAB_04bd2f80,&DAT_05afaa30,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05afaa80);
  }
  DAT_04c566c0 = &DAT_05afaa30;
  if (((DAT_05afaaf0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05afaaf0), iVar3 != 0)) {
    DAT_05afaa88 = &PTR_LAB_04b96ea8;
    DAT_05afaa90 = &PTR_FUN_04b96ed8;
    DAT_05afaab0 = &PTR_FUN_04b96f30;
    DAT_05afaad0 = &PTR_FUN_04b96f58;
    __cxa_guard_release(&DAT_05afaaf0);
  }
  DAT_04c56658 = &DAT_05afaa88;
  uVar4 = (*(code *)DAT_05afaa90[1])(&DAT_05afaa90);
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c56660)();
    DAT_04c56668 = &PTR_FUN_04b96f80;
    DAT_04c56660 = &DAT_04c56668;
    DAT_04c56670 = &PTR_LAB_04b96fe0;
    DAT_04c56678 = &LAB_03de3668;
  }
  uVar4 = (*(code *)DAT_05afaab0[1])();
  if ((uVar4 & 1) != 0) {
    (**(code **)*DAT_04c56690)();
    DAT_04c56698 = &PTR_FUN_04b97008;
    DAT_04c56690 = &DAT_04c56698;
    DAT_04c566a0 = &PTR_LAB_04b97068;
    DAT_04c566a8 = &LAB_03de3704;
  }
  uVar4 = (*(code *)DAT_05afaad0[1])();
  puVar2 = DAT_04c566c0;
  if ((uVar4 & 1) != 0) {
    (*(code *)**(undefined8 **)DAT_04c566c0[4])();
    puVar2[5] = &PTR_FUN_04b97090;
    puVar2[6] = &PTR_LAB_04b970f0;
    puVar2[7] = &LAB_03de37a4;
    puVar2[4] = puVar2 + 5;
    FUN_03c63db0(&DAT_04c566c8,(long)DAT_04c566c0 + DAT_04c566e0);
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
  DAT_04c56638 = DAT_04c4cc40;
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
  FUN_03c63ed0(&DAT_04c4cb68,(long)&DAT_04c56618 + DAT_04c4cb80);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

