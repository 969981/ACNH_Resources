
void FUN_03ba5b6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -10;
  *puVar1 = &PTR_FUN_04b79fd8;
  *param_1 = &PTR_FUN_04b7a0d0;
  if (*(char *)(param_1 + 6) != '\0') {
    if ((long *)param_1[0x2a] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x2a] + 8))();
      param_1[0x2a] = 0;
    }
    FUN_03ba217c(puVar1);
  }
  FUN_038e1a84(param_1 + 0x2e);
  FUN_03ba1dc8(puVar1);
  return;
}

