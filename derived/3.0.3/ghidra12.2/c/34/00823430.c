
undefined8 FUN_00823430(long param_1)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return 1;
}

