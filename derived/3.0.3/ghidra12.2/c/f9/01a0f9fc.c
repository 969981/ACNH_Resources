
void FUN_01a0f9fc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  FUN_009930f4();
  puVar1 = PTR_DAT_04bcb440;
  *(undefined1 *)((long)param_1 + 0x1e3) = 0;
  puVar3 = (undefined8 *)((long)param_1 + 0x164);
  param_1[0x29] = puVar1 + 0x10;
  *param_1 = &PTR_FUN_049f9fd8;
  param_1[0x2b] = puVar3;
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  if (puVar3 != &DAT_0407ebb1) {
    *(undefined1 *)puVar3 = 0;
  }
  param_1[0x2a] = PTR_DAT_04bb2d88 + 0x10;
  uVar2 = FUN_006bd550(&DAT_0407ebb1,0);
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0x205) = 0;
  param_1[0x44] = &PTR_LAB_049fa100;
  *(undefined4 *)(param_1 + 0x3d) = uVar2;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x48] = &PTR_LAB_049fa128;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar1 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(param_1 + 0x52) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2d3) = 0;
  param_1[0x4c] = puVar1;
  puVar3 = (undefined8 *)((long)param_1 + 0x294);
  param_1[0x51] = puVar3;
  if (puVar3 != &DAT_0407ebb1) {
    *(undefined1 *)puVar3 = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x60] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[0x50] = puVar1 + 0x10;
  *PTR_DAT_04bbec78 = 1;
  puVar1 = PTR_DAT_04bbec80;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
  param_1[0x29] = &PTR_LAB_049fa050;
  param_1[0x66] = &LAB_01a0fb90;
  *(undefined8 *)((long)param_1 + 0x33d) = 0;
  return;
}

