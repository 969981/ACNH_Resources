
void FUN_004cbe70(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  FUN_004710d0(param_1 + 10);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x12) = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1a) = param_3;
  *(undefined8 *)(param_1 + 0x1c) = param_4;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x28) = param_6;
  *(undefined8 *)(param_1 + 0x2a) = param_7;
  *(undefined8 *)(param_1 + 0x2c) = param_8;
  *(undefined8 *)(param_1 + 0x2e) = param_5;
  uVar1 = param_1[8];
  if (uVar1 == (param_1[9] & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 6,8);
    uVar1 = param_1[8];
  }
  *(undefined8 *)(*(long *)(param_1 + 6) + (long)(int)uVar1 * 8) = 0;
  param_1[8] = uVar1 + 1;
  uVar1 = param_1[0x12];
  if (uVar1 == (param_1[0x13] & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,puVar2,8);
    uVar1 = param_1[0x12];
  }
  *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 8) = &DAT_0407ebb1;
  uVar1 = uVar1 + 1;
  param_1[0x12] = uVar1;
  if (uVar1 == (param_1[0x13] & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,puVar2,8);
    uVar1 = param_1[0x12];
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 8) = 0;
  param_1[0x12] = uVar1 + 1;
  param_1[0x14] = 2;
  return;
}

