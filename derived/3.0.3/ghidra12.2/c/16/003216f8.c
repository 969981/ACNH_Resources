
undefined8 FUN_003216f8(long param_1)

{
  undefined8 local_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    FUN_00321590(param_1);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  FUN_00321590(param_1,*(undefined8 *)(param_1 + 0x160));
  if (*(code **)(param_1 + 600) != (code *)0x0) {
    local_30 = *(undefined8 *)(param_1 + 0x28);
    lStack_28 = param_1;
    (**(code **)(param_1 + 600))(&local_30);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return 1;
}

