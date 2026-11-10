
undefined8 FUN_0033e6b0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x198) + (long)param_3 * 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 9) == '\0')) {
    return 0xffffffff;
  }
  uVar2 = FUN_00333c10();
  return uVar2;
}

