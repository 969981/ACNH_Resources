
void FUN_01bdde78(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 1) = 0xb;
  puVar2 = PTR_DAT_04bc0b30;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  puVar1 = PTR_DAT_04bc0a78;
  param_1[0xe] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar7 = *(int *)puVar2;
  *(undefined4 *)(param_1 + 0x11) = 0x30;
  *(undefined1 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0x40;
  param_1[2] = puVar1 + 0x10;
  *(int *)(param_1 + 3) = iVar7;
  *(int *)puVar2 = iVar7 + 1;
  *param_1 = &PTR_LAB_04a3ce40;
  param_1[0x16] = (long)param_1 + 0xbc;
  param_1[0x10] = param_1 + 0x2b;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff00000000;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0xfb) = 0;
  puVar2 = PTR_DAT_04bc0760 + 0x10;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  param_1[0x2b] = 0;
  param_1[0xf] = puVar2;
  puVar6 = param_1 + 0x37;
  param_1[0x15] = puVar1;
  *(undefined4 *)(param_1 + 0x22) = 0x40;
  *(undefined1 *)((long)param_1 + 0x153) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)((long)param_1 + 0x114) = 0;
  param_1[0x20] = puVar1;
  param_1[0x21] = (undefined1 *)((long)param_1 + 0x114);
  puVar4 = puVar6;
  if (puVar6 <= (undefined8 *)((long)param_1 + 0x15aU)) {
    puVar4 = (undefined8 *)((long)param_1 + 0x15aU);
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  memset(param_1 + 0x2b,0,((long)puVar4 + (-0xe1 - (long)(param_1 + 0xf)) & 0xfffffffffffffffeU) + 2
        );
  *(undefined1 *)((long)param_1 + 0x1cc) = 0;
  puVar4 = param_1 + 0x53;
  *(undefined4 *)(param_1 + 0x39) = 0xf0;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  param_1[0x3d] = puVar1;
  param_1[0x3e] = (undefined1 *)((long)param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x40;
  *(undefined1 *)((long)param_1 + 0x23b) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x40;
  *(undefined1 *)((long)param_1 + 0x293) = 0;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff00000000;
  param_1[0x48] = puVar1;
  param_1[0x49] = (undefined1 *)((long)param_1 + 0x254);
  param_1[0x37] = PTR_DAT_04bc0548 + 0x10;
  param_1[0x38] = puVar4;
  memset(puVar4,0,0x1e0);
  puVar3 = param_1 + 0x8f;
  puVar5 = puVar3;
  if (puVar3 <= (undefined8 *)((long)param_1 + 0x29aU)) {
    puVar5 = (undefined8 *)((long)param_1 + 0x29aU);
  }
  memset(puVar4,0,((long)puVar5 + (-0xe1 - (long)puVar6) & 0xfffffffffffffffeU) + 2);
  *(undefined4 *)(param_1 + 0x91) = 0x30;
  *(undefined1 *)((long)param_1 + 0x4bc) = 0;
  param_1[0x96] = (undefined1 *)((long)param_1 + 0x4bc);
  *(undefined1 *)((long)param_1 + 0x514) = 0;
  param_1[0xa1] = (undefined1 *)((long)param_1 + 0x514);
  param_1[0x90] = param_1 + 0xab;
  puVar6 = param_1 + 0xb7;
  if (param_1 + 0xb7 <= (undefined8 *)((long)param_1 + 0x55aU)) {
    puVar6 = (undefined8 *)((long)param_1 + 0x55aU);
  }
  *(undefined1 *)((long)param_1 + 0x48c) = 0;
  param_1[0x92] = 0xffffffff;
  param_1[0x93] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x97) = 0x40;
  *(undefined1 *)((long)param_1 + 0x4fb) = 0;
  param_1[0x95] = puVar1;
  *(undefined4 *)(param_1 + 0xa2) = 0x40;
  *(undefined1 *)((long)param_1 + 0x553) = 0;
  param_1[0xa0] = puVar1;
  param_1[0x8f] = puVar2;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  memset(param_1 + 0xab,0,((long)puVar6 + (-0xe1 - (long)puVar3) & 0xfffffffffffffffeU) + 2);
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  return;
}

