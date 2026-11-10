
void FUN_0018db4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  if (*(int *)(param_2 + 1) == 4) {
    param_2 = (undefined8 *)*param_2;
    puVar1 = &DAT_04a426a8;
  }
  else {
    param_2 = &DAT_0407ebb1;
    puVar1 = PTR_DAT_04bc0ec8;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  *param_1 = puVar1 + 0x10;
  FUN_0018b070(param_1,param_2,0xffffffffffffffff);
  return;
}

