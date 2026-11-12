
void FUN_006abdb0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 600) = param_3;
  *(undefined8 *)(param_1 + 0x260) = param_4;
  *(undefined8 *)(param_1 + 0x250) = uVar1;
  return;
}

