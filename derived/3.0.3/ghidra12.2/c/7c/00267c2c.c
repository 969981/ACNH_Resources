
bool FUN_00267c2c(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x70) == 0) {
    *(undefined8 *)(param_1 + 0x70) = param_2;
    FUN_00220f78(param_2);
    return true;
  }
  return *(long *)(param_1 + 0x70) == 0;
}

