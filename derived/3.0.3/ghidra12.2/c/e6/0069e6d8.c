
void FUN_0069e6d8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  uVar1 = *param_3;
  uVar2 = param_3[2];
  *(undefined8 *)(param_1 + 0x80) = param_3[1];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_3 + 6);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}

