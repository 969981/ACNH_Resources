
undefined8 FUN_03c66920(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x268) == param_1 + 0x260) {
    return 0;
  }
  lVar2 = (long)*(int *)(param_1 + 0x274);
  lVar3 = *(long *)(param_1 + 0x268) - lVar2;
  while ((uVar1 = (**(code **)*param_2)(param_2,*(undefined8 *)(lVar3 + 0x20)), (uVar1 & 1) == 0 &&
         (uVar1 = FUN_03c66920(*(undefined8 *)(lVar3 + 0x20),param_2), (uVar1 & 1) == 0))) {
    lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
    if (lVar3 == (param_1 + 0x260) - lVar2) {
      return 0;
    }
  }
  return 1;
}

