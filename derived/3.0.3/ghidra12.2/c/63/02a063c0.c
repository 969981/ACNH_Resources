
void FUN_02a063c0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_04a994e0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x7f7fffff;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x74) = 0x7f7fffff7f7fffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar3 = -0x1400;
  do {
    lVar1 = lVar3 + 0x28;
    *(undefined8 *)((long)param_1 + lVar3 + 0x14a0) = 0x3f80000000000000;
    *(undefined8 *)((long)param_1 + lVar3 + 0x14a8) = 0x3f8000007f7fffff;
    *(undefined8 *)((long)param_1 + lVar3 + 0x14b0) = 0x3f800000;
    *(undefined8 *)((long)param_1 + lVar3 + 0x14b8) = 0x3f00000000000000;
    *(undefined8 *)((long)param_1 + lVar3 + 0x14c0) = 0x7f7fffff7f7fffff;
    lVar3 = lVar1;
  } while (lVar1 != 0);
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x294] = 0;
  *(undefined8 *)((long)param_1 + 0x14b7) = 0;
  FUN_02a062e4(param_1 + 0x298);
  param_1[0x2ba] = 0;
  param_1[0x2b9] = 0;
  puVar2 = PTR_DAT_04bd20e8;
  *(undefined8 *)((long)param_1 + 0x15dc) = 0;
  *(undefined8 *)((long)param_1 + 0x15e2) = 0;
  puVar2 = puVar2 + 0x10;
  param_1[0x2bf] = &DAT_3f8000003f800000;
  param_1[0x2c0] = &DAT_3f8000003f800000;
  param_1[0x2c4] = &DAT_3f8000003f800000;
  param_1[0x2c5] = &DAT_3f8000003f800000;
  param_1[0x2ca] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 699) = 0x3f800000;
  param_1[0x2c2] = 0x3f80000000000000;
  param_1[0x2be] = puVar2;
  param_1[0x2c1] = 0x3f800000;
  param_1[0x2c3] = puVar2;
  param_1[0x2c7] = 0x3f80000000000000;
  param_1[0x2c6] = 0x3f800000;
  param_1[0x2c8] = puVar2;
  param_1[0x2cc] = 0x3f80000000000000;
  *(undefined4 *)((long)param_1 + 0x164c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c9) = 0x3f800000;
  param_1[0x2cb] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2cd) = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d2] = 0;
  *(undefined4 *)((long)param_1 + 0x169c) = 0;
  return;
}

