
void FUN_038e4a88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  param_2[1] = *(undefined8 *)(param_1 + 0x40);
  *param_2 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  param_2[3] = *(undefined8 *)(param_1 + 0x50);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  param_2[5] = *(undefined8 *)(param_1 + 0x60);
  param_2[4] = uVar1;
  return;
}

