
void FUN_0173198c(long *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar8 = PTR_DAT_04bb38f8;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0xffffffff;
  puVar8 = PTR_DAT_04bb37e0;
  FUN_00765f94((long)param_1 + 0x14,PTR_DAT_04bb37e0,0,0xffffffff);
  param_1[5] = 0;
  *(undefined2 *)((long)param_1 + 0x31) = 0;
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  FUN_00765f94((long)param_1 + 0x34,puVar8,0,0xffffffff);
  param_1[9] = 0;
  puVar7 = PTR_DAT_04bb3900;
  *(undefined4 *)((long)param_1 + 0x51) = 0;
  puVar9 = PTR_DAT_04bb3908;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xb] = (long)(puVar7 + 0x10);
  param_1[0xf] = (long)(puVar9 + 0x10);
  FUN_00765f94((long)param_1 + 0x9c,puVar8,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00765f94((long)param_1 + 0xb4,puVar8,0,0xffffffff);
  *(undefined2 *)(param_1 + 0x19) = 0;
  *param_1 = (long)&PTR_FUN_049bfc80;
  uVar2 = *(undefined4 *)puVar8;
  uVar3 = *(undefined4 *)(puVar8 + 4);
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar3;
  FUN_00765f94((long)param_1 + 0xd4,puVar8,0,0xffffffff);
  param_1[0x1f] = -0x100000000;
  *(undefined8 *)((long)param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  puVar1 = (undefined8 *)((long)param_1 + 0x13c);
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(undefined1 *)((long)param_1 + 0xed) = param_2;
  *(undefined2 *)((long)param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0x1e) = param_3;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x27) = 0x80;
  *(undefined1 *)((long)param_1 + 0x1bb) = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  param_1[0x39] = 0;
  puVar7 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  uVar2 = *(undefined4 *)(puVar8 + 4);
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  uVar4 = puVar8[2];
  *(undefined2 *)((long)param_1 + 0x1d4) = 0x101;
  uVar5 = puVar8[3];
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x25] = (long)(puVar7 + 0x10);
  uVar6 = *(undefined2 *)puVar8;
  *(undefined2 *)((long)param_1 + 0x1c4) = 0;
  *(undefined1 *)((long)param_1 + 0x1ea) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1eb) = uVar5;
  *(undefined4 *)((long)param_1 + 0x1ec) = uVar2;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x1fe) = uVar4;
  *(undefined1 *)((long)param_1 + 0x1ff) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined2 *)(param_1 + 0x3d) = uVar6;
  *(undefined2 *)((long)param_1 + 0x1fc) = uVar6;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}

