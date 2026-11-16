
void FUN_02711ee0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_04bc35c8;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = (long)&PTR_LAB_04a8cf10;
  lVar4 = param_1[2];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = lVar4;
  if (param_1[3] != 0) {
    param_1[0xb] = param_1[3];
  }
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar4;
  param_1[0xe] = (long)&DAT_04a8f030;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = (long)(param_1 + 0xe);
  param_1[7] = (long)&PTR_LAB_04a8cf40;
  puVar1 = PTR_DAT_04bc3170;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = 0;
  param_1[0x19] = (long)(param_1 + 7);
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = lVar4 + 0x10;
  param_1[0x15] = (long)(puVar1 + 0x10);
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar4 + 0x18;
  param_1[0x1c] = (long)(puVar1 + 0x10);
  param_1[3] = (long)(param_1 + 0x1c);
  param_1[0x20] = (long)(param_1 + 0x15);
  param_1[0x21] = 0;
  FUN_027124a0(param_1 + 0x23,param_1,lVar4 + 0x20);
  param_1[0x23] = (long)&PTR_LAB_04a8cf70;
  FUN_02712184(param_1 + 0x3b8,param_1,param_1[2] + 0x120);
  lVar2 = param_1[2];
  lVar3 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1f25);
  *(undefined1 *)(param_1 + 0x1f2b) = 0;
  param_1[0x1f29] = 0;
  param_1[0x1f2a] = 0;
  lVar4 = lVar2 + 0x289f8;
  param_1[0x1f26] = 0;
  param_1[0x1f27] = lVar4;
  if (lVar3 != 0) {
    param_1[0x1f29] = lVar3;
  }
  param_1[0x1f38] = 0;
  param_1[0x1f39] = 0;
  param_1[0x1f36] = 0;
  param_1[0x1f37] = 0;
  param_1[0x1f33] = 0;
  param_1[0x1f34] = 0;
  param_1[0x1f35] = 0;
  puVar1 = PTR_DAT_04bc30c8 + 0x10;
  *(undefined1 *)(param_1 + 0x1f39) = 0;
  param_1[0x1f2c] = (long)puVar1;
  plVar5 = param_1 + 0x1f33;
  *plVar5 = (long)puVar1;
  param_1[0x1f28] = (long)(param_1 + 0x1f2c);
  param_1[0x1f2d] = 0;
  param_1[0x1f2e] = 0;
  param_1[0x1f2f] = 0;
  param_1[0x1f30] = 0;
  param_1[0x1f31] = 0;
  param_1[0x1f32] = 0;
  *(undefined1 *)(param_1 + 0x1f32) = 0;
  param_1[0x1f25] = (long)&PTR_LAB_04a8d300;
  param_1[0x1f2e] = lVar4;
  FUN_026400e0();
  lVar4 = param_1[0x1f28];
  param_1[0x1f28] = (long)plVar5;
  if (lVar4 != 0) {
    param_1[0x1f37] = lVar4;
  }
  param_1[0x1f35] = param_1[0x1f35] + lVar2 + 0x289f9;
  FUN_026400e0(plVar5);
  lVar4 = param_1[3];
  param_1[7999] = 0;
  param_1[0x1f3d] = 0;
  param_1[0x1f3e] = 0;
  *(undefined1 *)(param_1 + 8000) = 0;
  param_1[3] = (long)(param_1 + 0x1f3a);
  param_1[0x1f3b] = 0;
  param_1[0x1f3c] = param_1[2] + 0x28a18;
  if (lVar4 != 0) {
    param_1[0x1f3e] = lVar4;
  }
  param_1[0x1f3a] = (long)&DAT_04a8d330;
  return;
}

