
undefined8 FUN_00292560(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while( true ) {
    if (lVar1 == param_1 + 8) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x20) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  *param_3 = *(undefined4 *)(lVar1 + 0x28);
  return 1;
}

