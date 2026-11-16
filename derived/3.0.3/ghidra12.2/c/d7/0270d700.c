
void FUN_0270d700(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  puVar1 = param_1 + 0x17bc;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar2 != 0) {
      param_1[4] = lVar2;
    }
  }
  *param_1 = &PTR_LAB_04a8c3b0;
  FUN_0270dabc(param_1 + 7,param_1,param_1[2] + 4);
  FUN_0270dd90(param_1 + 0x70e,param_1,param_1[2] + 0x2f84);
  FUN_0270dee0(param_1 + 0x1435,param_1,param_1[2] + 0x10684);
  param_1[0x17c1] = 0;
  lVar2 = param_1[3];
  *(undefined1 *)(param_1 + 0x17c2) = 0;
  param_1[0x17bf] = 0;
  param_1[0x17c0] = 0;
  param_1[3] = puVar1;
  param_1[0x17bd] = 0;
  param_1[0x17be] = param_1[2] + 0x10768;
  if (lVar2 != 0) {
    param_1[0x17c0] = lVar2;
  }
  *puVar1 = &PTR_LAB_04a8c620;
  FUN_0270f02c(param_1 + 0x17c3,puVar1);
  *puVar1 = &PTR_LAB_04a8c5f0;
  lVar2 = param_1[2];
  param_1[0x1f03] = 0;
  param_1[0x1f04] = lVar2 + 0x12670;
  param_1[0x1f07] = 0;
  param_1[0x1f05] = 0;
  param_1[0x1f06] = 0;
  *(undefined1 *)(param_1 + 0x1f08) = 0;
  if (param_1[3] != 0) {
    param_1[0x1f06] = param_1[3];
  }
  param_1[0x1f02] = &DAT_04a8f0c0;
  param_1[0x1f0a] = 0;
  param_1[0x1f0b] = lVar2 + 0x125ec;
  param_1[0x1f0d] = 0;
  param_1[0x1f0e] = 0;
  *(undefined1 *)(param_1 + 0x1f0f) = 0;
  param_1[0x1f0c] = 0;
  param_1[0x1f0d] = param_1 + 0x1f02;
  param_1[0x1f09] = &DAT_04a8c710;
  param_1[0x1f11] = 0;
  param_1[0x1f12] = lVar2 + 0x12618;
  *(undefined1 *)(param_1 + 0x1f16) = 0;
  param_1[0x1f13] = 0;
  param_1[0x1f14] = 0;
  param_1[0x1f15] = 0;
  param_1[0x1f14] = param_1 + 0x1f09;
  param_1[0x1f18] = 0;
  param_1[0x1f19] = lVar2 + 0x12644;
  *(undefined1 *)(param_1 + 0x1f1d) = 0;
  param_1[0x1f10] = &DAT_04a8c710;
  param_1[0x1f1a] = 0;
  param_1[0x1f1b] = 0;
  param_1[0x1f1c] = 0;
  param_1[0x1f1b] = param_1 + 0x1f10;
  param_1[0x1f17] = &DAT_04a8c710;
  param_1[3] = param_1 + 0x1f1e;
  param_1[0x1f1e] = &DAT_04a8c740;
  param_1[0x1f1f] = 0;
  param_1[0x1f20] = lVar2 + 0x1267c;
  *(undefined1 *)(param_1 + 0x1f24) = 0;
  param_1[0x1f21] = 0;
  param_1[0x1f22] = 0;
  param_1[0x1f23] = 0;
  param_1[0x1f22] = param_1 + 0x1f17;
  FUN_0270fcb4(param_1 + 0x1f25,param_1,lVar2 + 0x12880);
  param_1[0x1f25] = &PTR_LAB_04a8c770;
  FUN_007e9bd0(param_1 + 0x1f6b,param_1,param_1[2] + 0x128a8);
  param_1[0x1f6b] = &PTR_LAB_04916ef0;
  lVar2 = param_1[2];
  param_1[0x20d1] = 0;
  param_1[0x20d2] = lVar2 + 0x1315c;
  param_1[0x20d3] = 0;
  param_1[0x20d4] = 0;
  param_1[0x20d5] = 0;
  *(undefined1 *)(param_1 + 0x20d6) = 0;
  if (param_1[3] != 0) {
    param_1[0x20d4] = param_1[3];
  }
  param_1[0x20d0] = &DAT_04a8c710;
  param_1[0x20d8] = 0;
  param_1[0x20d9] = lVar2 + 0x13188;
  *(undefined1 *)(param_1 + 0x20dd) = 0;
  param_1[0x20da] = 0;
  param_1[0x20db] = 0;
  param_1[0x20dc] = 0;
  param_1[0x20db] = param_1 + 0x20d0;
  param_1[0x20d7] = &DAT_04a8c710;
  param_1[0x20de] = &DAT_04a8c710;
  param_1[0x20df] = 0;
  param_1[0x20e0] = lVar2 + 0x131b4;
  *(undefined1 *)(param_1 + 0x20e4) = 0;
  param_1[0x20e1] = 0;
  param_1[0x20e2] = 0;
  param_1[0x20e3] = 0;
  param_1[0x20e2] = param_1 + 0x20d7;
  param_1[0x20e6] = 0;
  param_1[0x20e7] = lVar2 + 0x131e0;
  *(undefined1 *)(param_1 + 0x20eb) = 0;
  param_1[0x20e8] = 0;
  param_1[0x20e9] = 0;
  param_1[0x20ea] = 0;
  param_1[0x20e9] = param_1 + 0x20de;
  param_1[0x20e5] = &DAT_04a8c710;
  param_1[0x20ee] = lVar2 + 0x1320c;
  *(undefined1 *)(param_1 + 0x20f2) = 0;
  param_1[0x20ef] = 0;
  param_1[3] = param_1 + 0x20ec;
  param_1[0x20f0] = 0;
  param_1[0x20f1] = 0;
  param_1[0x20f0] = param_1 + 0x20e5;
  param_1[0x20ec] = PTR_DAT_04bc30e8 + 0x10;
  param_1[0x20ed] = 0;
  return;
}

