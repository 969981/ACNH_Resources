
undefined8 FUN_03c91ed0(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  lVar1 = (**(code **)(*param_1 + 0x28))();
  if ((lVar4 == lVar1) || (uVar2 = (**(code **)*param_2)(param_2,lVar1), (uVar2 & 1) == 0)) {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    for (lVar4 = *(long *)(lVar1 + 0x28); lVar4 != lVar1 + 0x20; lVar4 = *(long *)(lVar4 + 8)) {
      if ((*(long *)(*(long *)(lVar4 + 0xc1) + 8) == param_3) &&
         (uVar2 = FUN_03c91ed0(*(long *)(lVar4 + 0xc1),param_2,param_3), (uVar2 & 1) != 0))
      goto LAB_03c91f6c;
    }
    uVar3 = 0;
  }
  else {
LAB_03c91f6c:
    uVar3 = 1;
  }
  return uVar3;
}

