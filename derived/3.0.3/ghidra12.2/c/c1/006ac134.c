
void FUN_006ac134(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x250) = *param_2;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(param_1 + 0x268) = param_4;
  *(undefined8 *)(param_1 + 0x270) = param_5;
  *(undefined4 *)(param_1 + 0x278) = param_6;
  *(undefined8 *)(param_1 + 0x260) = uVar2;
  *(undefined8 *)(param_1 + 600) = uVar1;
  return;
}

