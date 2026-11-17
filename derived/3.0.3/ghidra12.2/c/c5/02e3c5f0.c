
void FUN_02e3c5f0(long *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bc6c78 + 0x10);
  FUN_03ebae78(param_1 + 1);
  param_1 = param_1 + 0xb;
  puVar1 = (undefined8 *)*param_1;
  if ((puVar1 != (undefined8 *)0x0) &&
     ((long *)*puVar1 != (long *)0x0 && (long *)*puVar1 == param_1)) {
    *param_1 = 0;
    *puVar1 = 0;
  }
  return;
}

