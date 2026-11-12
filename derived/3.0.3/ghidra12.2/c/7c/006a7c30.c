
void FUN_006a7c30(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x250) = param_2;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x260) = param_3[1];
  *(undefined8 *)(param_1 + 600) = uVar1;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x270) = param_4[1];
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x280) = param_5[1];
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  uVar1 = *param_6;
  *(undefined8 *)(param_1 + 0x290) = param_6[1];
  *(undefined8 *)(param_1 + 0x288) = uVar1;
  return;
}

