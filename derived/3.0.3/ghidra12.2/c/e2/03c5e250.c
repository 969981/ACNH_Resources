
undefined8 FUN_03c5e250(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 8) == param_1) {
    return 0;
  }
  lVar3 = (long)*(int *)(param_1 + 0x14);
  lVar2 = *(long *)(param_1 + 8) - lVar3;
  while ((uVar1 = (**(code **)*param_2)(param_2,lVar2), (uVar1 & 1) == 0 &&
         (uVar1 = FUN_03c5e250(lVar2 + 0x38,param_2), (uVar1 & 1) == 0))) {
    lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    if (lVar2 == param_1 - lVar3) {
      return 0;
    }
  }
  return 1;
}

