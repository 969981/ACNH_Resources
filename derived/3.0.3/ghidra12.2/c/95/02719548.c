
void FUN_02719548(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bc35c8 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = (long)&PTR_LAB_04a8ee80;
  lVar4 = param_1[2];
  lVar2 = param_1[3];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = (long)(param_1 + 7);
  param_1[8] = 0;
  param_1[9] = lVar4;
  if (lVar2 != 0) {
    param_1[0xb] = lVar2;
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar4;
  param_1[7] = (long)&PTR_LAB_04a8f120;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar3 = PTR_DAT_04bb4c38;
  puVar1 = PTR_DAT_04bb4c38 + 0x10;
  *(undefined1 *)(param_1 + 0x14) = 0;
  plVar6 = param_1 + 0x15;
  *plVar6 = (long)&PTR_LAB_04a8f180;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  plVar5 = param_1 + 0x1c;
  *plVar5 = (long)&PTR_LAB_04a8f1e0;
  param_1[10] = (long)plVar6;
  param_1[0xe] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = (long)plVar5;
  param_1[0x16] = 0;
  param_1[0x17] = lVar4 + 4;
  param_1[0x19] = (long)(param_1 + 0xe);
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar4 + 4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_0270e78c(param_1 + 0x23,plVar5);
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *plVar5 = (long)&PTR_LAB_04a8f1b0;
  *plVar6 = (long)&PTR_LAB_04a8f150;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x72] = param_1[9] + 0x18;
  lVar4 = param_1[10];
  param_1[10] = (long)(param_1 + 0x70);
  if (lVar4 != 0) {
    param_1[0x74] = lVar4;
  }
  puVar1 = PTR_DAT_04bb4c40;
  param_1[7] = (long)&PTR_LAB_04a8f0f0;
  lVar2 = param_1[3];
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  lVar4 = param_1[2] + 0x1c;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[3] = (long)(param_1 + 0x77);
  param_1[0x79] = lVar4;
  param_1[0x70] = (long)(puVar1 + 0x10);
  if (lVar2 != 0) {
    param_1[0x7b] = lVar2;
  }
  param_1[0x80] = lVar4;
  param_1[0x77] = (long)&PTR_LAB_04a8eee0;
  lVar4 = param_1[2] + 0x20;
  param_1[0x7e] = (long)(puVar3 + 0x10);
  param_1[0x85] = (long)&PTR_LAB_04a8ef40;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = lVar4;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x7a] = (long)(param_1 + 0x85);
  param_1[0x89] = (long)(param_1 + 0x7e);
  param_1[0x8d] = 0;
  param_1[0x8e] = lVar4;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x88] = (long)(param_1 + 0x8c);
  param_1[0x8c] = (long)&PTR_LAB_04a8efa0;
  FUN_0270e78c(param_1 + 0x93);
  param_1[0x8c] = (long)&PTR_LAB_04a8ef70;
  lVar4 = param_1[0x7a];
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0x85] = (long)&PTR_LAB_04a8ef10;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0x7a] = (long)(param_1 + 0xe0);
  param_1[0xe2] = param_1[0x79] + 0x18;
  if (lVar4 != 0) {
    param_1[0xe4] = lVar4;
  }
  param_1[0xe9] = param_1[0x79] + 0x18;
  param_1[0xe7] = (long)&DAT_04a8f030;
  param_1[0xe0] = (long)&PTR_LAB_04a8f000;
  param_1[0xe8] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  param_1[0xe3] = (long)(param_1 + 0xe7);
  param_1[0x77] = (long)&PTR_LAB_04a8eeb0;
  return;
}

