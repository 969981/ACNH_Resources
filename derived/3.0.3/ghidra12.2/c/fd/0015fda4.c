
undefined8 FUN_0015fda4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1158) == 0) {
    lVar1 = FUN_001432f0(*(undefined8 *)(param_1 + 0xc38));
    *(long *)(param_1 + 0x1158) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}

