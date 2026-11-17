
void FUN_030bed84(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  FUN_03d5cc04();
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)((long)param_1 + 0x2b4) = 4;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((long)param_1 + 0x2bd) = 0;
  *(undefined1 *)(param_1 + 0x58) = 2;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x6f] = &LAB_030beef0;
  *param_1 = &PTR_LAB_04afd0b8;
  param_1[0x6d] = &PTR_LAB_04afd220;
  *(undefined1 *)((long)param_1 + 0x2c3) = 1;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x6e] = param_1;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = &PTR_LAB_04afd270;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  param_1[0x7a] = 0;
  param_1[0x7b] = puVar1;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined1 *)((long)param_1 + 0x402) = 1;
  if (param_3 != 0) {
    *(byte *)((long)param_1 + 0x316) = *(byte *)(param_3 + 0x2c) >> 2 & 1;
  }
  return;
}

