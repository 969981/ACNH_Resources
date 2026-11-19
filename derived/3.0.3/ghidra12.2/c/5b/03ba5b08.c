
void FUN_03ba5b08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b79fd8;
  param_1[10] = &PTR_FUN_04b7a0d0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((long *)param_1[0x34] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x34] + 8))();
      param_1[0x34] = 0;
    }
    FUN_03ba217c(param_1);
  }
  FUN_038e1a84(param_1 + 0x38);
  FUN_03ba1dc8(param_1);
  return;
}

