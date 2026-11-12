
void FUN_00687a80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_048f2980;
  param_1[1] = 0xffffffff;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_04bd4c80;
  param_1[0x1a] = 0x8000000000000000;
  uVar2 = *(undefined8 *)(puVar1 + 0x200);
  uVar5 = *(undefined8 *)(puVar1 + 0x218);
  uVar4 = *(undefined8 *)(puVar1 + 0x210);
  param_1[0x1d] = *(undefined8 *)(puVar1 + 0x208);
  param_1[0x1c] = uVar2;
  param_1[0x18] = 0x8000000000000000;
  param_1[0x19] = 0;
  uVar3 = *(undefined8 *)(puVar1 + 0x228);
  uVar2 = *(undefined8 *)(puVar1 + 0x220);
  param_1[0x1f] = uVar5;
  param_1[0x1e] = uVar4;
  param_1[0x21] = uVar3;
  param_1[0x20] = uVar2;
  return;
}

