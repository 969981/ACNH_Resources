
void FUN_0069c3f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x1e0) = param_2[2];
  *(undefined8 *)(param_1 + 0x1e8) = uVar3;
  *(undefined8 *)(param_1 + 0x1d0) = uVar1;
  *(undefined8 *)(param_1 + 0x1d8) = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0x208) = param_2[7];
  *(undefined8 *)(param_1 + 0x1f8) = uVar3;
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  uVar1 = param_2[8];
  uVar3 = param_2[9];
  uVar2 = param_2[10];
  *(undefined8 *)(param_1 + 0x228) = param_2[0xb];
  *(undefined8 *)(param_1 + 0x220) = uVar2;
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xe];
  *(undefined8 *)(param_1 + 0x248) = param_2[0xf];
  *(undefined8 *)(param_1 + 0x240) = uVar2;
  *(undefined8 *)(param_1 + 0x238) = uVar3;
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  return;
}

