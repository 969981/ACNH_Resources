
void FUN_02e3d940(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_04ad4c40;
  FUN_03ebae78(param_1 + 1);
  param_1 = param_1 + 0xb;
  puVar1 = (undefined8 *)*param_1;
  if ((puVar1 != (undefined8 *)0x0) &&
     ((undefined8 *)*puVar1 != (undefined8 *)0x0 && (undefined8 *)*puVar1 == param_1)) {
    *param_1 = 0;
    *puVar1 = 0;
  }
  return;
}

