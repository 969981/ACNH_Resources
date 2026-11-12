
undefined8 FUN_00695810(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_0069414c(lVar1);
  if (((uVar2 & 1) == 0) ||
     ((*(code **)(param_1 + 0x220) != (code *)0x0 &&
      (uVar2 = (**(code **)(param_1 + 0x220))(lVar1,param_2,*(undefined8 *)(param_1 + 0x228)),
      (uVar2 & 1) == 0)))) {
    return 0;
  }
  FUN_00694588(lVar1);
  return 1;
}

