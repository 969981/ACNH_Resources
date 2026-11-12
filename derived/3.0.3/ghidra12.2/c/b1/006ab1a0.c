
void FUN_006ab1a0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x250) = param_2;
  *(undefined8 *)(param_1 + 600) = *param_3;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 0x268) = param_4[1];
  *(undefined8 *)(param_1 + 0x260) = uVar1;
  return;
}

