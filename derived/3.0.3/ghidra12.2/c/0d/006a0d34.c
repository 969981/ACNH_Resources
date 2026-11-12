
void FUN_006a0d34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x78) = *param_3;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  uVar3 = param_3[5];
  *(undefined8 *)(param_1 + 0x98) = param_3[4];
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  uVar1 = param_3[6];
  uVar2 = param_3[7];
  uVar3 = param_3[9];
  *(undefined8 *)(param_1 + 0xb8) = param_3[8];
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  return;
}

