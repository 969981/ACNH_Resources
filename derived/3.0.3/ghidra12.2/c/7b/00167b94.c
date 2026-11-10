
long FUN_00167b94(long param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    lVar2 = param_3;
    do {
      FUN_001684dc(param_1,puVar1[-1]);
      FUN_00168504(param_1 + 2,*puVar1);
      lVar2 = lVar2 + -1;
      param_1 = param_1 + 6;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
  }
  return param_3 * 6;
}

