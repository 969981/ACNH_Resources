
void FUN_01655ef4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_049b96b0;
  FUN_03ad2990(param_1 + 10);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

