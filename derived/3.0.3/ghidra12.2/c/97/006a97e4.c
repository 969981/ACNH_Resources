
void FUN_006a97e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 0x90) = param_6;
  *(undefined4 *)(param_1 + 0x94) = param_7;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = param_5;
  return;
}

