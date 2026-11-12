
void FUN_006ae64c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x80) = *param_4;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}

