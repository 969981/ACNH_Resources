
bool FUN_00707d14(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)(param_1 + 0x2c0) + 0x30))(param_1 + 0x2c0);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x2d8) = lVar1;
  }
  (**(code **)(*(long *)(param_1 + 0x2c0) + 0x38))(param_1 + 0x2c0);
  return *(long *)(param_1 + 0x2d8) == 0;
}

