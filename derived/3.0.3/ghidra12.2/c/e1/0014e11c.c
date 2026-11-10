
void FUN_0014e11c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    do {
      puVar1 = (undefined8 *)param_1[1];
      FUN_00143300(*param_1);
      *param_1 = 0;
      FUN_00143300(param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}

