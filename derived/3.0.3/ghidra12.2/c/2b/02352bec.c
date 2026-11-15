
void FUN_02352bec(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bc35c8 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar3 != 0) {
      param_1[4] = lVar3;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = (long)&PTR_LAB_04a804f8;
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = (long)(param_1 + 7);
  param_1[8] = 0;
  param_1[9] = lVar3;
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
  }
  param_1[0xe] = (long)&DAT_04a80468;
  param_1[7] = (long)&PTR_LAB_04a80558;
  param_1[0xf] = 0;
  param_1[0x10] = lVar3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[10] = (long)(param_1 + 0xe);
  FUN_007e9bd0(param_1 + 0x15,param_1 + 7,lVar3 + 8);
  puVar1 = PTR_DAT_04bb4c48;
  lVar3 = param_1[2];
  param_1[0x17b] = 0;
  param_1[0x17d] = 0;
  param_1[7] = (long)&PTR_LAB_04a80528;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  param_1[0x17c] = lVar3 + 0x8b0;
  param_1[0x15] = (long)(puVar1 + 0x10);
  if (param_1[3] != 0) {
    param_1[0x17e] = param_1[3];
  }
  param_1[0x185] = (long)(param_1 + 0x17a);
  param_1[0x18c] = (long)(param_1 + 0x181);
  param_1[0x17a] = (long)&DAT_04a80468;
  param_1[0x182] = 0;
  param_1[0x183] = lVar3 + 0x8b8;
  param_1[0x184] = 0;
  param_1[0x186] = 0;
  *(undefined1 *)(param_1 + 0x187) = 0;
  param_1[0x181] = (long)&DAT_04a80468;
  param_1[0x189] = 0;
  param_1[0x18a] = lVar3 + 0x8c0;
  param_1[0x18d] = 0;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  param_1[3] = (long)(param_1 + 0x188);
  param_1[0x188] = (long)&PTR_LAB_04a80558;
  param_1[400] = 0;
  param_1[0x191] = lVar3 + 0x8c0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  param_1[0x194] = 0;
  param_1[0x193] = 0;
  param_1[0x192] = 0;
  param_1[0x18b] = (long)(param_1 + 399);
  param_1[399] = (long)&DAT_04a80468;
  FUN_007e9bd0(param_1 + 0x196,param_1 + 0x188,lVar3 + 0x8c8);
  lVar3 = param_1[2];
  param_1[0x196] = (long)(puVar1 + 0x10);
  param_1[0x188] = (long)&PTR_LAB_04a80528;
  *(undefined1 *)(param_1 + 0x301) = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fe] = 0;
  param_1[0x2ff] = 0;
  param_1[0x300] = 0;
  param_1[0x2fd] = lVar3 + 0x1170;
  if (param_1[3] != 0) {
    param_1[0x2ff] = param_1[3];
  }
  param_1[0x2fb] = (long)&DAT_04a80468;
  param_1[0x303] = 0;
  param_1[0x304] = lVar3 + 0x1178;
  *(undefined1 *)(param_1 + 0x308) = 0;
  param_1[0x306] = (long)(param_1 + 0x2fb);
  param_1[0x30b] = lVar3 + 0x1180;
  *(undefined1 *)(param_1 + 0x30f) = 0;
  param_1[0x30d] = (long)(param_1 + 0x302);
  param_1[0x305] = 0;
  param_1[0x307] = 0;
  param_1[0x302] = (long)&DAT_04a80468;
  param_1[0x30a] = 0;
  param_1[0x30c] = 0;
  param_1[0x30e] = 0;
  param_1[0x309] = (long)&DAT_04a80468;
  param_1[0x311] = 0;
  param_1[0x312] = lVar3 + 0x1188;
  param_1[0x315] = 0;
  param_1[0x314] = 0;
  param_1[0x313] = 0;
  *(undefined1 *)(param_1 + 0x316) = 0;
  param_1[3] = (long)(param_1 + 0x310);
  param_1[0x314] = (long)(param_1 + 0x309);
  param_1[0x310] = (long)&DAT_04a80468;
  return;
}

