
void FUN_004d11a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_00438440(param_1 + 2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  uVar1 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x60);
  param_1[5] = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x68);
  param_1[4] = uVar1;
  return;
}

