
void FUN_015816a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_049abce0;
  FUN_03929ec0(param_1 + 8);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

