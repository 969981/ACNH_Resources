
void FUN_0069f4d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x78) = *param_3;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar3 = param_3[4];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *(undefined4 *)(param_1 + 0x9f) = *(undefined4 *)((long)param_3 + 0x27);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}

