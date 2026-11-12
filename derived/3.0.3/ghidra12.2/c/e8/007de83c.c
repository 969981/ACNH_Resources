
void FUN_007de83c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04916a98;
  param_1[1] = &PTR_FUN_04916bd0;
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 0x18))();
    param_1[3] = 0;
  }
  return;
}

