
void FUN_03b771d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b78168;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  return;
}

