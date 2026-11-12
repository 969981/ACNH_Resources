
void FUN_006a93bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x250) = param_2;
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar2 = param_3[2];
  *(undefined8 *)(param_1 + 0x270) = param_3[3];
  *(undefined8 *)(param_1 + 0x268) = uVar2;
  *(undefined8 *)(param_1 + 0x260) = uVar3;
  *(undefined8 *)(param_1 + 600) = uVar1;
  uVar1 = param_3[4];
  uVar3 = param_3[5];
  uVar2 = param_3[6];
  *(undefined8 *)(param_1 + 0x290) = param_3[7];
  *(undefined8 *)(param_1 + 0x288) = uVar2;
  *(undefined8 *)(param_1 + 0x280) = uVar3;
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  return;
}

