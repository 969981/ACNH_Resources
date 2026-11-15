
undefined8 FUN_021687b0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 - 8U < 2) {
    return 2;
  }
  if (iVar1 == 0xf) {
    return 3;
  }
  if (iVar1 == 0x13) {
    return 4;
  }
  return 0;
}

