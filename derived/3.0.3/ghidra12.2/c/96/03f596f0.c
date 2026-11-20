
void FUN_03f596f0(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_04baa620;
  puVar1 = PTR_DAT_04bdf328;
  if (param_1[3] != 0) {
    (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
    param_1[4] = 0;
  }
  return;
}

