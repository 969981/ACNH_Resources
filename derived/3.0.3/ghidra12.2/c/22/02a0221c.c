
void FUN_02a0221c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bdf1d8;
  *param_1 = &PTR_FUN_04a99358;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = puVar1 + 0x10;
  FUN_02a063c0(param_1 + 9);
  FUN_038e18e4(param_1 + 0x2dd);
  param_1[0x2f9] = (undefined1 *)((long)param_1 + 0x17d4);
  param_1[0x2e7] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x2f2) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f7) = 0xffffffff;
  param_1[0x2e6] = param_1 + 0x2e5;
  param_1[0x2e5] = param_1 + 0x2e5;
  param_1[0x2f1] = &PTR_LAB_04a993d8;
  param_1[0x2f3] = &PTR_LAB_04a993f8;
  *(undefined4 *)(param_1 + 0x2fa) = 0x20;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)param_1 + 0x17f3) = 0;
  *(undefined1 *)((long)param_1 + 0x17d4) = 0;
  param_1[0x2f8] = puVar1;
  FUN_038e18e4(param_1 + 0x2ff);
  *(undefined1 *)((long)param_1 + 0x1874) = 0xff;
  return;
}

