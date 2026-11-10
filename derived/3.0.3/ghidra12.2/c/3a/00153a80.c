
undefined8 FUN_00153a80(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  FUN_00143300(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (param_2 != 0) {
    lVar1 = FUN_00143320(param_2);
    *(long *)(param_1 + 0x60) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}

