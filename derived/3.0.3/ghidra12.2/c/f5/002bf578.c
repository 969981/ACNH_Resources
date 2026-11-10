
void FUN_002bf578(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = PTR_DAT_04bce350;
  *(undefined4 *)(param_1 + 4) = 0x20;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  puVar3 = (undefined8 *)((long)param_1 + 0x2c);
  *puVar3 = 0;
  puVar1 = PTR_DAT_04bcd060;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 1;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[2] = (long)(puVar1 + 0x10);
  param_1[3] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x16) = 0x10000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0x5dc00001388;
  param_1[0x18] = 0;
  FUN_00220ebc(param_1 + 0x1b);
  FUN_00220ebc(param_1 + 0x21);
  FUN_00220ebc(param_1 + 0x27);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined4 *)((long)param_1 + 0x18c) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_002b3fa8(param_1 + 0x32);
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *puVar3 = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  return;
}

