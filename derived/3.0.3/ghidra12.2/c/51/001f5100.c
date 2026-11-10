
void FUN_001f5100(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x10d8) = param_2[3];
  *(undefined8 *)(param_1 + 0x10d0) = uVar2;
  *(undefined8 *)(param_1 + 0x10c8) = uVar3;
  *(undefined8 *)(param_1 + 0x10c0) = uVar1;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0x10f8) = param_2[7];
  *(undefined8 *)(param_1 + 0x10f0) = uVar2;
  *(undefined8 *)(param_1 + 0x10e8) = uVar3;
  *(undefined8 *)(param_1 + 0x10e0) = uVar1;
  return;
}

