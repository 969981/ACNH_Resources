
void FUN_006a75e8(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x250) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x260) = param_4;
  *(undefined8 *)(param_1 + 0x268) = param_5;
  *(undefined8 *)(param_1 + 600) = uVar1;
  return;
}

