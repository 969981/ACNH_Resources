
void FUN_0069c3cc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  *(undefined8 *)(param_1 + 0x1a0) = param_2[4];
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[9];
  *(undefined8 *)(param_1 + 0x1c0) = param_2[8];
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  return;
}

