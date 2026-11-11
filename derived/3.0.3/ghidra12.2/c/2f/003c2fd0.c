
void FUN_003c2fd0(long param_1,byte param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x71) = param_2;
  if ((param_2 & 1) != 0) {
    uVar1 = *param_3;
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x72) = uVar1;
  }
  return;
}

