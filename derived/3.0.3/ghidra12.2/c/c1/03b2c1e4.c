
void FUN_03b2c1e4(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_1[4]);
  if (param_1[3] == 0) {
    FUN_038e77e4(param_1[2],param_1[4],*param_1);
  }
  else {
    FUN_038e7afc();
    FUN_038e7c94(param_1[3],param_1[4],*param_1);
  }
  FUN_038e4d90(param_1[1],param_1[4]);
  return;
}

