
long FUN_00367720(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    if (lVar2 == param_1) {
      return 0;
    }
    uVar1 = FUN_00367790(*(undefined8 *)(lVar2 + 0x20),param_2);
  } while ((uVar1 & 1) == 0);
  return lVar2 + -8;
}

