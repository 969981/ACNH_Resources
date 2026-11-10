
void FUN_001d7898(long param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  FUN_00187810(param_1 + 0x28);
  return;
}

