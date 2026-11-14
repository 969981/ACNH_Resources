
void FUN_01627d44(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_049b4be8;
  FUN_038e1a84(param_1 + 0xb);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

