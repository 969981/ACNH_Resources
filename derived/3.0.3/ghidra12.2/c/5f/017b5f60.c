
void FUN_017b5f60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_049c3d00;
  memset(param_1 + 1,0,0x504);
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x28;
    *(undefined1 *)((long)param_1 + lVar2 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x15) = 0;
    *(undefined1 *)((long)param_1 + lVar2 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x29) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x500);
  memset((void *)((long)param_1 + 0x50c),0,0x400);
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x20;
    *(undefined2 *)((long)param_1 + lVar2 + 0x50c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x510) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x518) = 0;
    *(undefined2 *)((long)param_1 + lVar2 + 0x51c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x520) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x528) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x400);
  memset((void *)((long)param_1 + 0x90c),0,0x400);
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x20;
    *(undefined2 *)((long)param_1 + lVar2 + 0x90c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x910) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x918) = 0;
    *(undefined2 *)((long)param_1 + lVar2 + 0x91c) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x920) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x928) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x400);
  param_1[0x1a2] = 0;
  *(undefined2 *)((long)param_1 + 0xd0c) = 1;
  *(undefined8 *)((long)param_1 + 0xd1c) = 0x640800000;
  *(undefined4 *)(param_1 + 0x1a3) = 0;
  *(undefined8 *)((long)param_1 + 0xd24) = 0x40f000003fe66666;
  *(undefined8 *)((long)param_1 + 0xd2c) = 0x423400003e4ccccd;
  *(undefined8 *)((long)param_1 + 0xd34) = 0x163f800000;
  *(undefined8 *)((long)param_1 + 0xd3c) = 0x1f00000013;
  *(undefined8 *)((long)param_1 + 0xd44) = 0xfffffffb00000017;
  *(undefined8 *)((long)param_1 + 0xd4c) = 0;
  *(undefined8 *)((long)param_1 + 0xd54) = 0x200000003f;
  *(undefined8 *)((long)param_1 + 0xd5c) = 0x1600000008;
  *(undefined8 *)((long)param_1 + 0xd64) = 0x200000000b;
  *(undefined8 *)((long)param_1 + 0xd6c) = 0xcc1d80000;
  *(undefined8 *)((long)param_1 + 0xd74) = 0x43200000;
  *(undefined4 *)((long)param_1 + 0xd7c) = 0x43200000;
  param_1[0x1b1] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b0] = &DAT_048f9750;
  param_1[0x1b2] = &DAT_048f9750;
  FUN_017e2e74(param_1 + 0x1b4);
  param_1[0x1f7] = 0;
  *(undefined8 *)((long)param_1 + 0xfdf) = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  *(undefined2 *)((long)param_1 + 0xfe7) = 1;
  *(undefined1 *)((long)param_1 + 0xfe9) = 0;
  *(undefined4 *)(param_1 + 0x1f7) = 0xffffffff;
  return;
}

