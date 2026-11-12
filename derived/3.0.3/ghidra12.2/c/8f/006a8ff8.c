
void FUN_006a8ff8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 600) = param_2[1];
  *(undefined8 *)(param_1 + 0x250) = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar2 = param_2[4];
  *(undefined8 *)(param_1 + 0x278) = param_2[5];
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  *(undefined8 *)(param_1 + 0x268) = uVar3;
  *(undefined8 *)(param_1 + 0x260) = uVar1;
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  uVar2 = param_2[8];
  *(undefined8 *)(param_1 + 0x298) = param_2[9];
  *(undefined8 *)(param_1 + 0x290) = uVar2;
  *(undefined8 *)(param_1 + 0x288) = uVar3;
  *(undefined8 *)(param_1 + 0x280) = uVar1;
  return;
}

