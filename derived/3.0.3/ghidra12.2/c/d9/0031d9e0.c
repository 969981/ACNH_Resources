
undefined8 FUN_0031d9e0(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x20;
  lVar2 = *(long *)(param_1 + 0x790);
  *(undefined8 *)(lVar1 + 0x7b0) = param_3;
  *(long *)(lVar1 + 0x7a8) = lVar2;
  uVar3 = FUN_0031e790(lVar2,param_3,*(undefined8 *)(lVar2 + 0x1c8));
  *(undefined8 *)(lVar1 + 0x798) = uVar3;
  return 1;
}

