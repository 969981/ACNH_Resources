
long FUN_0037e6c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_003606c0(param_1 + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == param_1 + 0x20) {
      return 0;
    }
    do {
      lVar2 = (**(code **)(*(long *)(lVar3 + -8) + 0xc0))((long *)(lVar3 + -8),param_2);
      if (lVar2 != 0) {
        return lVar2;
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_1 + 0x20);
    param_1 = 0;
  }
  return param_1;
}

