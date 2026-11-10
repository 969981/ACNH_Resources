
void FUN_00173344(undefined8 *param_1)

{
  if (param_1[2] == 0) {
    return;
  }
  *(undefined8 *)*param_1 = ((undefined8 *)*param_1)[param_1[2] + -1];
  **(undefined8 **)*param_1 = 0;
  param_1[2] = param_1[2] + -1;
  FUN_00173380(param_1,0);
  return;
}

