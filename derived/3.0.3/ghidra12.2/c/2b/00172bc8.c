
undefined8 FUN_00172bc8(long param_1,long param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == param_2) break;
    param_1 = *(long *)(param_1 + 0x70);
  }
  return 1;
}

