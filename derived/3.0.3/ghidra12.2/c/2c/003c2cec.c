
void FUN_003c2cec(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  param_1 = param_1 + (long)param_2 * 0xe0;
  *(undefined8 *)(param_1 + 0x98) = param_3[2];
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  return;
}

