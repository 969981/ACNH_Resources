
undefined8 FUN_0124dc0c(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if ((iVar1 - 0x12U < 6) &&
     (((param_2 & 1) != 0 ||
      (uVar2 = FUN_0123d890(*(undefined8 *)(param_1 + 0x10),0), (uVar2 & 1) == 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

