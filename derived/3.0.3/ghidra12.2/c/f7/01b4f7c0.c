
void FUN_01b4f7c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  puVar4 = PTR_DAT_04bcb440;
  *(undefined4 *)(param_1 + 3) = 0x80;
  puVar7 = (undefined8 *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x9b) = 0;
  param_1[2] = (long)puVar7;
  *param_1 = (long)(puVar4 + 0x10);
  if (puVar7 != &DAT_0407ebb1) {
    *(undefined1 *)puVar7 = 0;
  }
  puVar2 = PTR_DAT_04bb2d88;
  param_1[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar6 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  param_1[0x1a] = 0;
  param_1[0x1b] = (long)&PTR_LAB_04a389b0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1f] = (long)&PTR_LAB_04a389d8;
  puVar3 = PTR_DAT_04bb4a78;
  puVar1 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(param_1 + 0x29) = 0x40;
  *(undefined1 *)((long)param_1 + 0x18b) = 0;
  param_1[0x23] = (long)puVar1;
  puVar7 = (undefined8 *)((long)param_1 + 0x14c);
  param_1[0x28] = (long)puVar7;
  if (puVar7 != &DAT_0407ebb1) {
    *(undefined1 *)puVar7 = 0;
  }
  param_1[0x37] = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x27] = (long)(puVar1 + 0x10);
  puVar5 = PTR_DAT_04bc0640;
  param_1[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bc0648;
  *(undefined2 *)(param_1 + 0x3f) = 1;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x2d3) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *param_1 = (long)&PTR_FUN_04a38440;
  param_1[0x40] = (long)&LAB_01b4fbc0;
  puVar7 = (undefined8 *)((long)param_1 + 0x254);
  param_1[0x47] = (long)(puVar4 + 0x10);
  param_1[0x49] = (long)puVar7;
  *(undefined4 *)(param_1 + 0x4a) = 0x80;
  if (puVar7 != &DAT_0407ebb1) {
    *(undefined1 *)puVar7 = 0;
  }
  param_1[0x48] = (long)(puVar2 + 0x10);
  uVar6 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x5e] = 0;
  *(undefined8 *)((long)param_1 + 0x2f5) = 0;
  param_1[0x62] = (long)&PTR_LAB_04a38a00;
  param_1[0x66] = (long)&PTR_LAB_04a38a28;
  param_1[0x5c] = 0;
  param_1[0x6a] = (long)(puVar3 + 0x10);
  puVar7 = (undefined8 *)((long)param_1 + 900);
  *(undefined4 *)(param_1 + 0x5b) = uVar6;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x6f] = (long)puVar7;
  *(undefined4 *)(param_1 + 0x70) = 0x40;
  *(undefined1 *)((long)param_1 + 0x3c3) = 0;
  if (puVar7 != &DAT_0407ebb1) {
    *(undefined1 *)puVar7 = 0;
  }
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  param_1[0x6e] = (long)(puVar1 + 0x10);
  param_1[0x7e] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  *PTR_DAT_04bc0608 = 1;
  puVar5 = PTR_DAT_04bc0610;
  *(undefined2 *)(param_1 + 0x86) = 1;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x8d] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((long)param_1 + 0x50b) = 0;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  param_1[0x47] = (long)&PTR_FUN_04a38378;
  param_1[0x87] = (long)&LAB_01b4fcc0;
  puVar7 = (undefined8 *)((long)param_1 + 0x48c);
  param_1[0x8e] = (long)(puVar4 + 0x10);
  param_1[0x90] = (long)puVar7;
  *(undefined4 *)(param_1 + 0x91) = 0x80;
  if (puVar7 != &DAT_0407ebb1) {
    *(undefined1 *)puVar7 = 0;
  }
  param_1[0x8f] = (long)(puVar2 + 0x10);
  uVar6 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0xa5] = 0;
  *(undefined8 *)((long)param_1 + 0x52d) = 0;
  param_1[0xa9] = (long)&PTR_LAB_04a38a50;
  param_1[0xad] = (long)&PTR_LAB_04a38a78;
  param_1[0xa3] = 0;
  param_1[0xb1] = (long)(puVar3 + 0x10);
  puVar7 = (undefined8 *)((long)param_1 + 0x5bc);
  *(undefined4 *)(param_1 + 0xa2) = uVar6;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa8] = 0;
  param_1[0xb6] = (long)puVar7;
  *(undefined4 *)(param_1 + 0xb7) = 0x40;
  *(undefined1 *)((long)param_1 + 0x5fb) = 0;
  if (puVar7 != &DAT_0407ebb1) {
    *(undefined1 *)puVar7 = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  param_1[0xc5] = 0;
  param_1[0xb5] = (long)(puVar1 + 0x10);
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0xffffffff;
  *(undefined4 *)(param_1 + 199) = 0;
  puVar4 = PTR_DAT_04bc05f8;
  param_1[200] = 0;
  *puVar4 = 1;
  puVar4 = PTR_DAT_04bc0600;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined2 *)(param_1 + 0xcd) = 1;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)puVar4 = 0xffffffffffffffff;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  param_1[0x8e] = (long)&PTR_FUN_04a382b0;
  param_1[0xce] = (long)&LAB_01b4fdc0;
  return;
}

