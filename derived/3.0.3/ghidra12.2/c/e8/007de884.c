
void FUN_007de884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04916bd0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x18))();
    param_1[2] = 0;
  }
  return;
}

