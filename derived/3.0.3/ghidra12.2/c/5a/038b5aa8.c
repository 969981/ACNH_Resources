
void FUN_038b5aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b63440;
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
    param_1[0x10] = 0;
  }
  FUN_038b3c54(param_1);
  return;
}

