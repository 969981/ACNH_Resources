
void FUN_006ab5fc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x250) = *param_2;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x260) = param_3[1];
  *(undefined8 *)(param_1 + 600) = uVar1;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x270) = param_4[1];
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  return;
}

