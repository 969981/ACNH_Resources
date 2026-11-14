
undefined8 FUN_01c02324(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_01c0967c();
  if ((param_2 & 1) == 0) {
    if ((iVar1 - 0xa4U < 0x3b) &&
       ((1L << ((ulong)(iVar1 - 0xa4U) & 0x3f) & 0x7c000000000000dU) != 0)) {
      return 0;
    }
    if (iVar1 == 0x10e) {
      return 0;
    }
  }
  else {
    if ((iVar1 - 0xdaU < 0x35) && ((1L << ((ulong)(iVar1 - 0xdaU) & 0x3f) & 0x1000000000001fU) != 0)
       ) {
      return 0;
    }
    if (iVar1 - 0xa6U < 2) {
      return 0;
    }
  }
  return 1;
}

