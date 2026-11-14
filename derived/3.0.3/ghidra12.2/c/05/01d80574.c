
void FUN_01d80574(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_04a5a6a0;
  puVar1 = PTR_DAT_04bc1060;
  FUN_01c82cb0(*(undefined8 *)PTR_DAT_04bc1060,param_1);
  *param_1 = &PTR_LAB_04a43d48;
  if (*(long *)puVar1 == 0) {
    return;
  }
  FUN_01c82cb0(*(long *)puVar1,param_1);
  return;
}

