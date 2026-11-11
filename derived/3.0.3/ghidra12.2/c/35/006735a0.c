
void FUN_006735a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[8] = 0;
  param_1[9] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bd4c80;
  param_1[0xe] = 0;
  uVar2 = *(undefined8 *)(puVar1 + 0x230);
  uVar4 = *(undefined8 *)(puVar1 + 0x68);
  uVar3 = *(undefined8 *)(puVar1 + 0x60);
  param_1[0x11] = *(undefined8 *)(puVar1 + 0x238);
  param_1[0x10] = uVar2;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  return;
}

