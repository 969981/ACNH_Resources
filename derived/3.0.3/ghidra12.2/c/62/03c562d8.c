
void FUN_03c562d8(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_03bf3e20(*(long *)(param_1 + 8),param_2);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_03bf3e20(*(long *)(param_1 + 0x10),param_2);
  return;
}

