
void FUN_02a7429c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04a9c310;
  if ((long *)param_1[0x27c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27c] + 0x20))();
    param_1[0x27c] = 0;
  }
  *param_1 = &PTR_LAB_04903708;
  FUN_016101cc(param_1 + 0x22c);
  return;
}

