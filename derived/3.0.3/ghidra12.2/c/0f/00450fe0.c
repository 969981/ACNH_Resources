
void FUN_00450fe0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 2);
  param_1[4] = param_2;
  return;
}

