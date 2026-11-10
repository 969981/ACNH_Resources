
undefined8 FUN_0016b500(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    while( true ) {
      lVar3 = *(long *)(param_1 + 8);
      uVar2 = *(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20);
      if (param_3 <= uVar2) {
        uVar2 = param_3;
      }
      if (uVar2 != 0) break;
      uVar1 = FUN_0016b58c(param_1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = FUN_00168980(*(long *)(lVar3 + 0x20),param_2,uVar2);
    param_2 = param_2 + uVar2;
    param_3 = param_3 - uVar2;
    *(undefined8 *)(lVar3 + 0x20) = uVar1;
  } while (param_3 != 0);
  return 0;
}

