
void FUN_0272845c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8b378;
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar3 + 8;
  param_1[3] = param_1 + 7;
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
  }
  puVar4 = param_1 + 0x15;
  *puVar4 = &PTR_LAB_04a8aab0;
  param_1[7] = &PTR_LAB_04a8b3d8;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3 + 0xe;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0xe] = &DAT_04a8b408;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = puVar4;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar3 + 0x20;
  param_1[0x19] = param_1 + 0xe;
  param_1[0x1a] = 0;
  FUN_007e9bd0(param_1 + 0x1c,puVar4,lVar3 + 0x40);
  puVar1 = PTR_DAT_04bb4c48 + 0x10;
  param_1[0x1c] = puVar1;
  FUN_007e9bd0(param_1 + 0x181,puVar4,param_1[0x17] + 0x8c8);
  param_1[0x181] = puVar1;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  *puVar4 = &PTR_LAB_04a8aa80;
  param_1[7] = &PTR_LAB_04a8b3a8;
  param_1[0x2e7] = 0;
  lVar3 = param_1[2];
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2e8] = lVar3 + 0x1190;
  if (param_1[3] != 0) {
    param_1[0x2ea] = param_1[3];
  }
  param_1[0x2ee] = 0;
  param_1[0x2f2] = 0;
  param_1[0x2e6] = &DAT_04a8adf8;
  param_1[0x2f1] = param_1 + 0x2e6;
  param_1[0x2fd] = lVar3 + 0x11d2;
  param_1[0x2ed] = &PTR_LAB_04a8ac00;
  param_1[0x2fb] = &DAT_04a8f390;
  param_1[0x2ef] = lVar3 + 0x11d0;
  param_1[0x2f6] = lVar3 + 0x11d0;
  *(undefined1 *)(param_1 + 0x2f3) = 0;
  param_1[3] = param_1 + 0x2ed;
  param_1[0x2f5] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  *(undefined1 *)(param_1 + 0x2fa) = 0;
  param_1[0x2f4] = &DAT_04a90588;
  param_1[0x2fc] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x300] = 0;
  *(undefined1 *)(param_1 + 0x301) = 0;
  param_1[0x2ff] = param_1 + 0x2f4;
  param_1[0x303] = 0;
  param_1[0x304] = lVar3 + 0x11d4;
  *(undefined1 *)(param_1 + 0x308) = 0;
  param_1[0x307] = 0;
  puVar1 = PTR_DAT_04bc30c8;
  param_1[0x2f0] = param_1 + 0x302;
  param_1[0x306] = param_1 + 0x2fb;
  param_1[0x305] = 0;
  param_1[0x302] = puVar1 + 0x10;
  FUN_02726a4c(param_1 + 0x309,param_1 + 0x2ed,lVar3 + 0x11d8);
  param_1[0x309] = &PTR_LAB_04a8ac30;
  param_1[0x2ed] = &PTR_LAB_04a8abd0;
  return;
}

