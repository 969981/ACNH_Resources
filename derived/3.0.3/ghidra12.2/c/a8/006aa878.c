
void FUN_006aa878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x250) = param_2;
  *(undefined8 *)(param_1 + 600) = param_3;
  *(undefined8 *)(param_1 + 0x260) = param_4;
  *(undefined8 *)(param_1 + 0x268) = param_5;
  *(undefined8 *)(param_1 + 0x270) = param_6;
  uVar1 = *param_7;
  *(undefined8 *)(param_1 + 0x280) = param_7[1];
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  *(undefined8 *)(param_1 + 0x288) = *param_8;
  uVar1 = *param_9;
  *(undefined8 *)(param_1 + 0x298) = param_9[1];
  *(undefined8 *)(param_1 + 0x290) = uVar1;
  uVar1 = *param_10;
  *(undefined8 *)(param_1 + 0x2a8) = param_10[1];
  *(undefined8 *)(param_1 + 0x2a0) = uVar1;
  return;
}

